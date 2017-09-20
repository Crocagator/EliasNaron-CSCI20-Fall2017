//Elias Naron  
// 9/19/2017

// Wind Chill lab2.1
    #include <iostream>
    #include <cmath>
    #include <iomanip>
    #include <cstdlib>
    
    
    using namespace std;

    int main()
{    
 
 double oswc = 0.0;
 double nswc = 0.0;
 double temperature = 0.0;
 double velocity = 0.0 ;
 double difference = 0.0; 
 char Exit;
 do {
 
 // program cout and user input
 
 cout<<"Winchills calculator!"<<endl;
 cout<<"Please enter desired air temperature below."<<endl;
 cin>> temperature;
 
 cout<<endl;
 cout<<endl;
 
 cout<<"Please enter desired wind velocity below."<<endl;
 cin>> velocity;
 
 //Math
 
 oswc = 0.081 * (3.71 * sqrt(velocity) + 5.81 - 0.25 * velocity) * (temperature - 91.4) + 91.4 ;
 nswc = 35.74 + 0.6215 * temperature - 35.75 * pow (velocity, 0.16) + 0.4275 * temperature * pow(velocity, 0.16) ;
 difference = abs (nswc - oswc);
 
 cout<<"▼ Wind Speed ▼ ▼ ▼ Old Formula ▼ ▼ ▼ New Formula ▼ ▼ ▼ Difference ▼"<<endl;
 cout<<"      "<<velocity<<"             "<<oswc<<"            "<<nswc<<"           "<<difference<<"  "<<endl;
 cout<<endl;
 cout<<"▲ ▲ ▲ ▲ ▲ ▲ ▲ ▲ ▲ ▲ ▲ ▲ ▲ ▲ ▲ ▲ ▲ ▲ ▲ ▲ ▲ ▲ ▲ ▲ ▲ ▲ ▲ ▲ ▲ ▲ ▲ ▲ ▲ ▲ "<<endl;

 
 cout<<" Run Again? (y/n) "<<endl;
 cin>>Exit;
 cout<<endl;
 
 }while (Exit == 'y');
 
 return 0;   
}