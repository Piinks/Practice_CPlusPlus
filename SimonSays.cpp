#include <iostream>
#include <string>
using namespace std;

int main(){
    int numCommands;
    string strNumCommands;
    string command;
    string simon = "Simon says";
    size_t found;
    int length;

    //cout << "Enter number of commands: ";
    getline(cin, strNumCommands);
    numCommands = stoi(strNumCommands);
    for(int i = 0; i < numCommands; i++){
        //cout << "Enter command: ";
        getline(cin, command);
        found = command.find(simon);
        if(found != string::npos){
            length = command.size();
            cout << command.substr(11, (length-11)) << endl;
        }
    }
    return 0;
}
