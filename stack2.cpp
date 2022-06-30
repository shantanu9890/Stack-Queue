#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#include "stackUsingLL.h"
//file with .h(header file) cannot have main function.while .cpp can have.
//but if we keep it .cpp it can have main function hence to avoid this use .h;

int main(){
    stackUsingLL<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.pop();

    cout<<s.top()<<endl;
    cout<<s.size()<<endl;
    cout<<s.isempty()<<endl;
    cout<<"\n\n";

    stackUsingLL <char> s1;
    s1.pop();
    s1.push('a');
    s1.pop();
    cout<<s1.top()<<endl;
    cout<<s1.size()<<endl;
    s1.push('b');
    cout<<s1.top()<<endl;
    cout<<s1.size()<<endl;
    


}