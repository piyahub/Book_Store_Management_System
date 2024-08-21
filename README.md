# Book_Store_Management_System
### Book Store Management System

This software is designed to help manage inventory and sales in a bookstore. Below is a guide to understanding and using the system effectively.

### Overview

The Book Store Management System includes classes for managing different types of items in the inventory:

- **Book**: Represents a book with attributes like name, author, genre, release date, due date, and quantity in stock.
- **Movie**: Represents a movie with attributes like name, director, genre, release date, duration, due date, and quantity in stock.
- **Music**: Represents an album with attributes like name, artist, genre, release date, due date, and quantity in stock.
- **Game**: Represents a video game with attributes like name, publisher, genre, release date, due date, and quantity in stock.

These classes inherit from a base class called **GeneralInfo**, which contains common attributes shared among all items.

### Features

The system offers the following features:

1. **Add Items**: Add new books, movies, music albums, and video games to the inventory.
2. **Edit Inventory**: Update details of existing items in the inventory, such as quantity in stock.
3. **View Details**: Display details of items including name, author/artist/director, genre, release date, and quantity in stock.
4. **Sell Items**: Record sales transactions by updating the quantity in stock.
5. **Data Persistence**: Data is saved to text files (`book_data.txt`, `movie_data.txt`, `music_data.txt`, `game_data.txt`) for persistence between sessions.

### Usage

1. **Compile the Code**: Compile the code files (`main.cpp`, `function.cpp`, `class.h`) using a C++ compiler.

2. **Run the Executable**: Execute the compiled program to start the Book Store Management System.

3. **Menu Options**: Upon running the program, you'll be presented with a menu offering options to manage different types of inventory items (books, movies, music, games), as well as to exit the program.

4. **Select Actions**: Choose from options such as adding new items, editing inventory, viewing details, or recording sales transactions.

5. **Follow Prompts**: Follow the prompts to input information about items or select items for editing or selling.

6. **Save Changes**: All changes made to the inventory will be saved automatically upon exiting the program.
