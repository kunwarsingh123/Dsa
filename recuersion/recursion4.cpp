#include<iostream>
#include<vector>
#include<algorithm>
#include <climits>
using namespace std;
int findmin(vector<int>& v,int target)
{
    if(target==0)
        {
              return 0;
        }
        //mini update
        if(target<0)
        {
            return INT_MAX;
        }

        //ak case solve 1
        int mini=INT_MAX;
        for(int i=0;i<v.size();i++)
        {
           int ans= findmin(v,target-v[i]);
           if(ans!=INT_MAX)
           mini =min(mini,ans+1);
        }

        return mini;
}

int solve(int n,int x,int y,int z){
    if(n==0)
    {
        return 0;

    }
if(n<0)
{
    return INT_MIN;
}

int ans1=solve(n-x,x,y,z)+1;
int ans2=solve(n-y,x,y,z)+1;
int ans3=solve(n-z,x,y,z)+1;

int ans=max(ans1,max(ans2,ans3));


return ans;

}


void findmax(vector<int>v,int i,int sum,int& maxi)
{

if(i>=v.size())
{
    maxi=max(sum,maxi);
    return ;

}

//include
findmax(v,i+2,sum+v[i],maxi);


//exclude
findmax(v,i+1,sum,maxi);
}



int main()
{
/*
    //coin change problem
     vector<int>v1{1,2,3};
     int target=7;
  int ans=   findmin(v1,target);
  cout<<ans<<endl;*/


/*
//cut into segment
int n=7;
int x=5,y=2,z=2;
//maximum number of segment
int anss=solve(n,x,y,z);
if(anss<0)
anss=0;

cout<<anss<<endl;
*/


// maximum sum of non adjacent element --jinka sum karne pr max sum aayega

vector<int>v1{2,4,1,9};
int sum=0;
int i=0;
int maxi=INT_MIN;
findmax(v1,i,sum,maxi);
cout<<maxi<<endl;

}