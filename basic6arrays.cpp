#include <iostream>
using namespace std;

int main() {
    int a[6] = {12, 45, 7, 89, 34, 21};
    int max = a[0];

    for (int i = 1; i < 6; i++) {
        if (a[i] > max)
            max = a[i];
    }

    cout << "Largest = " << max;
    return 0;
}