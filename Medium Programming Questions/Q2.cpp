#include <iostream>
using namespace std;

int findLargest(int a, int b, int c) {
    if(a >= b && a >= c)
        return a;
    else if(b >= a && b >= c)
        return b;
    else
        return c;
}

int main() {
    int a = 10, b = 25, c = 15;
    cout << "Largest among " << a << ", " << b << ", " << c << " is: " << findLargest(a, b, c) << endl;
    return 0;
}
