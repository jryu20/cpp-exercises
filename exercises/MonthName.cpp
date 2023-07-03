
#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string word; // defining a string for the word that the user will input
    int month_number;
    int letter_count;
    
    cout << "Please enter a word (5 letter minimum). " << endl;
    cin >> word;
    cout << "Please enter a month number (1-12). " << endl;
    cin >> month_number;
    cout << "Please enter 1, 2, or 3. " << endl;
    cin >> letter_count;
    
    string all_months = "January  February March    April    May      June     July     August   SeptemberOctober  November December "; // this long string with white spaces in the middle give each month name 9 spaces exactly
    cout << "Month: " << all_months.substr((month_number - 1) * 9, 9) << endl; // since January starts at the 0th position, we want to subtract one from the month number and multiply that by 9 to find the initial position (starting letter) of that month
    
    cout << "First " << letter_count << " letter(s) of your month: " << all_months.substr((month_number - 1) * 9, letter_count) << endl; // similar as the line above except we are only printing the first 1, 2, or 3 digits depending on what the user inputs
    
    cout << "Word: " << word << endl;
    
    cout << "Last " << letter_count << " letter(s) of your word: " << word.substr(word.length() - letter_count, letter_count) << endl; // use the length of the string and go backwards 1, 2, or 3 digits depending on what the user inputs

    return 0;
    
}
