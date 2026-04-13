#include <iostream>
using namespace std;

class Book {
public:
    int id;
    string title;
    double price;
};

int main() {
    // dynamically allocate object
    Book *b = new Book;

    cout << "Enter Book ID, Title, Price: ";
    cin >> b->id >> b->title >> b->price;

    // access using pointer
    cout << "Book ID: " << b->id << endl;
    cout << "Title: " << b->title << endl;
    cout << "Price: " << b->price << endl;

    // free memory
    delete b;

    return 0;
}