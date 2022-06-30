template <typename T>
//we must write Node<T> every time in place of Node except constructor;
class Node
{
public:
    T data;
    Node <T>*next;
    Node(T data){
        this->data=data;
        this->next=nullptr;
    }
    
};


template <typename T>//need to define for each class;
class stackUsingLL
{
    Node<T> *head=nullptr ;
    int count;

public:

    stackUsingLL()
    {
        count = 0;
        head=nullptr;
    }
    void push(T n)
    {
        count++;
        Node<T> *n1 = new Node<T>(n);
        n1->next = head;
        head = n1;
    }
    void pop()
    {
        if (head == nullptr)
        {
            cout << "Empty stack" << endl;
            return;
        }
        if (head->next == nullptr)
        {
            delete head;
            head = nullptr;
            count = 0;
            return;
        }
        Node<T> *temp = head->next;
        delete head;
        head = temp;
        count--;
    }
    bool isempty()
    {
        return head == nullptr;
    }
    T top()
    {
        if(head==nullptr){
            return 0;
        }
        return head->data;
    }
    int size()
    {
        return count;
    }
};