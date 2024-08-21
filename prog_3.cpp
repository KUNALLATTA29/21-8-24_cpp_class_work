#include<bits/stdc++.h>
using namespace std;

double sol(stack<int> st){
    double k =0;
    double l = st.size();
    while(!st.empty()){
        k+=st.top();
        st.pop();
    }
    return k/l;
}

int main(){
    
    stack<int> st;
    
    for(int i=1;i<=20;i++){
        st.push(i);
    }
    cout<<sol(st);
    
    return 0;
}