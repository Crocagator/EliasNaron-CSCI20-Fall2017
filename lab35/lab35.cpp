//Elias Naron
//10/24/2017


#include <iostream> 

using namespace std; 

class TemperatureConverter {
    
    
      
    
    public:
    
    TemperatureConverter (); //constructor
    TemperatureConverter (double deg_kelvin ); //overloaded constructor
    
    
    
    void   SetTempFromKelvin(double skparam);      //mutator
    void   SetTempFromFahrenheit(double sfparam);  //mutator
    void   SetTempFromCelsius(double scparam);     //mutator
    
    double GetTempFromKelvin();                    //accessor
    double GetTempFromFahrenheit();                //accessor
    double GetTempFromCelsius();                   //accessor
    
    void PrintTemperatures();
    
    private:
    double kelvin_;

    
};
    

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

int main ()
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
