#include<bits/stdc++.h>
using namespace std;

bool sol(string s){
    stack<char> tem;
    for(auto it:s){
        if(it=='{' || it=='[' || it=='('){
            tem.push(it);
        }else{
            if(tem.empty()){
                return false;
            }
            char k = tem.top();
            tem.pop();
            if(it=='(' && k!=')' ||
                     it=='{' && k!='}' ||
                     it=='[' && k!=']'
                    ){
                return false;
            }
        }
    }
    return tem.empty();
}

int main(){
    
    string s = "{[()]]}";
    if(sol(s)){
        cout<<"balanced";
    }else{
        cout<<"not balanced";
    }
    
    
    
    return 0;
}