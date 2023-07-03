
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    
    int lower_limit, upper_limit, start_point, trials;
    
    cout << "Lower Limit: ";
    cin >> lower_limit;
    cout << "Upper Limit: ";
    cin >> upper_limit;
    cout << "Start Point: ";
    cin >> start_point;
    cout << "Number of Trials: ";
    cin >> trials;
    cout << endl;
    
    srand(time(0)); // fix seeding
    
    int win_count = 0; // initializing this variable
    int reset_start = start_point;
    
    for (int i = 1; i <= trials; ++i) // i starts at 1 because that would signify trial #1
    {
        bool win = 0;
        bool lose = 0; // we set these two bools as false because the user has not won or lost yet
        
        while (win == 0 && lose == 0) // if the user wins or loses, this while statement breaks because it's an "and" statement
        {
            int flip = rand() % 2; // this gives a binary result (heads or tails)
            if (flip == 0) {
                ++start_point; // this will be heads (move to position x+1)
            }
            
            else {
                --start_point; // this will be tails (move to position x-1)
            }
                
            if (start_point == upper_limit) {
                win = 1; // this stops the while loop because a victory has been declared
                ++win_count; // this increases the win count by 1
            }
            
            if (start_point == lower_limit) {
                lose = 1; // this also stops the while loop because a loss has been declared
            }
        }
        start_point = reset_start; // this resets the start_point which is either at the upper_limit or the lower_limit
    }
    
    cout << "Estimated win probability: " << static_cast<double> (win_count) / trials << endl; // we have to static_cast the win_count because otherwise, it would be an integer division
    
    return 0;
}
