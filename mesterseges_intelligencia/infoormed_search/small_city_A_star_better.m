clear
clc

city_coord=[60 50; 40 30; 35 15; 80 50; 10 10];
if_path=[0 1 0 0 0; 1 0 1 0 1; 0 1 0 1 1; 0 0 1 0 0; 0 1 1 0 0];
% cities={'1' '2' '3' '4' '5'};
s=size(city_coord,1);

distances=zeros(s);
for i=1:s
    for j=1:s
        distances(i,j)=sqrt((city_coord(i,1)-city_coord(j,1))^2+ ...
            (city_coord(i,2)-city_coord(j,2))^2);
    end
end
dist_matr=round(distances);
% dist_matr=round(10*distances);
% from_city=4;
% to_city=2;
from_city=input('Start city (1-5): ');
to_city=input('End city (1-5): ');

if from_city == to_city
    disp(' ')
    disp('Start city = Destination city, no need to travel.')
    disp(' ')
    return
end

fringe = from_city;
dist_so_far = 0;
travel_path=[];

heur = dist_matr(from_city, to_city);
to_del_from_fringe = from_city;
% my_matrix = [fringe; dist_so_far; heur];
y=[];
while 1 % to_del_from_fringe ~= to_city
    [u v] = min(heur);
    temp1 = fringe(v);
    
    temp2 = dist_so_far(v);
    temp3 = heur(v);
    
    travel_path=[travel_path temp1];
    if temp1 == to_city
        total_distance = dist_so_far(v);
        break;
    end
    heur(v)=[];
    fringe(v)=[];
    dist_so_far(v) = [];
    [a b] = find(if_path(temp1,:));
    fringe = [b fringe];
    
    dist_so_far = [zeros(1,length(b)) dist_so_far];
    heur = [zeros(1,length(b)) heur];
    for i=1:length(b)
        dist_so_far(i) = temp2 + dist_so_far(i) + ... 
            dist_matr(temp1,b(i));
       
        heur(i) = dist_so_far(i) + dist_matr(fringe(i),to_city);
    end     
   
%     to_del_from_fringe = temp1;
end
total_distance
travel_path

