#include <iostream>
using namespace std;

int main() {
    int a[6] = {2, 3, 4, 5, 6, 7};
    int sum;

    for (int i = 0; i < 4; i++) {
        cout << "hello" << endl;
        sum = a[i] + 2;
        cout << "Sum = " << sum << endl;
    }

    cout << "Sum = " << sum;
    return 0;
}