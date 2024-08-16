#include <iostream>
#include <string>
using namespace std;

int stringToInt(string str) {
    int num = 0;
    bool isNegative = false;

    if (str[0] == '-') {
        isNegative = true;
        str = str.substr(1);
    }

    for (char c : str) {
        num = num * 10 + (c - '0');
    }

    return isNegative ? -num : num;
}

int main() {
    string str = "-12345";

    cout << "Converted integer: " << stringToInt(str) << endl;

    return 0;
}
