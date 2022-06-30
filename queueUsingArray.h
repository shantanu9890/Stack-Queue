#include <iostream>
#include <bits/stdc++.h>
using namespace std;
template <typename T>

class queueUsingArray
{

    T data;
    int firstIndex;
    int nextIndex;
    int capacity;
    int sizze;
    T *a;

    void increase_capacity(){
         T*b=new T[capacity*2];
         int j=0;
         for (int i = firstIndex; i < capacity; i++)
         {
            b[j]=a[i];
            j++;
         }
         for (int i = 0; i < firstIndex; i++)
         {
            b[j]=a[i];
         }
        
         delete []a;
         a=b;
         firstIndex=0;
         nextIndex=capacity;
         capacity*=2;
    }

public:
    queueUsingArray()
    {
        firstIndex = 0;
        nextIndex = 0;
        sizze = 0;
        capacity = 4;
        a = new T[capacity];
    }
    T back()
    {
        if (sizze == 0)
        {
            return 0;
        }
        if(nextIndex==0){
            return a[capacity-1];
        }
        return a[nextIndex - 1];
    }
    T front()
    {
        if (sizze == 0)
        {
            cout<<"empty queue"<<endl;
            return 0;
        }
        return a[firstIndex];
    }
    int size()
    {
        return sizze;
    }
    bool isempty()
    {
        return sizze == 0;
    }
    void push(T n)
    {
      if(firstIndex==-1){
          firstIndex=0;
      }  
      if(sizze==capacity){
          increase_capacity();
          a[nextIndex]=n;
          nextIndex++;
          sizze++;
          return;
      }
      if(nextIndex==capacity){
          nextIndex=0;
      }
      a[nextIndex]=n;
      nextIndex++;
      sizze++;
    }

    void pop()
    {
        if(sizze==0){
            cout<<"empty queue"<<endl;
            return;
        }
        if(firstIndex==capacity){
            firstIndex=0;
        }
        a[firstIndex]=0;
        firstIndex++;
        sizze--;
    }
};