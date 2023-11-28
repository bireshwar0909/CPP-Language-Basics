#include <iostream>
using namespace std;

//A constructor is like a function that is gonna get called whenever we create an object of a perticular function.


class Book{
    public:     //here public means we can access it anywhere, specially from other files.
        string title;
        string author;
        int pages;

        //below we are going to create a constructor
        Book(string aTitle, string aAuthor, int aPages){
            title = aTitle;
            author = aAuthor;
            pages = aPages;
        }
};

int main(){

    //class //object //atributes
    Book myBook ("Quite", "Susan Cain", 300);
    cout << myBook.title << endl;
    cout << myBook.author << endl;
    cout << myBook.pages << endl;

    //later on we can also update the values anyway.
    myBook.title = "Scream";
    cout << myBook.title <<endl;

    return 0; 
}


//so whats the benifit of having a constructor ?
//well it saves alot of time. We cant see it here but in future we will.

//also for a class we can have multiple constructor like what we do in function overloading