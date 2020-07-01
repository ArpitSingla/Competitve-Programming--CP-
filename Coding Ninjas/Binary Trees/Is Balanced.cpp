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

int depth(BinaryTreeNode<int> *root){
    if(root==NULL){
        return 0; 
    }
    return 1+max(depth(root->left),depth(root->right));
}

bool isBalanced(BinaryTreeNode<int> *root) {
	if(root==NULL){
        return true;
    }
    int leftd=depth(root->left);
    int rightd=depth(root->right);
    if(abs(leftd-rightd)>1){
        return false;
    }
    return isBalanced(root->left)&&isBalanced(root->right);
}
