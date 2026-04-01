clear
clc

city_coord=[60 50; 40 30; 35 15; 80 50; 10 10];
if_path=[0 1 0 0 0; 1 0 1 0 1; 0 1 0 1 1; 0 0 1 0 0; 0 1 1 0 0];
cities={'1' '2' '3' '4' '5'};
s=size(city_coord,1);

distances=zeros(s);
for i=1:s
    for j=1:s
        distances(i,j)=sqrt((city_coord(i,1)-city_coord(j,1))^2+(city_coord(i,2)-city_coord(j,2))^2);
    end
end
dist_matr=round(distances);
% dist_matr=round(10*distances);

from_city=input('Start town (1-5): ');
to_city=input('End town (1-5): ');

if from_city == to_city
    disp(' ')
    disp('Start city = Destination city, no need to travel.')
    disp(' ')
    return
end

current_distance = dist_matr(from_city,to_city);
current_city = from_city;
travel_path=[current_city];
% travel_path_cities=[cities(current_city)];
step_counter=0;
% dist_so_far=0;
while (current_distance ~= 0 && step_counter~=8)
    step_counter=step_counter+1;
    x=find(if_path(current_city,:));
    y=[];
    for i=1:numel(x)
        p=dist_matr(x(i),to_city);
        y=[y p];
    end
    [a b]=min(y);
%     dist_so_far=dist_so_far+dist_matr(current_city,x);
    current_city=x(b);
    current_distance=dist_matr(current_city,to_city);
    travel_path=[travel_path,current_city];
%     travel_path_cities=[travel_path_cities, cities(current_city)];
end
travel_path
if step_counter==8
    disp(' ')
    disp('I am too greedy to find a solution.')
    disp(' ')    
end