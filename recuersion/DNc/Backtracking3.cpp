#include<iostream>
#include<string>
#include<vector>

using namespace std;

bool issafe(int i,int j,int row,int col,int arr[][3],vector<vector<bool>>&visited)
{
  if( ((i>=0 && i<row) && (j>=0 && j<col)) && (arr[i][j]==1) && (visited[i][j]==false))
  {
    return true;
  }
  else{
    return false;
  }
}

void solvemaze(int arr[3][3],int row,int col,int srcx,int srcy,vector<vector<bool>>& visited,vector<string>& path,string output)
{

    //base case 
if(srcx==row-1 && srcy==col-1)
{
    //answer found
    path.push_back(output);
    return;
}

//Down ->i+1,j

if(issafe(srcx+1,srcy,row,col,arr,visited))
{
    visited[srcx+1][srcy]=true;
    solvemaze(arr,row,col,srcx+1,srcy,visited,path,output + 'D');
    visited[srcx+1][srcy]=false;
}

//left->i,j-1

if(issafe(srcx,srcy-1,row,col,arr,visited))
{
    visited[srcx][srcy-1]=true;
    solvemaze(arr,row,col,srcx,srcy-1,visited,path,output + 'l');
    visited[srcx][srcy-1]=false;
}

//right

if(issafe(srcx,srcy+1,row,col,arr,visited))
{
    visited[srcx][srcy+1]=true;
    solvemaze(arr,row,col,srcx,srcy+1,visited,path,output + 'R');
    visited[srcx][srcy+1]=false;
}


// up

if(issafe(srcx-1,srcy,row,col,arr,visited))
{
    visited[srcx-1][srcy]=true;
    solvemaze(arr,row,col,srcx-1,srcy,visited,path,output + 'U');
    visited[srcx-1][srcy]=false;
}




}


int main()
{
    //rat in a maze

int maze[3][3]={{1,1,1},{1,1,0},{1,1,1}};
int row=3;
int col=3;

if(maze[0][0]==0)
{
    cout<<"output not exit"<<endl;
    return 0;
}



vector<vector<bool>>visited(row,vector<bool>(col,false));
//src ki valu ko true ko mark kar de

visited[0][0]=true;
vector<string>path;
string output="";

solvemaze(maze,row,col,0,0,visited,path,output);
for(auto i:path)
{
    cout<<i<<" ";
}

if(path.size()==0)
{
    cout<<"No path";
    return 0;
}

          
}