#include <bits/stdc++.h> 
#include<vector>
using namespace std;
void printsum(int arr[][3])
{
    for(int i=0;i<3;i++)
    {
        int sum=0;
        for(int j=0;j<3;j++)
        {
            sum=sum+arr[j][i];
        }
        cout<<sum<<" ";
        cout<<endl;
    }
}


void max(int arr[][3])
{

    int maximum=arr[0][0];
    int Minimum=786786764;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
           if(maximum<arr[i][j])
           {
            maximum=arr[i][j];
           }
           else if(Minimum>arr[i][j])
           {
            Minimum=arr[i][j];
           }
        }
      
    }
    cout<<"maximum:"<<maximum<<endl;
    cout<<"minimum:"<<Minimum<<endl;
}


void search(int arr[][3], int k) {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(k == arr[i][j]) {
                cout << "Yes, found: " << arr[i][j] << endl;
                return; // Exits the function when the element is found
            }
        }
    }
    cout << "Not found" << endl; // If element is not found in the array
}


void transpose(int arr[][3])
{

    cout<<endl<<endl;

 for(int i=0;i<3;i++)
    {
        
        for(int j=0;j<3;j++)
        {

            cout<<arr[i][j]<<" ";
        }
        cout<<endl;

}
    cout<<endl<<endl;
     for(int i=0;i<3;i++)
    {
        for(int j=i+1;j<3;j++)
        {


   swap(arr[i][j],arr[j][i]);

        }
}

 for(int i=0;i<3;i++)
    {
        
        for(int j=0;j<3;j++)
        {
            cout<<endl<<endl;

            cout<<arr[i][j]<<" ";
        }
        cout<<endl;

}}


 int findDuplicate(vector<int>& nums) {
    /*    sort(nums.begin(),nums.end());
         for(int i=0;i<nums.size();i++)
         {
            if(nums[i]==nums[i+1])
            {
                return nums[i];
            }
         }
return -1;*/

int ans=-1;
for(int i=0;i<nums.size();i++)
{
    int index=abs(nums[i]);
    if(nums[index]<0)
    {
        return index;
    }

    nums[index]*=-1;
}

return ans;

    }

void sortColors(vector<int>& nums) {
        vector<int>v;
        int zero=0;
        int one=0;
        int two=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                zero++;
            }
            else if(nums[i]==1)
            {
                one++;
            }
            else{
                two++;
            }

        }
        for(int i=0;i<zero;i++)
        {
            v.push_back(0);
        }
         for(int i=0;i<one;i++)
        {
            v.push_back(1);
        }
         for(int i=0;i<two;i++)
        {
            v.push_back(2);
        }
        cout<<nums.size()<<endl<<endl;
        for(int i=0;i<nums.size();i++)
        { cout<<nums[i]<<endl;
            nums.pop_back();
        }
        for(int i=0;i<9;i++)
        {
            nums.push_back(v[i]);

        }
    }



void findmissing(vector<int>v)
{
    /*
    for(int i=0;i<v.size();i++)
    {
        int index=abs(v[i]);
        if(v[index-1]>0)
        {
            v[index-1]*=-1;
        }
    }

    for(int i=0;i<v.size();i++)
    {
        if(v[i]>0)
        {
            cout<<i+1<<" ";
        }
    }*/


   sort(v.begin(),v.end());
   for(int i=0;i<v.size();i++)
   {
    if(v[i]!=i+1)
    {
        cout<<i+1;
    }
   }
}



int main(){
    /*
    int arr[3][3]={{1,255,5},{45,5,6},{1,3,5}};
    cout<<arr[0][1]<<endl;
    
printsum(arr);
search(arr,1);

max(arr);

// transpose of matrix

transpose(arr);*/

// vector<int>v{0,1,0,1,0,2,2,1,0};
// sortColors(v);


// dutch national flag
/*
int a[7]={5,4,3,-5,-11,23,45};
int i=0;
int j=0;
while(i<7)
{
    if(a[i]<0)
    {
        swap(a[j],a[i]);
        j++;
    }
    i++;
}
for(int k=0;k<7;k++)
{
    cout<<a[k]<<" ";
}

// vector duplicate leet287

vector<int>v{1,2,3,4,5,6,4};
int ans=findDuplicate(v);
cout<<ans<<endl;


//missing elements  duplicte from an array

vector<int>v11{1,3,3,5,4};
findmissing(v11);*/


/*
//spiral matrix 57

 vector<vector<int>> v11{{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    
    for(int i = 0; i < v11.size(); i++) {
        for(int j = 0; j < v11[0].size(); j++) {
            cout << v11[i][j] << " ";
        }
        cout << endl;
    }

cout<<endl;

 for(int startcol = 0; startcol<v11[0].size();startcol++)
 {
    if((startcol & 1)==0)
    {
        for(int i=0;i<v11.size();i++)
        {
            cout<<v11[i][startcol]<<" ";
        }
    }
    else{
         for(int i=v11.size()-1;i>=0;i--){
            cout<<v11[i][startcol]<<" ";
         }
         cout<<endl;

    }
 }  */     
         
         

   
    }


