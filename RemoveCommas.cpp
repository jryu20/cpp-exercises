
#include <iostream>
#include <string>
using namespace std;

int main() {
  
    string random_int; // store the number as a string rather than an int
    cout << "Please enter an integer between 1 and 999,999,999. " << endl;
    cin >> random_int; // user input
    
    if (random_int.length() <= 3) // case 1: user inputs a number less than or equal to 999 (no commas need to be removed)
    {
        cout << "Your number with comma(s) removed: " << random_int << endl;
    }
    
    if (random_int.length() >= 5 && random_int.length() <= 7) // case 2: user inputs a number between 1,000 and 999,999 (one comma needs to be removed)
    {
        string fix = random_int.erase(random_int.length() - 4, 1); // position of the comma depends on the length of the string, which is why we use s.length
        cout << "Your number with comma(s) removed: " << fix << endl;
    }
    
    if (random_int.length() >= 9) // case 3: user inputs a number greater than or equal to 1,000,000 (two commas need to be removed)
    {
        string first_fix = random_int.erase(random_int.length() - 8, 1); // first comma
        string second_fix = random_int.erase(random_int.length() - 4, 1); // second comma
        cout << "Your number with comma(s) removed: " << second_fix << endl;
    }
    
    char largest = '0'; // use 0 because we want to locate any digit larger than 0
    for (int i = 0; i < random_int.length(); ++i) // this lets us go through each individual "digit" in the string
    {
        char digit = random_int[i]; // store each digit as a char
        if (digit > largest)
        {
            largest = digit; // if the digit is larger than the one that is already stored in "largest", it substitutes the new digit
        }
    }
    cout << "Largest digit: " << largest << endl;
    
    char smallest = '9'; // use 9 this time because we want to locate any digit smaller than 9, if applicable
    for (int j = 0; j < random_int.length(); ++j) // use a different int j
    {
        char digit = random_int[j];
        if (digit < smallest)
        {
            smallest = digit; // same logic as above
        }
    }
    cout << "Smallest digit: " << smallest << endl;
    
    return 0;
    
}
