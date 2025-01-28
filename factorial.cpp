using namespace std;
#include<iostream>

int factorial(int n){
    int a= 1;
    for(int i=1; i<=n; i++){
        a= a*i;
    }
    return a;
}
int main(){
    int num;
    cout<<"enter number:";
    cin>>num;
    int  c = factorial(num);
    cout<<"the factorial of "<<num<<" is "<<c<<endl;
    return 0;
}