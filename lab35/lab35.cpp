//Elias Naron
//10/24/2017

/*
THis program was interesting because we have to apply what we learned about classes ...
this is easier said than done. Anyways, this program takes kelvin then converts it into the other heat measurements IE celsius and Fahrenheit, then outputs the information.
What is cool is April gave us the main so we really just had to figure out the class and functions.
*/


#include <iostream> // only need one include! 

using namespace std; //standard!

class TemperatureConverter { // This is my class
    
    
      
    
    public: // this is where i have my public portion of the class
    
    TemperatureConverter (); //constructor
    TemperatureConverter (double deg_kelvin ); //overloaded constructor
    
    
    
    void   SetTempFromKelvin(double skparam);      //mutator
    void   SetTempFromFahrenheit(double sfparam);  //mutator
    void   SetTempFromCelsius(double scparam);     //mutator
    
    double GetTempFromKelvin();                    //accessor
    double GetTempFromFahrenheit();                //accessor
    double GetTempFromCelsius();                   //accessor
    
    void PrintTemperatures();
    
    private: //private / not directly manipulatble
    double kelvin_;

    
};// have to end the class like this
    
//Boom functions!!!
TemperatureConverter::TemperatureConverter () {
    kelvin_ = 0;
}

TemperatureConverter::TemperatureConverter (double deg_kelvin ) {
    kelvin_ = deg_kelvin;
}


void TemperatureConverter :: SetTempFromKelvin (double skparam) {
    
    kelvin_ = skparam;
    
}

void TemperatureConverter :: SetTempFromFahrenheit (double sfparam) {
    if (sfparam >= -459.67) {
        kelvin_ = 5 * ((sfparam - 32)/9) + 273.15;
    }
}

void TemperatureConverter :: SetTempFromCelsius (double scparam) {
    if (scparam >= -273.15) {
        
        kelvin_ = scparam + 273.15;
    }
    
    
}

double TemperatureConverter :: GetTempFromKelvin() {
    
    return kelvin_;
    
}

double TemperatureConverter :: GetTempFromFahrenheit () {
    
    return (((9 * GetTempFromCelsius()) / 5 ) + 32);
    
}

double TemperatureConverter :: GetTempFromCelsius () {
    
    return kelvin_ -273.15;
    
}

void   TemperatureConverter :: PrintTemperatures() {
    
    cout<<" Your temp in Kelvin is "<<GetTempFromKelvin()<<endl;
    cout<<" Your temp in Fahrenheit is "<<GetTempFromFahrenheit()<<endl;
    cout<<" Your temp in Celsius is "<<GetTempFromCelsius()<<endl;
}

int main ()// your main, so graciously bestowed!
{
    TemperatureConverter temp1; //testing default constructor
    TemperatureConverter temp2(274); //testing overloaded constructor
    
    temp1.PrintTemperatures();
    temp2.PrintTemperatures();
    
    temp1.SetTempFromKelvin(400.15); //testing mutator function
    cout<<temp1.GetTempFromKelvin()<<endl;//testing accessor function
    temp1.PrintTemperatures();
    
    temp2.SetTempFromCelsius(32); //testing other functions
    cout<<temp2.GetTempFromCelsius()<<endl;
    temp2.PrintTemperatures();
    
    temp2.SetTempFromFahrenheit(32);
    cout<<temp2.GetTempFromFahrenheit()<<endl;
    temp2.PrintTemperatures();
    
    return 0;
}
