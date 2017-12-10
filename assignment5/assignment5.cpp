 
 //Elias Naron
 
 //12/09/17
 
 //arena combat!
 
 //===========================================================================
 #include<iostream>
 #include<string>
 #include<ios>
 #include <cstdlib>
 #include <ctime>
 using namespace std; 


 //=========================================================================== 
 class Warrior{
     public:
       int GetHealth();
       int GetSpeed();
       int GetDamage();
       int GetLevel();
       int health[3];
       int level[3];
       Warrior();
     
     private:  
     int speed[3];  
     int damage[3];
 };
   
   
    Warrior::Warrior(){ //Constructor
     srand(time(0)); 
     health[0] = 120;
     speed[0] = 50;
     damage[0] = ((rand() % 35) + 15);
     level[0] = 5;
     return;
    }
     
    int Warrior::GetHealth(){ //Get HP
     
     return health[0];
    }
    
    int Warrior::GetSpeed(){ // get speed (unchangeable)
     
     
     return speed[0];
    }
    
   int Warrior::GetDamage(){
     
   return damage[0];  
    }
   
   int Warrior::GetLevel(){
    
    
    return level[0];
   }
    // end Warrior
   
    //start Mage
 //=========================================================================== 
 class Mage{
  public:
  
  int GetHealth();
  int GetSpeed();
  int GetDamage();
  int GetLevel();
  Mage(); 
  int health[3];
  int level[3];
  
  private:
  int speed[3];
  int damage[3];
  
 };
     Mage::Mage(){
     srand(time(0));
     health[1] = 100;
     speed[1]  = 60;
     damage[1] = ((rand() % 45) + 1);
     level[1] = 5;
     return;
    }
     
    int Mage::GetHealth(){ //Get HP
     
     return health[1];
    }
    
    int Mage::GetSpeed(){ // get speed (unchangeable)
     
     
     return speed[1];
    }
    
   int Mage::GetDamage(){
     
   return damage[1];  
    }
   
   int Mage::GetLevel(){
    
    return damage[1];
   }
  //end Mage
  
  //start Brute
  //=========================================================================== 
  
  class Brute{
   public:
  
  int GetHealth();
  int GetSpeed();
  int GetDamage();
  int GetLevel();
  Brute();     
  int health[3];
  int level[3];
  private:
  int speed[3];
  int damage[3];
  
   
  };
 
     Brute::Brute(){ //Brute constructor
     srand(time(0));
     health[2] = 80;
     speed[2]  = 70;
     damage[2] = ((rand() % 60) + 1);
     level[2] = 5;
     return;
    }
     
    int Brute::GetHealth(){ //Get HP
     
     return health[2];
    }
    
    int Brute::GetSpeed(){ // get speed (unchangeable)
     
     
     return speed[2];
    }
    
   int Brute::GetDamage(){
     
   return damage[2];  
    }
   int Brute::GetLevel(){
    
     
    
   return level[2]; 
   }
 
 
  int getNewHealthB(){//rand damage functions
     Warrior randWarrior = Warrior();
     randWarrior.GetDamage();
     return randWarrior.GetDamage();
  }
   int getNewHealthV(){
     Mage randMage = Mage();
     randMage.GetDamage();
     return randMage.GetDamage();
   }

 int getNewHealthC(){
     Brute randBrute = Brute();
     randBrute.GetDamage();
     return randBrute.GetDamage();
  }
 
  
  //===========================================================================
 
 int main(){
    
    srand(time(0));
    int classchoice;
    int attackMove;
    int OpponentAttack;
    int newHP[10];
    int newHPO[10];
    int levelUP[1000000];
    int i, k, z , x, q;
    int exitGame;
     Warrior WarriorChoice = Warrior();
     Mage MageChoice = Mage();
     Brute BruteChoice = Brute();
  
    
 //===========================================================================    
    cout<<"Welcome Contestant. What Class do you fight with?"<<endl<<endl;
    cout<<"Warrior is a natural fighter,  Defensive defensively stanced. He is slow, but makes up for that with defense."<<endl<<endl;
    cout<<"Brute is a high speed, high damage , reckless agressor.  He is very quick, and typically looks to end his opponent quickly with \"brute\" force."<<endl<<endl;
    cout<<"Mage is a mindful class with an eye for both defense and medium attack. He is the safe pick."<<endl<<endl;
    while(exitGame != 4){
    cout<<"Choose your class with 1, 2, or 3!"<<endl;
    cout<<"1. Warrior"<<endl;
    cout<<"2. Brute"<<endl;
    cout<<"3. Mage" <<endl;
    cin>>classchoice;
    

    
    switch(classchoice){// Mother Switch
    
    case 1 ://User Warrior Choice
    cout<<"You have chosen Warrior!!"<<endl;
  
    
    cout<<"Your opponent is a masked fire Mage covered in tattered garbs from uncontrolled flames! Get ready for Battle!!!"<<endl;   
    cout<<"The mage beckons you."<<endl;
    
     newHP[i] = WarriorChoice.GetHealth(); // sets array to health
     newHPO[k] = MageChoice.GetHealth();
    
    while(newHP[i] > 0 && newHPO[i] > 0){ // HP > 0 loop
    
    cout<<"Warrior , what is your move?"<<endl<<endl;
    cout<<"1.High Strike      2.Charge" <<endl;
    cout<<"3.Shield Check    4.Javelin"<<endl;
    cin>>attackMove;
              
      if (MageChoice.GetSpeed() > WarriorChoice.GetSpeed()) // higher speed attack 
      {
       
       cout<<"Mage gets to attack first!"<<endl;
       cout<<"1.Combustion   2.Fire Javelin"<<endl;
       cout<<"3.Nova Strike   4.Healing touch"<<endl;
       cin>>OpponentAttack;
       
       switch(OpponentAttack){
        
        case 1 :
        
        cout<<"Mage takes an aggressive stance in preparation for his Combustion attack!"<<endl;
        cout<<"Mage uses Combustion! A puff of smoke quickly followed by blazing fire comes from his fingertips."<<endl;
        
        break;
        
        case 2: 
        
        cout<<"Mage takes an aggressive stance in preparation for his Fire Javelin attack!"<<endl;
        cout<<"Mage hurls a torrent of smouldering javelins towards his foe"<<endl;
        
        break;
        
        case 3:
        
        cout<<"Mage pulls crackling lightning from the earth in preparation for his Nova Strike attack!"<<endl;
        cout<<"Mage's lighting shoots outward in a circle around himself"<<endl;
        
        
        break;
        
        case 4:
        
        cout<<"Mage heals himself for 10 HP!"<<endl;
        
        break;
        
        default :
        
        cout<<"Mage misses his attack!"<<endl;
        
        break;
        
        
       }
      }
     newHP[i] = (newHP[i] - getNewHealthV()); //Mage Health
        
         if(newHP[i] <= 0){
           
           cout<<"You Died!"<<endl;  
           cout<<"The mage smoked you!"<<endl;
          
          
         }
       
       else{
     
        cout<<"Warriors HP is at " << newHP[i]<<endl;
        switch(attackMove){//Choose attacks switch
         
         case 1 :
         
         cout<<"Warrior drops his head in preparation for his High Strike attack!"<<endl;
         cout<<"Warrior throws his blade high and catches the mage"<<endl;
         break;
         
         case 2:
         
         cout<<"Warrior steadys his feet in preparation for his Charge attack!"<<endl;
         cout<<"Warrior smashes hard into the mage."<<endl;
         
         break;
         
         case 3:
         
         cout<<"Warrior lines up his shield to his opponents head for your Shield Check attack!"<<endl;
         cout<<"warrior extends abruptly and checks the shield against the mages head!"<<endl;
        
         break;
         
         case 4:
         
         cout<<"Warrior stretches back preparation for his Javelin attack!"<<endl;
         cout<<"warrior lunges and catches the mage in the leg."<<endl;
         break;
         
         default:
           cout<<"You miss your attack"<<endl;    
         
         break;
         
        }//end choose attack
        
       
        
        
        newHPO[k] = (newHPO[k] - getNewHealthB());//If Mage dies
        if(newHPO[k] <= 0 ){
           
           cout<<"Mage succumbs!"<<endl;
           cout<<"You smoked him!"<<endl;
           levelUP[z] = WarriorChoice.GetLevel();
           levelUP[z] = levelUP[z] + 1;
           cout<<"Warrior has grown to level " << levelUP[z] <<"."<<endl;;
           cout<<"Would you like to battle again?"<<endl;
           cin>>exitGame;
          
         }
        else{
         
         cout<<"Mages HP is at "<<newHPO[k]<<endl;
     
        }
        }
        }
    break;
    
    
    case 2 : // user Brute Choice
    cout<<"You have chosen Brute!"<<endl;
    cout<<"Your opponent has chosen Warrior! Get ready for Battle!!!"<<endl;   
    cout<<"Warrior bows his head!"<<endl;
 
    
    newHP[i] = BruteChoice.GetHealth(); 
    newHPO[k] = WarriorChoice.GetHealth();
     
     
     while(newHP[i] > 0 && newHPO[i] > 0){ // HP > 0 loop
    
    cout<<"Brute what is your command."<<endl<<endl;
    cout<<"1.Flurry       2.Rush" <<endl;
    cout<<"3.Defening Shout 4.Strength"<<endl;
    cin>>attackMove;
              
      if (BruteChoice.GetSpeed() > WarriorChoice.GetSpeed()) // higher speed attack 
      {
       
       cout<<"Brute gets to attack first!"<<endl;
       
       
      switch(attackMove){
        
        case 1 :
        
        cout<<"Brute leaps into towards the warrior preparing his attack"<<endl;
        cout<<"Brute swings wildly with both hands at his opponent."<<endl;
        
        break;
        
        case 2: 
        
        cout<<"Brute takes an aggressive stance in preparation for his Rush attack!"<<endl;
        cout<<"Brute overwhelms his oppenent in close quarters stabbing recklessly"<<endl;
        
        break;
        
        case 3:
        
        cout<<"Brute begins to inhale deeply in preparation for his shout!"<<endl;
        cout<<"Brute sends a ring of defening blood curdling sound at his opponenet!"<<endl;
        
        
        break;
        
        case 4:
        
        cout<<"Brute grows enraged and uses his strength attack!"<<endl;
        
        break;
        
        default :
        
        cout<<"Brute misses his attack!"<<endl;
        
        break;
        
        
       }
          newHPO[k] = (newHPO[k] - getNewHealthC());
        
         if(newHPO[k] <= 0){
           
           cout<<"The warrior falls."<<endl;  
           cout<<"You smoked him!"<<endl;
           levelUP[z] = BruteChoice.GetLevel();
           levelUP[z] = levelUP[q] + 1;
           cout<<"Brute has grown to level " << levelUP[z] <<"."<<endl;;
           cout<<"Would you like to battle again?"<<endl;
           cin>>exitGame;
          
         }
       
       
     else{
      cout<<"Warriors HP is at "<<newHPO[k]<<endl;
        cout<<"1.High Strike      2.Charge" <<endl;
        cout<<"3.Shield Check    4.Javelin"<<endl;
           cin>>OpponentAttack;
           switch(attackMove){//Choose attacks switch
         
         case 1 :
         
         cout<<"Warrior drops his head in preparation for his High Strike attack!"<<endl;
         cout<<"Warrior throws his blade high and catches his foe"<<endl;
         break;
         
         case 2:
         
         cout<<"Warrior steadys his feet in preparation for his Charge attack!"<<endl;
         cout<<"Warrior smashes hard into his foe."<<endl;
         
         break;
         
         case 3:
         
         cout<<"Warrior lines up his shield to his opponents head for your Shield Check attack!"<<endl;
         cout<<"warrior extends abruptly and checks the shield against the head of his foe"<<endl;
        
         break;
         
         case 4:
         
         cout<<"Warrior stretches back preparation for his Javelin attack!"<<endl;
         cout<<"warrior lunges and catches his enemy in the leg."<<endl;
         break;
         
         default:
           cout<<"You miss your attack"<<endl;    
         
         break;
           }
       
        
       
      
         
        newHP[i] = (newHP[i] - getNewHealthB());
        if(newHP[i] <= 0 ){
           
           cout<<"Brute has died!"<<endl;
          
           
          
          
         }
        else{
         
         
         
         cout<<"Brutes HP is at "<<newHP[i]<<endl;
        }
        }
        }
        }
   
    break;
 
     
    
    case 3 : //Mage chgoice
    cout<<"You have chosen Mage!"<<endl;
    cout<<"Your opponent has chosen Brute! Get ready for Battle!!!"<<endl;   
    cout<<"The brute screams incomprehensible threats at you!"<<endl;
    
    
    newHP[i] = MageChoice.GetHealth(); // sets array to health
    newHPO[k] = BruteChoice.GetHealth();
     
     
     while(newHP[i] > 0 && newHPO[i] > 0){ // HP > 0 loop
    
  
              
      if (BruteChoice.GetSpeed() > MageChoice.GetSpeed()) // higher speed attack 
      {
       
       cout<<"Brute has higher speed and gets to attack first!"<<endl;
      
    cout<<"1.Flurry         2.Rush" <<endl;
    cout<<"3.Defening Shout 4.Strength"<<endl;
    cin>>attackMove;
       
      switch(attackMove){
        
        case 1 :
        
        cout<<"Brute leaps into towards the warrior preparing his attack"<<endl;
        cout<<"Brute swings wildly with both hands at his opponent."<<endl;
        
        break;
        
        case 2: 
        
        cout<<"Brute takes an aggressive stance in preparation for his Rush attack!"<<endl;
        cout<<"Brute overwhelms his oppenent in close quarters stabbing recklessly"<<endl;
        
        break;
        
        case 3:
        
        cout<<"Brute begins to inhale deeply in preparation for his shout!"<<endl;
        cout<<"Brute sends a ring of defening blood curdling sound at his opponenet!"<<endl;
        
        
        break;
        
        case 4:
        
        cout<<"Brute grows enraged and uses his strength attack!"<<endl;
        
        break;
        
        default :
        
        cout<<"Brute misses his attack!"<<endl;
        
        break;
        
        
       }
       
        newHP[i] = (newHP[i] - getNewHealthB()); //Mage Health
        
         if(newHP[i] <= 0){
           
        cout<<"You died!"<<endl;  
        cout<<"The Brute smoked you!"<<endl;
          
          
         }
        else{
        cout<<"Mages HP is at "<<newHP[i]<<endl;    
        cout<<"What is your move, Mage?."<<endl;
        cout<<"1.Combustion   2.Fire Javelin"<<endl;
        cout<<"3.Nova Strike   4.Healing touch"<<endl;
        
       cin>>OpponentAttack;
       
      switch(OpponentAttack){
        
        case 1 :
        
        cout<<"Mage takes an aggressive stance in preparation for his Combustion attack!"<<endl;
        cout<<"Mage uses Combustion! A puff of smoke quickly followed by blazing fire comes from his fingertips."<<endl;
        
        break;
        
        case 2: 
        
        cout<<"Mage takes an aggressive stance in preparation for his Fire Javelin attack!"<<endl;
        cout<<"Mage hurls a torrent of smouldering javelins towards his foe"<<endl;
        
        break;
        
        case 3:
        
        cout<<"Mage pulls crackling lightning from the earth in preparation for his Nova Strike attack!"<<endl;
        cout<<"Mage's lighting shoots outward in a circle around himself"<<endl;
        
        
        break;
        
        case 4:
        
        cout<<"Mage heals himself for 10 HP!"<<endl;
        
        break;
        
        default :
        
        cout<<"Mage misses his attack!"<<endl;
        
        break;
        
        
       }
        
        
         newHPO[k] = (newHPO[k] - getNewHealthV()); // Brute Health
        
         if(newHPO[k] <= 0 ){
           
           cout<<"Brute Died!"<<endl;
           
           levelUP[z] = MageChoice.GetLevel();
           levelUP[z] = levelUP[x] + 1;
           cout<<"Mage has grown to level " << levelUP[z] <<"."<<endl;;
           cout<<"Would you like to battle again?"<<endl;
           cin>>exitGame;
          
          
        }
        else{
         
         cout<<"Brutes HP is at "<<newHPO[k]<<endl;
       
        }
        }
        }
        }
    
    
    break;
  
    default:
      cout<<"No Class Chosen"<<endl;
    break;
        }
        }
        }









