#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main(){

    int age;
    cout << "Enter your age: ";
    cin >> age;     //so here we are taking the input and storing it in the age variable
    cout << "Your age is " << age <<endl;
    

    //How ever to get a string input, its a bit different
    string name;
    cout << "Enter your name: ";
    getline(cin, name); //getline is for allowing us to input a set of characters and cin is the keyword which allows us to do that.
                        //cin is working like a gate
    cout << "Hey your name is " << name;


    return 0;

}