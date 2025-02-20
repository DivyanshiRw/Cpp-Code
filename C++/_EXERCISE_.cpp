#include<iostream>
#include<cmath>
using namespace std;

/*
Create 2 classes:
    1. SimpleCalculator - Takes input of 2 numbers using a utility function and performs +, -, *, / and displays 
    the results using another function.
    2. ScientificCalculator - Takes input of  number using a utility function and performs any four 
    scientific operations of your choice and displays the results using another function.

    Create another class HybridCalculator and inherit it using these 2 classes:
    Q1. What type of Inheritance are you using? 
    --->  Multiple Inheritance
    Q2. Which mode of Inheritance are you using?
    --->  Public Mode
    Q3. Create an object of HybridCalculator and display results of the simple and scientific calculator.
    --->  CREATED...
    Q4. How is code reusability implemented?
    --->  Code reusability is implemented as we reuse the typed code in HybridCalculator.
*/

class simple_calc{
       protected:
       float a,b;
       public:
           float num1, num2;
            void get_num(){
                num1=a;
                num2=b;
                cout<<"Enter number1 : "<<endl;
                cin>>num1;
                cout<<"Enter number2 : "<<endl;
                cin>>num2;
            }

            void result(){
                cout<<"Enter operation (+, -, *, /)"<<endl;
                char choice;
                cin>>choice;
                switch (choice){
                    case '+':
                       cout<<(num1+num2)<<endl;
                       break;
                    case '-':
                        cout<<(num1-num2)<<endl;
                        break;

                    case '*':
                        cout<<(num1*num2)<<endl;
                        break;

                    case '/':
                        cout<<(num1/num2)<<endl;
                        break;
                     
                }

            }
};

class scientific_calc{
      protected:
       float x;
       public:
           float num;
            void get_num(){
                num=x;
                cout<<"Enter number : "<<endl;
                cin>>num;
                
            }

        void result(){
            cout<<"Enter operation from the following :"<<endl;
            cout<<"Enter 1 to find sin value of the number. "<<endl;
            cout<<"Enter 2 to find square root value of the number. "<<endl;
            cout<<"Enter 3 to find cuberoot value of the number. "<<endl;
            cout<<"Enter 4 to find cos value of the number. "<<endl;
            int CHOICE;
            cin>>CHOICE;
            switch (CHOICE){
                    case 1:
                       num=num*3.14159/180;
                       cout<<sin(num)<<endl;
                       break;
                    case 2:
                        cout<<sqrt(num)<<endl;
                        break;

                    case 3:
                        cout<<cbrt(num)<<endl;
                        break;

                    case 4:
                        num=num*3.14159/180;
                        cout<<cos(num)<<endl;
                        break;
                     
                }

        }
};

class hybrid_calculator : public simple_calc, public scientific_calc{
      public:
      void show(){
        cout<<"Would you like to perform basic or scientific calculation ? "<<endl;
        cout<<"Enter 'b' for Basic Calculation OR 's' for Scientific Calculation..."<<endl;
        char chosen;
        cin>>chosen;
        switch (chosen){
            case 'b':
             simple_calc::get_num();
             simple_calc::result();
             break;
            case 's':
            scientific_calc::get_num();
            scientific_calc::result();
            break;
            default:
               cout<<"Wrong operation!!"<<endl;
        }

      }
};

int main(){
    simple_calc s;
    cout<<"Using Simple Calculator"<<endl;
    s.get_num();
    s.result();
    
    cout<<"Using Scientific Calculator"<<endl;
    scientific_calc sci;
    sci.get_num();
    sci.result();

    cout<<"Using Hybrid Calculator"<<endl;
    hybrid_calculator h;
    h.show();

    return 0;
}