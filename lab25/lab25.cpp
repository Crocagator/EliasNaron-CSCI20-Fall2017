//Elias Naron  
//10/3/2017
// This is a program where we exercise our ability to use classes. 
// This is a fun way to show we can use getters , setters , objects and of course, classes.


//includes! The ones that we need of course
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


//The first step : defining our class
class Book_ {


// i still dont really get why we keep these separate but it worked for me so ididnt change it  
    public:
    void setauthor_(string book_author_);
    void settitle_(string book_title_);
    void setcopyyr_(string copyrightyearholder_);
    void coutstuff();
    
    string getauthor_ ()const ;
    string gettitle_  ()const ;
    string  getcopyyr_ ()const ;
    
    private:
   string author_;
   string title_;
   string copyrightyear_;
   
};

// Gotta make the functions! 
//Otherwise what would the class even do / hold?

void Book_:: setauthor_ (string book_author_) {
    author_ = book_author_;
}

void Book_ :: settitle_ (string book_title_) {
    title_  = book_title_ ; 
}

void Book_ :: setcopyyr_ (string copyrightyearholder_) {
    copyrightyear_ = copyrightyearholder_ ;
}


string Book_:: getauthor_ ()const {
    return author_;
}

string Book_ :: gettitle_ ()const {
    return title_ ; 
}

string Book_ :: getcopyyr_ ()const {
   return copyrightyear_ ;
}

    void Book_ :: coutstuff () {
    cout<<"Title :"<<gettitle_()<<endl;
    cout<<"Author : "<<getauthor_()<<endl;
    cout<<"Copy right year : "<<getcopyyr_()<<endl;
 }


// now we gotta call  / use the class and its functions therin!

int main () {
    
    Book_ book_1;
    Book_ book_2;
    Book_ book_3;
    Book_ book_4;
    Book_ book_5;
    string user_information;
    
    //User input starts here !
    
    cin >> user_information;
    cin.ignore(1000, '\n');

    // getline(cin,user_information)
    cout<<"Please Enter: Book Title 1"<<endl;
    getline(cin, user_information);
    book_1.settitle_(user_information);
    
    cout<<"You set the title as : "<<user_information<<endl;
    
    cout<<endl;
    
    cout<<"Please Enter: Book Author 1"<<endl;
    
    getline(cin, user_information);
    book_1.setauthor_(user_information);
    
    cout<<endl;
    
    cout<<"You set the Author as : "<<user_information<<endl;
    
    cout<<endl;
    
    cout<<"Please Enter: Book CopyRight Year"<<endl;
    
    getline(cin,user_information);
    book_1.setcopyyr_(user_information);
    
    cout<<endl;
    
    cout<<"You set the copy right year to : "<<user_information<<endl;
    
    book_1.coutstuff();
    
    cout<<endl;
    
    cin >> user_information;
    
    
//==============================================================================
    
    cout<<"Please Enter: Book Title 2"<<endl;
    getline(cin, user_information);
    book_2.settitle_(user_information);
    
    cout<<"You set the title as : "<<user_information<<endl;
    
    cout<<endl;
    
    cout<<"Please Enter: Book Author 2"<<endl;
    
    getline(cin, user_information);
    book_2.setauthor_(user_information);
    
    cout<<endl;
    
    cout<<"You set the Author as : "<<user_information<<endl;
    
    cout<<endl;
    
    cout<<"Please Enter: Book 2 CopyRight Year"<<endl;
    
    getline(cin,user_information);
    book_2.setcopyyr_(user_information);
    
    cout<<endl;
    
    cout<<"You set the copy right year to : "<<user_information<<endl;
    
    book_2.coutstuff();
    
    cout<<endl;
    
    cin >> user_information;
    
    
    
      
//=============================================================================
    
    cout<<"Please Enter: Book Title 3"<<endl;
    getline(cin, user_information);
    book_3.settitle_(user_information);
    
    cout<<"You set the title as : "<<user_information<<endl;
    
    cout<<endl;
    
    cout<<"Please Enter: Book Author 3"<<endl;
    
    getline(cin, user_information);
    book_3.setauthor_(user_information);
    
    cout<<endl;
    
    cout<<"You set the Author as : "<<user_information<<endl;
    
    cout<<endl;
    
    cout<<"Please Enter: Book 3 CopyRight Year"<<endl;
    
    getline(cin,user_information);
    book_3.setcopyyr_(user_information);
    
    cout<<endl;
    
    cout<<"You set the copy right year to : "<<user_information<<endl;
    
    book_3.coutstuff();
    
    cout<<endl;
    
    cin >> user_information;
    
    
    
//==============================================================================  
    
    cout<<"Please Enter: Book Title 4"<<endl;
    getline(cin, user_information);
    book_4.settitle_(user_information);
    
    cout<<"You set the title as : "<<user_information<<endl;
    
    cout<<endl;
    
    cout<<"Please Enter: Book Author 4"<<endl;
    
    getline(cin, user_information);
    book_4.setauthor_(user_information);
    
    cout<<endl;
    
    cout<<"You set the Author as : "<<user_information<<endl;
    
    cout<<endl;
    
    cout<<"Please Enter: Book 4 CopyRight Year"<<endl;
    
    getline(cin,user_information);
    book_4.setcopyyr_(user_information);
    
    cout<<endl;
    
    cout<<"You set the copy right year to : "<<user_information<<endl;
    
    book_4.coutstuff();
    
    cout<<endl;
    
    cin >> user_information;
    
   
//============================================================================cout<<"Please Enter: Book Title 4"<<endl;
    
    cout<<"Please Enter: Book Title 5"<<endl;
    getline(cin, user_information);
    book_5.settitle_(user_information);
    
    cout<<"You set the title as : "<<user_information<<endl;
    
    cout<<endl;
    
    cout<<"Please Enter: Book Author 5"<<endl;
    
    getline(cin, user_information);
    book_5.setauthor_(user_information);
    
    cout<<endl;
    
    cout<<"You set the Author as : "<<user_information<<endl;
    
    cout<<endl;
    
    cout<<"Please Enter: Book 5 CopyRight Year"<<endl;
    
    getline(cin,user_information);
    book_5.setcopyyr_(user_information);
    
    cout<<endl;
    
    cout<<"You set the copy right year to : "<<user_information<<endl;
    
    book_5.coutstuff();
   
        
   
    
   
}