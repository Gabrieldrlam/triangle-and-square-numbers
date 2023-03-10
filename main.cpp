#include <iostream>
#include "cmath"

using namespace std;

int main() {
    int add = 2;
    int cn = 1;
    int height = 0;
    int ii = 0;
    int tri;
    int arrcount = 0;

    int trisqr[10] = {0,0,0,0,0,0,0,0,0,0};

    cout << "Enter the amount of triangle numbers to calculate to:";
    cin >> height;

    while (ii <= height) {
        cn += add;
        cout << cn << endl;
        add += 1;
        tri = cn;


        int root = sqrt(tri); // Square root of n (int, so no decimals)
        if (root * root == tri) { // If the Int * Int = n, then n is a square number
            cout << "Triangle Square Number: " << tri << endl;// Prints n
            trisqr[arrcount] = tri;
            arrcount += 1;
        }
        ii++;
    }
    cout << "Triangle Square Numbers:" << endl;

    for (int j = 0; j <= 9; j++ ) {
        cout << trisqr[j] << endl;
    }
}