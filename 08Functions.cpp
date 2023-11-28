#include <iostream>
using namespace std;

void sayHi(){
    cout << "Hello user" << endl;
}

void sayHi(string name){
    cout << "Hello " << name << endl;
}

void sayHi(string firstName, string lastName){
    cout << "Hello " << firstName << " " << lastName << endl;
}

string sayHi(string firstName, string lastName, int age){
    cout << "Hello " << firstName << " " << lastName << endl;
    cout << "And my age is " << age <<endl;
    return lastName;
}
int main(){
    //the main function is always executed first and it always has to be at the end.
    //the main function is always written first.

    sayHi();
    sayHi("Robin");
    sayHi("Tom", "Hardy");

    //there is that one beauty with C++ (which some other languages also have like JAVA)
    //that we can create functions with the same name and out program can automatically 
    //which function to call when
    //this is called function overloading <-- try to remember the name

    string lastName;
    lastName = sayHi("Tom", "Hardy", 44);
    //here the lastName will carry the value returned by the function.
    //we could have also called the function without the help of the variable but then we wont
    //have been able to store the lastname of the user that was returned by the function
    


    return 0;
}