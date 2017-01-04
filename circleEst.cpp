#include <iostream>
using namespace std;

double const PI = 3.141592654;

int main(){
    float radius, totalDarts, inDarts;

    cin >> radius >> totalDarts >> inDarts;

    if(totalDarts == 0){
        return 1;
    }
    
    float piEst = (inDarts/totalDarts) * 4;

    float trueArea = radius * radius * PI;
    float estArea = radius * radius * piEst;

    cout << trueArea << ' ' << estArea << endl;


    return 0;
}
