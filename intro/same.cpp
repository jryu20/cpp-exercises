
#include <iostream>
using namespace std;


/**
 checks if array a is a subarray of array b
 @param arrays inputs array a & b along with their respective sizes
 @return true if a is a subarray of b
 */
bool a_to_b(int a[], size_t a_size, int b[], size_t b_size) {
    
    int i, j = 0; // initializing
    for (i = 0; i < a_size; i++) {
        for (j = 0; j < b_size; j++) {
            if (a[i] == b[j]) // checks if each value in array a is also inside array b
                break; // if it is inside b, moves on to the next value in array a
        }
  
        if (j == b_size)
            return false; // when j reaches b_size, the value is not inside of array b -> return false
    }
    return true;
}
  
/**
 checks if array b is a subarray of array a
 @param arrays inputs array a & b along with their respective sizes
 @return true if b is a subarray of a
 */
bool b_to_a(int a[], size_t a_size, int b[], size_t b_size) {
    // same helper function as above except the other way around
    
    int i, j = 0;
    for (i = 0; i < b_size; i++) {
        for (j = 0; j < a_size; j++) {
            if (b[i] == a[j])
                break;
        }
  
        if (j == a_size)
            return false;
    }
    return true;
}
  
bool same_items(int a[], size_t a_size, int b[], size_t b_size) {
    return a_to_b(a,a_size,b,b_size) && b_to_a(a,a_size,b,b_size);
    // only returns true if both are subarrays of each other
}


 int main() {
    
    int a[] = {1,4,9,10,16,16,16,4,9};
    int b[] = {1,4,9,10,16,16,25,4,4,4,4};
    size_t a_size = 9;
    size_t b_size = 11;
  
     
     if (a_to_b(a, a_size, b, b_size)) {
         cout << "true" << endl;
     }
     else {
         cout << "false" << endl;
     }
     
     if (b_to_a(a, a_size, b, b_size)) {
         cout << "true" << endl;
     }
     else {
         cout << "false" << endl;
     }
     
     if (same_items(a,a_size,b,b_size)) {
         cout << "true" << endl;
     }
     else {
         cout << "false" << endl;
     }
 }
