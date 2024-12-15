#include<iostream>
#include<queue>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data=data;
      this->  left=NULL;
      this->  right=NULL;
    }
};
Node *insertintoBst(Node * &root,int data)
{
    if(root==NULL)
    {
        root=new Node(data);
        return root;
    }

    if(root->data > data)
    {
        root->left=insertintoBst(root->left,data);
    }
    else 
    {
        root->right=insertintoBst(root->right,data);
    }
    return root;
}

void levelordertraversal(Node * &root)
{
    queue<Node *>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        Node *temp=q.front();
       
        q.pop();
if(temp==NULL)// purana level traverse ho chuka h 
{
   cout<<endl; 
   if(!q.empty())
   {
    // has some child node
    q.push(NULL);
   }      
}
else{
 cout<<temp->data<<" ";
        if(temp->left)
        {
            q.push(temp->left);
        }
        if(temp->right)
        {
            q.push(temp->right);
        }
       
    }
    }

}


void takeinput(Node *&root)
{
    int data;
    cout<<"enter the data:"<<endl;
    cin>>data;
    while(data!=-1)
    {
        root=insertintoBst(root,data);
        cin>>data;
    }

}

void inorder(Node *root)
{
    if(root==NULL)
    {
        return ;
    }
 inorder(root->left);
    cout<<root->data<<" ";
   
    inorder(root->right);
}
void inorderfind(Node *root,vector<int>&ans)
{
    if(root==NULL)
    {
        return ;
    }
 inorderfind(root->left,ans);
  ans.push_back(root->data);
   
    inorderfind(root->right,ans);
}

void preorder(Node *root)
{
    if(root==NULL)
    {
        return ;
    }

    cout<<root->data<<" ";
    inorder(root->left);
    inorder(root->right);
}
bool  binarysearch(Node *root,int d)
{
    if(root==NULL)
    {
        return false;
    }
    if(root->data==d)
    {
        return true;
    }

    if(root->data>d)
    {
       return binarysearch(root->left,d);

    }
    else{
      return  binarysearch(root->right,d);
    }

   
}


// find minimum value with help  of recursion
int minvalue(Node *root)
{
    Node *temp=root;
    if(temp==NULL)
    {
        return -1;
    }
    while(temp->left!=NULL)
    {
        temp=temp->left;
            }

            return temp->data;

}
int maxvalue(Node *root)
{
    Node *temp=root;
    if(temp==NULL)
    {
        return -1;
    }
    while(temp->right!=NULL)
    {
        temp=temp->right;
            }

            return temp->data;

}










Node *findtarget(Node *root,int target)
{
    if(root==NULL)
    {
        return NULL;
    }
if(root->data==target)
{
    return root;
}
if((root->data>target))
{
     return findtarget(root->left,target);
}
else{
    return findtarget(root->right,target);
}



}

Node *deleteNode(Node *root,int target)
{
    if(root==NULL)
    {
        return NULL;
    }
   
   if(root->data==target)
   {
    // isi ko delete karna h
    // 4 case:

    if(root->left==NULL && root->right==NULL)
    {
        delete root;
        return NULL;
    }
    else if(root->left ==NULL && root->right!=NULL)
    {
        Node *child=root->right;
        delete root;
        return child;
    }
    else if(root->left!=NULL && root->right==NULL)
    {
        Node *child=root->left;
        delete root;
        return child;
    }
    else{
        // both child exist karte h
        // find inoreder precessor in left subtree
        int inorederpre=maxvalue(root->left);
        // replace root->data value with inorder predecessor
        root->data=inorederpre;

        // delete inorder predecessor from left subtree
        root->left=deleteNode(root->left,inorederpre);
        return root;


    }
   }

   else if(target>root->data)
   {
    // right jaana chhaiye
    root->right= deleteNode(root->right,target);
   }
   else if(target<root->data)
   {
    root->left= deleteNode(root->left,target);
   }
   return root;
    
}

int main()
{
    Node *root=NULL;
    cout<<"enter the data for Node"<<endl;
    takeinput(root);
    cout<<"printing the tree"<<endl;
    levelordertraversal(root);
    inorder(root);
    cout<<endl;
    preorder(root);
    // binary serach 
    int data =17;
  bool ans=  binarysearch(root,data);
  if(ans)
  {
    cout<<"ans has found"<<endl;
  }
  else{
    cout<<"ans has not found"<<endl;
  }

  cout<<"find minimum and maximum value value:"<<endl;
  vector<int>a;
  inorderfind(root,a);
  cout<<"Minimum value:"<<a[0]<<endl;
  cout<<"maximum value:"<<a[a.size()-1];
cout<<"min value:"<<minvalue(root)<<endl;

cout<<endl<<endl<<endl;
cout<<"deleteNode:"<<endl;
int val;
cin>>val;
root=deleteNode(root,val);
levelordertraversal(root);

}