#include <iostream>
using namespace std;

string getTriangleType(int side1, int side2, int side3) {
    if(side1 == side2 && side2 == side3)
        return "Equilateral";
    else if(side1 == side2 || side2 == side3 || side1 == side3)
        return "Isosceles";
    else
        return "Scalene";
}

int main() {
    int s1 = 3, s2 = 4, s3 = 5;
    cout << "Triangle with sides " << s1 << ", " << s2 << ", " << s3
         << " is: " << getTriangleType(s1, s2, s3) << endl;
    return 0;
}
