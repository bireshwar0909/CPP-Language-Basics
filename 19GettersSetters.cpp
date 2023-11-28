#include <iostream>
using namespace std;

class Movie {
    private:            //Exactly opposite of public. Cant be accessed from other file.
        string title;
        string director;
        string rating;
    public:

        Movie(string aTitle, string aDirector, string aRating){
            title = aTitle;
            director = aDirector;
            setRating(aRating);
        }

    void setRating(string aRating){
        if(aRating == "PG" || aRating == "Pg-13"){
            rating = aRating;
        } else {
            rating = "NR";
        }
    };   

    string getRating(){
        return rating;
    }   



};

int main(){

    //here we will learn about getters and setters these are some other crucial parts of OPP.
    //technically they just help to get data and set data from and to a container respectively.
    //Getters and setters are also used to restrict the inputs and outputs or the information that we
    //  want to provide or get from our code. So it acts like a protection barrier.
    //In order to use getters and setters we must use the private keyword otherwise its just meaningless.

    Movie Avengers("The Avengers", "Joss Whedon", "Pg-13"); 

    //before getters and setters
    //Avengers.rating = "Cat";
    //but now since we have a protection barrier we can filter

    Avengers.setRating("PG");
    cout << Avengers.getRating();

    return 0;

}

  