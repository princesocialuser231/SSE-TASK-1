#include <iostream>
using namespace std;


void printArray(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {

        cout << arr[i] << " ";
    }
}
int main()
{   int n=5;
    int arr[5]= {5,10,15,20,25};

    printArray(arr, n);

    return 0;
}