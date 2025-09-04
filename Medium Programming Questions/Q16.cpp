#include <iostream>
#include <string>
using namespace std;

void countchar(string str) {
    for(int i=0;i<str.length();i++) {
        char ch = str[i];
        int count = 0;

        for(int j=0;j<str.length();j++) {
            if(str[j]==ch) {
                count++;
            }
        }

        bool printed=false;
        for(int k=0;k<i;k++) {
            if(str[k]==ch) {
                printed = true;
                break;
            }
        }

        if (!printed) {
            cout << ch << ": " << count << endl;
        }
    }
}

int main() {
    string str = "hello";
    countchar(str);
    return 0;
}
