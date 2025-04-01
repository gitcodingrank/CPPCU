/*Task - Library Management System:

Run->
Welcome to Library Management System!

1. Add New Book
2. Search By Book Id
3. Get All Books
4. Update BooK by Id
5. Delete Book by Id
6. Exit

Enter Your Choice: 1

Enter Unique Book Id: 12121
Enter Book Title: Book1
Enter Book Author: Author1

Book has created successfully!

1. Add New Book
2. Search By Book Id
3. Get All Books
4. Update BooK by Id
5. Delete Book by Id
6. Exit

Enter Your Choice: 2

Enter Book Id: 12121
---------------------------------------------------------------------------------
Book Details: Id: 12121, Title: Book1, Author: Author1, status: Available/Pending
---------------------------------------------------------------------------------

1. Add New Book
2. Search By Book Id
3. Get All Books
4. Update BooK by Id
5. Delete Book by Id
6. Exit

Enter Your Choice: 2

Enter Book Id: 34232

---------------------------------------------------------------------------------
Invalid Book Id: Kindly Enter the correct book id
---------------------------------------------------------------------------------

1. Add New Book [Do it]
2. Search By Book Id [Do it]
3. Get All Books [Do it]
4. Update BooK by Id [Leave it]
5. Delete Book by Id  [Leave it]
6. Exit

Enter Your Choice: 6

Do you want to exit(y/n)? : Y
---------------------------------------------------------------------------------
Thank you for using the application!
---------------------------------------------------------------------------------

Note: Try to Implement this application using object oriented programming approach.
                    RUN
                     |
                  UI LAYER(class LibarayUI)
                    |
                 libraryService(Abstract) ----> class libraryServiceImpl(Main Logic)
                                                                 |
                                                               File(DB)
*/

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;

class Book
{
private:
    int bookId;
    string bookName;
    string authorName;
    string status = "Available";

public:
    Book()
    {
    }
    Book(int id, string bName, string aName)
    {
        this->bookId = id;
        this->bookName = bName;
        this->authorName = aName;
    }
    // getter methods
    int getBookId()
    {
        return this->bookId;
    }
    string getBookName()
    {
        return this->bookName;
    }
    string getAuthorName()
    {
        return this->authorName;
    }
    string getStatus()
    {
        return this->status;
    }
    // setter methods
    void setBookId(int id)
    {
        this->bookId = id;
    }
    void setBookName(string name)
    {
        this->bookName = name;
    }
    void setAuthorName(string name)
    {
        this->authorName = name;
    }
    void setStatus(string status)
    {
        this->status = status;
    }

    string toString()
    {
        // 342323,Book1,Author1,Available
        return to_string(this->bookId) + "," + this->bookName + ", " + this->authorName + "," + this->status;
    }
};

// abstract class
class BookService
{
public:
    virtual string addBook(Book &book) = 0;
    virtual Book getBookById(int bookId) = 0;
    virtual void getAllBooks() = 0;
    virtual string updateBookById(Book &book) = 0;
    virtual string deleteBookById(int bookId) = 0;
};

class BookServiceImpl : public BookService
{
public:
    string addBook(Book &book) override
    {

        ofstream file("library.txt", ios::app);
        if (!file.is_open())
        {
            return "Error While Opening the File";
        }
        file << book.toString() << "\n";
        file.close();
        return "New Book has added successfully!";
    }
    Book getBookById(int bookId) override
    {

        ifstream file("library.txt");
        if (!file.is_open())
        {
            cout << "Error While Opening the File" << endl;
        }
        string line;
        Book book;
        while (getline(file, line))
        {
            stringstream ss(line);

            string id;
            string title, author, status;
            getline(ss, id, ',');
            getline(ss, title, ',');
            getline(ss, author, ',');
            getline(ss, status, ',');

            if (stoi(id) == bookId)
            {
                book.setBookId(stoi(id));
                book.setBookName(title);
                book.setBookName(title);
                book.setAuthorName(author);
                book.setStatus(status);
            }
        }
        return book;
    }

    void getAllBooks() override
    {
    }
    string updateBookById(Book &book) override{
        
        ifstream file("library.txt");
        vector<Book> books;
        string line;

        while(getline(file, line)){
            
            stringstream ss(line);
            string bookId, bookName, authorName, status;
            getline(ss, bookId, ',');
            getline(ss, bookName, ',');
            getline(ss, authorName, ',');
            getline(ss, status, ',');

            Book receivedBook = Book(stoi(bookId), bookName, authorName);
            receivedBook.setStatus(status);
            books.push_back(receivedBook);
        }
        file.close();

        ofstream addFile("library.txt", ios::trunc);
        bool isUpdated = false;
        for(auto &b: books){
            if(b.getBookId() == book.getBookId()){
                b.setBookName(book.getBookName());
                b.setAuthorName(book.getAuthorName());
                b.setStatus(book.getStatus());
                addFile <<b.toString()<<"\n";
                isUpdated = true;
            }else{
                addFile <<b.toString()<<"\n";
            }
        }
        addFile.close();
        return isUpdated?"Updated Successfully.":"Invalid Id";
    }
    string deleteBookById(int bookId) override
    {

        ifstream file("library.txt"); // Open file for reading
        if (!file.is_open())
        {
            return "Error opening file for reading!";
        }

        vector<Book> books;
        string line;

        // Collecting all the books inside the vector
        while (getline(file, line))
        {
            stringstream ss(line);
            string id, bookName, bookAuthor, status;

            getline(ss, id, ',');
            getline(ss, bookName, ',');
            getline(ss, bookAuthor, ',');
            getline(ss, status, ',');

            Book book;
            book.setBookId(stoi(id));
            book.setBookName(bookName);
            book.setAuthorName(bookAuthor);
            book.setStatus(status);

            books.push_back(book);
        }
        file.close(); // Close the file after reading

        // Logic to delete the particular book
        bool found = false;

        // Open the file for rewriting (overwrite old content)
        ofstream outFile("library.txt", ios::trunc);
        if (!outFile.is_open())
        {
            return "Error opening file for writing!";
        }

        // Writing books back except the one with the matching bookId
        for (auto &book : books)
        {
            if (book.getBookId() != bookId)
                outFile << book.toString() << "\n";
            else
                found = true; // Mark that book was found and deleted
        }
        outFile.close();

        return found ? "Deleted the book successfully" : "Invalid Book Id";
    }
};

class BookUI
{
public:
    static void showMenu()
    {
        cout << "1. Add Book" << endl;
        cout << "2. Search Book By Id" << endl;
        cout << "3. Get All Books" << endl;
        cout << "4. Update Book By Id" << endl;
        cout << "5. Delete Book By Id" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter Your Choice: ";
    }

    static void addNewBook()
    {
        int id;

        string title, author;

        cout << "Enter Unique Book Id: ";
        cin >> id;

        cout << "Enter Book Title: ";
        cin.ignore();
        getline(cin, title);

        cout << "Enter Book Author Name: ";
        getline(cin, author);

        cout << "Id is: " << id << endl;
        Book newBook = Book(id, title, author);

        BookService *bookService = new BookServiceImpl();
        cout << "--------------------------------------------" << endl;
        cout << bookService->addBook(newBook) << endl;
        cout << "--------------------------------------------" << endl;
    }

    static void bookById()
    {
        int id;

        cout << "Enter Book Id: ";
        cin >> id;

        BookService *bookService = new BookServiceImpl();

        Book book = bookService->getBookById(id);
        if (book.getBookId() != id)
        {
            cout << "======================================" << endl;
            cout << "Invalid Book Id" << endl;
            cout << "======================================" << endl;
            return;
        }

        cout << "--------------------------------------------" << endl;
        cout << "Id: " << book.getBookId() << " Name: " << book.getAuthorName() << " Author: " << book.getAuthorName() << " Available: " << book.getStatus() << endl;
        cout << "--------------------------------------------" << endl;
    }

    static void removeBookById()
    {
        int id;

        cout << "Enter Book Id: ";
        cin >> id;

        BookService *bookService = new BookServiceImpl();
        string msg = bookService->deleteBookById(id);
        cout << "======================================" << endl;
        cout << msg << endl;
        cout << "======================================" << endl;
    }
    
    static void updateBook(){
        int id;

        string title, author, status;

        cout << "Enter Unique Book Id: ";
        cin >> id;

        cout << "Enter Book Title: ";
        cin.ignore();
        getline(cin, title);

        cout << "Enter Book Author Name: ";
        getline(cin, author);

        cout << "Enter Book Status: ";
        getline(cin, status);

        cout << "Id is: " << id << endl;
        Book newBook = Book(id, title, author);
        newBook.setStatus(status);

        BookService *bookService = new BookServiceImpl();
        cout << "--------------------------------------------" << endl;
        cout << bookService->updateBookById(newBook) << endl;
        cout << "--------------------------------------------" << endl;
    }
};

int main()
{

    cout << "Welcome to Library Management System!" << endl;
    bool isAppRunning = true;

    while (isAppRunning)
    {
        BookUI::showMenu();
        int choice;

        cin >> choice;

        switch (choice)
        {
        case 1:
            BookUI::addNewBook();
            break;
        case 2:
            BookUI::bookById();
            break;
        case 3:
            // get All Books
            break;
        case 4:
            BookUI::updateBook();
            break;
        case 5:
            BookUI::removeBookById();
            break;
        case 6:
            cout << "Do you want to exit(y/n)?: ";
            char res;
            cin >> res;
            if (res == 'Y' || res == 'y')
            {
                isAppRunning = false;
                cout << "Thank for you using the applicaiton!" << endl;
            }
            break;
        default:
            cout << "Invalid Choice, Please Enter Again" << endl;
            break;
        }
    }
}