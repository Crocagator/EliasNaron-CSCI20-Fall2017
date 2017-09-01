// Created By: Elias Naron
// Created On: 8/24/2017

 #include <iostream>
 using namespace std;
 
 int main()
 {   int future_pop_total = 0 ;
     int current_population = 325780000 ;
     int current_year = 0 ;
     int seconds_per_birth = 7 ;
     int seconds_per_death = 12 ;
     int seconds_in_year = 31536000 ;
     int years_in_future = 0;
 
    cout<<"Welcome to Eli's amazing.." <<           endl;
    
    cout<<" ~~ United State's Population Calculator!~~"<< endl;
    
    cout<<"To begin this calulation, "<<                  endl;

    cout <<"Please indicate the present year." <<         endl;
    cin >> current_year ;
     
     cout<<"The population in 2017 in the United States is 32578000 people !" <<endl ;
     
    cout <<"Now enter any year in the future!"<<          endl;
    cin >> years_in_future ;
     
     
     // fun flare
     cout<<"BOOM DONE!"<< endl ;
    
  
    //current population calulation
   future_pop_total= (years_in_future - current_year) * (seconds_in_year / seconds_per_birth) - (seconds_in_year / seconds_per_death) + current_population ;
   
   
   cout <<"The future population in the United States will be:" << endl;
   
   cout<< future_pop_total ;
   
   cout<<"  people    Now that sounds like a lot of traffic!" << endl;
     
 }