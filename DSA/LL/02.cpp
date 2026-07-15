#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        next = nullptr;
    }
};

void inEnd(Node* &head, int val){
    Node* node = new Node(val);
    Node* temp = head;
    while(temp->next != head){
        temp = temp->next;
    }
    temp->next = node;
    node->next = head;
}
void inBeg(Node* &head, int val){
    Node* node = new Node(val);
    Node* temp = head;

    while(temp->next != head){
        temp = temp->next;
    }
    node->next = head;
    temp->next = node;
    head = node;
}

void delBeg(Node* &head){
    if(!head) return;
    if(head->next == head){
        delete head;
        head = nullptr;
        return;
    }

    Node* temp = head;
    while(temp->next != head){
        temp = temp->next;
    }
    temp->next = head->next;
    delete head;
    head = temp->next;
}

void print(Node* head){
    Node* temp = head;
    do{
        cout<<temp->data<<" ";
        temp = temp->next;
    }while(temp != head);
    cout<<endl;
}

int main(){
    int n = 6;
    Node* head = new Node(1);
    head->next = head;
    for(int i = 2; i <= n; i++){
        inEnd(head, i);
    }
    print(head);
    inBeg(head, 0);
    print(head);
    delBeg(head);
    print(head);
}