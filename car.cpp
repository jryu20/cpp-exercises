
#include <iostream>
using namespace std;

// this class will deal with the basic functions found in a car, such as driving, adding gas, and comparing two car models in terms of their model years

class Car {
public:
    Car(const double my_miles, const int my_year, double my_current) : MILES_PER_GALLON(my_miles), YEAR(my_year), current_gas_level(my_current) // using initializer list - first constructor
    {
    }
    
    Car(const double my_miles, const int my_year) : MILES_PER_GALLON(my_miles), YEAR(my_year), current_gas_level(0) // using initializer list - second constructor
    {
    }
    
    // three accessor functions listed here
    const double get_MILES_PER_GALLON() const {
            return MILES_PER_GALLON;
        }
    const int get_YEAR() const {
            return YEAR;
        }
    double get_current_gas_level() const {
        return current_gas_level;
    }
    
    /**
     adjusts the gas level according to the amount driven
     @param miles the number of miles driven
     */
    void drive(double miles); // mutator procedure #1 - drive
    
    /**
     adjusts the gas level according to the amount of gas inputted
     @param gas how much gallons of gas are inputted
     */
    void add_gas (double gas); // mutator procedure #2 - add_gas

    /**
     determines whether one car is older than another car
     @param other the other car that will be compared
     @return true if the car is older than the other car
     */
    bool is_older_than (const Car& other) const; // bool function - is_older_than
    
private: // all member variables stored in private
    const double MILES_PER_GALLON;
    const int YEAR;
    double current_gas_level;
};



void Car::drive(double miles) {
    current_gas_level -= (miles/MILES_PER_GALLON); // decrease the gas level based on the amount of gallons used
}

void Car::add_gas(double gas) {
    current_gas_level += gas; // increase the gas level just by the gas inputted
}

bool Car::is_older_than(const Car& other) const {
    return YEAR < other.get_YEAR(); // compare the two model years
}


int main() {
   
    Car c1(50, 2002, 80);
    Car c2(20, 2005);
    cout << boolalpha;
    c1.drive(100);
    c1.add_gas(5);
    cout << c1.get_current_gas_level() << endl;
    cout << c1.is_older_than(c2) << endl;
    return 0;
}
