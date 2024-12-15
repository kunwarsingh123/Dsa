#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void binarys(vector<int>v1,int k)
{   cout<<"HI"<<endl;
    int s=0;
    int e=v1.size()-1;
    int mid=(s+e)/2;
    while(s<=e)
    {
        if(v1[mid]==k)
        {
            cout<<"found";
            return;
        }
else if(v1[mid]<k)
{
    s=mid+1;
}
else{
    e=mid-1;
}
 mid=(s+e)/2;

    }

    cout<<"not found"<<endl;
}

int firstoccurence(vector<int>v1,int k)
{
    int s=0;
    int e=v1.size()-1;
    int mid=(s+e)/2;
    int ans=-1;
    while(s<=e)
    {
        if(v1[mid]==k)
        {
           ans=mid;
           s=mid+1;
            }
            
        
        else if(v1[mid]<k){
                s=mid+1;

            }
            else{
                e=mid-1;
            }
            mid=(s+e)/2;
    }
    return ans;}


int find(vector<int>v1)
{
int s=0;
int e=v1.size()-1;
int mid=(s+e)/2;
int ans=-1;
cout<<mid<<endl;
while(s<=e)
{
    if(v1[mid]==mid+1)
    {
       
        s=mid+1;
    }
    else {
         ans=mid+1;
        e=mid-1;
    }
    mid=(s+e)/2;
}
return ans;
}

int peak(vector<int>v1)
{
    int s=0;
    int e=v1.size()-1;
    int mid=(s+e)/2;
    int ans=-1;
    while(s<=e)
    {
      if(v1[mid]<v1[mid+1])
      {
        s=mid+1;
      }
      else{
        e=mid-1;
      }
      else{
        e=mid;
      }
mid=s+(e-s)/2;
    }
    return s;
}


int squareroot(int ans)
{
    int anss;
     int s=0;
     int e=ans;
     int mid =s+(e-s)/2;
     while(s<=e)
     {
        if(mid*mid==ans)
        {
            cout<<mid<<endl;
            return mid;


        }
        else if(mid*mid<ans)
        {
             anss=mid;
            s=mid+1;
           
        }
        else{
          e=mid-1;
        }
        mid=(s+e)/2;
     }

     cout<<"anss:"<<anss<<endl;
return anss;
}

int main()
{
/*
  vector<int>v1{5,12,14,1133,5555};
  binarys(v1,5555);*/


//stl binary number
/*
  vector<int>v2{55,66,777,8888,9999};

if(binary_search(v2.begin(),v2.end(),66))
{
    cout<<"found element"<<endl;
}
else{
    cout<<"not found"<<endl;
}
*/

//find first occurence of element
/*
vector<int>v1{1,3,4,4,4,4,4,6,7,9};

int k=4;
int ans=firstoccurence(v1,k);
cout<<ans<<endl;*/

/*
vector<int>missing{1,2,3,4,5,6,8};
 int ans=find(missing);
 cout<<ans<<endl;*/

 //peak element in a mountain aarray
/*
 vector<int>v1{0,1,2,10,11,12,14};
 int ans=peak(v1);
 cout<<ans<<endl;*/

/*
//square root element

int ans =16;
 int an = squareroot(ans);
int precision;
cout<<"precision:";
cin>>precision;

double step=0.1;
double finalans=an;

for(int i=0;i<precision;i++)
{
    for(double j=finalans;j*j<=ans;j=j+step)
    {
        finalans=j;
    }
    step=step/10;
}
cout<<"finalstep:"<<finalans<<endl;
*/

vector<vector<int>>v1{{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
int target=255;
int m=v1.size()-1;
cout<<m<<endl;
int n=v1[0].size();
cout<<n<<endl;
int s=0;
int e=m*n-1;
int mid=s+(e-s)/2;
while(s<=e)
{
    int rowindex=mid/n;
    int colindex=mid%n;
    if(v1[rowindex][colindex]==target)
    {
        cout<<"found"<<endl;
        break;
    }
    else if(v1[rowindex][colindex]<target)
    {
        s=mid+1;
    }
    else{
        e=mid-1;
    }
    mid=s+(e-s)/2;

    
}
cout<<"not found"<<endl;

 


}