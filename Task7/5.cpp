#include<iostream>
#include<string>
using namespace std;

// Visualize a digital multimedia library management system designed to catalog and circulate
// a diverse range of media items, including books, DVDs, CDs, and magazines. The Media class
// serves as the base, encapsulating core data members such as title, publicationDate, uniqueID,
// and publisher. It provides functions like displayInfo() to output media details, checkOut() to
// process lending, and returnItem() to handle returns.
// Derived classes—Book, DVD, CD, and Magazine—introduce additional attributes:
//      Book includes author, ISBN, and numberOfPages, modifying displayInfo() for books.
//      DVD incorporates director, duration, and rating, updating displayInfo() for movie
//     details.
//      CD includes artist, numberOfTracks, and genre, adapting displayInfo() for music
//     albums.
// The system supports function overloading for searching media by different attributes (e.g.,
// title, author, or publication year).

class Media{
public:
    string title;
    string publicationDate;
    int uniqueID;
    string publisher;

    Media(string t, string pd, int uid, string pub){
        title=t;
        publicationDate=pd;
        uniqueID=uid;
        publisher=pub;
    }

    void displayInfo(){
        cout<<"Title: "<<title<<endl;
        cout<<"Publication Date: "<<publicationDate<<endl;
        cout<<"ID: "<<uniqueID<<endl;
        cout<<"Publisher: "<<publisher<<endl;
    }

    void checkOut(){
        cout<<title<<" has been checked out."<<endl;
    }

    void returnItem(){
        cout<<title<<" has been returned."<<endl;
    }

    void searchMedia(string t){
        cout<<"Searching by title: "<<t<<endl;
    }

    void searchMedia(string author, int year){
        cout<<"Searching by author: "<<author<<" and year: "<<year<<endl;
    }

    void searchMedia(int year){
        cout<<"Searching by year: "<<year<<endl;
    }
};

class Book: public Media{
public:
    string author;
    string ISBN;
    int numberOfPages;

    Book(string t, string pd, int uid, string pub, string a, string isbn, int np): Media(t,pd,uid,pub){
        author=a;
        ISBN=isbn;
        numberOfPages=np;
    }

    void displayInfo(){
        cout<<"--- Book Info ---"<<endl;
        cout<<"Title: "<<title<<endl;
        cout<<"Author: "<<author<<endl;
        cout<<"ISBN: "<<ISBN<<endl;
        cout<<"Pages: "<<numberOfPages<<endl;
        cout<<"Publisher: "<<publisher<<endl;
    }
};

class DVD: public Media{
public:
    string director;
    float duration;
    string rating;

    DVD(string t, string pd, int uid, string pub, string dir, float dur, string rat): Media(t,pd,uid,pub){
        director=dir;
        duration=dur;
        rating=rat;
    }

    void displayInfo(){
        cout<<"--- DVD Info ---"<<endl;
        cout<<"Title: "<<title<<endl;
        cout<<"Director: "<<director<<endl;
        cout<<"Duration: "<<duration<<" mins"<<endl;
        cout<<"Rating: "<<rating<<endl;
    }
};

class CD: public Media{
public:
    string artist;
    int numberOfTracks;
    string genre;

    CD(string t, string pd, int uid, string pub, string art, int nt, string gen): Media(t,pd,uid,pub){
        artist=art;
        numberOfTracks=nt;
        genre=gen;
    }

    void displayInfo(){
        cout<<"--- CD Info ---"<<endl;
        cout<<"Title: "<<title<<endl;
        cout<<"Artist: "<<artist<<endl;
        cout<<"Tracks: "<<numberOfTracks<<endl;
        cout<<"Genre: "<<genre<<endl;
    }
};

int main(){
    Book b("Harry Potter", "1997-06-26", 1001, "Bloomsbury", "J.K. Rowling", "978-0439708180", 309);
    b.displayInfo();
    b.checkOut();
    b.returnItem();

    cout<<endl;

    DVD d("Inception", "2010-07-16", 1002, "Warner Bros", "Christopher Nolan", 148, "PG-13");
    d.displayInfo();
    d.checkOut();

    cout<<endl;

    CD c("Thriller", "1982-11-30", 1003, "Epic Records", "Michael Jackson", 9, "Pop");
    c.displayInfo();

    cout<<endl;

    b.searchMedia("Harry Potter");
    b.searchMedia("J.K. Rowling", 1997);
    b.searchMedia(1997);
}