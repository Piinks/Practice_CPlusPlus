// simple calculation with cmath

#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double area;
    cin >> area;

    double squareSide = sqrt(area);

    //cout << fixed << setprecision(20) << squareSide << endl;

    double fenceAmt = 4 * squareSide;

    cout << fixed << setprecision(10) << fenceAmt << endl;

    return 0;
}
