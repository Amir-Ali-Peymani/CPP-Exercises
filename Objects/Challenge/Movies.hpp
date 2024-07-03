#ifndef _MOVIES_H_
#define _MOVIES_H_

#include "Movie.hpp"
#include <string>
#include <iostream>
#include <vector>


class Movies
{
private:
    std::vector<Movie> movies;
public:
    Movies();
    void add_movie(std::string name, std::string rate, int watched_movies);
    void display();
    void increment_movie(std::string name);
    ~Movies();
    

};

#endif // _MOVIES_H_
