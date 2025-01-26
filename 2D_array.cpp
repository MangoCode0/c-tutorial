using namespace std;
#include<iostream>

int main(){
    int arr2d[3][4]={
        {1,2,3,4},
        {3,4,5,6,}
    };
    for (int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<"the value at"<<i<<","<<j<<"is"<<arr2d[i][j]<< endl;
        }
    }
}

