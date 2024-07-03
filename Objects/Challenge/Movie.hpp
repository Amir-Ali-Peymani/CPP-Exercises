#ifndef _MOVIE_H
#define _MOVIE_H

#include <string>
//questions:
//1.why do we should write the const after its decleration
//2.how to know when to use const?
//3.is in the movies cpp file.
class Movie
{
private:
    std::string name;
    std::string rate;
    int watched_times;
public:
    Movie(std::string name={""}, std::string rate={""}, int watched_time={});
    Movie(const Movie &movie);
    void set_name(std::string name);
    void set_rate(std::string rate);
    void set_watched_times(int watched_times);
    std::string get_name() const;
    std::string get_rate() const;
    int get_watched_movies() const;
    void display()const;
    void increment();
    ~Movie();

};

#endif // _MOVIE_H
