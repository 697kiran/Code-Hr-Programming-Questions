#include <iostream>
using namespace std;

bool isValidTriangle(int angle1,int angle2,int angle3) {
    return (angle1 + angle2 + angle3==180) &&
           (angle1>0 && angle2>0 && angle3>0);
}

int main() {
    int a1 = 60, a2 = 60, a3 = 60;
    if(isValidTriangle(a1, a2, a3))
        cout << "Triangle with angles " << a1 << ", " << a2 << ", " << a3 << " is valid" << endl;
    else
        cout << "Triangle with angles " << a1 << ", " << a2 << ", " << a3 << " is invalid" << endl;
    return 0;
}