#include<iostream>
#include<string>
#include<vector>

using namespace std;

//1. String Reverse
//Question:
//Reverse Words in a String

//Given an input string s, reverse the order of the words.
//A word is defined as a sequence of non-space characters.
//The words in s will be separated by at least one space.
//Return a string of the words in reverse order, joined by a single space.

// Example:
// Input: " the sky is blue "
// Output: "blue is sky the"

int main1() {
    string s = "My name is Khuzaima";
    vector<int> v;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ' ') {
            v.push_back(i);
        }
    }

    int end = s.size();
    while (!v.empty()) {
        int start = v.back() + 1;
        for (int i = start; i < end; i++) {
            cout << s[i];
        }
        cout << " ";
        end = v.back();
        v.pop_back();
    }

    // Print the first word
    for (int i = 0; i < end; i++) {
        cout << s[i];
    }

    cout << endl;
    return 0;
}




// 2. Valid Palindrome
// 🧩 Question:
// Valid Palindrome II

// Given a string s, return true if the string can be made a palindrome by removing at most one character from it.

// 📌 Example:
// Input: "abca"
// Output: true
// (You can remove 'b' or 'c')

// int main(){
//     cout<<endl;
    
//     cout<<endl;
//     return 0;
// }


// 3. Longest Substring Match
// 🧩 Question:
// Longest Common Substring

// Given two strings text1 and text2, return the length of their longest common substring.
// (Not subsequence — substring means the characters must be contiguous.)

// 📌 Example:
// Input: text1 = "abcde", text2 = "abfce"
// Output: 2
// (Substring "ab" is common)

// 4. Repeating Characters
// 🧩 Question:
// Longest Substring Without Repeating Characters

// Given a string s, find the length of the longest substring without repeating characters.

// 📌 Example:
// Input: "abcabcbb"
// Output: 3
// (The answer is "abc")

// 5. Group Anagrams
// 🧩 Question:
// Group Anagrams

// Given an array of strings, group the anagrams together. You can return the answer in any order.

// 📌 Example:
// Input: ["eat", "tea", "tan", "ate", "nat", "bat"]
// Output: [["eat","tea","ate"],["tan","nat"],["bat"]]

// 6. Longest Palindromic Substring
// 🧩 Question:
// Longest Palindromic Substring

// Given a string s, return the longest palindromic substring in s.

// 📌 Example:
// Input: "babad"
// Output: "bab" (or "aba")

