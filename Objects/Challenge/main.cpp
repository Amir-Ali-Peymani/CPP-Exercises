#include <iostream>
#include <Movies.hpp>


using namespace std;

int main(){
//    Movies movies;
////    movies.add_movie("star wars", "IMDB", 29);
//    movies.display();
//    movies.increment_movie("star wars revenge of the sith");
//    movies.increment_movie("star wars");
//    movies.display();

    
    //saved in stack
    int x = 2;
    
    //saved in heap
    int *y = new int();
    
    //nickname 
    int& z = x;
    
    //
    int* w = &x;
    
    delete y;
    
    return 0;
}
