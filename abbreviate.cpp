//abbreviate

#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    string result;

    cin >> name;

    for(int i =0; i < name.length(); i++) {
        if(isupper(name[i])){
            result += name[i];
        }
    }

    cout << result << endl;

    return 0;
}
