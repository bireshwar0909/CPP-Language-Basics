#include <iostream>
using namespace std;

int main(){

    int numberGrid[4][5];
    // this is how we define a two dimensional array
    // a two dimensional array is a situation where every element inside the array is another array.
    // here 5 5 is just the highest number of element it can hold

    //also the 4 means that in total in can have 4 elements/arrays inside it
    //5 means that each of the arrays that are element can have a highest of 5 elements inside them.

    int newNumberGrid[3][3] = {
        {1,2},      //here the first element is itself an array
        {3,4},      //here the second element is itself an array with two elements inside
        {5,6}       
    };

    //also its good to keep in mind that its always better and the only way to declear a 2D array that we always 
    //have to mention the size unlike 1D arrays.

    cout << newNumberGrid[0][1] << endl;
    //what do you think what will it print?


    //what if we want to print the whole array?
    //we can use loops specially the for loop
    for (int i = 0; i < 3 ; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << newNumberGrid[i][j] << endl;
        }
        
    }

    //what we just did is called Nested loops
    //its better to understand the concept from python
    
    return 0;
}