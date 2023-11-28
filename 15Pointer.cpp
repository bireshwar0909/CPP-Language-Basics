#include <iostream>
using namespace std;

int main()
{

    //A pointer is basically a type of information that we can work with in our programming language.
    //Pointers are basically memory addresses.

    int age = 44;
    double gpa = 2.7;
    string name = "Thomas";

    //all of these are variables, in other words these are just some containers that is containing some data.
    //but the question is where is it storing the data, i mean where is the variable located exactly?
    //you may say its in the memory and its totally right but where exactly.
    //all we need is a pin point location right
    //and the pin point location is what we call the pointer
    //For us its our home address
    //but for a variable its a pointer.

    cout << "Memory Address" << endl;
    cout << &age << endl;
    //this will print out the memory address, i.e. where exactly our computer has store the variable in the memory

    //now lets talk about a pointer variable
    //a pointer variable its like a normal variable but just contains the memory address

    int *pAge = &age;

    //here we created a variable pAge but since we mentioned one * before meaning we told the compiler that
    //whatever the variable name is, all we care about is that we are going to store a memory address in it.
    //Later we told whose memory address we want to store and in this case its the age variable.
    //however we shall never forget to use & before mentioning the variable name.
    //Also the pointer variable has to be of the same type the original variable was.
    //like age was of int type so the pointer variable that is containing the memory address has also to be of the int type

    string newName = "Upasana";
    cout << newName << endl;
    ;
    cout << &newName << " is the address where the variable is located" << endl;
    string *variableName = &newName;

    char characterName = 'B';
    cout << characterName << endl;
    cout << &characterName << endl;
    char *variableName1 = &characterName;
    cout << variableName1;

    //now we will learn about "dereferencing a pointer". Its like grabbing a value that is stored in the memory address.
    cout << *pAge << endl;

    //so conclusion
    cout << pAge << endl; //it will give us the memory address since *pAge = &age
    cout << *pAge;        //it will give us the actual value that is stored in the memory

    string Name = "Bireshwar";
    // if we want to print the address of Variable Name
    cout << &Name << endl;
    // if we want to store the address in a variable we have to take help of pointer variable
    // pointer is a special type of varibale which can store memory address
    // because memory address doesnot has a specific data type
    string *PointerVaribale0 = &Name;

    cout << PointerVaribale0;  //address
    cout << *PointerVaribale0; //Bireshwar

        
    int x = 1;
    int *y = &x;  // declare y as a pointer to x
    int **z = &y; // declare z as a pointer to y
    **z = 2;      // sets the thing pointed to (the thing pointed to by z) to 2
                  // i.e., sets x to 2

    return 0;
}