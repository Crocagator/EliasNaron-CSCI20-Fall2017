

#include <iostream>
using namespace std;

int main () {
    
    
    string name;
    int marital_Status = 0;
    double tax_Withheld = 0;
    double gross_Wage = 0;
    double adjusted_Gross = 0;
    
    cin>>tax_Withheld;
    cin>>gross_Wage;
    cin>>marital_Status;
    
    
    if (marital_Status == 0 ) {
    (tax_Withheld - (gross_Wage - 6350))  == adjusted_Gross;
        cout<<cout<<adjusted_Gross;
    }
    
    else if (marital_Status == 1) {
    (tax_Withheld - (gross_Wage - 12700))  == adjusted_Gross;
        cout<<adjusted_Gross;
    }
    
    
     
    cout<<adjusted_Gross;
   
    
    
}