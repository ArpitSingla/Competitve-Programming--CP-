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

void printLevelWise(BinaryTreeNode<int> *root) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Print output and don't return it.
     * Taking input is handled automatically.
     */
    if(root==NULL){
        return;
    }
	queue<BinaryTreeNode<int>*> q;
    q.push(root);
    while(q.size()!=0){
        BinaryTreeNode<int> *temp=q.front();
        q.pop();
        cout<<temp->data<<":";
        if(temp->left!=NULL){
        	q.push(temp->left);  
            cout<<"L:"<<temp->left->data<<",";
        }
        else{
            cout<<"L:"<<-1<<",";
        }
        if(temp->right!=NULL){
        	q.push(temp->right);
            cout<<"R:"<<temp->right->data<<endl;
        }
        else{
             cout<<"R:"<<-1<<endl;
        }
    }
}
