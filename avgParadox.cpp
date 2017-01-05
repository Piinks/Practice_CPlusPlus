/*
One well-known joke goes as follows: If a bad Computer Science student drops out
of college and goes to a different college to study Economics instead, he will
increase the average intelligence on both colleges.

In this problem we investigate the math behind this joke. Given the list of
student IQs for both colleges, find the number of students of Computer Science
that can make the joke true.
*/

#include <iostream>
#include <vector>
using namespace std;

int main(){

    int testCases;

    cin >> testCases;

    for(int i = 0; i < testCases; i++){

        vector<int> csIqs;
        int numCS, numEc, currentIQ;
        int csTotal = 0;
        int ecTotal = 0;
        float csAverage, ecAverage;

        cin >> numCS >> numEc;

        for(int c = 0; c < numCS; c++){
            cin >> currentIQ;
            csIqs.push_back(currentIQ);
            csTotal += currentIQ;
        }
        csAverage = csTotal / numCS;

        for(int e = 0; e < numEc; e++){
            cin >> currentIQ;
            ecTotal += currentIQ;
        }
        ecAverage = ecTotal / numEc;

        int validStudents = 0;

        for(int j = 0; j < numCS; j++){
            validStudents += ((csIqs[j] < csAverage) && (csIqs[j] > ecAverage )) ? 1 : 0;
        }

        cout << validStudents << endl;
    }

    return 0;
}
