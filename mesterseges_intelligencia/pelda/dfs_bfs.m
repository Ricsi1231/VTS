clear
clc

A=zeros(13);
A(1,2)=1; A(1,3)=1; A(2,4)=1; A(2,5)=1; A(5,6)=1; A(5,7)=1; 
A(7,8)=1; A(7,9)=1; A(8,10)=1; A(8,11)=1; A(10,12)=1; A(10,13)=1;

B=['a','b','c','d','e','f','g','h','i','j','k','l','m'];

%bg2 = biograph(A,B);
%5view(bg2)

disp(' ')
disp('Your start node is a.')
disp(' ')
% q1='g';
q1 = input('Which is your end node? ');

##r=0;
##for i=1:length(B)
##    if B(i)==q1
##        r=r+1;
##    end
##end
##disp(' ')
##if r==0
##    disp('Non existing node.')
##    disp(' ')
##    return
##end
presek = intersect(B,q1);
if (size(presek,2)==0)
    disp('Non existing node.')
    disp(' ')
    return 
 endif 
% q2='b';
q2 = input('Do you want BFS (b) or DFS (d)? ');

if q2=='b'
    Solution = BreadthFirstSearch(A,B,q1)
elseif q2=='d'
    Solution = DepthFirstSearch(A,B,q1)
else
    disp(' ')
    disp('You didn''t enter b or d.');
    disp(' ')
end
