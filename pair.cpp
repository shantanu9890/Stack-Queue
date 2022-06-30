#include <iostream>
#include "pair1.h"
#include "pair2.h"
//.h i.e header files cannot contain main function.
// #include copy paste all content of that file in code
//we put that file name in double quote that means the file is in same folder
using namespace std;

int main(){


    pair1 <int>p1;
    p1.setX(1);
    p1.setY(2);
    cout<<p1.getX()<<endl;
    cout<<p1.getY()<<endl;
    cout<<"\n";

    pair2 <int , double> p2;
    p2.setX(10);
    p2.setY(20.199);
    cout<<p2.getX()<<endl;
    cout<<p2.getY()<<endl;
    cout<<"\n";

    pair2< pair2<char,double>, int > p3;
    p3.setY(100);

    pair2<char,double>p4;
    p4.setX('s');
    p4.setY(99.990);
    cout<<p4.getX()<<endl;
    cout<<p4.getY()<<endl;
    cout<<"\n";

    p3.setX(p4);
    cout<<p3.getY()<<" "<<p3.getX().getX()<<" "<<p3.getX().getY()<<endl;
    //p3.getX() = p4;




}