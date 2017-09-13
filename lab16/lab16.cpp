
//Created By: Elias Naron
 //Created On: 9/12/2017
 
 #include <iostream>
 #include <string>
 using namespace std;
 
  struct stock_portfolio {
  string stockname;
  char sector;
  double shareprice;
  int sharesowned ;

 };
 
 int main() { 
     stock_portfolio stock_1;
     stock_portfolio stock_2; 
     stock_portfolio stock_3;
     stock_portfolio stock_4;
     
     double stockvalue_1 = 0.00,
            stockvalue_2 = 0.00,
            stockvalue_3 = 0.00,
            stockvalue_4 = 0.00,
            portfolio_value = 0.00;
//-----------------------STOCK 1------------------------------------------------   
     cout<<"Stock Calculator."<<endl;
     cout<<"Please Indicate Stock Name #1"<<endl;
        cin>>stock_1.stockname;
     
    cout<<"Please Indicate Stock Sector"<<endl;
        cin>>stock_1.sector;
     
    cout<<"Please Indicate Stock Current Share Price"<<endl;
        cin>>stock_1.shareprice;
  
    cout<<"Please Indicate Stock Number of Shares Owned"<<endl;
        cin>>stock_1.sharesowned;
        
//-----------------------STOCK 2------------------------------------------------
    cout<<"Please Indicate Stock Name #2"<<endl;
        cin>>stock_2.stockname;
     
    cout<<"Please Indicate Stock Sector"<<endl;
        cin>>stock_2.sector;
     
    cout<<"Please Indicate Stock Current Share Price"<<endl;
        cin>>stock_2.shareprice;
  
    cout<<"Please Indicate Stock Number of Shares Owned"<<endl;
        cin>>stock_2.sharesowned;
        
//-----------------------STOCK 3------------------------------------------------

    cout<<"Please Indicate Stock Name #3"<<endl;
        cin>>stock_3.stockname;
     
    cout<<"Please Indicate Stock Sector"<<endl;
        cin>>stock_3.sector;
     
    cout<<"Please Indicate Stock Current Share Price"<<endl;
        cin>>stock_3.shareprice;
  
    cout<<"Please Indicate Stock Number of Shares Owned"<<endl;
        cin>>stock_3.sharesowned;
        
//-----------------------STOCK 4------------------------------------------------
    cout<<"Please Indicate Stock Name #4"<<endl;
        cin>>stock_4.stockname;
     
    cout<<"Please Indicate Stock Sector"<<endl;
        cin>>stock_4.sector;
     
    cout<<"Please Indicate Stock Current Share Price"<<endl;
        cin>>stock_4.shareprice;
  
    cout<<"Please Indicate Stock Number of Shares Owned"<<endl;
        cin>>stock_4.sharesowned;
        
//-----------------------CALCULATIONS-------------------------------------------
    stockvalue_1 = (stock_1.shareprice * stock_1.sharesowned);
    stockvalue_2 = (stock_2.shareprice * stock_2.sharesowned);
    stockvalue_3 = (stock_3.shareprice * stock_3.sharesowned);
    stockvalue_4 = (stock_4.shareprice * stock_4.sharesowned);
    portfolio_value = (stockvalue_1 + stockvalue_2 + stockvalue_3 + stockvalue_4);
    
//--------------------------OUTPUT----------------------------------------------
    cout<<"STOCK NAME-----SECTOR-----NUMBER OF SHARES-----CURRENT VALUE-----TOTAL VALUE"<<endl;
    cout<<"▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄"<<endl;
    cout<<stock_1.stockname<<"            "<<"$ "<<stock_1.sector<<"             "<<"$ "<<stock_1.sharesowned<<"                  "<<"$ "<<stock_1.shareprice<<"             "<<"$ "<<stockvalue_1<<endl ;
    cout<<stock_2.stockname<<"            "<<"$ "<<stock_2.sector<<"             "<<"$ "<<stock_2.sharesowned<<"                  "<<"$ "<<stock_2.shareprice<<"             "<<"$ "<<stockvalue_2<<endl ;
    cout<<stock_3.stockname<<"            "<<"$ "<<stock_3.sector<<"             "<<"$ "<<stock_3.sharesowned<<"                  "<<"$ "<<stock_3.shareprice<<"             "<<"$ "<<stockvalue_3<<endl ;
    cout<<stock_4.stockname<<"            "<<"$ "<<stock_4.sector<<"             "<<"$ "<<stock_1.sharesowned<<"                  "<<"$ "<<stock_4.shareprice<<"             "<<"$ "<<stockvalue_4<<endl ;
    
    
    cout<<"$ "<<portfolio_value;
    
    
    
    
 }