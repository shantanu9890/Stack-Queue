#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#include "stackUsingArray.h"


int main(){

  stackUsingArray<int> s;
  
  s.push(11);
  s.push(12);
  s.push(13);
  s.push(14);
  cout<<s.top()<<endl;
  s.pop();
  s.pop();
  cout<<s.top()<<endl;
  cout<<s.isempty()<<endl;
  s.push(98);
  s.push(99);
  s.push(999);
  s.pop();
  s.push(100);
  s.push(1000);
  s.push(10000);
  cout<<s.top()<<endl;
  cout<<"size is:"<<s.size()<<endl;
  cout<<"\n\n";

  
  stackUsingArray<string> s1;
  
  s1.push("abcd");
  s1.push("abc");
  s1.push("abd");
  s1.push("acd");
  cout<<s1.top()<<endl;
  s1.pop();
  s1.pop();
  cout<<s1.top()<<endl;
  cout<<"\n\n";
  
  stackUsingArray<char> s2;
  
  s2.push('A');
  s2.push('B');
  s2.push('c');
  s2.push('d');
  cout<<s2.top()<<endl;
  s2.pop();
  s2.pop();
  cout<<s2.top()<<endl;


}
