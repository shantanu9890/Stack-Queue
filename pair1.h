template <typename T>
//.h i.e header files cannot contain main function.
// #include copy paste all content of that file in code
//we put that file name in double quote that means the file is in same folder
class pair1
{

private:
    T x;
    T y;

public:
void setX(T x){
    this->x=x;
}
T getX(){
    return x;
}
void setY(T y){
    this->y=y;
}
T getY(){
    return y;
}

};