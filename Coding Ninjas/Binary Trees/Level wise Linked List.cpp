// Following is the Node and Binary Tree node structure

/**************
class node{
public:
    T data;
    node<T> * next;
    node(T data){
        this->data=data;
        this->next=NULL;
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

vector<node<int>*> createLLForEachLevel(BinaryTreeNode<int> *root) {
    vector<node<int>*> ans;
    queue<BinaryTreeNode<int>*>q;
    q.push(root);
    q.push(NULL);
    while(q.size()!=0){
        int count=q.size();
        node<int> *head=NULL,*tail=NULL;
        while(count>0){
            BinaryTreeNode<int> *temp=q.front();
            q.pop();
            if(temp!=NULL){
                if(head==NULL){
                    head=new node<int>(temp->data);
                    tail=head;
                }
                else{
                    tail->next=new node<int>(temp->data);
                    tail=tail->next;
                }
                if(temp->left!=NULL){
                    q.push(temp->left);
                }
                if(temp->right!=NULL){
                    q.push(temp->right);
                }
            }
            else{
                ans.push_back(head);
                head=NULL;
                tail==NULL;
                if(q.size()!=0){
                    q.push(NULL);
                }
            }
            count--;
        }
    }
    return ans;
}
