//note for bireshwar: start from line 18
#include <iostream>
using namespace std;

class Book
{
    //while declearing a class we always have to use uppercase for the first letter.
    //inside the class we have to declear attributes. Attributes are like characteristics.
    //like a int data type can only store integers.

public:
    string title;
    string author;
    int pages;
};

int main()
{

    //So we are starting object orientated programming
    //so what is object orientated programming.
    //we will see that in python because to explain the concept c++ is just not a good place
    //also not every language supports OOP like c doesnt support OOP

    //so if we talk a bit of OOP anyway
    //OOP allows us to do a lot more things with a perticular language
    //like currently we can work with int strings char etc etc but now think
    //what if we were able to create our own data type?
    //Our own data types which has its own rules, own rule of functioning ... its just great.
    //OOP allows us to do that

    //So we will learn about classes and objects in OOP as they are the pillers of it.

    //so lets create a data type and name it book
    //note for bireshwar: now go to the class line 4

    Book myBook;
    //here we created an object of the class Book. A class can have several objects.

    myBook.title = "Quiet";
    myBook.author = "Susan Cain";
    myBook.pages = 300;

    cout << myBook.title << endl;

    //now create a new file and a new class and some objects of it.
    //Update --> do it after constructor

    
    return 0;
}