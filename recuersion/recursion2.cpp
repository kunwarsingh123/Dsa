#include<iostream>
#include<vector>
#include<string>

using namespace std;

void print(vector<int>v1,int i)
{
    
    if(v1.size()-1<i)
    {
        return  ;
    }
   cout<<v1[i]<<" ";
    print(v1,i+1);
    cout<<endl;
  cout<<v1[i]<<" ";

}

int findmax(vector<int>v,int i,int max)
{
    if(v.size()-1<=i)
    {
        return max ;
    }

    if(v[i]>max)
    {
        cout<<v[i]<<" max:"<<endl;
        max=v[i];
    }

  return  findmax(v,i+1,max);



}

bool findpart(string& s ,char& k,int& j)
{
    if(j<=0)
    {
        return false;
    }

    if(s[j]==k)
    {
        return true;
    }
    int kk=j-1;
    return findpart(s,k,kk);

}

void find(int n)
{
    if(n==0)
    {
        return ;
    }

    int d=n%10;
    int neew=n/10;
    find(neew);
    cout<<d;
    
}

int main()
{
      vector<int>v1{10,20,350,40,50};
      int i=0;
   //   print(v1,i);
      int max=0;
    // int ans= findmax(v1,i,max);
    // cout<<"ans:"<<ans<<endl;

string s="lovebabbar";
char k='u';
int j=s.length();
cout<<s<<endl;
bool ans=findpart(s,k,j);
if(ans)
{
    cout<<"find part"<<endl;
}
else{
    cout<<"not found"<<endl;
}


int n=647;
find(n);
}