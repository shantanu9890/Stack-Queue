template <typename T,typename V>

class pair2{
   
   T x;
   V y;
   
   public:

   void setX(T x){this->x=x;}
   void setY(V y){this->y=y;}
   T getX(){
       return x;
   }
   V getY(){
       return y;
   }


};