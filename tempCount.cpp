// Counting temperature days below zero.

#include <iostream>
using namespace std;

int main(){

    int count = 0;

    int days;
    cin >> days;

    int temps[days];
    for(int i = 0; i < days; i++){
        cin >> temps[i];
        if(temps[i] < 0){
            count++;
        }
    }

    cout << count << endl;


    return 0;
}
