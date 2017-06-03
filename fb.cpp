// fb.cpp

#include <iostream>
using namespace std;

int main (){
    int x, y, n;
    bool found;

    cin >> x >> y >> n;
    for(int i = 1; i <= n; i++){
        if(i%x == 0){
            cout << "Fizz";
            found = true;
        }
        if(i%y == 0){
            cout << "Buzz";
            found = true;
        }
        if(!found){
            cout << i;
        }
        cout << endl;
        found = false;
    }
}
