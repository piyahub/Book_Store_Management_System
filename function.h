#pragma once

#include <iostream>
#include <fstream>
#include <vector>
#include "class.h"

using namespace std;



void show_books(const vector<Book>& books){
    cout << "Book details:\n";
    for (int i = 0; i < books.size(); ++i){
        cout<< "Index: "<< i + 1<< "\n";
        cout<< "Name: "<< books[i].name<< "\n";
        cout<< "Author: "<< books[i].artist<< "\n";
        cout<< "Genre: "<< books[i].genre<< "\n";
        cout<< "Release Date: "<< books[i].release_date<< "\n";
        cout<< "Quantity in Stock: "<< books[i].quantity_in_stock<< "\n";
        if (books[i].due_date != "0"){
            cout<< "Due date: "<< books[i].due_date<< "\n";
        }
        cout<< "----------------------\n";
    }
}

void save_books(const vector<Book>& books){
    ofstream file("book_data.txt");
    if (file.is_open()){
        for (const auto& book : books){
            file << book.name << "," << book.artist << "," << book.genre << ","
                 << book.release_date << "," << book.due_date << "," << book.quantity_in_stock << "\n";
        }
        file.close();
        cout << "Books saved successfully.\n";
    }
}

void load_books(vector<Book>& books){
    ifstream file("book_data.txt");
    if (file.is_open()){
        while (file){
            Book book;
            getline(file, book.name, ',');
            getline(file, book.artist, ',');
            getline(file, book.genre, ',');
            getline(file, book.release_date, ',');
            getline(file, book.due_date, ',');
            getline(file, book.quantity_in_stock, '\n');
            if (book.name.empty() && book.artist.empty() && book.genre.empty() &&
                book.release_date.empty() && book.quantity_in_stock.empty() && book.due_date.empty()){
                continue;
            }

            books.push_back(book);
        }
        file.close();
        cout << "Books loaded successfully.\n";
    }
}


void show_movies(const vector<Movie>& movies){
    cout << "Movie details:\n";
    for (int i = 0; i < movies.size(); ++i){
        cout<< "Index: "<< i + 1 <<"\n";
        cout<< "Name: "<< movies[i].name <<"\n";
        cout<< "Author: "<< movies[i].artist <<"\n";
        cout<< "Genre: "<< movies[i].genre <<"\n";
        cout<< "Release Date: "<< movies[i].release_date <<"\n";
        cout<< "Quantity in Stock: "<< movies[i].quantity_in_stock <<"\n";
        if (movies[i].due_date != "0"){
            cout<< "Due date: "<< movies[i].due_date <<"\n";
        }
        cout << "----------------------\n";
    }
}

void save_movies(const vector<Movie>& movies){
    ofstream file("movie_data.txt");
    if (file.is_open()){
        for (const auto& movie : movies){
            file << movie.name << "," << movie.artist << "," << movie.genre << ","
                 << movie.release_date << "," << movie.due_date << "," << movie.quantity_in_stock << "," << movie.duration_of_movie << "\n";
        }
        file.close();
        cout << "Movies saved successfully.\n";
    }
}

void load_movies(vector<Movie>& movies){
    ifstream file("movie_data.txt");
    if (file.is_open()){
        while (file){
            Movie movie;
            getline(file, movie.name, ',');
            getline(file, movie.artist, ',');
            getline(file, movie.genre, ',');
            getline(file, movie.release_date, ',');
            getline(file, movie.due_date, ',');
            getline(file, movie.quantity_in_stock, '\n');
            getline(file, movie.duration_of_movie, '\n');
            if (movie.name.empty() && movie.artist.empty() && movie.genre.empty() &&
                movie.release_date.empty() && movie.quantity_in_stock.empty() && movie.due_date.empty() && movie.duration_of_movie.empty()){
                continue;
            }

            movies.push_back(movie);
        }
        file.close();
        cout << "Movies loaded successfully.\n";
    }
}


void show_musics(const vector<Music>& musics){
    cout << "Music details:\n";
    for (int i = 0; i < musics.size(); ++i){
        cout<< "Index: "<< i + 1<< "\n";
        cout<< "Name: "<< musics[i].name<< "\n";
        cout<< "Author: "<< musics[i].artist<< "\n";
        cout<< "Genre: "<< musics[i].genre<< "\n";
        cout<< "Release Date: "<< musics[i].release_date<< "\n";
        cout<< "Quantity in Stock: "<< musics[i].quantity_in_stock<< "\n";
        if (musics[i].due_date != "0"){
            cout<< "Due date: "<< musics[i].due_date<< "\n";
        }
        cout << "----------------------\n";
    }
}

void save_musics(const vector<Music>& musics){
    ofstream file("music_data.txt");
    if (file.is_open()){
        for (const auto& music : musics){
            file << music.name << "," << music.artist << "," << music.genre << ","
                 << music.release_date << "," << music.due_date << "," << music.quantity_in_stock << "\n";
        }
        file.close();
        cout << "Musics saved successfully.\n";
    }
}

void load_musics(vector<Music>& musics){
    ifstream file("music_data.txt");
    if (file.is_open()){
        while (file){
            Music music;
            getline(file, music.name, ',');
            getline(file, music.artist, ',');
            getline(file, music.genre, ',');
            getline(file, music.release_date, ',');
            getline(file, music.due_date, ',');
            getline(file, music.quantity_in_stock, '\n');
            if (music.name.empty() && music.artist.empty() && music.genre.empty() &&
                music.release_date.empty() && music.quantity_in_stock.empty() && music.due_date.empty()){
                continue;
            }

            musics.push_back(music);
        }
        file.close();
        cout << "Musics loaded successfully.\n";
    }
}


void show_games(const vector<Game>& games){
    cout << "Game details:\n";
    for (int i = 0; i < games.size(); ++i){
        cout<< "Index: "<< i + 1<< "\n";
        cout<< "Name: "<< games[i].name<< "\n";
        cout<< "Author: "<< games[i].artist<< "\n";
        cout<< "Genre: "<< games[i].genre<< "\n";
        cout<< "Release Date: "<< games[i].release_date<< "\n";
        cout<< "Quantity in Stock: "<< games[i].quantity_in_stock<< "\n";
        if (games[i].due_date != "0"){
            cout<< "Due date: "<< games[i].due_date<< "\n";
        }
        cout << "----------------------\n";
    }
}

void save_games(const vector<Game>& games){
    ofstream file("game_data.txt");
    if (file.is_open()){
        for (const auto& game : games){
            file << game.name << "," << game.artist << "," << game.genre << ","
                 << game.release_date << "," << game.due_date << "," << game.quantity_in_stock << "\n";
        }
        file.close();
        cout << "Games saved successfully.\n";
    }
}

void load_games(vector<Game>& games){
    ifstream file("game_data.txt");
    if (file.is_open()){
        while (file){
            Game game;
            getline(file, game.name, ',');
            getline(file, game.artist, ',');
            getline(file, game.genre, ',');
            getline(file, game.release_date, ',');
            getline(file, game.due_date, ',');
            getline(file, game.quantity_in_stock, '\n');
            if (game.name.empty() && game.artist.empty() && game.genre.empty() &&
                game.release_date.empty() && game.quantity_in_stock.empty() && game.due_date.empty()){
                continue;
            }

            games.push_back(game);
        }
        file.close();
        cout << "Games loaded successfully.\n";
    }
}
