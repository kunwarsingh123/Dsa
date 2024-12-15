#include<iostream>
using namespace std;
int main()
{

    //bubble sort
    int arr[5]={5,4,1,3,2};
    for(int i=0;i<5-1;i++)
{
    for(int j=0;j<5-i-1;j++)
    {
        if(arr[j]>arr[j+1])
        {
            swap(arr[j],arr[j+1]);
        }
    }
}

for(int i=0;i<5;i++)
{
    cout<<arr[i]<<" ";
}

cout<<endl;
int arr1[5]={5,4,1,3,2};
for(int i=0;i<5-1;i++)
{

    int min=i;
    for(int j=i+1;j<5;j++)
    {
        if(arr1[min]>arr1[j])
        {
min=j;
        }
    }

    swap(arr1[i],arr1[min]);
}

for(int i=0;i<5;i++)
{
    cout<<arr1[i]<<" ";
}

}