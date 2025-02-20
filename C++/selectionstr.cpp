#include<iostream>
using namespace std;

int main(){
    
    //If else ladder
    int age;
    cout<<"Tell your age : ";
    cin>>age;
    if ((age<18) && (age>10)){
        cout<<"Sorry You can't come to the party !"<<endl;
    }
    else if (age<=10){
        cout<<"Stay at home Kiddo !!"<<endl;

    }
    else {
        cout<<"You can come to the party !"<<endl;

    }
    //Switch case
    switch (age){
        case 18:{
            cout<<"Since you are 18 you will get a return gift also."<<endl;
            break;
        }
        case 23:
            cout<<"Special sweetdish for you since new year is 2023 :)"<<endl;
            break;
        case 17:
            cout<<"Come next year ;D"<<endl;
            break;
        default:
            cout<<"Happy New Year !! :)"<<endl;
            break;
        
    }
}