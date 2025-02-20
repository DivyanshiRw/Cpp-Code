#include<iostream>
#include<string>
using namespace std;

class binary{
    string s;
    public:
         void bin();
         void chk_bin();
         void ones_complement();
         void display();

};

void binary::bin(){
    cout<<"Enter a binary number :"<<endl;
    cin>>s;
    
}

void binary::chk_bin(){
    for (int i=0; i<s.length();i++){
        if (s.at(i)!='0' && s.at(i)!='1'){
           cout<<"Invalid Binary Format";
           exit(0);
        }

    }
}

void binary::ones_complement(){
    
    for (int i=0; i<s.length();i++){
    if (s.at(i)=='0')
       s.at(i)='1';
    else
       s.at(i)='0';

    }

}

void binary::display(){
    cout<<"Displaying your Binary number"<<endl;
    for (int i=0; i<s.length();i++){
        cout<<s.at(i);
    }
    cout<<endl;
}

int main(){
    binary b;
    b.bin();
    b.chk_bin();
    b.display();
    b.ones_complement();
    cout<<"After doing complement ";
    b.display();
    
    return 0;
}