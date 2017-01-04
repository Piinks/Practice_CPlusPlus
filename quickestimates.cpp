#include <string>
#include <iostream>
using namespace std;

int main(){
    int numberEst;
    string estimate;
    cin >> numberEst;
    for(int i = 0; i < numberEst; i++){
        cin >> estimate;
        cout << estimate.length() << endl;
    }


    return 0;
}
