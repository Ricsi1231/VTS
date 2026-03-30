function temp2 = FindChildren(A,B,temp1)
% This function finds the children of a specified node.
    x=find(B==temp1);
    y=find(A(x,:));
    temp2=B(y);
end