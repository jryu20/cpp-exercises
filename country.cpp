
#include <iostream>
#include <cassert>
#include <vector>
using namespace std;

// this class will compare a list of countries based on their population density

class Country {
public:
    
    Country(int my_population, double my_area) : population(my_population), area(my_area) // constructor using initializer list
    {
        assert(my_population > 0);
        assert(my_area > 0); // using assert commands to make sure both population and area are strictly greater than 0
    }
    
    // two accessor functions listed here
    int get_population() const {
        return population;
    }
    double get_area() const {
        return area;
    }

private: // all member variables stored in private
    int population;
    double area;
};

/**
 determines which country is the densest
 @param countries inputs a list of countries with their population and area
 @return the country that is the densest
 */
Country most_dense(vector<Country> countries) // inputs a list of vectors
{
    size_t N = countries.size();
    double maximum = 0; // initialize the maximum here
    Country c1 = countries[0]; // set an arbitrary country here so it can be returned at the end of this function
    for (int i = 0; i < N; ++i) // run a for loop so it can go through each vector input
    {
        double population_density = countries[i].get_population() / countries[i].get_area(); // calculating population density
        
        if (population_density > maximum) // replacing maximum if a new maximum comes
        {
            maximum = population_density;
            c1 = countries[i]; // this substitutes the most dense country into c1
        }
    }
    return c1;
}

int main() {
    
    Country a(200, 20);
    Country b(100, 25);
    Country c(400, 15);
    
    vector<Country> countries;
    countries.push_back(a);
    countries.push_back(b);
    countries.push_back(c);
    
    Country most_dense_country = most_dense(countries);
    cout << "Population of the densest country: " << most_dense_country.get_population() << endl;
    cout << "Area of the densest country: " << most_dense_country.get_area() << endl;
    
    return 0;
}
 

