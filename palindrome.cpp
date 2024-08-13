#include <iostream>
using namespace std;

//reversing the word
string pal(string word , int size){

    int start = 0;
    int end = size - 1;

    while(start < end){
        int temp = word[start];
        word[start] = word[end];
        word[end] = temp;

        start++;
        end--;
    }
    return word;
}

int main(){

    string word;
    int size;

    cout<< "Enter a word :";
    cin >> word;

    size = word.length();
    
    if(pal(word,size) == word){
        cout<< "the word is a palindrome";
    }    
    else{
        cout<< "it is not a palindrome";
    }
    return 0;
}