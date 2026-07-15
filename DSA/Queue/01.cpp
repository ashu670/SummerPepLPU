#include<iostream>
#include<stack>
using namespace std;


class Queue{
    public:
    int *arr;
    int front;
    int rear;
    int size;

    Queue(int size){
        this->size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    void enqueue(int val){
        if(rear == size - 1) {cout<<"Queue UnderFlow"<<endl; return;}

        if(front == -1){
            front++;
        }
        rear++;
        arr[rear] = val;
    }

    void dequeue(){
        if(front == -1 || front > rear) {cout<<"Queue UnderFlow"<<endl; return;}
        front++;
    }

    int getFront(){
        if(front != -1 || front > rear) {cout<<"UnderFlow"<<endl; return -1;}

        return arr[front];
    }
};

void revstr(string &s){
    stack<string> st;
    string temp = "";

    for(int i = 0; i < s.size(); i++){
        if(s[i] == ' '){
            st.push(temp);
            temp = "";
            continue;
        }
        temp += s[i];
    }
    st.push(temp);
    temp = "";

    while(!st.empty()){
        temp += st.top();
        temp += ' ';
        st.pop();
    }

    s = temp;
}

int main(){
    // stack<int> st;
    // st.push(1);
    // st.push(2);
    // st.push(3);
    // st.push(4);
    // st.push(5);

    // while(!st.empty()){
    //     cout<<st.top()<<endl;
    //     st.pop();
    // }

    string s = "hello world !";
    revstr(s);
    cout<<s;
}