#include <iostream>
#include <bits/stdc++.h>
#include <stack>
using namespace std;

int main(){
    stack <int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.size()<<endl;
    cout<<s.empty()<<endl;
    cout<<s.top()<<endl;
}