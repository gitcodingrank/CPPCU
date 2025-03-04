// Class and Object:
// Problem Statement: Create a class Book with following members:
// data members:
// bookTitle
// bookAuthor
// bookPages
// bookPrice

// function members:
// void printBookDetails(){
//    //name, title, author, and price
// }
// Note:
// 1. Make sure to create atleast 5 book objects using constructor function.
// 2. add these above created objects either to array or vector
// 3. Loop through the array or vector to call printBookDetails function on each object.
// 4. Make sure to complete this in 10 minutes.



// Class: It is a blueprint/structure/map

// Bike Creation:
// Bike - Map/Blueprint/Design

#include <iostream>
#include <vector>
using namespace std;

class Book{

    public:
    string bookTitle;
    string bookAuthor;
    int bookPages;
    float bookPrice;

    //default constructor: it doesn't accept any parameters
    Book(){

    }
    //Parameterized constructor: It accepts parameters
    Book(string name, string author, int pages, float price){
        bookTitle = name;
        bookAuthor = author;
        bookPages = pages;
        bookPrice = price;

    }


    void printBookDetails(){
        cout <<"Book Name: "<<bookTitle<<endl;
        cout <<"Book Author: "<<bookAuthor<<endl;
        cout <<"Book Pages: "<<bookPages<<endl;
        cout <<"Book Price: "<<bookPrice<<endl;  
    }

    void printBooksDetailsAccordingToTheGivenParameters(string type, void* value){
        
        }

};


int main(){

	Book b1 = Book("ABC", "XYZ", 450, 999.78);
	Book b2 = Book("ABC", "XYZ", 450, 999.78);
	Book b3 = Book("ABC", "XYZ", 450, 999.78);
	Book b4 = Book("ABC", "XYZ", 450, 999.78);
	Book b5 = Book("ABC", "XYZ", 450, 999.78);
	Book b6 = Book("ABC", "XYZ", 450, 999.78);
	
	vector<Book> books;

	books.push_back(b1);
	books.push_back(b2);
	books.push_back(b3);
	books.push_back(b4);
	books.push_back(b5);
	books.push_back(b6);
	
	for(int i=0;i<books.size();i++){
		books[i].printBookDetails();
	}
}





























