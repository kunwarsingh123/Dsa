#include<iostream>
#include<vector>
#include<stack>
#include<string>
using namespace std;

// Min stack leetcode-::

 // next smaller element  

 int main()
 {
// stack  
vector<int>v;
v.push_back(2);
v.push_back(1);
v.push_back(4);
v.push_back(3);

stack<int>s;
s.push(-1);
vector<int>ans(v.size());

for(int i=v.size()-1;i>=0;i--)
{
    int curr=v[i];
    while(s.top()>=curr)
    {
        s.pop();
    }
    
ans[i]=s.top();
s.push(curr);


}



 
 cout<<"printoing endl"<<endl;

 for(int i=0;i<ans.size();i++)
 {
    cout<<ans[i]<<" ";
 }



 }