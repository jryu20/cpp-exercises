
#include <iostream>
using namespace std;

int main() {
    
    cout << "Please enter a positive integer. " << endl;
    int number;
    cin >> number;
    
    int first_term = 1, second_term = 1; // define the fixed first two terms
    int next_term = 0; // initialize this variable
    if (number == 1 || number == 2) // if the user inputs 1 or 2, we have to output the fixed value of 1
    {
        cout << "The " << number << "th Fibonacci number is " << first_term << "." << endl;
    }
        
        else for (int n = 3; n <= number; ++n) // start at n = 3 because the first two cases have already been accounted for
        {
            next_term = first_term + second_term;
            first_term = second_term; // the second term now becomes the first
            second_term = next_term; // the "next" term becomes the second so the sequence moves on
            if (n == number) // when n finally reaches the user input, then the Fibonacci number needs to be outputted
            {
                cout << "The " << number << "th Fibonacci number is " << next_term << "." << endl;
            }
        }
    
    int prime_count = 0;
    int i = 2; // initializing these two variables, i starts at 2 because 2 is the first prime
    
    while (prime_count < number)
    {
        bool prime_check = 1; // assume true to begin with
        for (int j = 2; j <= i - 1; ++j) // j starts at 2 and not 1 because being divisible by 1 does not determine whether the number is prime or not.
        // also, j must be less than i - 1 and not i because i is obviously going to be divisible by i
        {
            if (i % j == 0) // this checks divisibility - if j is a factor of i, then i is not prime
            {
                prime_check = 0; // now this turns false
            }
        }
        
        if (prime_check)
        {
            ++prime_count; // prime counter will only go up if prime_check is true
        }
        ++i; // we need to have this here so that i values keep going up until the while loop is over
    }
    cout << "The " << number << "th prime number is " << i - 1 << "." << endl; // we do i - 1 here because the while loop increases i one more time at the end, causing an off-by-one error
    
    return 0;

}
