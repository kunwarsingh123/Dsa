#include<iostream>
#include<vector>
using namespace std;


int searching(vector<int>v1,int k)
{
    int s=0;
    int e=v1.size()-1;
    int mid=s+(e-s)/2;
    while(s<e)
    {
        if(v1[mid]==k)
        {
            return mid;
        }
        else if(v1[mid+1]==k)
        {
            return mid+1;

       }
       else if(v1[mid-1]==k)
       {
        return mid-1;
       }

       else if(v1[mid]<k)
       {
        s=mid+2;


       }
       else{
        e=mid-2;
       }
       mid=s+(e-s)/2;

    }

      return -1;
}

int divide(int d,int k)
{
    int s=0;
    int e=d-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e)

    {   if(k==1 && d/k)
    {
        return d;
    }


        if(d/k==mid)
        {
            return mid;
        }
        else if(d/k>mid)
        {
            
            s=mid+1;
        }
        else{

            ans=mid;
            e=mid-1;
        }
        mid=s+(e-s)/2;

    }
    return ans;
};

int main()
{  //nearly sorted in 2d array
   /* vector<int>v1{10,3,40,20,50,80,70};
    int k=40;
   int ans= searching(v1,k);
   cout<<ans<<endl;*/

/*
int d=22;
int dividend=7;
int ans= divide(0,5);

cout<<ans<<endl;*/


// odd occurence find element
/*vector<int>v1{1,1,2,2,3,3,4,4,3,3,600,600,4,4};
int s=0;
int e=v1.size()-1;
int mid=s+(e-s)/2;
while(s<=e)
{
    if(s==e)
    {
        cout<<s<<endl;
        break;
    }
    
    if(mid%2==0)
    {
        if(v1[mid]==v1[mid+1])
        s=mid+2;

        else{
            e=mid;
        }
    }
    else{
        if(v1[mid]==v1[mid-1])
        {
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    mid=s+(e-s)/2;
   
}

*/

vector<int>v1{2,4,6,8};
int s=0;
int e=v1.size()-1;
int mid=s+(e-s)/2;
while(s<=e)
{
    if(s==e)
    {
        cout<<s<<endl;
        break;
    }
    if( mid<=e && v1[mid]>v1[mid+1])
    {

        cout<<"mid:"<<mid<<" ";
       // return mid;
       break;
    }
    else if( mid>=e && v1[mid]<v1[mid-1])
    {
         cout<<"mid-1:"<<mid-1<<" ";
       // return mid-1;
       break;
    }
    if(v1[s]>v1[mid])
    {
        e=mid-1;
    }
    else{
        s=mid+1;
    }
    mid=s+(e-s)/2;
}


}

