#include <iostream>
#include <string>
using namespace std;

int main() {
   
    string userInput, first, second;
    int commaLoc;

    cout << "Enter input string:"<<endl;
    getline(cin,userInput);

    while (userInput.find(',')==string::npos){
        cout<<"Error: No comma in string.\n"<<endl;
        cout << "Enter input string:"<<endl;
        getline(cin,userInput);
    }
    
    commaLoc = userInput.find(',');
    first = userInput.substr(0,commaLoc);
    cout << "First word: ";
    for (int i=0; i<first.length(); ++i){
        if (first[i]!=' '){
            cout << first[i];
        }
    }
    cout<<endl;
    second = userInput.substr(commaLoc+1);
    cout << "Second word: ";
    for (int i=0; i<second.length(); ++i){
        if (second[i]!=' '){
            cout << second[i];
        }
    }
    cout << endl;

   return 0;
}