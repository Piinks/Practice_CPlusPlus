#include <iostream>
using namespace std;

int main(){

    int cK =1;
    int cQ =1;
    int cR = 2;
    int cB = 2;
    int cKn = 2;
    int cP = 8;

    int currK, currQ, currR, currB, currKn, currP;

    cin >> currK;
    cout << cK-currK << ' ';
    cin >> currQ;
    cout << cQ - currQ << ' ';
    cin >> currR;
    cout << cR - currR << ' ';
    cin >> currB;
    cout << cB - currB << ' ';
    cin >> currKn;
    cout << cKn - currKn << ' ';
    cin >> currP;
    cout << cP - currP << ' ';

    return 0;
}
