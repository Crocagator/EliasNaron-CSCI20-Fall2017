/* 
Created by : Elias Naron 
Created on : 11/27/2017
Purpose of program :
This programs intention is to read a text file with students answers, then check them to another text file that is the answer key.
It is a way to quickly score the grades of multiple students with multiple answers.
*/


// All the includes that are needed.
#include <iostream>                                                             
#include <ios>
#include <string>
#include <cstring>
#include <fstream>

// Gotta save some time by using namespace std!
using namespace std;

// Program starts here!
int main(){
    
    //students name variables
    string first_name;                                                        
    string last_name;
    
    //Number of questions on input text
    int num_questions = 25;
    
    //these variables are for the reading of the characters for answers with the total of them being the number of questions on the test obviously!
    char studentAnswers[num_questions];
    char correctAnswers[num_questions];
    
    //this is storing how we calculate the scores and the students marks
    int num_correct = 0;
    int num_incorrect = 0;
    int num_omitted = 0;
    
    //scoring variables
    double score = 0.0;
    double score_possible = 0.0;
    double total_score = 0.0;
    
    //We need these so we can use input/output FS (file system)
    ifstream input;
    ofstream output;
    
    // These are here because at the end of the inputs there are strings of text that are not Char's this is the only
    // way to hold a string answers
    string non_char_ans1 = " ";
    string non_char_ans2 = " ";
    string non_char_ans3 = " ";
    string non_char_ans4 = " ";
    string non_char_ans5 = " ";
    string non_char_ans6 = " ";
    
    
//==============================INPUT AND OUTPUT====================================================================================================
    cout << "How many questions on this test are single character answers? (ex: A, B, C  = 3):   ";
    cin >> num_questions;                                                     
    // Need the code above to know how many characters to loop through to check against;
    
    // Now we open the answer key which stores the correct answers for us to later check the students marks against.
    cout << "Opening input file named:   answerkey.txt   " << endl; 
    input.open("answerkey.txt");
    
    // This just tells you if the file cannot open for some reason, perhaps its missing?
    if (!input.is_open()){
        cout << "Could not open: answerkey.txt ";
    }
    
    // The for loop below is made to read the answers in the answer key.
    
    for(int i = 0; i < num_questions; i++){ 
        input >> correctAnswers[i];
    }
    
    // These are for the strings 
    input >> non_char_ans1;                           
    input >> non_char_ans2;
    input >> non_char_ans3;
    
    //closes the answerkey
    input.close(); 
    
    // This just declares that the answer key is closed
    if (!input.is_open()){
        cout << " closed: answerkey.txt" << endl;
    }
    
    // tells us that we are opening the student answers input
    cout << "Opening input file named:   studentanswers.txt   " << endl;
    
    //opens students answer sheet
    input.open("studentanswers.txt");
    
    //outputs a score sheet... we can name this whatever we'd like
    output.open("score_sheet.txt");
    
    //tells us if it cant open
    if (!input.is_open()){
        cout << "Could not open: studentanswers.txt";
    }
    
    // eof just means end of file, so while its not the end of the file of the input it inputs the students information
    while (!input.eof()){                                                       
    input >> first_name;
    input >> last_name;
    
    // Loops through the students answers to store answers 
    for(int i = 0; i < num_questions; i++){                                   
        input >> studentAnswers[i];
    }
    
    //strings at end
    input >> non_char_ans4;                                                            
    input >> non_char_ans5;
    input >> non_char_ans6;
    
//===============LOOPS AND TREES==============================================================
    /*
    The following for loop and if else tree is designed to check the answers of the students against the answerkey. 
    After if compares them it adds one to either the omitted answers, correct answers , or incorrent answers.
    */
    
    for (int i = 0; i < num_questions; i++){
        if (studentAnswers[i] == correctAnswers[i]){
            num_correct++;
        }
        else if (studentAnswers[i] == '?'){
            num_omitted++;
        }
        else {
            num_incorrect++;
        }
    }
    
//=========NON CHAR ELSE IF TREES=============================================    
    
   // This is to grade the non char answers
    if (non_char_ans4 == non_char_ans1){
        num_correct++;
    }
    else if (non_char_ans4 == "?"){
        num_omitted++;
    }
    else{
        num_incorrect++;
    }
   // This is to grade the non char answers
    if (non_char_ans5 == non_char_ans2){
        num_correct++;
    }
    else if (non_char_ans5 == "?"){
        num_omitted++;
    }
    else{
        num_incorrect++;
    }
    // This is to grade the non char answers
    if (non_char_ans6 == non_char_ans3){
        num_correct++;
    }
    else if (non_char_ans6 == "?"){
        num_omitted++;
    }
    else{
        num_incorrect++;
    }
    
    
    //======MATHEMATICAL!!!====================================================
    score = (num_correct * 1) + (num_omitted * 0) + (num_incorrect * .75);
    score_possible = num_questions * 1;
    total_score = (score / score_possible) * 100;
    
    
    
   //===========OUTPUT FILE AND OUTPUT GENERAL================================
    cout << first_name << " " << last_name << endl;
    
    cout << "Incorrect Marks: " << num_incorrect << endl;
    
    cout << "Scoring :" << score << " of " << score_possible << " -- " << total_score << "%" << endl;
    cout << endl;
    //OUTPUTS TO THE COMMAND LINE THINGY
    
    
    // OUTPUTS TO FILE
    output << first_name << " " << last_name << endl;
    output << "Incorrect Marks: " << num_incorrect << endl; 
    output << "Scoring " << score << " of " << score_possible <<" -- " << total_score << "%" << endl ;
    
    output << endl;
    
    
// Yay! Last but not least we reset the values so we can do the next student
    num_incorrect = 0;
    num_correct = 0;
    num_omitted = 0;
    }
    
    
// closing the file 
    input.close(); 
    
    
    if (!input.is_open()){
        cout << "Closed : studentanswers" << endl;
    }
    output.close();
    
    cout << endl;
    
    
    cout << " Check folder root for score sheet :)" ;
    
    
    return 0;
}

/*
How many questions on this test are single character answers? (ex: A, B, C  = 3):   18
Opening input file named:   answerkey.txt   
 closed: answerkey.txt
Opening input file named:   studentanswers.txt   
Christian Smith
Incorrect Marks: 9
Scoring :10.75 of 18 -- 59.7222%

Paxton Jones
Incorrect Marks: 10
Scoring :13.5 of 18 -- 75%

Abby Sciuto
Incorrect Marks: 8
Scoring :13 of 18 -- 72.2222%

Audrey Smithson
Incorrect Marks: 11
Scoring :10.25 of 18 -- 56.9444%

Katie Holmes
Incorrect Marks: 10
Scoring :12.5 of 18 -- 69.4444%

Carrie Grant
Incorrect Marks: 8
Scoring :16 of 18 -- 88.8889%

Closed : studentanswers

 Check folder root for score sheet :)

Process exited with code: 0

*/