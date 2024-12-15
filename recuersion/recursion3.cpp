#include<iostream>
#include<string>
#include<vector>
using namespace std;

bool sortt(vector<int>v1,int i)
{
    if(v1.size()-1==i)
    {
        return true;
    }
if(v1[i]<v1[i+1])
{
    
  return  sortt(v1,i+1);
}
else{
    return false;
}


}


bool binarys(vector<int>& v,int& k,int i,int j)
{
    if(i>=j)
    {
        return false;
    }
    int mid=(i+j)/2;
    if(v[mid]==k)
    {
        return true;
    }
    else if(v[mid<k])
    {
        return binarys(v,k,mid+1,j);
    }
    else{
        return binarys(v,k,mid-1,j);
    }
}


void subsequence(string s ,string output,int i)
{
if(i>=s.length())
{
    cout<<output<<" ";
    return;
}


//exclude
subsequence(s,output,i+1);
//include
output.push_back(s[i]);
subsequence(s,output,i+1);



}


int main()
{
    vector<int>v1{10,20,30,40,50,60};
    int i=0;
    bool ans=sortt(v1,i);
    if(ans==1)
    {
        cout<<"sort ans";
    }
    else{
        cout<<"Not sort"<<endl;
    }
cout<<endl<<endl;
vector<int>v{10,20,60,70,80};
int k=880;
int kk=0;
int j=v.size()-1;
 bool anss=binarys(v,k,kk,j);
 if(anss)
 {
    cout<<"present"<<endl;
 }
 else{
    cout<<"Not present"<<endl;
 }

//subsequence of string--power set
string s="abcd";
string output="";
int ii=0;
subsequence(s,output,ii);



}

 