#include<iostream>
#include<vector>
#include<string>
using namespace std;




void   printsolution(vector<vector<int>>&board,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<board[i][j]<<" ";

        }
        cout<<endl;
    }
    cout<<endl;
}


bool issafe(int row,int col,vector<vector<int>>&board,int n)
{
//check karna chata h ki current sell pr rakh sakte hu

int i=row;
int j=col;

//check row
while(j>=0)
{
    if(board[i][j]==1)
    {
        return false;
    }
    j--;
}

//check upperleft diagnoal
i=row;
j=col;

while(i>=0 && j>=0)
{
    if(board[i][j]==1)
    {
        return false;
    }
    i--;
    j--;
}

//check bottom left diagnoal
i=row;
j=col;
while(i<n && j>=0)
{
    if(board[i][j]==1)
    {
        return false;

    }
    i++;
    j--;
}
//postion safe h truereturn kar do
return true;
}



 void solve(vector<vector<int>> board ,int col,int n)
 {
    // base case
    if(col>=n)
    {
        printsolution(board,n);
        return;
    }


// 1 casesolve karna h bakki recursion sabhal lega
for(int row=0;row<n;row++)
{
    if(issafe(row,col,board,n))
    {
        // rakh do
        board[row][col]=1;
        // recursion call
        solve(board,col+1,n);
        // backtracking

        board[row][col]=0;
    }
}


 }


int main()
{
    int n=4;
    vector<vector<int>> board(n,vector<int>(n,0));
    int col=0;
    solve(board,col,n);
}