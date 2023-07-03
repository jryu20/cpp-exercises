
#include <iostream>
#include <algorithm> // using max/min
#include <iomanip> // using setw
#include <cmath> // using pow, abs
using namespace std;

int main() {
   
    double a, b, c; // all side lengths can include decimals
    
    cout << "Please enter the three side lengths separated by spaces. ";
    cout << "Example input: \"5 12 13\"" << endl << endl; // double endl is used to create one blank line after this output
    
    cin >> a >> b >> c;
    cout << endl; // this is used to create another blank line after the inputs
    
    double triangle_max = max(max(a,b), c); // calculating max(a,b) will output the greater of the two, which will then be compared to c. this will ultimately output the max of 3 numbers
    double triangle_min = min(min(a,b), c); // same logic as the line above
    double middle_side = a + b + c - triangle_max - triangle_min; // use algebra and what we already know from the previous two lines to calculate the third side
    
    
    cout << "Largest side: " << setw(11) << triangle_max << endl; // use setw to align the numbers together. for example, this phrase is 7 characters shorter than the next phrase, therefore this will need 7 more empty spaces before the output comes out
    cout << "Second largest side: " << setw(4) << middle_side << endl;
    cout << "Smallest side: " << setw (10) << triangle_min << endl << endl;

    const double epsilon = pow(10, -9); // define epsilon as 10^(-9)
    double pythag_thm = pow(triangle_min, 2) + pow(middle_side, 2) - pow(triangle_max, 2); // this essentially translates to a^2 + b^2 - c^2, which is a modification of the original pythagorean theorem
    bool is_right = (abs(pythag_thm) <= epsilon); // abs(pythag_thm) should technically be 0 if it is a right triangle but since working with doubles can be tricky, epsilon check is used here
    cout << boolalpha; // we want the bool result to output "true"/"false" instead of "0"/"1"
    
    cout << "Right Triangle: " << is_right << endl;
    
    return 0;
}
