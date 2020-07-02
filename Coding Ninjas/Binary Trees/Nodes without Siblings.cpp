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

void nodesWithoutSibling(BinaryTreeNode<int> *root) {
    if(root==NULL){
        return;
    }
    if(root->left==NULL && root->right!=NULL){
        cout<<root->right->data<<endl;        
    }
    if(root->left!=NULL && root->right==NULL){
        cout<<root->left->data<<endl;
    }    
    nodesWithoutSibling(root->left);
    nodesWithoutSibling(root->right);
}
