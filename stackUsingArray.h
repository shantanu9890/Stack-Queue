template <typename T>

class stackUsingArray{

T*data;
int nextindex;
int capacity;
public:

stackUsingArray(){
   data=new T[4];
   capacity=4;
   nextindex=0;
}

bool isempty(){
    return nextindex==0;
}

int size(){
    return nextindex;
}

T top(){
    if (isempty())
    {
        cout<<"stack is full"<<endl;
        return 0;
    }
    
    return data[nextindex-1];
}

void push(T n){
    if (nextindex==capacity)
    {
       
        T*newdata=new T[capacity*2];
        for(int i=0;i<capacity;i++){
             newdata[i]=data[i];
        }
        capacity*=2;
        delete data;
        data=newdata;
    }
    
    data[nextindex]=n;
    nextindex++;
}

void pop(){
    if (isempty())
    {
        cout<<"stack is empty"<<endl;
        return ;
    }
    nextindex--;
}
 
};