#include <iostream>
using namespace std;

int countVowels(string str) {
    int count = 0;
    for (char c : str) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            count++;
        }
    }
    return count;
}

int main() {
    string str = "Hello World";
    cout << "Number of vowels: " << countVowels(str) << endl;

    return 0;
}
