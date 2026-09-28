#include <iostream>
using namespace std;

void findNumber(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 40)
            cout << "3" << endl;

        if (arr[i] == 25)

            cout << "1" << endl;
        if (arr[i] == 10)

            cout << "1" << endl;

        if (arr[i] == 7)

            cout << "2" << endl;

        else
            cout << "4" << endl;
    }
}

int main()
{
    int arr[5] = {10, 25, 7, 40, 15};
    int n = 5;
    int key = 6;
    findNumber(arr,n,key);

    return 0;
}