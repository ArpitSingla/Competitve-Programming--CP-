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
// Using Two Stacks
void zigZagOrder(BinaryTreeNode<int> *root) {
    stack<BinaryTreeNode<int>*> s1;
    stack<BinaryTreeNode<int>*> s2;
    s1.push(root);
    while(s1.size()!=0 || s2.size()!=0){
    	while(s1.size()!=0){
            BinaryTreeNode<int> *temp=s1.top();
            s1.pop();
            cout<<temp->data<<" ";
            if(temp->left!=NULL){
                s2.push(temp->left);
            }
            if(temp->right!=NULL){
                s2.push(temp->right);
            }
        }
        cout<<endl;
        while(s2.size()!=0){
            BinaryTreeNode<int> *temp=s2.top();
            s2.pop();
            cout<<temp->data<<" ";
            if(temp->right!=NULL){
                s1.push(temp->right);
            }
            if(temp->left!=NULL){
                s1.push(temp->left);
            }
        }
        cout<<endl;    
    }
}
// Using One Queue
vector<vector<int> > zigzagLevelOrder(TreeNode* root) {
    if (root == NULL) {
        return vector<vector<int> > ();
    }
    vector<vector<int> > result;

    queue<TreeNode*> nodesQueue;
    nodesQueue.push(root);
    bool leftToRight = true;

    while ( !nodesQueue.empty()) {
        int size = nodesQueue.size();
        vector<int> row(size);
        for (int i = 0; i < size; i++) {
            TreeNode* node = nodesQueue.front();
            nodesQueue.pop();

            // find position to fill node's value
            int index = (leftToRight) ? i : (size - 1 - i);

            row[index] = node->val;
            if (node->left) {
                nodesQueue.push(node->left);
            }
            if (node->right) {
                nodesQueue.push(node->right);
            }
        }
        // after this level
        leftToRight = !leftToRight;
        result.push_back(row);
    }
    return result;
}

