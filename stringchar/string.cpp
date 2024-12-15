#include<iostream>
#include<vector>
#include<string>
using namespace std;

bool pallin(char ch[])
{
    int i=0;
int c=0;
while(ch[i]!='\0')
{
c++;
i++;
}
c=c-1;
int k=0;
while(k<c)
{
    if(ch[k]==ch[c])
    {
        k++;
        c--;
    }
    else{
        return false;
    }

}
return true;
}

int main()
{
    /*char ch[5];

   cin>>ch;
//     cout<<"ch:"<<ch<<endl;


// ch[0]='a';
// ch[1]='b';
// ch[2]='c';
// ch[3]='d';
// cout<<ch<<endl;


/*
cout<<int(ch[5])<<endl;

char t[100];
cin>>t;
cout<<t;*/

/*
char c[100];
cin.getline(c,100);
cout<<c<<endl;*/
/*
char ch[100];
cin.getline(ch,100);
int i=0;
int c=0;
while(ch[i]!='\0')
{
c++;
i++;
}
cout<<c<<endl;
cout<<sizeof(c)/sizeof(char)<<endl;
cout<<ch<<endl;
int k=0;
while(k<=c)
{
    swap(ch[k],ch[c]);
    k++;
    c--;

}


cout<<ch<<endl;
for(int i=0;i<7;i++)
{
    cout<<ch[i]<<" ";
}
*/

/*
char ch[100];
cin.getline(ch,100);
int i=0;
int c=0;
while(ch[i]!='\0')
{
c++;
i++;
}

for(int i=0;i<c;i++)
{
    if(ch[i]==' ')
    {
        ch[i]='@';
    }
}

for(int i=0;i<c;i++)
{
    cout<<ch[i];
}
*/

/*
char ch[1000];
cin.getline(ch,1000);

bool check=pallin(ch);
cout<<check<<endl;*/
/*
char ch[100];
cin.getline(ch,100);
int i=0;
int c=0;
while(ch[i]!='\0')
{
c++;
i++;
}

for(int i=0;i<c;i++)
{
    ch[i]=ch[i]-32;
}

for(int i=0;i<c;i++)
{
    cout<<ch[i];
}*/


string s;

//cin>>s;
s="ajay singh bhadouriya";
cout<<s.length()<<endl;
s.push_back('a');
cout<<s<<endl;
cout<<s.empty()<<endl;

string s1="love";
string s2="bababr";
if(s1.compare(s2)==0)
{
    cout<<"equal"<<endl;
}
else{
    cout<<"Not equal"<<endl;
}
string ss="love kunwar singh ranu";
cout<<"ss:"<<ss.find("love");


}