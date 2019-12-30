/* 
 * Station.cpp
 * COMP15 HW2
 * Fall 2019
 * Justin Steinberg
 * Implementation of the Station class for homework 2
 */

#include "Station.h"
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

// Constructor
Station::Station(){
    name = "NoName";
    access = false;
}

// Parameterized Constructor
Station::Station(string input_name, bool input_access){
    name = input_name;
    access = input_access;
}

// Function: bool isEqual(Station s)
// Input: Station Object
// Returns: Boolean 
// Does: Identifies if the input station is equal to the 
// the object the function is being called on (true or false)
bool Station::isEqual(Station s){
    if(s.name == name && s.access == access){
        return true;
    }
    else{
        return false;
    }
}

// Function: void print(ostream &outfile)
// Input: ofstream ostream source by reference 
// Returns: nothing
// Does: Prints out station names and if they are
// available, space separated
void Station::print(ostream &outfile){
    if(access == true){
        outfile << name << " " << "A";
    }
    else if(access == false){
        outfile << name << " " << "U";
    }
}


