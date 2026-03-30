function dfsList = DepthFirstSearch (A,B,q1)
% This function searches the tree using DFS.
    OpenList=['a'];
    ClosedList=[];
    NodeOut='a';
    while NodeOut ~= q1
        NodeOut=OpenList(1);
        OpenList(1)=[];
        temp2=FindChildren(A,B,NodeOut);
        OpenList=[temp2 OpenList];
        ClosedList=[ClosedList NodeOut];
    end
    dfsList=ClosedList;
end