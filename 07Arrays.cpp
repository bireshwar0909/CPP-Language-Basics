#include <iostream>
using namespace std;

int main(){

    //declearing an array
    //also we have to say C++ what kind of array we want

    int luckyNumbers[] = {5,3,2,5,7};

    //Accessing the elements in an array (same as accessing elements from a list in python)
    cout << luckyNumbers[0] << endl;

    //changing the first element in an array
    luckyNumbers[0] = 1;
    cout << luckyNumbers[0] << endl;

    //now we will be declearing an array without declearing the elements
    int age[10];    //however whenever we do so we must have to tell C++ how many elements we desire to keep in the array.
                    //the code above means that age can store a highest of 10 elements in it.

    return 0;
}