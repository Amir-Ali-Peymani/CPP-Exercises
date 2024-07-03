#include "Movie.hpp"
#include <string>
#include <iostream>

Movie::Movie(std::string name, std::string rate, int watched_times)
{
    this->name = name;
    this->rate = rate;
    this->watched_times = watched_times;
}

Movie::Movie(const Movie &movie){
    this->name = movie.get_name();
    this->rate = movie.get_rate();
    this->watched_times = movie.get_watched_movies();
}

void Movie::set_name(std::string name){
    this->name = name;
}

void Movie::set_rate(std::string rate){
    this->rate = rate;
}

void Movie::set_watched_times(int watched_times){
    this->watched_times = watched_times;
}

std::string Movie::get_name()const {
    return this->name;
}

std::string Movie::get_rate()const{
    return this->rate;
}

int Movie::get_watched_movies()const{
    return this->watched_times;
}

void Movie::display()const {
    std::cout<<"movie name: "<<this->name<<std::endl;
    std::cout<<"movie rate: "<<this->rate<<std::endl;
    std::cout<<"movie watch time: "<<this->watched_times<<std::endl;
}

void Movie::increment(){
    this->watched_times++;
}


Movie::~Movie()
{
}

