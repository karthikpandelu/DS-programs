/*
struct node
{
    int data;
    node* left;
    node* right;
};

*/

void left(node *root){
    if(root->left!=NULL){
        left(root->left);   
    }
    cout << root->data << " ";
    
}

void right(node *root){
    cout << root->data << " ";
    if(root->right!=NULL){
        right(root->right);
    }
    
    
}

void topView(node * root) {
    if(root==NULL){
        return;
    }
    if(root->left!=NULL){
        left(root->left);
    }
    
    cout << root->data << " ";
    
    if(root->right!=NULL){
        right(root->right);
    }
 
  
}
