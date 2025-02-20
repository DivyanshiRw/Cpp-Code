#include<iostream>
#include<fstream>

using namespace std;

int main(){
   string st = "Hey! This is for understanding File Handling.";
    // Opening files using constructor and writing it
    ofstream out("Sample_file.txt"); // Write operation
    out<<st;
    out.close();
    

    string st2;
    // Opening files using constructor and reading it
    ifstream in("Sample_file.txt"); // Read operation
    in>>st2;
    cout<<st2;
    getline(in, st2);  
    cout<<st2;
    in.close();

    return 0;
}
