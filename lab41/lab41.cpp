//Elias Naron
// 10/31/2017
// CSCI20

#include <iostream>
using namespace std;

void print (){
    int Array_[10];
        Array_[0] =1;
        Array_[1] =2;
        Array_[2] =3;
        Array_[3] =4;
        Array_[4] =5;
        Array_[5] =6;
        Array_[6] =7;
        Array_[7] =8;
        Array_[8] =9;
        Array_[9] =10;
        for (int i = 0; i < 10; i++) {
            cout<<endl<<Array_[i];
}
}

int minnumfunc () {
    int Array_[10];
        Array_[0] =1;
        Array_[1] =2;
        Array_[2] =3;
        Array_[3] =4;
        Array_[4] =5;
        Array_[5] =6;
        Array_[6] =7;
        Array_[7] =8;
        Array_[8] =9;
        Array_[9] =10;
    
int Min_num = Array_[0] ; { // find smallest
        for (int i = 0; i < 10; i++) 
            if (Array_[i] < Min_num) {
                Min_num = Array_[i];
    }
    return Min_num;
}   

int maxnumfunc () {
    int Array_[10];
        Array_[0] =1;
        Array_[1] =2;
        Array_[2] =3;
        Array_[3] =4;
        Array_[4] =5;
        Array_[5] =6;
        Array_[6] =7;
        Array_[7] =8;
        Array_[8] =9;
        Array_[9] =10;
    
int Min_num = Array_[0] ; { // find smallest
        for (int i = 0; i < 10; i++) 
            if (Array_[i] > Min_num) {
                Max_num = Array_[i];
    }
    return Max_num;
}   
}



int main (){
    
    
    
    int Array_[10];
   
    
    print ();
    cout<< endl<<" Your minimum Number is : "<< minnumfunc () ;
    cout<< endl<<" Your maximum Number is : "<< maxnumfunc () ;
        
    
}


    
    
    
    
    
    
    
    
    
    
