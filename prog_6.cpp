#include<bits/stdc++.h>
using namespace std;

void sol(stack<int> &st){
    int k = st.top();
    st.push(k);
}

int main(){
    
    stack<int> st;
    
    for(int i=1;i<=5;i++){
        st.push(i);
    }
    sol(st);
    
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    
    return 0;
}