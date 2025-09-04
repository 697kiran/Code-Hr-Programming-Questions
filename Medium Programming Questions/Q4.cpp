#include <iostream>
using namespace std;

int perfectnum(int num) {
    int sum=0;
    for (int i=1;i<num;i++) {
        if (num%i==0) {
            sum+=i;
        }
    }return sum==num;
}

int main() {
    int number=28;
    if (perfectnum(number)) {
        cout<<number<<" is a perfect number"<<endl;
    }
    else {
        cout<<number<<" is NO perfect number"<<endl;
    }
    return 0;
}