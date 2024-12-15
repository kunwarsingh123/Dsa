#include<iostream>
#include<string>
#include<stack>
using namespace std;


void insertbottom(stack<int>&s,int &target)
{
    if(s.size()==0)
    {
        s.push(target);
        return;
    }
int tops=s.top();
s.pop();
insertbottom(s,target);
s.push(tops);


}


void reverse(stack<int>s)
{
    stack<int>ss;
    while(!s.empty())
    {
        int t=s.top();
        ss.push(t);
        s.pop();
    }

    while(!ss.empty()){
        cout<<ss.top()<<" ";
        ss.pop();
    }
}


void insertsortstack(stack<int>&s,int target)
{
    // base case
    if(s.empty())
    {
        s.push(target);
        return;
    }

if(s.top()>=target)
{
    s.push(target);
    return;
}
int topelement=s.top();
s.pop();
insertsortstack(s,target);
//
s.push(topelement);


}



void sortstack(stack<int>&s)
{
if(s.empty())
{
return;
}

int topelement=s.top();
s.pop();
sortstack(s);
insertsortstack(s,topelement);

}

#include <stack>
#include <string>
using namespace std;

bool removeRedundant(string s) {
    stack<char> st;

    for (int i = 0; i < s.size(); i++) {
        // Push open parentheses and operators onto the stack
        if (s[i] == '(' || s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/') {
            st.push(s[i]);
        } else if (s[i] == ')') {
          
            bool hasOperator = false;

            while (!st.empty() && st.top() != '(') {
                char top = st.top();
                st.pop();
                if (top == '+' || top == '-' || top == '*' || top == '/') {
                    hasOperator = true;
                }
            }

            if (!st.empty() && st.top() == '(') {
                st.pop();  // Pop the opening parenthesis
            }

            // If no operator was found between parentheses, it's redundant
            if (!hasOperator) {
                return true;
            }
        }
    }

    // If stack is not empty, it means unbalanced parentheses
    return false;
}


int main()
{
    // insert at bottom at top element
   
    stack<int>s;
   
   /* s.push(33);
    s.push(90);
    s.push(99);
    s.push(999);
    int target=s.top();
    s.pop();
    insertbottom(s,target);
while(!s.empty())
{
    cout<<s.top()<<endl;
    s.pop();
}
*/

//  







/*
// reverse a stack
 s.push(33);
    s.push(90);
    s.push(99);
    s.push(999);
    s.push(99902);
    s.push(89);
    s.push(907);
reverse(s);
while(!s.empty())
{
    cout<<s.top()<<endl;
    s.pop();
}
*/









// valid parathensis in leetcode 20











/*

// sort of a stack
s.push(99);
s.push(781);
s.push(89);
s.push(728);
s.push(7);
s.push(4);
s.push(111);
s.push(90);
  s.push(999);
    s.push(99902);

sortstack(s);

while(!s.empty())
{
    cout<<s.top()<<" ";
    s.pop();
}
*/


// remove reduntat bracket
string sk="(a+b+c)";
 bool ans= removeRedundant(sk);
cout<<ans<<endl;




}
