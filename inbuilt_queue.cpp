#include <iostream>
#include <bits/stdc++.h>
#include <queue>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
cin.tie(NULL);

queue<double>q;

q.push(10.44);
q.push(20.44);
q.push(30.44);
q.push(40.44);
q.push(50.44);

q.pop();
cout<<q.front()<<endl;
cout<<q.back()<<endl;
cout<<q.size()<<endl;
cout<<q.empty()<<endl;




return 0;
}