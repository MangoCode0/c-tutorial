#include<iostream>
using namespace std;

int main(){
    int a =20 , b=30;//swapping two numbers without third variable

    a= a+b;
    b= a-b;
    a=a-b;
    cout<< a<<endl;
    cout<< b;
}