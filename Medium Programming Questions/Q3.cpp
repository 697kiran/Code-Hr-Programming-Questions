#include <iostream>
using namespace std;

int pallindrome(int num) {
    int original =num;
    int reversed=0;

    while (num>0) {
        reversed=reversed*10+num%10;
        num=num/10;
    }
    return original==reversed;
}

int main() {
    int num=143;
    if (pallindrome(num)) {
        cout<<num<<" is a pallindrome"<<endl;
    }else {
        cout<<num<<" is not a pallindrome"<<endl;
    }
}