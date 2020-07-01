#include<bits/stdc++.h>
using namespace std;
// Following is the Binary Tree node structure
/**************
class BinaryTreeNode {
    public : 
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data) {
        this -> data = data;
        left = NULL;
        right = NULL;
    }
};
 
 // PairAns class -
 class PairAns {
    public :
        int min;
        int max;
 };
 
***************/

PairAns minMax(BinaryTreeNode<int> *root) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
    if(root==NULL){
        PairAns obj;
        obj.min=INT_MAX;
        obj.max=INT_MIN;
        return obj;
    }
    PairAns leftAns=minMax(root->left);
    PairAns rightAns=minMax(root->right);
    int mini=min(root->data,min(leftAns.min,rightAns.min));
    int maxi=max(root->data,max(leftAns.max,rightAns.max));
    PairAns p;
    p.min=mini;
    p.max=maxi;
    return p;

}
