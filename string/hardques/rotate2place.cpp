#include<iostream>
#include<string>
using namespace std;

void rotateclockwise(string &s) {
    char c = s[s.size() - 1]; // Store the last character
    int index = s.size() - 2;

    // Shift characters right by 1
    while (index >= 0) {
        s[index + 1] = s[index];
        index--;
    }
    
    s[0] = c; // Set the last character to the front
}

void rotateanticlockwise(string &s) {
    char c = s[0]; // Store the first character
    int index = 1;

    // Shift characters left by 1
    while (index < s.size()) {
        s[index - 1] = s[index];
        index++;
    }

    s[s.size() - 1] = c; // Set the first character to the end
}

bool isRotated(string str1, string str2) {
    // If the sizes don't match, return false
    if (str1.size() != str2.size()) return false;

    // Check clockwise rotation
    string clockwise = str1;
    rotateclockwise(clockwise);
    rotateclockwise(clockwise);
    if (clockwise == str2) return true;

    // Check anticlockwise rotation
    string anticlockwise = str1;
    rotateanticlockwise(anticlockwise);
    rotateanticlockwise(anticlockwise);
    if (anticlockwise == str2) return true;

    return false; // Not a rotation by two positions
}

int main() {
    string str1;
    cout << "Enter the first string: ";
    cin >> str1;

    string str2;
    cout << "Enter the second string: ";
    cin >> str2;

    if (isRotated(str1, str2)) {
        cout << "Yes, the second string is a rotation of the first by two positions." << endl;
    } else {
        cout << "No, the second string is not a rotation of the first by two positions." << endl;
    }

    return 0;
}
