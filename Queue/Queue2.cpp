#include<iostream>
#include<queue>
#include<stack>
#include<vector>
#include<deque>
using namespace std;


// reverse of queue   


void reverse(queue<int>&q)
{
    if(q.empty())
    {
        return ;
    }
int top=q.front();
q.pop();


reverse(q);

q.push(top);


}

void reversekelent(queue<int>&q,int n)
{
    int k=q.size();
    stack<int>s;
    int count=0;
    if(q.empty())
    {
        return ;

    }
   while(n>count)
   {
    s.push(q.front());
    q.pop();
    count++;
   }
   while(!s.empty())
   {
    q.push(s.top());
    s.pop();  
     }

count=0;
    while(!q.empty()&&count!=k-n)
    {
       int t=q.front();
       q.pop();
       q.push(t);
       count++;
    }


}
void interleave(queue<int>&q){
    int c=q.size();
    queue<int>q2;
    int n=0;
    while(n<c/2)
    {
        q2.push(q.front());
        q.pop();
        n++;
    }
    queue<int>q3;
    while(!q.empty() || !q2.empty())
    {
        q3.push(q2.front());
        q3.push(q.front());
        q.pop();
        q2.pop();
    }

    while(!q3.empty())
    {
        q.push(q3.front());
        q3.pop();
    }




}


void solve(vector<int>v,int n,int k)
{
    deque<int>q;
// process window size of k
for(int i=0;i<k;i++)
{
    if(v[i]<0)
    {
        q.push_back(i);
    }


}

// remaining winow ko process karo
for(int i=k;i<n;i++)
{
    // answer dodo purani window kaa
    if(q.empty())
    {
        cout<<"0"<<" ";
    }
    else {
        cout<<v[q.front()]<<" ";


    }
// outof window element ko remove kar do
while(!q.empty()&& (i-q.front()>=k))
{
    q.pop_front();
}
// check currnent element for insertion
if(v[i]<0)
{
    q.push_back(i);
}


}


// last window kaa baki h
 if(q.empty())
    {
        cout<<"0"<<" ";
    }
    else {
        cout<<v[q.front()]<<" ";


    }

}



int main()
{

    // reverse pf queue
   /** queue<int>q;
    q.push(90);
    q.push(74);
    q.push(99);
    q.push(995);
    reverse(q);
while(!q.empty())
{
    cout<<q.front()<<endl;
    q.pop();
}*/


// reverse if k first elemnt
/*
queue<int>q;
q.push(9);
q.push(12);
q.push(78);
q.push(878);
q.push(56);
reversekelent(q,2);

    //reverse(q);
while(!q.empty())
{
    cout<<q.front()<<endl;
    q.pop();
}*/


// interleave firat and secon half of queue
/*
queue<int>q;
q.push(12);
q.push(23);
q.push(76);
q.push(7888);

q.push(999);
q.push(9);
interleave(q);
while(!q.empty())
{
    cout<<q.front()<<endl;
    q.pop();
}*/


// Sliding window
vector<int>v{12,-1,-7,8,-15,30,16,28};
int size=8;
int k=3;
solve(v,size,k);




}