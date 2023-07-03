
#include <iostream>
#include <string>
using namespace std;

int main() {
    
    const double mi_to_km = 1.609; // avoiding to use magic numbers; using const
    double miles; // want double here, not int because the input could have decimal points
    cout << "How many miles?" << endl;
    cin >> miles;
    cout << miles << " miles is " << miles * mi_to_km << " kilometers. " << endl; // putting it altogether with both the text and the operators
    
    const double km_to_mi = 0.621;
    double kilos;
    cout << "How many kilometers?" << endl;
    cin >> kilos;
    cout << kilos << " kilometers is " << kilos * km_to_mi << " miles. " << endl;
    
    cout << "Please enter a time in 12-hour format. "; //splitting the sentences makes it easier to read
    cout << "Do not use a colon and seperate by spaces. ";
    cout << "Example input: \"3 14 PM\". ";
    cout << "Please make sure to capitalize AM/PM. " << endl; // only "endl;" on this line because this is actually the end and we want everything before to print on one line
    
    int hour;
    int minute;
    string am_pm; // using string to store characters
    
    cin >> hour >> minute >> am_pm;
    bool pm_check = (am_pm == "PM");
    bool twelve_check = (hour == 12); // using boolean here and the line before for special cases
    int military_time;
    military_time = 100 * hour + minute + pm_check * 1200 - twelve_check * 1200; // for PM time, we want to add 1200 (12 hour equivalent). also, if the hour is 12 (both AM or PM), we want to subtract the 1200 back in order for 12 AM to show up as 000 and 12 PM to show up as 1200.
    cout << "The military time is: " << military_time << endl;
    
    cout << "Please enter a time in military format. ";
    cout << "Example input: \"1514\". " << endl;
    
    cin >> military_time; // new input gets placed in the buffer
    int minute_standard = military_time % 100; // use modulus to get the last two digits of the military time
    int hour_standard = military_time / 100;
    bool is_pm = (hour_standard >= 12); // PM defined here
    bool is_zero = (hour_standard == 0); // special case 1: need to convert hour 0 into 12 AM
    bool is_twelve = (hour_standard == 12); // special case 2: 12 PM will get converted into 0 if we do not set this boolean up
    int hour_12 = hour_standard - is_pm * 12 + is_zero * 12 + is_twelve * 12; // includes the two special cases
    
    cout << boolalpha;
    cout << "The twelve-hour time is: " << hour_12 << " " << minute_standard << " (PM = " << is_pm << "). " << endl; // putting it all together
    return 0;
}
