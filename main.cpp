#include <iostream>
#include <vector>
#include "class.h"
#include "function.h"

using namespace std;

int main(){
    int selection = 0;
    vector<Book> book_obj;
    load_books(book_obj);
    vector<Movie> movie_obj;
    load_movies(movie_obj);
    vector<Music> music_obj;
    load_musics(music_obj);
    vector<Game> game_obj;
    load_games(game_obj);
    
    Book new_book;
    Movie new_movie;
    Music new_music;
    Game new_game;
    while (selection != 5){
        cout << "\n1) Book\n2) Movie\n3) Music\n4) Game \n5) Exit \n";
        cout << "Input a selection: ";
        cin >> selection;
        switch (selection){
            case 1:
                cout << "\nBook; \n";
                cout << "1) Add a book \n2) Edit book inventory \n3) Show details of the books\n4) Sell a book \nEnter your selection: ";
                cin >> selection;
                switch (selection){
                    case 1:
                        new_book.get_info();
                        book_obj.push_back(new_book);
                        break;
                    case 2:
                        show_books(book_obj);
                        cout << "Enter the index of the book you want to edit: ";
                        cin >> selection;
                        selection --;
                        book_obj[selection].get_info();
                        break;
                    case 3:
                        show_books(book_obj);
                        break;
                    case 4:
                        show_books(book_obj);
                        cout << "Enter the index of the book you want to edit: ";
                        cin >> selection;
                        selection --;
                        book_obj[selection].sell_book();
                        break;
                    default:
                        cout << "\nSelection is not valid. \n";
                }
                break;

            case 2:
                cout << "\nMovie; \n";
                cout << "1) Add a movie \n2) Edit movie inventory \n3) Show details of the movies\n4) Sell a movie \nEnter your selection: ";
                cin >> selection;
                switch (selection){
                    case 1:
                        new_movie.get_info();
                        movie_obj.push_back(new_movie);
                        break;
                    case 2:
                        show_movies(movie_obj);
                        cout << "Enter the index of the movie you want to edit: ";
                        cin >> selection;
                        selection --;
                        movie_obj[selection].get_info();
                        break;
                    case 3:
                        show_movies(movie_obj);
                        break;
                    case 4:
                        show_movies(movie_obj);
                        cout << "Enter the index of the movie you want to edit: ";
                        cin >> selection;
                        selection --;
                        movie_obj[selection].sell_movie();
                        break;
                    default:
                        cout << "\nSelection is not valid. \n";
                }
                break;

            case 3:
                cout << "\nMusic; \n";
                cout << "1) Add a music \n2) Edit music inventory \n3) Show details of the musics\n4) Sell a music \nEnter your selection: ";
                cin >> selection;
                switch (selection){
                    case 1:
                        new_music.get_info();
                        music_obj.push_back(new_music);
                        break;
                    case 2:
                        show_musics(music_obj);
                        cout << "Enter the index of the music you want to edit: ";
                        cin >> selection;
                        selection --;
                        music_obj[selection].get_info();
                        break;
                    case 3:
                        show_musics(music_obj);
                        break;
                    case 4:
                        show_musics(music_obj);
                        cout << "Enter the index of the music you want to edit: ";
                        cin >> selection;
                        selection --;
                        music_obj[selection].sell_music();
                        break;
                    default:
                        cout << "\nSelection is not valid. \n";
                }
                break;

            case 4:
                cout << "\nGame; \n";
                cout << "1) Add a game \n2) Edit game inventory \n3) Show details of the games\n4) Sell a game \nEnter your selection: ";
                cin >> selection;
                switch (selection){
                    case 1:
                        new_game.get_info();
                        game_obj.push_back(new_game);
                        break;
                    case 2:
                        show_games(game_obj);
                        cout << "Enter the index of the game you want to edit: ";
                        cin >> selection;
                        selection --;
                        game_obj[selection].get_info();
                        break;
                    case 3:
                        show_games(game_obj);
                        break;
                    case 4:
                        show_games(game_obj);
                        cout << "Enter the index of the game you want to edit: ";
                        cin >> selection;
                        selection --;
                        game_obj[selection].sell_game();
                        break;
                    default:
                        cout << "\nSelection is not valid. \n";
                }
                break;

            case 5:
                cout << "Exiting... \n";
                save_books(book_obj);
                save_movies(movie_obj);
                save_musics(music_obj);
                save_games(game_obj);
                break;

            default:
                cout << "Enter a valid selection. \n";
                break;
        }
    }
    return 0;
}
