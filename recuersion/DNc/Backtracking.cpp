#include<iostream>
#include<vector>
#include<string>
using namespace std;
void permuntations(string& s,int i)

{
if(i>=s.length())
{
    cout<<s<<" ";
    return;
}
for(int j=i;j<s.length();j++)
{
    swap(s[i],s[j]);
   permuntations(s,i+1);
   //backtracking--why this--cause vaapas recreate ho jaaata 
     swap(s[i],s[j]);

}





}

int main(){
string s="abc";
permuntations(s,0);
}