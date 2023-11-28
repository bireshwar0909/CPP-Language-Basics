#include <iostream>
using namespace std;

int main(){
    string phrase = "Steve Jobs";
    cout << phrase.length() <<endl;
    cout << phrase.append("s") <<endl;
    cout << phrase.find("s") <<endl;    //returns the index at which the character is located
    cout << phrase[0] <<endl;
    cout << phrase.replace(0,4, "Robs") << endl;
    cout << phrase.substr(1, 3) << endl;
    return  0;
}

//Same as Python