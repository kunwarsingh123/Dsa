#include<iostream>
#include<string>
#include<queue>
#include<deque>
using namespace std;


  



int main()
{

  // first non repeated elements

/*
      string s="zarcaarzd";
      int arr[26]={0};
      queue<char>q;
      string ans;
      for(int i=0;i<s.length();i++)
      {
        char ch=s[i];
        // increment feequecy
        arr[ch-'a']++;
        //qpush
        q.push(ch);
          
        while(!q.empty())
        {
          if(arr[q.front()-'a']>1)
          {
              q.pop();
          }
        else{
          ans.push_back(q.front());
          break;
        }
        } 
        if(q.empty())
        {
          ans.push_back('#');
        }

        


      }
      cout<<"final Ans:"<<ans<<endl;*/






// circular tour / gas station

// sliding window
vector<int>nums{1,3,-1,-3,5,3,6,7};
vector<int>ans;
in k=3;
deque<int>q;

for(int i=0;i<k;i++)
{
 while(!q.empty()&& [i]>=nums[q.back()]) 
 {
  q.pop_back();
 }
}


// remaining process window
for(int i=k;i<nums.size();i++)
{
   if()

}



}
