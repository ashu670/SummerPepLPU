#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* left;
    Node* right;

    Node(int val){
        this->val = val;
        left = nullptr;
        right = nullptr;
    }
};

void preorder(Node* root){
    if(!root) return;

    cout<<root->val;
    preorder(root->left);
    preorder(root->right);
}

int main(){
    Node* root = new Node(0);

}