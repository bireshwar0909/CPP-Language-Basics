#include <iostream>
using namespace std;

class Student{
    public:
    string name;
    string major;
    double gpa;
    //creating a constructor below
    Student(string Aname, string Amajor, double Agpa){
        name = Aname;
        major = Amajor;
        gpa = Agpa;
    }

    bool isGood(){

        if (gpa>3.5){
            return true;
        } else {
            return false;
        }
    }
};

int main(){

    //Here we will learn how to associate a function with a class
    //the same we access string.function likewise we are going to do something similar

    Student student1("Jim", "Business", 2.4);
    Student student2("Pam", "Art", 3.6);

    cout << student1.isGood() << endl;
    cout << student2.isGood();

    return 0;
}