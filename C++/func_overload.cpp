#include<iostream>
using namespace std;

const float pi=3.14;

float volume(int r, int h){
    //volume of cylinder
    return (pi*r*r*h);
}

float volume(int a){
    //volume of cube
    return (a*a*a);
}

float volume(int l, int b, int h){
    //volume of cuboid
    return (l*b*h);
}

int main(){
    cout<<"Volume of cube of side 3 cm is "<<volume(3)<<endl;
    cout<<"Volume of cylinder of radius 4 cm and height 6 cm is "<<volume(4,6)<<endl;
    cout<<"Volume of cuboid of sides 3 cm, 6 cm and 12 cm is "<<volume(3,6,12)<<endl;
    return 0;
}