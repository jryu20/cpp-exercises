
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    
    int x; // defining x as an integer
    cout << "Please enter a two digit number. (The smallest number allowed is 10 and largest allowed is 99.)" << endl;
    cin >> x; // user will input here
    cout << "Your number is " << x << endl; // output the number exactly as it was inputted
    
    int tens_digit; // defining the tens digit as an integer
    tens_digit = x / 10; // int divided by int will result in an int. this works because the real answer will have its decimal place truncated.
    cout << "The tens digit is: " << tens_digit << endl;
    
    int ones_digit; // defining the ones digit as an integer
    ones_digit = x % 10; // using modulus works here because the ones digit will always be the remainder when the number is divided by 10
    cout << "The ones digit is: " << ones_digit << endl;
    
    int larger_digit = max(tens_digit, ones_digit); // using the max function
    cout << "The larger digit is: " << larger_digit << endl;
    
    cout << "In order to do the calculation on the line above, I wrote #include <algortihm> in the top of this file." << endl;
    
    cout << "The sum of the digits is: " << ones_digit + tens_digit << endl; // using basic operators
    cout << "The product of the digits is: " << ones_digit * tens_digit << endl;
    
    int absolute_difference = max(tens_digit, ones_digit) - min(tens_digit, ones_digit); // since max is going to be greater (or equal to) than the min, we know that this result will not be negative
    cout << "The absolute difference of the digits is: " << absolute_difference << endl;
    
    double divide_digits = double (max(tens_digit, ones_digit)) / (min(tens_digit, ones_digit)); // specify double for the part after the equal sign because if not it will calculate as int divided by an int. however, we do not want our answer to be just limited to an int here.
    cout << "When you divide the larger digit by the smaller digit, you get: " << divide_digits << endl;
    
    return 0;
}
