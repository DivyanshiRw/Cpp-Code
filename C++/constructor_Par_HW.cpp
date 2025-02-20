#include<iostream>
#include<cmath>
using namespace std;

class point{
      int x,y;
      public:
      friend void distance(point, point);
      point(int a, int b){
        x=a;
        y=b;
      }

      void display(){
        cout<<"The coordinates are : ("<<x<<", "<<y<<")"<<endl;

      }
};

void distance(point p1, point p2){
         float distance=sqrt(pow((p2.x-p1.x),2)+pow((p2.y-p1.y),2));
         cout<<"Distance between given points is : "<<distance<<endl;

}

int main(){
    point p(1,2);
    point q(4,6);
    distance(p,q);

    
    return 0;
}

