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
***************/

BinaryTreeNode<int> *solve(int *pre,int *in,int pres,int pree,int ins,int ine){
	if(ins>ine){
        return NULL;
    }
    int rootData=pre[pres];
    int rootIndex=-1;
    for(int i=ins;i<=ine;i++){
        if(in[i]==rootData){
            rootIndex=i;
            break;
        }
    }
    int lps=pres+1;
    int lis=ins;
    int lie=rootIndex-1;
    int lpe=lie-lis+lps;
    int rps=lpe+1;
    int rpe=ine;
    int ris=rootIndex+1;
    int rie=ine; 
    BinaryTreeNode<int>* root=new BinaryTreeNode<int>(rootData);
    root->left=solve(pre,in,lps,lpe,lis,lie);
    root->right=solve(pre,in,rps,rpe,ris,rie);
    return root;
}

BinaryTreeNode<int>* buildTree(int *preorder, int preLenght, int *inorder, int inLength) {
    return solve(preorder,inorder,0,preLenght-1,0,inLength-1);
}
