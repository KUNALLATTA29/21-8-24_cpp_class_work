#include<bits/stdc++.h>
using namespace std;

bool sol(stack<char> st){
    stack<char> tem = st;
    stack<char> tem2;
    while(!tem.empty()){
        tem2.push(tem.top());
        tem.pop();
    }
    while(!st.empty()){
        if(st.top()!=tem2.top()){
            return false;
        }
        st.pop();
        tem2.pop();
    }
    return true;
}

int main(){
    
    stack<char> st;
    string s = "kunal";
    
    for(auto it:s){
        st.push(it);
    }
    
    if(sol(st)){
        cout<<"it is palindrome";
    }else{
        cout<<"it's not a palindrome";
    }
    
    return 0;
}