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
void inorder(struct node *root){
    if(root== NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<"   ";
    inorder (root->right);
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
inorder(root);
cout<<endl;
return 0;
}