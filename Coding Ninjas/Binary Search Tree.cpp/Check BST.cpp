// Bottom Up Approach
#include<bits/stdc++.h>
using namespace std;

class pairC{
	public:
    int mini;
    int maxi;
	bool isBSTN;
};

pairC isBSTF(BinaryTreeNode<int> *root){
     if(root==NULL){
        pairC ob;
        ob.mini=INT_MAX;
        ob.maxi=INT_MIN;
        ob.isBSTN=true;
        return ob;
    }
    pairC lout=isBSTF(root->left);
    pairC rout=isBSTF(root->right);
    int minimum=min(root->data,min(lout.mini,rout.mini));
    int maximum=max(root->data,max(lout.maxi,rout.maxi));
    bool finalR=(root->data>lout.maxi) && (root->data<=rout.mini) && (lout.isBSTN) && (rout.isBSTN);
    pairC output;
    output.mini=minimum;
    output.maxi=maximum;
    output.isBSTN=finalR;
    return output;
}

bool isBST(BinaryTreeNode<int> *root){
       /* Don't write main().
	* Don't read input, it is passed as function argument.
	* Return output and don't print it.
	* Taking input and printing output is handled automatically.
	*/
    pairC out=isBSTF(root);
	return out.isBSTN;
}

// Top Down Approach 
#include<bits/stdc++.h>
using namespace std;

bool solve(BinaryTreeNode<int> *root,int min,int max){
    if(root==NULL){
        return true;
    }
    if(root->data<min || root->data>max){
        return false;
    }
    bool left=solve(root->left,min,root->data-1);
    bool right=solve(root->right,root->data,max);
    return left&&right;
}

bool isBST(BinaryTreeNode<int> *root){
       /* Don't write main().
	* Don't read input, it is passed as function argument.
	* Return output and don't print it.
	* Taking input and printing output is handled automatically.
	*/
	return solve(root,INT_MIN,INT_MAX);
}