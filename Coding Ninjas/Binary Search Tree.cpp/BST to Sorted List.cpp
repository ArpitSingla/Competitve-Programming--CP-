// Following is the Binary Tree node structure
/**************
 
 template <typename T>
 class Node{
    public:
    T data;
    Node<T> *next;
    
    Node(T data){
        this -> data = data;
        this -> next = NULL;
    }
 };
 
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
pair<Node<int>*,Node<int>*> solve(BinaryTreeNode<int>* root){
    if(root==NULL){
        pair<Node<int>*,Node<int>*> p;
        p.first=NULL;
        p.second=NULL;
        return p;
    }
    pair<Node<int>*,Node<int>*> lp=solve(root->left);
    pair<Node<int>*,Node<int>*> rp=solve(root->right);
    pair<Node<int>*,Node<int>*> p;
    Node<int> *newNode=new Node<int>(root->data);
    newNode->next=rp.first;
    if(lp.second!=NULL){
    	lp.second->next=newNode;
        p.first=lp.first;
    }
    else{
        p.first=newNode;
    }
    if(rp.second!=NULL){
    	p.second=rp.second;    
    }
    else{
        p.second=newNode;
    }
    return p;
}
Node<int>* constructBST(BinaryTreeNode<int>* root) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
    pair<Node<int>*,Node<int>*> output=solve(root);
    return output.first;
}