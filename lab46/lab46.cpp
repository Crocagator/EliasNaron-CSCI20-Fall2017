//Elias Naron   
//11/16/2017
/*


*/



#include <iostream>
#include <ios>
#include <cstring>
#include <iomanip>
#include <fstream>

using namespace std;

int main(){
    ifstream inFS;
    ofstream outFS;
    
    string student = "";
    
    int class_num = 10;
    int hours [class_num];
    
    double grade_pts = 0;
    double GPA = 0.0;
    
    char grades [class_num];
    
    inFS.open("labinput.txt");
    
    if (inFS.is_open()){
       cout << "Accessing text file:" << endl;
    }
    else if (!inFS.is_open()){
       cout << "Unable to open .txt file" << endl;
       return 1;
    }
    
    
    outFS.open("Output.html");
    outFS << "<!DOCTYPE html>" << endl;
    outFS << "<html>" << endl;
    outFS << "<title> Student Transcript </title>" << endl;
    outFS << "</head>" << endl;
    outFS << "<body>" << endl;
    
    getline(inFS, student);
    inFS >> class_num;
    
    outFS << "<h1> " << student << "'s Transcript </h1>" << endl;
        
    for (int i = 0; i <= (class_num) ; i++){
    inFS >> hours[i];
    inFS >> grades[i];
    
    if (grades[i] == 'A'){
    grade_pts = grade_pts + 4;
    }
    
    else if (grades[i] == 'B'){
    grade_pts = grade_pts + 3;
    }
    
    else if (grades[i] == 'C'){
    grade_pts = grade_pts + 2;
    }
    
    else if (grades[i] == 'D'){
    grade_pts = grade_pts + 1;
    }
    
    else if (grades[i] == 'F'){
    grade_pts = grade_pts + 0;
    }
            
    }
    
    
    GPA = grade_pts / class_num;
    
    cout<<endl;
    cout<<endl;
    cout<<endl;
    
    
    cout<<"Name:     Class#:    Grades:    Grade Points:    GPA: "<<endl;
    cout << student <<"     ";
    cout << class_num <<"          ";
    cout << grades[0] <<"             ";
    cout << grade_pts<<"         ";
    cout << GPA <<endl;
    
    cout<<endl;
    cout<<endl;
    cout<<endl;

    outFS << "</body>" << endl;
    outFS << "</html>" << endl;
    
    inFS.close();
    if (!inFS.is_open()){
        cout << "Input file closed";
    }
    
    return 0;
}
    
    
    
    

