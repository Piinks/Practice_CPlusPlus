#include <iostream>
using namespace std;

int main(){
    int numTests;
    int num;
    cin >> numTests;
    for(int i = 0; i < numTests; i++){
        cin >> num;
        cout << num << " is ";
        if(num%2 == 0)
            cout << "even" << endl;
        else
            cout << "odd" << endl;
    }

    return 0;
}
