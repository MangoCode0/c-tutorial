#include<iostream>
using namespace std;

int main(){
    int arr[5];
    for (int i=0;i<5;i++){
        cout<<"enter the marks of"<<i<<"th student"<<endl;
        cin>>arr[i];
    }
    for (int i=0;i<5;i++){
        cout<<" marks of"<<i<<"th student is"<<arr[i]<<endl;
    }

    return 0;
}