#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

class GeneralInfo{
public:
    string name;
    string artist;
    string genre;
    string release_date;
    string due_date;
    string quantity_in_stock;
};

class Book : public GeneralInfo{
public:
    void get_info(){
        cin.ignore();
        cout << "Enter the name of the book: ";
        getline(cin, name);
        cout << "Enter the name of the author: ";
        getline(cin, artist);
        cout << "Enter the genre: ";
        getline(cin, genre);
        cout << "Enter release date: ";
        cin >> release_date;
        cout << "Enter quantity in stock: ";
        cin >> quantity_in_stock;
        cout << "Do you want to set a due date? (1 for yes, 0 for no): ";
        int selection;
        cin >> selection;
        if (selection == 1){
            cout << "Enter due date: ";
            cin >> due_date;
        }
        else{
            due_date = "0";
        }
    }
    void sell_book(){
        cout << "Enter the new amount that have in stock: ";
        cin >> quantity_in_stock;
        cout << "Current amount in stock: " << quantity_in_stock;
    }
};

class Movie : public GeneralInfo{
public:
    string duration_of_movie;
    void get_info(){
        cin.ignore();
        cout << "Enter the name of the movie: ";
        getline(cin, name);
        cout << "Enter the name of the director: ";
        getline(cin, artist);
        cout << "Enter the genre: ";
        getline(cin, genre);
        cout << "Enter the duration of the movie: ";
        cin >> duration_of_movie;
        cout << "Enter release date: ";
        cin >> release_date;
        cout << "Enter quantity in stock: ";
        cin >> quantity_in_stock;
        cout << "Do you want to set a due date? (1 for yes, 0 for no): ";
        int selection;
        cin >> selection;
        if (selection == 1){
            cout << "Enter due date: ";
            cin >> due_date;
        }
        else{
            due_date = "0";
        }
    }
    void sell_movie(){
        cout << "Enter the new amount that have in stock: ";
        cin >> quantity_in_stock;
        cout << "Current amount in stock: " << quantity_in_stock;
    }
};

class Music : public GeneralInfo{
public:
    void get_info(){
        cin.ignore();
        cout << "Enter the name of the album: ";
        getline(cin, name);
        cout << "Enter the name of the artist: ";
        getline(cin, artist);
        cout << "Enter the genre: ";
        getline(cin, genre);
        cout << "Enter release date: ";
        cin >> release_date;
        cout << "Enter quantity in stock: ";
        cin >> quantity_in_stock;
        cout << "Do you want to set a due date? (1 for yes, 0 for no): ";
        int selection;
        cin >> selection;
        if (selection == 1){
            cout << "Enter due date: ";
            cin >> due_date;
        }
        else{
            due_date = "0";
        }
    }
    void sell_music(){
        cout << "Enter the new amount that have in stock: ";
        cin >> quantity_in_stock;
        cout << "Current amount in stock: " << quantity_in_stock;
    }
};

class Game : public GeneralInfo{
public:
    void get_info(){
        cin.ignore();
        cout << "Enter the name of the game: ";
        getline(cin, name);
        cout << "Enter the name of the publisher: ";
        getline(cin, artist);
        cout << "Enter the genre: ";
        getline(cin, genre);
        cout << "Enter release date: ";
        cin >> release_date;
        cout << "Enter quantity in stock: ";
        cin >> quantity_in_stock;
        cout << "Do you want to set a due date? (1 for yes, 0 for no): ";
        int selection;
        cin >> selection;
        if (selection == 1){
            cout << "Enter due date: ";
            cin >> due_date;
        }
        else{
            due_date = "0";
        }
    }
    void sell_game(){
        cout << "Enter the new amount that have in stock: ";
        cin >> quantity_in_stock;
        cout << "Current amount in stock: " << quantity_in_stock;
    }
};
