#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"enter age:";
    cin>>age;

    if (age>=18 && age<=100){
        cout<<"you can vote";
    }
    else if (age<18){
        cout<<"you are not eligible for vote";
    }
    else{
        cout<<"ivalid age";
    }

}