#include<iostream>
using namespace std;


int LinearSearch(int arr[], int n, int key){

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key){
            return i;
        }
    }
    

    return -1;
}
int main(){
    int arr[7]={5,10,15,20,25,30,35};
    int n=7, key;

    cout<<"Enter your key no from 5 to 35 ";
    cin>>key;
    cout<<LinearSearch(arr, n, key)<<" ";
    return 0;
}