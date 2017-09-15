//// Created By: Elias Naron
// Created On: 9/12/2017

/* Explanation: So this is our first actual ASSIGNMENT!!! woo! For me it was extremely challenging
as well as extremely rewarding.... This piece of code is a complete body health calculator 
based around the parameters you had set. So here is exactly what it does.
-----------------------------------------------------------------------------------------------------------------------------------
1. It calculates a users BMR with both the Harris-Benedict equation as well as the Mifflin & St Jeor re-calculation.
-----------------------------------------------------------------------------------------------------------------------------------
2. It collects user input data such as;age , height ( inches , ft), and weight (lbs) then it converts them to metric- 
 for fun and also to make the calculations more accurate.
 ----------------------------------------------------------------------------------------------------------------------------------
3. it calculates BMI ( i made this way harder than it needed to be when i was trying to look up how to square a varaiable *sheesh*)
 ----------------------------------------------------------------------------------------------------------------------------------
Enjoy!
*/

 #include <iostream>
 #include <string>
 #include <cmath>
 
 
 
 
 struct  user
 {
     int height_ft,height_in;
     int weight_lbs;
     int age_yrs;

 };
 using namespace std;
 int main ()
 {
     
//--------------VARIABLES!---------------------------------------------------------------------------------------------------------

// This is where i planned on listing all variables
// If i were better at psuedo code it would look more clean :(
// Double = digits w/ decimals, int = integers (whole numbers), string = text

    user health ;
  
    double BMR_MALE_MFLN, BMR_FEML_MFLN,BMR_MALE_HARRIS,BMR_FEML_HARRIS,BMI; 
  
    double weight_kgs,height_cm, age_mnths;
    
    string sex, name_first, name_last;

    int beggsF,beggsM,snickersF,snickersM,macF,macM,avacadosF,avacadosM, age_yrs;
    


  
//-------------INPUT AND OUTPUT!------THE FUN PART!--------------------------------------------------------------------------------

// All cout means text that is output
// All cin means text that a user inputs
// 
    cout<<"Basal Metabolic Rate & Body Mass Index Calulator!"<<endl;
    cout<<"•••••••••••••••••••••••••••••••••••••••••••••••••"<<endl;
    
    cout<<"To get things started, please indicate your first name in the field below.!"<<endl;
    cin >>name_first;
    
    cout<<"Now please indicate you last name."<<endl;
    cin>>name_last;
    
    cout<<"Now please indicate your current age in years."<<endl;
    
    cin >>health.age_yrs;
    
    cout<<"Now please indicate your current height in feet (Do Not Include Inches, Please)"<<endl;
    
    cin >>health.height_ft;
    
    cout<<"If you are any taller please indicate the difference in inches."<<endl;
    
    cin >>health.height_in;
    
    cout<<"Next, please indicate your weight in pounds."<<endl;
    
    cin >>health.weight_lbs;
    
    cout<<"Finally, please indicate your sex below."<<endl;
    
    cin >>sex;
    
    
    
//--------------MATHEMATICAL!------------------------------------------------------------------------------------------------------
    
//--------------CONVERSIONS--------------------------------------------------------------------------------------------------------
    health.height_in  = (health.height_ft * 12);
    height_cm  = (health.height_in * 2.54);
    weight_kgs = (health.weight_lbs * 0.453592);
    age_mnths  = (health.age_yrs * 12);
//---------------CALCULATION (MIFFLIN & ST JEOR)-----------------------------------------------------------------------------------
   
    BMR_MALE_MFLN = (10 * weight_kgs)+(6.25 * height_cm)-(5 * health.age_yrs) + 5;
    BMR_FEML_MFLN = (10 * weight_kgs)+(6.25 * height_cm)-(5 * health.age_yrs) - 161;
    
//---------------CALCULATION (HARRIS-BENEDICT)-------------------------------------------------------------------------------------

    BMR_MALE_HARRIS = 66   + ( 6.2 * health.weight_lbs) + ( 12.7 * health.height_in)-( 6.76 *health.age_yrs);
    BMR_FEML_HARRIS = 655.1+ ( 4.35 *health.weight_lbs) + ( 4.7  * health.height_in)-( 4.7  *health.age_yrs);
    
//----------------BMI CALCULATION!!!-----------------------------------------------------------------------------------------------
    
    BMI = (health.weight_lbs * 704.7) / (health.height_in * health.height_in);
    
//-------ALL CALCULATIONS BASED ON SEDENTARY LIFESTYLE-----------------------------------------------------------------------------
    
    BMR_MALE_HARRIS = BMR_MALE_HARRIS * 1.2;
    BMR_FEML_HARRIS = BMR_FEML_HARRIS * 1.2;
    BMR_MALE_MFLN = BMR_MALE_MFLN * 1.2;
    BMR_FEML_MFLN = BMR_FEML_MFLN * 1.2;
    
//----------------FUN FOOD CALCULATIONS------------------------------------------------------------------------------------------
    
    beggsF = BMR_FEML_MFLN / 78;
    beggsM = BMR_MALE_MFLN / 78;
    snickersF = BMR_FEML_MFLN /215;
    snickersM = BMR_MALE_MFLN /215;
    macF = BMR_FEML_MFLN / 563;
    macM = BMR_MALE_MFLN / 563;
    avacadosF = BMR_FEML_MFLN / 322;
    avacadosM = BMR_MALE_MFLN / 322;
    
//----------------------FINAL OUTPUT-----------------------------------------------------------------------------------------------
    cout<<endl;
    cout<<endl;
    cout<<endl;
    
//----------------BARE WITH THE MESSINESS, WHAT ELSE COULD BE DONE TO MAKE THE OUTPUT PRETTY?----------------------------------------
//----------------------------------------I couldnt handle it not lining up...-------------------------------------------------------
    cout<<"                                  Here is your card of health                                           "<<endl;
    cout<<"--------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"(please note that all stats are calculated based on a sedentary lifestyle, which means little to no exercise)"<<endl;
    cout<<endl;
    cout<<"Name:   "<<name_first<<" "<<name_last<<endl;
    cout<< endl;
    cout<<" Weight(kgs)              Height(cm)             Age(months)                     Sex(sexiness)      "<<endl;
    cout<<"▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼"<<endl;
    cout<< endl;
    cout<<"  "<<weight_kgs<<"                    "<<height_cm<<"                  "<<age_mnths<<"                             "<<sex<<endl;
    cout<<endl;
    cout<<"---Mifflin & St Jeor BMR--------------------Harris & Benedict BMR----------------Body Mass Index---"<<endl;
    cout<<"F:         - "<<BMR_FEML_MFLN<<"                           Female - "<<BMR_FEML_HARRIS<<"                       "<<BMI<<endl;
    cout<<"M:         - "<<BMR_MALE_MFLN<<"                           Male   - "<<BMR_MALE_HARRIS<<"                       "<<BMI<<endl;
    cout<<endl;
    cout<<"In order to maintain your (Mifflin & St Jeor) BMR you would need to consume this many of each food daily!! "<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"---Boiled Eggs-----------Avacados--------------------Snickers -------------------Big Macs'------------"<<endl;
    cout<<endl;
    cout<<"F:     "<<beggsF<<"                   "<<avacadosF<<"                          "<<snickersF<<"                              "<<macF<<endl;
    cout<<"M:     "<<beggsM<<"                   "<<avacadosM<<"                          "<<snickersM<<"                             "<<macF<<endl;
    cout<<"▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲"<<endl;
    
    

    
// this was very fun.
//Programming is sweet.
//I am not naive, however... I happily ancipate hating it :)

/* The instructions told me to put these test results here, however, there is no indication to the order of the number presented so it may be a little off
 These humans proportions based on the numbers you indicated make for funny results...
 Test 1:
 Name:   Sofia Cameron

 Weight(kgs)              Height(cm)             Age(months)                     Sex(sexiness)      
▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼

  15.8757                    91.44                  348                             Female

---Mifflin & St Jeor BMR--------------------Harris & Benedict BMR----------------Body Mass Index---
F:         - 509.109                           Female - 1008.3                       19.0312
M:         - 708.309                           Male   - 652.992                      19.0312

In order to maintain your (Mifflin & St Jeor) BMR you would need to consume this many of each food daily!! 


---Boiled Eggs-----------Avacados--------------------Snickers -------------------Big Macs'------------

F:     6                   1                          2                             0
M:     9                   2                          3                             0
▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲

Test 2:
Name:   Richard Watson

 Weight(kgs)              Height(cm)             Age(months)                     Sex(sexiness)      
▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼

  19.0509                    91.44                  504                             Male

---Mifflin & St Jeor BMR--------------------Harris & Benedict BMR----------------Body Mass Index---
F:         - 469.21                           Female - 971.52                       22.8375
M:         - 668.41                           Male   - 599.616                      22.8375

In order to maintain your (Mifflin & St Jeor) BMR you would need to consume this many of each food daily!! 


---Boiled Eggs-----------Avacados--------------------Snickers -------------------Big Macs'------------

F:     6                   1                          2                             0
M:     8                   2                          3                             0
▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲

Test 3:
Name:   Heather Hunt

 Weight(kgs)              Height(cm)             Age(months)                     Sex(sexiness)      
▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼

  141.521                    152.4                  2304                             Female

---Mifflin & St Jeor BMR--------------------Harris & Benedict BMR----------------Body Mass Index---
F:         - 1496.05                           Female - 1670.28                       61.074
M:         - 1695.25                           Male   - 1757.38                      61.074

In order to maintain your (Mifflin & St Jeor) BMR you would need to consume this many of each food daily!! 


---Boiled Eggs-----------Avacados--------------------Snickers -------------------Big Macs'------------

F:     19                   4                          6                             2
M:     21                   5                          7                             2
▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲

Test 4:
Name:   Eddy Hall

 Weight(kgs)              Height(cm)             Age(months)                     Sex(sexiness)      
▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼

  267.619                    182.88                  1944                             Male

---Mifflin & St Jeor BMR--------------------Harris & Benedict BMR----------------Body Mass Index---
F:         - 3417.83                           Female - 3358.32                       80.2031
M:         - 3617.03                           Male   - 4251.94                      80.2031

In order to maintain your (Mifflin & St Jeor) BMR you would need to consume this many of each food daily!! 


---Boiled Eggs-----------Avacados--------------------Snickers -------------------Big Macs'------------

F:     43                   10                          15                             6
M:     46                   11                          16                             6
▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲
    
*/   
    return 0;
 }