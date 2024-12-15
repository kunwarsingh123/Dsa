#include<iostream>
#include<vector>
using namespace std;

int main()
{

    //unique elementa
 /**vector<int>v{1,1,2,3,3};
   int ans=0;
   for(int i=0;i<v.size();i++)
   {
    ans=ans^v[i];
   
   }
cout<<ans<<endl;*/

/*

vector<int>v{1,2,3,46,4655,589,522};
vector<int>v1{55,96,45,212,2569};

vector<int>v2;
for(int i=0;i<v.size();i++)
{
    for(int j=0;j<v2.size();j++)
    {
        if(v[i]==v2[j])
        {
            v2[j]=-1;
            
        }
    }
}
for(int i=0;i<v.size();i++)
{
      

    v2.push_back(v[i]);
}

for(int i=0;i<v1.size();i++)
{  if(v[2]>0)
{
   v2.push_back(v1[i]);}
}

for(int i=0;i<v2.size();i++)
{
    cout<<v2[i]<<" ";
}

*/
/*
//intersections

vector<int>v1{1,2,2,3,4,885,6};
vector<int>v2{1,2,3,4,5,6,885};
vector<int>v3;
for(int i=0;i<v1.size();i++)
{
    for(int j=0;j<v2.size();j++)
    {
        if(v1[i]==v2[j])
        {
            v2[j]=-1;
            v3.push_back(v1[i]);
        }
    }
}

for(int i=0;i<v3.size();i++)
{
    cout<<v3[i]<<" ";
}*/


// add two 
/*
vector<int>v1{1,2,3,4,5};
vector<int>v2{5,8,7,9,4};

int sum=9;
for(int i=0;i<v1.size();i++)
{
    for(int j=0;j<v2.size();j++)
    {
           if(sum==v1[i]+v2[j])
           {
            cout<<"{"<<v1[i]<<","<<v2[j]<<"}"<<" ";
           }
    }
}*/


/*
int sum=80;
vector<int>arr{10,20,30,40};
for(int i=0;i<arr.size();i++)
{
    for(int j=i+1;j<arr.size();j++)
    {
        for(int k=j+1;k<arr.size();k++)
        {
            if(sum==arr[i]+arr[j]+arr[k])
            {

  cout<<"{"<<arr[i]<<","<<arr[j]<<","<<arr[k]<<"}"<<" ";
            }
        }
    }
}*/



//sort zero and one
/*
vector<int>v{1,1,0,1,0,1,1,0,1,0,1,1,0,1,1};
int i=0;
int j=v.size()-1;
int start=0;
while(i<=j)
{
   if(v[i]==0)
   {
    swap(v[start],v[i]);
    start++;
  i++;
   }
   else 
   {
    swap(v[i],v[j]);
    j--;
   }

}
for(int i=0;i<v.size();i++)
{
    cout<<v[i]<<" ";
}
*/

//array sum
/*
    vector<int> v1{9, 1, 4, 9};
    vector<int> v2{2, 1, 4};
    vector<int> ans;
    
    int i = v1.size() - 1;
    int j = v2.size() - 1;
    int rem = 0;

    while (i >= 0 || j >= 0) {
        int sum = rem;  // Start with the carry
        
        if (i >= 0) {
            sum += v1[i];
            i--;
        }
        
        if (j >= 0) {
            sum += v2[j];
            j--;
        }

        int anss = sum % 10;
        ans.push_back(anss);  // Add the last digit of the sum to ans
        rem = sum / 10;  // Update carry for the next iteration
    }
    
    // If there's a remaining carry, add it to the result
    if (rem > 0) {
        ans.push_back(rem);
    }
for(int i=ans.size()-1;i>=0;i--)
{
    cout<<ans[i]<<" ";
}
*/

}
