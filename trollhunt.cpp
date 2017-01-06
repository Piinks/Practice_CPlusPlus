#include <iostream>
using namespace std;

int main(){

    int bridges, knights, groupSize;

    cin >> bridges >> knights >> groupSize;

    int numGroups = knights / groupSize;

    int numDays = bridges / numGroups;

    if(bridges % numGroups > 1) numDays +=1;

    cout << numDays;

    return 0;
}
