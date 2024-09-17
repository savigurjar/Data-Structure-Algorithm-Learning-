#include <iostream>
#include <string>
#include <vector>
using namespace std;

string sortString(string s) {
    vector<int> alpha(26, 0);  // Frequency array to count occurrences of each letter

    // Count frequency of each character
    for (int i = 0; i < s.size(); i++) {
        alpha[s[i] - 'a']++;
    }
    
    string ans;  // String to store the result
    
    // Rebuild the string in alphabetical order
    for (int i = 0; i < 26; i++) {
        char c = 'a' + i;  // Get the current letter
        while (alpha[i] > 0) {  // Append the letter according to its frequency
            ans += c;
            alpha[i]--;
        }
    }
    
    return ans;  // Return the sorted string
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;  // Input the string from user

    string sortedStr = sortString(s);
    cout << "Sorted string: " << sortedStr << endl;  // Output the sorted string

    return 0;
}
