#include<iostream>
#include<string>
#include<vector>
using namespace std;

bool checkIfPangram(string sentence) {
    vector<bool> alpha(26, 0);  // Vector to keep track of all alphabet letters
    
    // Iterate over the sentence
    for (int i = 0; i < sentence.size(); i++) {
        // Mark the corresponding letter as seen
        if (sentence[i] >= 'a' && sentence[i] <= 'z') {
            alpha[sentence[i] - 'a'] = 1;
        }
    }

    // Check if all letters are marked
    for (int i = 0; i < 26; i++) {
        if (alpha[i] == 0) {
            return false;  // If any letter is missing, return false
        }
    }
    return true;  // All letters are present
}

int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);  // Get input from the user

    if (checkIfPangram(sentence)) {
        cout << "Yes, the sentence is a pangram." << endl;
    } else {
        cout << "No, the sentence is not a pangram." << endl;
    }

    return 0;
}
