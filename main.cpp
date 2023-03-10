#include <iostream>
#include "cmath" // For sqr()

using namespace std;

int main() {
    int add = 2; // What is the difference between the first row and second row
    int cn = 1; // Staring triangle number
    int height = 0; // Input
    int ii = 0; // Run through counter
    int tri; // Triangle number value holder
    int arrcount = 0; // To keep track of what position we are in the array

    int trisqr[10] = {0,0,0,0,0,0,0,0,0,0}; // The array to store the triangle numbers that equal square numbers

    cout << "Enter the amount of triangle numbers to calculate to:";
    cin >> height;

    while (ii <= height) { // Runs through the input number of times
        cn += add; // cn = cn + add --> This gets the staring tri number and then add the staring tri number again and adds the difference between the two lines
        cout << cn << endl; // Prints it
        add += 1; // add = add + 1 --> Adds 1 to the difference
        tri = cn; // Assigns cn to a tri value holder (Not needed - over complication)


        int root = sqrt(tri); // Square root of tri number (int, so no decimals)
        if (root * root == tri) { // If the Int * Int = tri, then tri is a square number
            cout << "Triangle Square Number: " << tri << endl;// Prints n
            trisqr[arrcount] = tri; // Adds the sqr to the array
            arrcount += 1; // Adds one to the array place count as not to re-assign another value to the place
        } // Else:
        ii++; // Adds one to the loop after running
    }
    cout << "Triangle Square Numbers:" << endl;

    for (int j = 0; j <= 9; j++ ) {
        cout << trisqr[j] << endl; // Prints the tri = sqr number array out
    }
}