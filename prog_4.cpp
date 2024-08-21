#include<bits/stdc++.h>
using namespace std;

void sol(stack<int> st){
    set<int> arr;
    while(!st.empty()){
        if(st.top()%2==0){
            arr.insert(st.top());
            st.pop();
        }else{
            st.pop();
        }
    }
    for(auto it:arr){
        cout<<it<<" ";
    }
}

int main(){
    
    stack<int> st;
    
    for(int i=1;i<=10;i++){
        st.push(i);
    }
    sol(st);
    
    return 0;
}