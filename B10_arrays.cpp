#include<iostream>
using namespace std;

int countEven(int arr[], int x){
    int count= 0;

    for(int i = 0; i<x; i++){
        if (arr[i]%2 ==0)
        {
            count= count + 1;
            
        }
        
    }
    return count; 
    
}
int main(){
    int x= 6;
    int arr[6]={2,7,10,13,18,21};
    //countEven(arr,x);
    cout<<countEven(arr, x)<<" ";


    return 0; 
}