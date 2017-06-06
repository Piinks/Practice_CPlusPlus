#include <iostream>
#include <string>
using namespace std;

int main(){
    int numCommands;
    string command;
    string simon = "simon says";
    int found;
    int length;

    //cout << "Enter number of commands: ";
    cin >> numCommands;
    cin.ignore();
    for(int i = 0; i < numCommands; i++){
        //cout << "Enter command: ";
        getline(cin, command);
        found = command.find(simon);
        //cout << found << endl;
        if(found == 0){
            length = command.size();
            if(length > 11)
                cout << command.substr(11, (length-11));
        }
        cout << endl;
    }
    return 0;
}
