#include<bits/stdc++.h>
using namespace std;
struct node{
int data;
struct node *left, *right;
/*
We can use constructor in structure of C++ as well as we can use access specifier like public
private and protected. 
We can also use function as well as in structure of c++ like as Class.
*/

node(int newdata){
data = newdata;
left = NULL;
right = NULL;
}
};
void preorder_DEFINATION(){
    cout<<endl;
    cout<<"For Preorder traversal",
    " 1.   We first shout out the value of root ",
    " 2.   We shout out the value of left subtree i.e call preorder(left subtree)  ",
    " 3.   We shout out the value of right subtree i.e call preorder (right subtree) ";
    cout<<endl;
    cout<<" 1.   First print Root Data"<<endl;
    cout<<" 2.   Traverse left subtree "<<endl;
    cout<<" 3.   Traverse right subtree."<<endl;
}
void preorder(struct node *root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<"   ";
    preorder(root->left);
    preorder(root->right);
}
int main(){

    /*
    Here 1 is a root node and 2 and 3 are the subtree of root node 1
    4 and 5 are the subtree of node 2 where 6 and 7 are the subtree of node 3
                            1

                    2               3
             
                4      5        6       7
    */
  struct node *root = new node(1);
  root->left = new node(2);
  root->right = new node(3);
  root->left->left = new node(4);
  root->left->right = new node(5);
  root->right->left = new node(6);
  root->right->right = new node(7);
  preorder(root);
cout<<endl;
preorder_DEFINATION();
return 0;
}