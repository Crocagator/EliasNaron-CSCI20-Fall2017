#include <iostream> 
#include <iostream> 
#include <cstring> 
using namespace std;   

int main() {
    int nameLength = 0;                                             //sets the variable nameLength to an integer that is currently 0
    char * name = new char[];                                       //character datatype , of a pointer 'name' which is pointing at an array named new char

    cout << "Please enter a 10 letter word or less" << endl;        // outputting  "Please enter a 10 letter word or less" to the line and ending the line.
    cin >> name;                                                    //prompting user for user input to place the value entered and assign it to the location that 'name' is pointing to.

    char * head  = name;                                            //creates a character datatype pointer and point named 'head' which is pointint at the location that 'name' is   
    char * tail = name;                                             //creates a character datatype pointer and point named 'tail' which is pointint at the location that 'name' is
    nameLength = strlen(*name);                                     //sets 'nameLength' to the length of the string that is currently stored in the location in memory 'name'

    cout << "Your word is " << firststr << endl;                    //prints "your word is" with the variable firststr after it

    if (nameLength<10)                                              //If           'nameLength'    is less than 10         
    {
         while (*head != '\0')                                      //while the value that 'head' is pointing to is not equal to null
         {
                cout << *head;                                      //print the value that is stored where 'head' is pointing to
                head++;                                             //increment or add one to the pointer'head'
         }
     }
     else                                                           //if the other two statements are false 
     {
          cout << "WARNING WORD TOO BIG TO DISPLAY!!" << endl;      //print "WARNING WORD TOO BIG TO DISPLAY!!"
     }

     cout << endl;

     tail = &name[strlen(name) - 1];                                //points tail to the location in memory that the array used to be

     if (nameLength < 10)                                           // if 'nameLength' is less than 10
     {
          while (tail != name)                                      // while 'tail' is not equal to 'name'
          {
                 cout << *tail;                                     // prints what value is stored in the location in memory 'tail'
                 tail--;                                            // takes one away from the pointer 'tail'
          }
     }
     cout << endl;

     head = name;                                                   // point 'head' at the location in memory that is the variable 'name'
     tail = &name[strlen(name) - 1];                                // point 'tail' at the location that the array is in -1

     head++;                                                        // add one to 'head'
     tail--;                                                        // take one  away from 'tail'

     if (*head == *tail)                                            //if both 'head' and 'tail' point at the same location in memory 
     {
         cout << "It is an palindrome!" << endl;                    //prints " it is an palindrome"
     }
     else                                                           //else       
     {
         cout << "It is not an palindrome" << endl;                 // print " it is not an palindrome"
     }

     return 0; 
}