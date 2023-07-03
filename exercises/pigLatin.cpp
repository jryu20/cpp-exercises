
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

/**
 checks whether the input character is a letter
 @param c a character
 @return true if c is a letter
 */

bool is_alpha(char c) {
    return ((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z'));
}

const string punc = "().,!;:?'\"";
const string vowels = "aeiou"; // set two const strings here

/**
 checks whether the input character is a punctuation mark
 @param c a character
 @return true if c is a punctuation mark
 */

bool is_punc(char c) {
    for (auto x : punc) // x serves as a placeholder for the string punc
    {
        if (c == x) {
            return true; // returns true if c is a punctuation mark
        }
    }
    return false;
}

/**
 checks whether the input character is a vowel
 @param c a character
 @return true if c is a vowel
 */

bool is_vowel(char c) {
    for (auto x : vowels) // same thing as the one above except using string vowels
    {
        if (c == x) {
            return true;
        }
    }
    return false;
}

/**
 changes all upper case letters in a string to lower case
 @param s a string
 */

void make_lower(string& s) {
    size_t N = s.length();
    for (size_t i = 0; i < N; ++i) // run through each letter in the string
    {
        if ('A' <= s[i] && s[i] < 'Z') {
                s[i] += 32; // 'a' is 32 characters after 'A'
        }
    }
}

/**
 changes a string into a vector of strings by splitting the string up into each individual word
 @param s a string (reference to a const)
 @return the wordList, or the vector of strings that has each individual word stored in it
 */

vector<string> words(const string& s) {
    vector<string> wordList;
    int counter = 0;
    for (size_t i = 0; i < s.size(); ++i) {
        if (s[i] != ' ') {
            counter += 1; // use the counter to locate all the letters inside the string
        }
        else if (counter > 0) // this runs if there is an empty space in the string or when the word ends
        {
            wordList.push_back(s.substr(i - counter, counter)); // use substr and counter to extract the word before the empty space
            counter = 0; // reset counter
        }
    }
    if (counter > 0) // put this in case there is no space at the end of the last word
    {
        wordList.push_back(s.substr(s.size() - counter, counter));
    }
    return wordList;
}

/**
 changes the content inside the string using Pig Latin rules
 @param s a string (reference to a const)
 @return the updated string with Pig Latin words
 */

string word_to_PL (const string& s) {
    size_t punc = s.size(); // we want to keep the punctuation at the end of the word
    for (size_t i = s.size() - 1; i >= 0; --i) // this checks the string in reverse order for a punctuation mark
    {
        if (is_punc(s[i])) {
            --punc;
        }
        else {
            break;
        }
    }
    string word = s.substr(0, punc); // extract the word using substr
    if (word.size() == 0) {
        return s;
    }
    
    if (!is_vowel(word[0])) // case 1: the first letter is a consonant
    {
        return word.substr(1, word.size() - 1) + word.substr(0,1) + "ay" + s.substr(punc);
    }
    
    else {
        if (is_vowel(word[word.size() - 1])) // case 2: the first letter is a vowel and the last letter is also a vowel
        {
            return word + "yay" + s.substr(punc);
        }
        else // case 3: the first letter is a vowel and the last letter is a consonant
        {
            return word + "ay" + s.substr(punc);
        }
    }
}

/**
 transforms a vector of strings into Pig Latin
 @param v vector of strings (reference to a const)
 @return vector of strings with Pig Latin words
 */

vector<string> vec_to_PL(const vector<string>& v) {
    string s1;
    vector<string> x;
    for (size_t i = 0; i < v.size(); ++i) {
        s1 = v[i]; // put each vector item into a temp string
        string s2 = word_to_PL(s1); // change the temp string into Pig Latin and store in another string
        x.push_back(s2); // push back the translated string into a new vector
    }
    return x;
}

/**
 builds a single string from a vector of strings
 @param v vector of strings (reference to a const)
 @return the single combined string
 */

string build_paragraph(const vector<string>& v) {
    string paragraph;
    for (size_t i = 0; i < v.size(); ++i) {
        paragraph += v[i]; // add each string in the vector to the paragraph
        paragraph += " "; // add a space in between each item
    }
    return paragraph;
 }


int main() {

    ifstream in_file;
    in_file.open("Gettysburg.txt"); // open the text file
    
    if (in_file.fail()) {
        cout << "error" << endl;
        return 1;
    }
    
    else {
        string s;
        getline(in_file, s); // use getline to read in the file
        make_lower(s); // make everything lower case
        vector<string> v1 = words(s); // v1 will be a vector of strings that has all the original words
        vector<string> v2 = vec_to_PL(v1); // v2 will be a vector of strings that has all the translated Pig Latin words
        string s2 = build_paragraph(v2); // s2 will be the newly constructed singular string
        ofstream out_file;
        out_file.open("ettysburggay.txt"); // open a new text file with the updated Pig Latin
        out_file << s2;
        
    }
    
    return 0;
}
