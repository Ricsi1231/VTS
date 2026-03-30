function bfsList = BreadthFirstSearch (A,B,q1)
% This function searches the tree using DFS.
    OpenList=['g'];
    ClosedList=[];
    NodeOut='g';
    while NodeOut ~= q1
        NodeOut=OpenList(1);
        OpenList(1)=[];
        temp2=FindChildren(A,B,NodeOut);
        OpenList=[OpenList temp2];
        ClosedList=[ClosedList NodeOut];
    end
    bfsList=ClosedList;
end