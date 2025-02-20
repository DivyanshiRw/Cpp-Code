#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> vec1;         //zero length vector
    vector<int> v(6, 3);
    int element, size;
    cout<<"Enter size of your vector: ";
    cin>>size;

    for (int i=0; i<size; i++){
        cout<<"Enter the element to be added to this vector: ";
        cin>>element;
        vec1.push_back(element);
        
    }

    vec1.pop_back();
    display(vec1);
    vector<int> :: iterator iter= vec1.begin();
    vec1.insert(iter+1,3,50);
    display(vec1);
    display(v);
    cout<<v.size();

    return 0;

}