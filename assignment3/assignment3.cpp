//Elias Naron   
//10/24/2017
//This is an attempt to simulate Hi ho Cherry -o


// needed ctime for the "random" non_useronent of the game
#include <iostream>                                                            
#include <ctime> 
using namespace std;
//class starts here :)
class Cherryio{
    public:
//=============Accessors=======================================================     
    int getCherry();
    int getBasket();
//=============Mutators=++++===================================================     
    void setCherry(int cherryset);
    void setBasket(int basketset);
//============Private variables================================================     
    private:
    int non_user_cherries_;
    int non_user_basket_;
//===========Functions!=======================================================     
};
//set for cherrys to manipulate the variable
void Cherryio::setCherry(int cherryset){
    non_user_cherries_ = cherryset;
}
//============================================================================= 
//set for basket to manipulate the variable
void Cherryio::setBasket(int basketset){
    non_user_basket_ = basketset;
}

//============================================================================= 
//Cherry number for cherrys
int Cherryio::getCherry()
{
    return non_user_cherries_;
}
//============================================================================= 
// robo basket!
int Cherryio::getBasket()
{
    return non_user_basket_;
}

//============================================================================= 
// main starts!
int main(){
    Cherryio robo;
    int user_cherry_start_;
    int cherries_in_tree_;
    int basket_ = 0;
    int spin_ = 7;
    int turns_ = 0;
    robo.setBasket(0);
    
//=============================================================================    
   
   // This si my random that is out of 10 to initialize the random starting tree number
    user_cherry_start_ = rand() % 10 +1;
    // these need to be the samezie
    cherries_in_tree_ = user_cherry_start_;
    robo.setCherry(user_cherry_start_);
    
//=============================================================================    
   // logic !
    while (cherries_in_tree_ >= 1 && robo.getCherry() >=1){
       
        if ( turns_ % 2 == 0 ){
            cout << "It is the Robot's turn." << endl;
//=============================================================================             
            // time for random
            srand(time(0));
            spin_ = rand() % 7 + 1;
            
            // spin random different tnumber than tree number
//=============================================================================             
            // first possible spin result
            if (spin_ == 1)
            {
            cherries_in_tree_ = cherries_in_tree_ - 1;
            basket_ = basket_ +1;
            } 
//=============================================================================   
            // second possible spin result
            else if (spin_ == 2)
            {
                cherries_in_tree_ = cherries_in_tree_ - 2;
                basket_ = basket_ + 2;
            } 
//=============================================================================     
            // third possible spin result
            else if (spin_ == 3)
            {
                cherries_in_tree_ = cherries_in_tree_ - 3;
                basket_ = basket_ + 3 ;
            } 
//=============================================================================     
            // fourth possible spin result
            else if (spin_ == 4)
            {
                cherries_in_tree_ = cherries_in_tree_ - 4;
                basket_ = basket_ + 4 ;
            } 
//=============================================================================     
            // fifth possible spin result
            else if (spin_ == 5)
            {
                if (cherries_in_tree_ >= 2){
                basket_ = basket_ - 2;
                cherries_in_tree_ = cherries_in_tree_ + 2;
            }
//=============================================================================                 
            //sixth possible spin result
                else if ( cherries_in_tree_ == 1)
            {
                    basket_ = basket_ - 1;
                    cherries_in_tree_ = cherries_in_tree_ + 1;
            }
            } 
 //=============================================================================    
           // seventh possible spin result
            else if (spin_ == 6)
            {
//=============================================================================                 
            // counting
            if (cherries_in_tree_ >= 2)
            {
                    basket_ = basket_ - 2;
                    cherries_in_tree_ = cherries_in_tree_ + 2;
            }
                    
//=============================================================================                     
           // counting
           else if ( cherries_in_tree_ == 1)
            {
                    basket_ = basket_ - 1;
                    cherries_in_tree_ = cherries_in_tree_ + 1;
            }
            } 
//=============================================================================             
            // empty basket!!!!
            else 
            {
                cherries_in_tree_ = user_cherry_start_;
                basket_ = 0;
                turns_++;
            
            } 
          
//=============================================================================
            } 
            
            // i learned this from Chris, it is the way the turn mechanism actually works.
            // there are only two possibel answers just for two possible players
            // each time they add one to knock it to the other player!
        else if (turns_ % 2 == 1)
            {
            // EVERYTHING BELOW THIS IS THE SAME AS ABOVE , ONLY FOR THE ROBOT!!!
            cout << "It is your turn." << endl;
            srand(time(0));
            spin_ = rand() % 7 + 1;
//=============================================================================
            if (spin_ == 1)
            {
            robo.setCherry( robo.getCherry() - 1);
            robo.setBasket( robo.getBasket() + 1 );
            } 
//=============================================================================    
            else if (spin_ == 2)
            {
                robo.setCherry( robo.getCherry() - 2);
                robo.setBasket( robo.getBasket() + 2 );
            } 
//=============================================================================    
            else if (spin_ == 3)
            {
                robo.setCherry( robo.getCherry() - 3);
                robo.setBasket( robo.getBasket() + 3 );
            } 
//=============================================================================    
            else if (spin_ == 4)
            {
                robo.setCherry( robo.getCherry() - 4);
                robo.setBasket( robo.getBasket() + 4 ) ;
            } 
//=============================================================================    
            else if (spin_ == 5)
            {
                if (robo.getCherry() >= 2)
            {
                robo.setBasket (robo.getBasket() - 2);
                robo.setCherry(robo.getCherry() + 2) ;
            }
//=============================================================================            
                else if ( cherries_in_tree_ == 1)
            {
                robo.setBasket (robo.getBasket() - 1);
                robo.setCherry(robo.getCherry() + 1) ;
            }
            } 
//=============================================================================    
            else if (spin_ == 6)
            {
                if (robo.getCherry() >= 2)
            {
                robo.setBasket (robo.getBasket() - 2);
                robo.setCherry(robo.getCherry() + 2) ;
            }
//=============================================================================            
                else if ( cherries_in_tree_ == 1)
            {
                robo.setBasket (robo.getBasket() - 1);
                robo.setCherry(robo.getCherry() + 1) ;
            }
            }
//=============================================================================             
            else 
            {
                robo.setCherry(user_cherry_start_);
                robo.setBasket(0);
                turns_++ ; } 
            } 
//=============================================================================
            } 
             ;
//=============================================================================   
    //OUTPUT AND WINNING SCENARIO!!!1
    
    if (cherries_in_tree_ <= 0){
        cout << "YOU WON!!!";
    }
    if (robo.getCherry() <=  0){
        cout << "YOU LOST!!!";
    }
    return(0);
//=============================================================================    
}