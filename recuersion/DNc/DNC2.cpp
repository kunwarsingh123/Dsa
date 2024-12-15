#include<iostream>
#include<vector>

using namespace std;


int partition(vector<int>&v,int s,int e)
{
    int pivotindex=s;
    int pivotelemet=v[s];



int count =0;
int i=s+1;
while(i<=e)
{
    if(pivotelemet>=v[i])
    {
        count++;
    }
    i++;
}

int rightindex=s+count;
swap(v[pivotindex],v[rightindex]);
pivotindex=rightindex;

//bade ko aage aur chhote ko piche

int k=s;
int j=e;
while(k<pivotindex && j>pivotindex)
{
    while(v[k]<pivotelemet)
    {
        k++;
    }
    while(v[j]>pivotelemet)
    {
        j--;
    }

    if(k<pivotindex && j>pivotindex)
    {
        swap(v[k],v[j]);
    }


}


return rightindex;



}



void quicksort(vector<int>&v,int s,int e)
{
    if(s>=e)
    {
        return ;
    }

// partition
int p=partition(v,s,e);

// recursion call left

quicksort(v,s,p-1);

// recursion call right

quicksort(v,p+1,e);

}

//

















int main()
{
     vector<int>v{111,22,50,50,501,5,44,4,6};
     int i=0;
     int j=v.size()-1;
     quicksort(v,i,j);
     for(int i=0;i<v.size();i++)
     {
        cout<<v[i]<<" ";
     }
}