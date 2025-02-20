#include<iostream>
using namespace std;

class shop{
     int itemId[100];
     int itemPrice[100];
     int counter;
public:
      void initcounter(){counter=0;}
      void setPrice(void);
      void displayPrice();

};

void shop:: setPrice(){
    cout<<"Enter ID of your item no. "<<counter+1<<endl;
    cin>>itemId[counter];
    cout<<"Enter price of your item : "<<endl;
    cin>>itemPrice[counter];
    counter++;

}

void shop:: displayPrice(){
    for (int i=0; i<counter; i++){
        cout<<"The price of item with item ID "<<itemId[i]<<" is "<<itemPrice[i]<<endl;
    }
}


int main(){
    shop dukaan;
    dukaan.initcounter();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.displayPrice();
    
    return 0;
}