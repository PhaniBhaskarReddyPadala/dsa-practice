#include<iostream>
using namespace std;

int main(){
    int arr[7]={3,5,1,12,36,32,4};
    int key=12;
    int f=0;
    for(int i=0;i<7;i++){
        if(arr[i]==key){
            f=1;
            if(arr[i]>10){
            cout << arr[i]*2;
            }else{
                cout << arr[i]/2;
            }
        }
    }
        if(f==0){
            cout << "-1";
        }
    
    return 0;
}