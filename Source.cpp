/*
* File: P9-1
* Author: Anna Keeler
* Date: 10/30/2025
*
* Description: Lab 9.1
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

 

int main(void) {
    srand(time(0)); // randomizing the numbers
    const int SIZE = 10;// setting the size of the array to 10 numbers
    int array[SIZE]; // initializing the array

    //Displaying the random integers
    cout << "The random integers: ";
    for (int i = 0; i < SIZE; i++) {
        array[i] = rand() % 9000 + 1000; //9000 numbers between 1000 and 9999
        cout << array[i] << " ";
        }
    cout << endl;

    //Every element at an even index
    cout << "Even indices: ";
    for (int i = 0; i < SIZE; i++) {
        if ((i+1) % 2 == 0) cout << array[i] << " ";
    }
    cout << endl;
    
    //Every even element
    cout << "Even values: ";
    for (int i = 0; i < SIZE; i++) {
        
        if (array[i] % 2 == 0) {
            cout << array[i] << " ";
        }
        
    }
    cout << endl;
    
    // All elements in reverse order
    cout << "Reversed order: ";
    for (int i = 9; i >= 0; i--) {
        
        cout << array[i] << " ";
    }
    cout << endl;

    // Only the first and last element
    cout << "First and last: " << array[0] << " " << array[9];

   

    return 0;

}

