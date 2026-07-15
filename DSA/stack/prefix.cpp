#include<iostream>
#include<stack>
using namespace std;

int apply(int o1, int o2, char c){
    int ans = 0;
    switch(c){
        case '+':
            ans = o1 + o2;
            break;
        case '-':
            ans = o1 - o2;
            break;
        case '*':
            ans = o1 * o2;
            break;
        case '/':
            ans = o1 / o2;
            break;
    }
    return ans;
}

int prefixEval(string s){
    stack<int> st;

    for(int i = s.size() - 1; i >= 0; i--){
        if(isdigit(s[i])) st.push(s[i] - '0');
        else{
            int o1 = st.top();
            st.pop();
            int o2 = st.top();
            st.pop();
            int x = apply(o1, o2, s[i]);
            st.push(x);
        }
    }

    return st.top();
}

int main(){
    string s = "+*-95/84-*7+32/63";

    int sum = prefixEval(s);
    cout << sum;
}