#include<iostream>
#include<string>
#include<vector>
using namespace std;

int bs(vector<int>v,int s,int e,int x)
{
    int mid=s+(e-s)/2;
    while(s<=e)
    {
        if(v[mid]==x)
        {
            return mid;
        }
        else if(v[mid]<x)
        {
            s=mid+1;
        }
        else{
            e=mid-1;
        }
       mid=s+(e-s)/2;
    }
    return -1;
}

int exponential(vector<int>v,int k,int n)
{
    if(v[0]==k)
    {
        return 0;
    }

int i=1;
while(i<n && v[i]<=k)
{
    i=i*2;
}

return bs(v,i/2,min(i,n-1),k);


}/*

bool ispossible(vector<int>v1,int n ,int m ,int mid)
{
    int pagesum=0;
    int c=1;
    for(int i=0;i<n;i++)
    {
        if()
    }
}



int findpage(vector<int>v1,int m,int n)
{
    if(m>n)
    {
        return 0;
    }
int s=0;
int count=0;
for(int i=0;i<v1.size();i++)
{
    count=count+v1[i];
}
cout<<count;
int j=count;
int ans=-1;
while(s<=j)
{
    int mid=(s+j)/2;
    if(ispossible(v1,m,n,mid))
    {
        ans=mid;
        j=mid-1;
    }
    else{
        s=mid+1;
    }
}
cout<<ans<<" ";
}
*/


bool ispossible(vector<int>v1,int k ,int n,int mid)
{
    int c=1;
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(v1[i]>mid)
        {
            return false;
        }
        if(count+v1[i]>mid)
        {
            c++;
            count=v1[i];
            if(c>k)
            {
                return false;
            }
        }
        else{
            count=count+v1[i];
        }
    }
    return true;
    

}

int finding(vector<int>v1,int k,int n)
{
    if(k>n)
    {
        return -1;
    }
    int ans=-1;
int s=0;
int sum=0;
for(int i=0;i<n;i++)
{
    sum=sum+v1[i];
}
int e=sum;
while(s<e)
{
    int mid=(s+e)/2;
    if(ispossible(v1,k,n,mid))
    {
        ans=mid;
        e=mid-1;
    }
    else{
        s=mid+1;
    }
}
return ans;

}


int main()







{

/*
    //exponential search
    vector<int>v{1,3,4,5,6,7,8,9,41,55,66,99,333,4555};
    int k=41;
    int size=v.size();
    int ans=exponential(v,size,k);
    cout<<"ans:"<<ans<<endl;*/

/*
vector<int>v1{12,34,67,90};
int m=2;
int n =4;
findpage(v1,m,n);*/
/*
string  st="ab-cd";
//cout<<st.length();
int j=st.length()-1;
int i=0;
while(i<j)
{
    if(isalpha(st[i] && isalpha(st[j])))
    {
        
        

        swap(st[i],st[j]);

        i++;
        j--;
    }
    else if(!isalpha(st[i]))
    {
        i++;
    }
    else{
        j--;
    }
}

cout<<st<<"";*/


//painter problem
vector<int>v1{10,20,30,40};
int k=2;
int n=4;
int ans =finding(v1,k,n);
cout<<ans<<endl;

return 0;

}