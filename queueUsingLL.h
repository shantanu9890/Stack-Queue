template<typename T>

class node{
    public: 
    T data;
    node*next;
    
    node(T n){
       data=n;
       this->next=nullptr;
    }
};

template<typename T>
class queueUsingLL{
    int sizze;
    node<T>*head;
    node<T>*tail;
    public:
    queueUsingLL(){
        head=nullptr;
        tail=nullptr;
        sizze=0;
    }
    void push(T n){
        node<T>*n1=new node<T>(n);
        if (head==nullptr)
        {
            head=n1;
            tail=n1;
            sizze++;
            return;
            
        }
        
        tail->next=n1;
        tail=n1;
        sizze++;
    }
    void pop(){
        if (head==nullptr)
        {
            cout<<"empty queue"<<endl;
            return;
        }
        node<T>*temp=head->next;
        delete head;
        head=temp;
        sizze--;
    }
    T front(){
        if (head==nullptr)
        {
            cout<<"empty queue"<<endl;
            return 0;
        }
        
        return head->data;
    }
    T back(){
        if (tail==nullptr)
        {
            cout<<"empty queue"<<endl;
            return 0;
        }
        return tail->data;
    }
    bool isempty(){
        return sizze==0;
    }
    int size(){
        return sizze;
    }
};