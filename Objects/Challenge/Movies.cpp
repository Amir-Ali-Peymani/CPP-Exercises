#include "Movies.hpp"
//how to know when to write down refrences?
//like i forgot to write it that was i did not undrestand why there was no incremention
//in the increment function is the question
Movies::Movies()
{
}

void Movies::add_movie(std::string name, std::string rate, int watched_times){
    Movie movie;
    movie.set_name(name);
    movie.set_rate(rate);
    movie.set_watched_times(watched_times);
    movies.push_back(movie);
}

void Movies::display(){
    if(movies.empty()){
        std::cout<<"the movies is empty"<<std::endl;
    }else{
        for(auto movie: movies){
            movie.display();
    }
    }
}

void Movies::increment_movie(std::string name){
    bool exist{};
    for(auto movie: movies){
        if(movie.get_name()==name){
            exist = {true};
        }
    }
    if(exist == true){
        for(auto &movie : movies){
            if(movie.get_name()==name){
                movie.increment();
            }
        }
    }else{
        std::cout<<"the movie name does not exist!!"<<std::endl;
    }
}

Movies::~Movies()
{
}

