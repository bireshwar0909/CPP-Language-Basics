#include <iostream>
using namespace std;
int main(){
    cout << "There once was a man named George"<< endl;
    cout << "He was 70 years old" << endl;
    cout << "He liked the name George" << endl;
    cout << "But did not like being 70" << endl;

    // While creating a varible in C++ we have to tell it some specific things

    string characterName = "John";      // Here we are initilaztion and declearing the variable at the same time.
    int age = 70;
    
    // The same can also be defined as follows:
    // string characterName;        HERE WE ARE INITIALIZATION THE VARIABLE FIRST
    // characterName = "John"       DECLEARING IT LATER
    // int age
    // age = 70

    cout <<"" << endl;
    // the same can also be done as
    // cout <<"\n";
    // \n and endl technically does the same thing

    // half we through if we want to change the value of any variable, we can 
    characterName = "Mike";
    
    cout << "There once was a man named "<< characterName << endl;
    cout << "He was "<<age<<" years old" << endl;
    cout << "He liked the name "<< characterName << endl;
    cout << "But did not like being "<< age << endl;
    return 0;

}