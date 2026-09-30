#include <iostream>
using namespace std;

int binarySearch(int arr[], int key, int n)
{
    int low = 0, high = n - 1;
    int mid, i=0;
    //for (;low <= high;)
    while (low <= high)
    {
        mid = (low + high) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else

            high = mid - 1;

        
    }
    return -1;
}

int main()
{
    int arr[7] = {5, 10, 15, 20, 25, 30, 35};
    int n = 7;
    int key = 30;

    cout << binarySearch(arr,key,n) << " ";

    return 0;
}