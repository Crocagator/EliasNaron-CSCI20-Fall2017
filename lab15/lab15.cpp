

//Elias Naron
//9/07/2017
//mad libs
/* This is a lab where we have good practice putting certain variables exactly where you need them or it wont make sense.
i guess the funny part is it wouldnt make sense anyways because its a madlib and it is in their nature to not make sense.
*/

#include <iostream>
using namespace std;

int main() //This is where the program starts!

{
    //Strings for text input!!
    
    
    string noun1 = "", noun2 = "", noun3 = "", noun4 = "", noun5 = "" ;
    string verb1 = "", verb2 = "", verb3 = "", verb4 = "", verb5 = "";
    string propernoun1 = "", propernoun2 = "";
    string  pluralnoun1 = "", pluralnoun2 = "", pluralnoun3 = "", pluralnoun4 = "";
    string adverb1 = "";
    string anykey = "";
    string buffer = "";
    
    cout <<" Welcome to MadLibs : CODING STYLE!!!"<<endl;
    
    cout << " The story theme is : At The Arcade! "<< endl;
    
    
    
    // Player input
    
    
    cout << "When i go to the arcade with my _______________"<<endl;
    cout << " Please enter a pluralnoun!" << endl;
    cin  >> pluralnoun1 ;
    
    cout << "In \"Xmen\" you can be different ________________"<< endl;
    cout << " Please enter a pluralnoun!"<< endl;
    cin  >> pluralnoun2 ;
    
    
    cout << "The point of the game is to ___________"<< endl;
    cout << " Please enter a verb!"<< endl;
    cin  >> verb1 ;
    
    
    cout << "In \"Star Wars\" you are Luke Skywalker and you try to destroy every ________________ "<< endl;
    cout << " Please enter a noun!"<< endl;
    cin  >> noun1  ;  
    
    cout << "In a car racing  / motorcycle racin game you need to beat every computerized vehicle that you are _________________ against."<< endl;
    cout << "Please enter a verb ending with \"ing\" !"<< endl;
    cin  >> adverb1 ;
    
    
    cout << "When you play some games you win ________________"<< endl;
    cout << " Please enter a pluralnoun"<< endl;
    cin  >> pluralnoun3 ;
    
    cout << " Once you're done you can cash in your tickets to get a big _____________"<<endl;
    cout <<" Please enter a noun!"<<endl;
    cin  >> noun2;
    
    cout << "You can save your ___________________"<<endl;
    cout << "Please enter a plural noun!"<<endl;
    cin  >> pluralnoun4 ;
    
    getline(cin,buffer); //buffer :)
    
    
    // This is the actual output " the story"
    
    
    cout << "When I go to the arcade with my "<<pluralnoun1<<" there are lots of games to play."<<endl;
    cout << "I spend lots of time there with my friends. in \"xmen\" you can be different " <<pluralnoun2<<"."<<endl;
    cout << "The point of the game is to "<<verb1<<" every robot."<< endl;
    cout << "You also need to save people, and then you can go to the next level. In \"Star Wars\"you are Luke Skywalker and you "<< endl;
    cout << "try to destroy every "<<noun1<<". In car racing / motorcycle racing game you need to beat every computerized vehicle"<< endl;
    cout << "that you are "<<adverb1<<" against. There are a whole lot of other cool games."<<endl;
    cout << "when you play some games you win "<<pluralnoun3<<" for certain scores. Once you're done "<<endl;
    cout << "you can cash in your tickets to get a big "<<noun2<<"."<<endl;
    cout << "You can save your "<<pluralnoun4<<" for another time. When i went to this arcade i didn't believe how much fun it would be"<<endl;
    cout << "You might annoy your parents by asking them over and over if you can go back to there."<< endl;
    

    
    
    
    
}