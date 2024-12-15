#include<iostream>
#include<algorithm>
using namespace std;
void printarr(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}
void inc(int arr[],int size)
{
   arr[0]=arr[0]+10;
   printarr(arr,size);
}




int main()
{
    int arr[]={1,2};
    cout<<"size:"<<sizeof(arr)<<endl<<sizeof(arr)/sizeof(int)<<endl;
    int size=2;
   int arr1[15]={1,5,6,8,9,4,66};
   int  flag=0;
   for(int i=0;i<(sizeof(arr1)/sizeof(int));i++)
   {
    if(arr1[i]==8)
    {
        flag=1;
        cout<<"present"<<endl;
        break;
    }
   }
   if(flag==0)
   {
    cout<<"Not present"<<endl;
   }

   int arr2[10]={0,1,0,1,0,1,0,1,0};
   int count0=0;
   int count1=0;
    for(int i=0;i<(sizeof(arr2)/sizeof(int));i++)
    {
        if(arr2[i]==0)
        {
            count0++;
        }
        else{
            count1++;
        }
    }
    cout<<"count0:"<<count0<<endl<<"count1:"<<count1<<endl;



cout<<endl;
cout<<endl;

int arr3[10] = {1, 2, 5564, 20345, 5, 88, 78, 203, 659, 78};
int max1 = arr3[0];
int max2 = -8555888;

for (int i = 1; i < 10; i++) {
    if (arr3[i] > max1) {
        max2 = max1;
        max1 = arr3[i];
    } else if (arr3[i] > max2 && arr3[i] != max1) {
        max2 = arr3[i];
    }
}

cout << "Max1: " << max1 << endl;
cout << "Max2: " << max2 << endl;



int arr4[10]={1,2,3,4,5,6,7,8,9};
int i=0;
int j=8;
while(i<j)
{ swap(arr4[j],arr4[i]);
    
    
    i++;
    j--;

   
}

for(int i=0;i<9;i++)
{
    cout<<arr4[i]<<" ";
}

}
