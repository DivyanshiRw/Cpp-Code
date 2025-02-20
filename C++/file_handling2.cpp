#include<iostream>
#include<fstream>
 
using namespace std;
 
int main(){
 
              // connecting our file with hout stream
               ofstream hout("sample_file2.txt");
   
               // creating a name string variable and filling it with string entered by the user
              string name;
               cout<<"Enter your name: ";
              cin>>name;
     
             // writing a string to the file
             hout<<name + " is my name.";
             //hout<<"My name is "<<name;      --> will print My while reading file
 
            // disconnecting our file
            hout.close();
            // connecting our file with hin stream
           ifstream hin("sample_file2.txt");
 
          // creating a content string variable and filling it with string present there in the text file
           string content;
            hin>>content;
           cout<<"The content of the file is: "<<content;      
           //we used hin and not getline, it could read just the first word.
 
           // disconnecting our file
           hin.close();
           return 0;
}
