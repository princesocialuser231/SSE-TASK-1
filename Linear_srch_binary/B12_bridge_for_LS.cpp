#include <iostream>
using namespace std;

int findNumber(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key){
            return i;
        }
    }   
    
    return -1;
}

int main()
{
    int arr[5] = {10, 25, 7, 40, 15};
    int n = 5;
    int key = 40;
    cout<<findNumber(arr,n,key)<<" ";

    return 0;
}