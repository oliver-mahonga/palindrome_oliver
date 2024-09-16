#include <iostream>
#include <string>

using namespace std;

bool is_palindrome(const string& text) {
    int len = text.length();
    for (int i = 0; i < len / 2; ++i) {
        if (text[i] != text[len - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    string word;
    cout << "Enter a word to check if it is palindrome: ";
    cin >> word;

    if (is_palindrome(word)) {
        cout << word << " is a palindrome." << endl;
    } else {
        cout << word << " is not a palindrome." << endl;
    }

    return 0;
}
