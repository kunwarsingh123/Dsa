#include<iostream>
#include<vector>
#include<string>
using namespace std;


int findsearch(string& s,char& x,int i)
{
    if(i<0)
    {
        return 0;
    }
    if(s[i]==x)
    {
        return i;
    }
return  findsearch(s,x,i-=1);

}
void reverseof(string & s,int& i,int& j)
{
    if(i>=j)
    {
        return ;
    }
    swap(s[i],s[j]);
    i=i+1;
    j=j-1;
    return reverseof(s,i,j);

}


bool checkpallindrom(string s,int i,int j)
{
    if(i>=j)
    {
        return true;
    }
     if(s[i]!=s[j])
    {
        return false;
    }
return checkpallindrom(s,i+1,j-1);


}

void remove(string& s,string& part )
{
    int found=s.find(part);
    if(found!=string::npos)
    {
        string left_part=s.substr(0,found);
        string right_part=s.substr(found+part.size(),s.size());
        s=left_part+right_part;
      return  remove(s,part);
    }
    else{
        return;

    }

}

void subarray(vector<int>s,int i,int jj)
{
    if(jj>s.size())
    {
        return;
    }
for(int j=i;j<jj;j++)
{
cout<<s[j]<<"";
}
cout<<endl;
subarray(s,i,jj+1);
}
void printsubarray(vector<int>&s)
{
    for(int i=0;i<s.size();i++)
    {
        subarray(s,i,i);
    }
}

int main(){

//last occurenece of string
string s="abcddedg";
int i=s.length()-1;
char x='d';
int ans=findsearch(s,x,i);
cout<<ans<<endl;


// reverse of string
string ss="I Love MY COUNTRY";
int kk=0;
int j=ss.length()-1;
reverseof(ss,kk,j);
cout<<"reverse s:"<<ss<<endl;

// add strng leetcode 415

// palindrom
string h="racemknkcar";
bool anss=checkpallindrom(h,0,h.size()-1);
cout<<anss<<endl;
if(anss==1)
{
    cout<<"YES it is a pallindrom"<<endl;

}
else{
    cout<<"NO It is not pallindrom"<<endl;
}



// remove all occurence of String 

string re="daabcabcdeabcdegabc";
string part="abc";
remove(re,part);
cout<<"Remove part:"<<re<<endl;

// print all subarrays using recursion
vector<int>v1{1,2,3,4,5};
int jk=0;
int ii=0;
printsubarray(v1);

 

   cout << "" << endl; 
    return 0; 
} 

