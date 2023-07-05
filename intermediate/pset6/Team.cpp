

/* PIC 10B, Final Exam - Part 2
Problem 2: Data Structures
Author: Jun Ryu
Date: 12/10/2021
*/


#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
#include "Team.h"
#include "Athlete.h"


Team::Team(std::string fileName) {
    std::ifstream in_file;
    in_file.open(fileName);
    
    std::string s1;
    int id, bl, st;
    double vm, rt, mt;
    
    getline(in_file, s1);
    while (in_file >> id >> vm >> rt >> bl >> st >> mt) {
        Athlete athlete(id, vm, rt, bl, st, mt);
        myTeam.push_back(athlete);
    }
    
    team_size = myTeam.size();
}

Athlete Team::peek_best() const {
    std::vector<Athlete> team1 = myTeam;
    Athlete largest = team1[0];
    for (std::vector<Athlete>::iterator it = team1.begin(); it != team1.end(); it++) {
        if (*it < largest)
        {
            continue;
        }
        else {
          largest = *it;
        }
    }
    return largest;
}


int Team::get_team_size() {
    return team_size;
}


Athlete Team::pop_best() {
    std::vector<Athlete> team2 = myTeam;
    Athlete largest2 = team2[0];
    for (std::vector<Athlete>::iterator it = team2.begin(); it != team2.end(); it++) {
        if (*it < largest2)
        {
            continue;
        }
        else {
            largest2 = *it;
        }
    }
    team_size--;
    myTeam.erase(std::remove(myTeam.begin(), myTeam.end(), largest2), myTeam.end());
    return largest2;
    
}

bool operator==(const Athlete& a1, const Athlete& a2)
{
    return a1.get_performance() == a2.get_performance();
}
