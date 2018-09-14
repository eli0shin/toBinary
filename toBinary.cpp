/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jjones3
 *
 * Created on September 14, 2018, 4:18 PM
 */

#include <cstdlib>
#include <string>
#include <iostream>
#include <sstream>

using namespace std;
string toBinary(int decimal, string r = " ");
int decimal; 

/*
 * 
 */
int main(int argc, char** argv) {
    
    cout << "Please enter a number you wish to translate to binary: " ;
    cin >> decimal;
    cout << decimal;
    toBinary(decimal);   

    return 0;
}

string toBinary(int decimal, string r){
    if (decimal < 1) {
            return r;
    }
    else {
        toBinary(decimal/2, r = (std::to_string(decimal%2) + r));
    }
}