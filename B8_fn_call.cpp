#include <iostream>
using namespace std;

long long factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

int add(int x, int y) {
    return x + y;
}

int main() {
    int a, b;
    cout << "enter integer a and b ";
    cin >> a >> b;
    cout << "factorial of a: " << factorial(a) << endl;
    cout << "sum: " << add(a, b) << endl;
    return 0;
}
