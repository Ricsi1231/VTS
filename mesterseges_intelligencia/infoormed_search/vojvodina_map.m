% This program finds a path between two cities on map of Vojvodina.
% The search is greedy.
% The user specifies the start city and the destination city.
% The limitations of greedy search can be seen if we choose the start city 
% 4 (Sombor) and destination city 14 (Pancevo). In that case the path will
% be 11 13 12 10. The shortest path would be through 8, 9 and 10.
% If we change the coordinate of city 13 from (6.8 19) to (6.8 20) the path
% will never be found. The algorithm will always go between cities 13 and
% 12.

% Each city has an identifier.

%     1 Subotica
%     2 Kanjiza
%     3 Senta
%     4 Sombor
%     5 Backa Topola
%     6 Ada
%     7 Kikinda
%     8 Vrbas
%     9 Becej
%     10 Zrenjanin
%     11 Backa Palanka
%     12 Novi Sad
%     13 Ruma
%     14 Pancevo
%     15 Sremska Mitrovica
%     16 Vrsac
clear; clc; clf

% dist_matr=[0 32 45 65 36 55 78 66 68 110 109 107 137 176 141; ...
%     32 0 16 89 47 33 46 70 55 90 116 104 133 156 140; ...
%     45 16 0 88 42 16 35 58 37 74 105 87 118 142 126; ...
%     65 89 88 0 47 90 119 54 84 123 69 91 114 178 109; ...
%     36 47 42 47 0 43 72 30 44 86 73 73 103 147 105; ...
%     55 33 16 90 43 0 30 51 24 57 96 75 102 125 113; ...
%     78 46 35 119 72 30 0 79 46 57 120 94 118 121 131; ...
%     66 70 58 54 30 51 79 0 35 71 47 45 71 125 75; ...
%     68 55 37 84 44 24 46 35 0 43 74 51 80 108 89; ...
%     110 90 74 123 86 57 57 71 43 0 91 55 69 68 86; ...
%     109 116 105 69 73 96 120 47 74 91 0 40 49 121 42; ...
%     107 104 87 91 73 75 94 45 51 55 40 0 29 87 40; ...
%     137 133 118 114 103 102 118 71 80 69 49 29 0 75 19; ...
%     176 156 142 178 147 125 121 125 108 68 121 87 75 0 93; ...
%     141 140 126 109 105 113 131 75 89 86 42 40 19 93 0];

if_path_matr=[0 0 1 1 1 0 0 0 0 0 0 0 0 0 0 0; 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0; ...
    1 1 0 0 1 1 0 0 0 0 0 0 0 0 0 0; 1 0 0 0 1 0 0 1 0 0 1 0 0 0 0 0; ...
    1 0 1 1 0 0 0 1 1 0 0 0 0 0 0 0; 0 0 1 0 0 0 1 0 1 0 0 0 0 0 0 0; ...
    0 0 0 0 0 1 0 0 1 1 0 0 0 0 0 0; 0 0 0 1 1 0 0 0 1 0 1 1 0 0 0 0; ...
    0 0 0 0 1 1 1 1 0 1 0 1 0 0 0 0; 0 0 0 0 0 0 1 0 1 0 0 1 0 1 0 1; ...
    0 0 0 1 0 0 0 1 0 0 0 1 1 0 1 0; 0 0 0 0 0 0 0 1 1 1 1 0 1 0 0 0; ...
    0 0 0 0 0 0 0 0 0 0 1 1 0 0 1 0; 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 1; ...
    0 0 0 0 0 0 0 0 0 0 1 0 1 0 0 0; 0 0 0 0 0 0 0 0 0 1 0 0 0 1 0 0];

cities={'Subotica' 'Kanjiza' 'Senta' 'Sombor' 'Backa Topola' 'Ada' 'Kikinda' ...
    'Vrbas' 'Becej' 'Zrenjanin' 'Backa Palanka' 'Novi Sad' 'Ruma' ...
    'Pancevo' 'Sremska Mitrovica' 'Vrsac'};
% x=1:0.1:40; y=1:0.1:40;
% x1=1.5; y1=18; x2=2; y2=24; x3=6.7; y3=23.8; x4=11.1; y4=4.5; x5=9.8; y5=14.9;
% x6=10.2; y6=25.1; x7=9.5; y7=32.2; x8=17.3; y8=15; x9=15.4; y9=22.8; x10=22.4; y10=30.8;
% x11=26.2 ; y11=10 ; x12=25.2 ; y12=19.5 ; x13=33.2 ; y13=19 ; x14=37.2 ; y14=34. ; x15=36 ; y15=14.1;
% 
% plot(x1,y1,x2,y2,x3,y3,x4,y4,x5,y5,'bs')
city_coord=[38.5 18; 38 24; 33.3 23.8; 28.9 4.5; 30.2 14.9; 29.8 25.1; 30.5 32.2; 22.7 15; 24.6 22.8; ...
    17.6 30.8; 13.8 10; 14.8 19.5; 6.8 20; 2.8 34; 4 14.1; 10 49];

s=size(city_coord,1);

distances=zeros(s);
for i=1:s
    for j=1:s
        distances(i,j)=sqrt((city_coord(i,1)-city_coord(j,1))^2+(city_coord(i,2)-city_coord(j,2))^2);
    end
end
dist_matr=4.5*distances;
for i=1:s
%     [temp1 temp2]=city_coord(i,:);
    temp1=city_coord(i,1);
    temp2=city_coord(i,2);
    plot(temp2,temp1,'bs','MarkerFaceColor','b')
    axis equal
    hold on
    axis([0 70 0 55])
%     axis equal
end


for i=1:s
    koord_y1=city_coord(i,1);
    koord_x1=city_coord(i,2);
    temp1=find(if_path_matr(i,:));
%     temp2=find(temp1);
    for j=1:numel(temp1)
        temp3=temp1(j);
        koord_y2=city_coord(temp3,1);
        koord_x2=city_coord(temp3,2);
        koord_1=[koord_x1 koord_x2];
        koord_2=[koord_y1 koord_y2];
        line(koord_1,koord_2)
    end
end
text(15.5,39,'\bf 1'); text(22,39,'\bf 2'); text(24.5,33.3,'\bf 3');
text(2.2,29,'\bf 4'); text(13.5,32,'\bf 5'); text(23,30,'\bf 6');
text(33,30.5,'\bf 7'); text(12,22,'\bf 8'); text(22.5,23,'\bf 9');
text(31.5,17.5,'\bf 10'); text(6.8,13.5,'\bf 11'); text(20,13.5,'\bf 12');
text(20,7,'\bf 13'); text(30,3,'\bf 14'); text(11,3,'\bf 15'); text(49,10,'\bf 16');

legend('1: SU','2: KA','3: SE','4: SO','5: BT','6: AD','7: KI','8: VR',...
    '9: BE','10: ZR','11: BP','12: NS','13: RU','14: PA','15: SM','16:VS')
from_town=input('Start town (1-16): ');
to_town=input('End town (1-16): ');

if from_town == to_town
    disp(' ')
    disp('Start city = Destination city, no need to travel.')
    disp(' ')
    return
end

current_distance = dist_matr(from_town,to_town);
current_city = from_town;
travel_path=[current_city];
travel_path_cities=[cities(current_city)];
while current_distance ~= 0
    x=find(if_path_matr(current_city,:));
    y=[];
    for i=1:numel(x)
        p=dist_matr(x(i),to_town);
        y=[y p];
    end
    [a b]=min(y);
    current_city=x(b);
    current_distance=dist_matr(current_city,to_town);
    travel_path=[travel_path,current_city];
    travel_path_cities=[travel_path_cities, cities(current_city)];
end

travel_path
