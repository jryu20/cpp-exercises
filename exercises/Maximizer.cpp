
#include <iostream>
#include <cmath> // for using pow
using namespace std;

int main() {
    
    double left, right, c1, c2, c3, c4, h; // all values are double because they can have decimal parts
    
    
    cout << "Left end point: ";
    cin >> left;
    cout << "Right end point: ";
    cin >> right;
    cout << "Coefficients: ";
    cin >> c1 >> c2 >> c3 >> c4;
    cout << "Grid size: ";
    cin >> h;
    cout << endl;
    
    double grid_check = 0; // initializing this variable
    double largest = c1 * pow (left,3) + c2 * pow (left,2) + c3 * pow (left,1) + c4; // this is the cubic polynomial evaluated at x = left end point
    double a;
    for (a = left; a <= right; a += h) // increase by h each time so it'll evaluate f(left+h), f(left+2h), and so forth
    {
        grid_check = c1 * pow (a,3) + c2 * pow (a,2) + c3 * pow (a,1) + c4;
        
        if (grid_check > largest) // this portion maximizes the value
        {
            largest = grid_check; // substitute the "new" largest value
        }
    }
    cout << "The largest value of " << c1 << "*x^3+" << c2 << "*x^2+" << c3 << "*x+" << c4 << " on [" << left << "," << right << "] " << "is " << largest << "." << endl;
    
    return 0;
}
