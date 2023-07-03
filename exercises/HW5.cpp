#include<iostream>
using namespace std;
#include<string>
#include<vector>
#include<cassert>


/**
computes the area of a rectangle
@param x the length of the first side
@param y the length of the second side
@return the area of the rectangle
*/
double area(double x, double y) {

    assert (x >= 0);
    assert (y >= 0); // using assert commands to make sure the side lengths are not negative
	return x * y; // return the area
}

/**
returns the longer word given two words
@param word1 the first word
@param word2 the second word
@return the longer of the two (if it's a tie, returns the first word)
*/
string longest(string word1, string word2) {

    if (word1.length() > word2.length()) // setting up casework - this is case 1
    {
        return word1;
    }
    
    else if (word2.length() > word1.length()) // this is case 2
    {
        return word2;
    }
    
    else // this is case 3 (a tie between two words)
    {
        return word1;
    }
}

/**
returns the shorter word given two words
@param word1 the first word
@param word2 the second word
@return the shorter of the two (if it's a tie, returns the second word)
*/
string shortest(string word1, string word2) // very similar logic as the function above
{
    if (word1.length() > word2.length()) {
        return word2;
    }
    
    else if (word2.length() > word1.length()) {
        return word1;
    }
    
    else {
        return word2; // this is the case with a tie
    }
}

/**
sorts three numbers in ascending order
@param x1 the first generic number
@param x2 the second generic number
@param x3 the third generic number
*/
void sort3(double& x1, double& x2, double& x3) // using pass by reference
{

    if (x1 > x2) {
        double temp = x1; // using a temporary variable in order to swap two numbers
        x1 = x2;
        x2 = temp;
    }
    if (x1 > x3) {
        double temp = x1;
        x1 = x3;
        x3 = temp;
    }
    if (x2 > x3) {
        double temp = x2;
        x2 = x3;
        x3 = temp;
    } // after testing these three separate scenarios, the numbers should be sorted
}

/**
prints a vector
@param v the vector we are printing
*/
void print(vector<double> v) {
	size_t N = v.size();
	cout << "<";
	for (size_t i = 0; i < N; ++i) {
		cout << v[i];
		if (i < N - 1) {
			cout << ',';
		}
	}
	cout << ">";
}

/**
reverses the order of entries in a given vector
@param v the vector we are reversing
*/
void reverse(vector<double>& v) // using pass by reference here
{
    size_t N = v.size(); // redefine N in this function
    for (double i = 0, j = N - 1; i < N/2; i++, j--) // use both i and j; run until i < N/2 because if we do N instead, it will just undo itself and output the same vector as the original v
        {
            double temp = v[j]; // this is the same structure as the swap function used for sort3
            v[j] = v[i];
            v[i] = temp;
        }
}


// DO NOT EDIT THE MAIN BODY
// while working, it may be helpful to comment out the lines that actually call the functions
// (search for the word helpful)
// if you do this, make sure to uncomment them when you are done
// when you are done, the main body should be exactly the same as when you started 


int main() {

    //The user picks which function to run
    cout << "Please enter 1, 2, 3, or 4. ";
    int prob;
    cin >> prob;



    if (prob == 1) {

        //ask user for length and width
        cout << "Please enter the length and width of a rectangle. ";
        double x, y;
        cin >> x >> y;

        //tell user the area of the rectangle
        cout << "The area of a rectangle with length " << x << " and width " << y << " is " << area(x, y);
        //it might be helpful to comment out the line above while testing your code
        //make sure to uncomment it when you are done

    }
    else if (prob == 2) {

        // ask user for two words
        cout << "Please enter two words. ";
        string word1, word2;
        cin >> word1 >> word2;

        //tell the user which word is longer
        cout << longest(word1, word2) << " is at least as long as " << shortest(word1, word2);
        //it might be helpful to comment out the line above while testing your code
        //make sure to uncomment it when you are done

    }
    else if (prob == 3) {
        // ask user for three numbers
        cout << "Please enter 3 numbers separated by spaces." << endl;
        double x1, x2, x3;
        cin >> x1 >> x2 >> x3;

        // sort the numbers and report them back to the user
        sort3(x1, x2, x3);
        //it might be helpful to comment out the line above while testing your code
        //make sure to uncomment it when you are done

        cout << "Your sorted numbers are " << x1 << " " << x2 << " " << x3 << endl;
    }
    else if (prob == 4) {

        //ask the user for numbers, store them in a vector
        cout << "Please enter some numbers. Type x to quit." << endl;
        double x;
        vector <double> v;
        while (true) {
            cin >> x;
            if (cin) {
                v.push_back(x);
            }
            else {
                break;
            }
        }

        //tell the user the vector
        cout << "Your vector is: ";
        print(v);

        //reverese the vector and print it again
        reverse(v);
        //it might be helpful to comment out the line above while testing your code
        //make sure to uncomment it when you are done


        cout << endl << "After reversal your vector is: ";
        print(v);

    }

    else {
        cout << "Invalid input!" << endl;
    }

    return 0;
}
