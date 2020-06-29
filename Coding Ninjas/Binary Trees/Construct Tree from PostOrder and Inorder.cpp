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

BinaryTreeNode<int> *solve(int *post,int *in,int posts,int poste,int ins,int ine){
    if(ins>ine){
        return NULL;
    }
    int rootData=post[poste];
    int rootIndex=-1;
    for(int i=ins;i<=ine;i++){
        if(rootData==in[i]){
            rootIndex=i;
            break;
        }
    }
    int lps=posts;
    int lis=ins;
    int lie=rootIndex-1;
    int lpe=lie-lis+lps;
    int rps=lpe+1;
    int rpe=poste-1;
    int ris=rootIndex+1;
    int rie=ine;
    BinaryTreeNode<int> *root=new BinaryTreeNode<int>(rootData);
    root->left=solve(post,in,lps,lpe,lis,lie);
    root->right=solve(post,in,rps,rpe,ris,rie);
    return root;
}

BinaryTreeNode<int>* getTreeFromPostorderAndInorder(int *postorder, int postLength, int *inorder, int inLength) {
    return solve(postorder,inorder,0,postLength-1,0,postLength-1);
}
