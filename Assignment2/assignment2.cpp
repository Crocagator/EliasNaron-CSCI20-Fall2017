//Created By: Elias Bligh Naron 
/* Created on: 10/05/2017!
The point of this program is to take a runners time in minutes and in seconds , then convert
that time into Feet per second, and meters per second. It will then tell the runner
his or her 1/4 mile split time as well as the difference in time between the runner
and the winner of the race , pace.
*/

/* Also, i had started doing assignment 2.0 option 4, but as i got more and more engaged in it
the more i realized i wasn't even close to intelligent enough to tackle that program.
It seemed relatively straight forward at first until i realized that the size differences
in the shoes arent ever a constant formula, IE difference between size 6 - 8 isnt the same as 
size 7- 9 although they are the same distance away.
*/

// This the only includes i needed ☺
#include <iostream>
using namespace std;

//The first step : defining our class
class Runner_time
{
// Now i want to throw in my public functions
public:
// These "set" to manipulate the final private variables but we must get them first!
    void Set_Minutes           (double Set_Minutes_Parameter );
    void Set_Seconds           (double Set_Seconds_Parameter);
    void Set_Feet_Per_Second   (double Set_Feet_Per_Second_Parameter);
    void Set_Meters_Per_Second (double Set_Meters_Per_Second_Parameter );
    void Set_Difference        (double Set_Difference_Parameter);
    void Set_Split             (double Set_Split_Parameter);
 // This is where i "get" the values for said variables   
    double Get_Minutes           () const;
    double Get_Seconds           () const;
    double Get_Feet_Per_Second   () const;
    double Get_Meters_Per_Second () const;
    double Get_Difference        () const;
    double Get_Split             () const;

// Now i want to throw in my private variables

private:
    double seconds_;
    double minutes_;
    double fps_;
    double mps_;
    double difference_;
    double split_;
};

//FUNCTIONS!

    void Runner_time :: Set_Seconds (double Set_Seconds_Parameter) {
    seconds_ = Set_Seconds_Parameter ;
}

    void Runner_time :: Set_Minutes (double Set_Minutes_Parameter) {
    minutes_ = Set_Minutes_Parameter ;
}

    void Runner_time :: Set_Feet_Per_Second (double Set_Feet_Per_Second_Parameter) {
    fps_ = Set_Feet_Per_Second_Parameter ;
}

    void Runner_time :: Set_Meters_Per_Second (double Set_Meters_Per_Second_Parameter) {
    mps_ = Set_Meters_Per_Second_Parameter ;
} 

    void Runner_time :: Set_Difference (double Set_Difference_Parameter) {
    difference_ = Set_Difference_Parameter ;
}

    void Runner_time :: Set_Split (double Set_Split_Parameter) {
    split_ = Set_Split_Parameter ;
}

    double Runner_time :: Get_Seconds () const {
        return seconds_ ;
}

    double Runner_time :: Get_Minutes ()  const {
        return minutes_ ;
}

    double Runner_time :: Get_Meters_Per_Second ()  const {
        return mps_ ;
}

    double Runner_time :: Get_Feet_Per_Second ()  const {
        return fps_ ;
}
    double Runner_time :: Get_Split ()  const {
        return split_ ;
}
    double Runner_time :: Get_Difference ()  const {
        return difference_ ;
}

   

//ASSUMING DISTANCE OF 1 MILE
//main starts here

int main () {
    
    // variables
    
    double fps_;
    double mps_;
    double seconds_;
    double minutes_;
    double difference_;
    double split_;
    double total_time;
    
 
    double input_seconds_;
    double input_minutes_;
    
    
    double DISTANCE_IN_FT_ = 5280;
    double DISTANCE_IN_METER_ = 1609.34;
    double Winner_time = 60;
    
    // setting objects for my class
    
    Runner_time person1;
    Runner_time person2;
    Runner_time person3;
    Runner_time person4;
    Runner_time person5;
    
    // input and output!
    cout << "Please enter how many minutes it took you to run a mile: (forget about excess time in seconds here)" << endl;  
    
    cin >> input_minutes_;
    
    cout << "Please enter the remaining time in seconds : " << endl;
    cin >> input_seconds_;
    
    // Assosciating the class with variable values
    
    person1.Set_Seconds(input_seconds_);
    person1.Set_Difference(difference_);
    person1.Set_Feet_Per_Second (fps_);
    person1.Set_Split(split_);
    person1.Set_Meters_Per_Second(mps_);
    
    // some functional conversions / math!
    
    minutes_ = input_minutes_ * 60 ;
    total_time = minutes_ + input_seconds_;
    fps_ = DISTANCE_IN_FT_ / total_time;
    mps_ = DISTANCE_IN_METER_/ total_time;
    split_ = total_time * .25 ;
    difference_ =  ( total_time - Winner_time);
    
    //final output!
    
    cout<<endl;
    if (  input_minutes_ >= 10 )
    {
    cout<< " Fantastic! "<<endl;
    cout<< " That is "<<total_time<<" second mile!"<<endl;
    cout<<" That means you ran an average of "<<fps_<<" Feet per second!"<<endl;
    cout<<endl;
    cout<<" Which is as fast as "<<mps_<<" meters per second!"<<endl;
    cout<<endl;
    cout<<" With a "<<split_<<" second 1/4 split."<<endl;
    cout<<endl;
    cout<<"The winner ran an astounding "<<Winner_time<<" second mile"<<endl;
    cout<<endl;
    cout<<"The difference in seconds between your time and the winners time was : "<<difference_<<endl;
    } 
    else if (input_minutes_ <= 1 )
    {
    cout<< "You won the race!"<<endl;
    cout<< " That is "<<total_time<<" second mile!"<<endl;
    cout<<" That means you ran an average of "<<fps_<<" Feet per second!"<<endl;
    cout<<endl;
    cout<<" Which is as fast as "<<mps_<<" meters per second!"<<endl;
    cout<<endl;
    cout<<" With a "<<split_<<" second 1/4 split."<<endl;
    cout<<endl;
    cout<<"The Second place contestent ran an astounding "<<Winner_time<<" second mile"<<endl;
    cout<<endl;
    cout<<"The difference in seconds between your time and the winners time was : "<<difference_<<endl;
    }
     
    
    
//the end! ☺ 
    
    

	
}





