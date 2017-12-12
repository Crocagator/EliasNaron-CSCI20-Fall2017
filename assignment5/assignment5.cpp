//Elias Naron
 
 //12/09/17
 
 //arena combat!
 
 //=============================MAIN=========================================
 #include<iostream>
 #include<string>
 #include<ios>
 #include <cstdlib>
 #include <ctime>
 #include <fstream>
 using namespace std; 


 //================================WARRIOR===================================== 
 class Warrior{
     public:
    
       Warrior();
     
       int health[3];
       int level[3];
       
       int GetHealth();
       int GetSpeed();
       int GetDamage();
       int GetLevel();
     
     private:  
      int speed[3];  
      int damage[3];
 };
   
   //Constructor!
    Warrior::Warrior(){ 
     srand(time(0)); 
     health[0] = 120;
     speed[0] = 65;
     damage[0] = ((rand() % 15) + 40);
     level[0] = 1;
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
 //==========================MAGE============================================ 
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
     speed[1]  = 70;
     damage[1] = ((rand() % 10) + 45);
     level[1] = 1;
     return;
    }
     
     
     //GETS HP
    int Mage::GetHealth(){
     
     return health[1];
    }
    
    // get speed (unchangeable)
    int Mage::GetSpeed(){ 
     
     
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
     speed[2]  = 90;
     damage[2] = ((rand() % 10) + 55);
     level[2] = 1;
     return;
    }
     
      //Get HP
    int Brute::GetHealth(){
     
     return health[2];
    }
    
    // get speed (unchangeable)
    int Brute::GetSpeed(){ 
     
     
     return speed[2];
    }
    
   int Brute::GetDamage(){
     
   return damage[2];  
    }
   int Brute::GetLevel(){
    
     
    
   return level[2]; 
   }
 
 //rand damage functions
  int getNewHealthWarrior(){
     Warrior randWarrior = Warrior();
     randWarrior.GetDamage();
     return randWarrior.GetDamage();
  }
   int getNewHealthMage(){
     Mage randMage = Mage();
     randMage.GetDamage();
     return randMage.GetDamage();
   }

 int getNewHealthBrute(){
     Brute randBrute = Brute();
     randBrute.GetDamage();
     return randBrute.GetDamage();
  }
 
  
  //======================MAIN!=================================================
 
 int main(){
    
    
    ofstream outFS;
    srand(time(0));
    int classchoice = 0;
    int attackMove = 0;
    int OpponentAttack = 0;
    int modifiedHealth[10];
    int modifiedHP[10];
    int levelUP[40];
    int i = 0, k = 0, z  = 0, x = 0, q = 0;
    int exitGame;
     Warrior WarriorChoice = Warrior();
     Mage MageChoice = Mage();
     Brute BruteChoice = Brute();
     
     outFS.open("BattleResults.txt");
  
    
 //========================I/O===========================================    
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
    

    // Mother Switch
    switch(classchoice){
    //User Warrior Choice
    case 1 :
    cout<<"You have chosen Warrior!!"<<endl;
    outFS << "You have chosen Warrior!!" << endl;
  
    
    cout<<"Your opponent is a masked fire Mage covered in tattered garbs from uncontrolled flames! Get ready for Battle!!!"<<endl;
    outFS<<"Your opponent is a masked fire Mage covered in tattered garbs from uncontrolled flames! Get ready for Battle!!!"<<endl;
    cout<<"The mage beckons you."<<endl;
    outFS<<"The mage beckons you."<<endl;
    
    // sets array to health
     modifiedHealth[i] = WarriorChoice.GetHealth(); 
     modifiedHP[k] = MageChoice.GetHealth();
     // HP > 0 loop
    while(modifiedHealth[i] > 0 && modifiedHP[i] > 0){
    
    cout<<"Warrior , what is your move?"<<endl<<endl;
    cout<<"1.High Strike      2.Charge" <<endl;
    cout<<"3.Shield Check    4.Javelin"<<endl;
    
    cin>>attackMove;
      // higher speed attack          
      if (MageChoice.GetSpeed() > WarriorChoice.GetSpeed())
      {
       
       cout<<"Mage gets to attack first!"<<endl;
       cout<<"1.Combustion   2.Fire Javelin"<<endl;
       cout<<"3.Nova Strike   4.Healing touch"<<endl;
       cin>>OpponentAttack;
       
       switch(OpponentAttack){
        
        case 1 :
        
        cout<<"Mage takes an aggressive stance in preparation for his Combustion attack!"<<endl;
        cout<<"Mage uses Combustion! A puff of smoke quickly followed by blazing fire comes from his fingertips."<<endl;
        outFS<<"Mage takes an aggressive stance in preparation for his Combustion attack!"<<endl;
        outFS<<"Mage uses Combustion! A puff of smoke quickly followed by blazing fire comes from his fingertips."<<endl;
        
        break;
        
        case 2: 
        
        cout<<"Mage takes an aggressive stance in preparation for his Fire Javelin attack!"<<endl;
        cout<<"Mage hurls a torrent of smouldering javelins towards his foe"<<endl;
        outFS<<"Mage takes an aggressive stance in preparation for his Fire Javelin attack!"<<endl;
        outFS<<"Mage hurls a torrent of smouldering javelins towards his foe"<<endl;
        
        break;
        
        case 3:
        
        cout<<"Mage pulls crackling lightning from the earth in preparation for his Nova Strike attack!"<<endl;
        cout<<"Mage's lighting shoots outward in a circle around himself"<<endl;
        outFS<<"Mage pulls crackling lightning from the earth in preparation for his Nova Strike attack!"<<endl;
        outFS<<"Mage's lighting shoots outward in a circle around himself"<<endl;
        
        
        break;
        
        case 4:
        
        cout<<"Mage heals himself for 10 HP!"<<endl;
        outFS<<"Mage heals himself for 10 HP!"<<endl;
        break;
        
        default :
        
        cout<<"Mage misses his attack!"<<endl;
        outFS<<"Mage misses his attack!"<<endl;
        break;
        
        
       }
      }
      //Mage Health
     modifiedHealth[i] = (modifiedHealth[i] - getNewHealthMage());
        
         if(modifiedHealth[i] <= 0){
           
           cout<<"You Died!"<<endl;  
           cout<<"The mage smoked you!"<<endl;
           outFS<<"You Died!"<<endl;  
           outFS<<"The mage smoked you!"<<endl;
           
           outFS<<endl;
           outFS<<endl;
           outFS<<endl;
          
         }
       
       else{
     
        cout<<"Warriors HP is at " << modifiedHealth[i]<<endl;
        outFS<<"Warriors HP is at " << modifiedHealth[i]<<endl;
        switch(attackMove){
         //Choose attacks switch
         case 1 :
         
         cout<<"Warrior drops his head in preparation for his High Strike attack!"<<endl;
         cout<<"Warrior throws his blade high and catches the mage"<<endl;
         outFS<<"Warrior drops his head in preparation for his High Strike attack!"<<endl;
         outFS<<"Warrior throws his blade high and catches the mage"<<endl;
         break;
         
         case 2:
         
         cout<<"Warrior steadys his feet in preparation for his Charge attack!"<<endl;
         cout<<"Warrior smashes hard into the mage."<<endl;
         outFS<<"Warrior steadys his feet in preparation for his Charge attack!"<<endl;
         outFS<<"Warrior smashes hard into the mage."<<endl;
         
         break;
         
         case 3:
         
         cout<<"Warrior lines up his shield to his opponents head for your Shield Check attack!"<<endl;
         cout<<"warrior extends abruptly and checks the shield against the mages head!"<<endl;
         outFS<<"Warrior lines up his shield to his opponents head for your Shield Check attack!"<<endl;
         outFS<<"warrior extends abruptly and checks the shield against the mages head!"<<endl;
        
         break;
         
         case 4:
         
         cout<<"Warrior stretches back preparation for his Javelin attack!"<<endl;
         cout<<"warrior lunges and catches the mage in the leg."<<endl;
         outFS<<"Warrior stretches back preparation for his Javelin attack!"<<endl;
         outFS<<"warrior lunges and catches the mage in the leg."<<endl;
         break;
         
         default:
           cout<<"You miss your attack"<<endl;    
           outFS<<"You miss your attack"<<endl;  
         
         break;
         
        }//end choose attack
        
       
        
        //If Mage dies
        modifiedHP[k] = (modifiedHP[k] - getNewHealthWarrior());
        if(modifiedHP[k] <= 0 ){
           
           cout<<"Mage succumbs!"<<endl;
           cout<<"You smoked him!"<<endl;
           outFS<<"Mage succumbs!"<<endl;
           outFS<<"You smoked him!"<<endl;
           
           outFS<<endl;
           outFS<<endl;
           outFS<<endl;
           
           levelUP[z] = WarriorChoice.GetLevel();
           levelUP[z] = levelUP[z] + 1;
           cout<<"Warrior has grown to level " << levelUP[z] <<"."<<endl;;
           outFS<<"Warrior has grown to level " << levelUP[z] <<"."<<endl;;
           cout<<"Would you like to battle again?"<<endl;
           cin>>exitGame;
          
         }
        else{
         
         cout<<"Mages HP is at "<<modifiedHP[k]<<endl;
     
        }
        }
        }
    break;
    
    
    case 2 : // user Brute Choice
    cout<<"You have chosen Brute!"<<endl;
    cout<<"Your opponent has chosen Warrior! Get ready for Battle!!!"<<endl;   
    cout<<"Warrior bows his head!"<<endl;
    
    outFS<<"You have chosen Brute!"<<endl;
    outFS<<"Your opponent has chosen Warrior! Get ready for Battle!!!"<<endl;   
    outFS<<"Warrior bows his head!"<<endl;
 
    
    modifiedHealth[i] = BruteChoice.GetHealth(); 
    modifiedHP[k] = WarriorChoice.GetHealth();
     
     // HP > 0 loop
     while(modifiedHealth[i] > 0 && modifiedHP[i] > 0){ 
    
    cout<<"Brute what is your command."<<endl<<endl;
    cout<<"1.Flurry       2.Rush" <<endl;
    cout<<"3.Defening Shout 4.Strength"<<endl;
    cin>>attackMove;
      
      
       // higher speed attack        
      if (BruteChoice.GetSpeed() > WarriorChoice.GetSpeed()) 
      {
       
       cout<<"Brute gets to attack first!"<<endl;
       outFS<<"Brute gets to attack first!"<<endl;
       
       
      switch(attackMove){
        
        case 1 :
        
        cout<<"Brute leaps into towards the warrior preparing his attack"<<endl;
        cout<<"Brute swings wildly with both hands at his opponent."<<endl;
        outFS<<"Brute leaps into towards the warrior preparing his attack"<<endl;
        outFS<<"Brute swings wildly with both hands at his opponent."<<endl;
        
        break;
        
        case 2: 
        
        cout<<"Brute takes an aggressive stance in preparation for his Rush attack!"<<endl;
        cout<<"Brute overwhelms his oppenent in close quarters stabbing recklessly"<<endl;
        outFS<<"Brute takes an aggressive stance in preparation for his Rush attack!"<<endl;
        outFS<<"Brute overwhelms his oppenent in close quarters stabbing recklessly"<<endl;
        
        break;
        
        case 3:
        
        cout<<"Brute begins to inhale deeply in preparation for his shout!"<<endl;
        cout<<"Brute sends a ring of defening blood curdling sound at his opponenet!"<<endl;
        outFS<<"Brute begins to inhale deeply in preparation for his shout!"<<endl;
        outFS<<"Brute sends a ring of defening blood curdling sound at his opponenet!"<<endl;
        
        
        break;
        
        case 4:
        
        cout<<"Brute grows enraged and uses his strength attack!"<<endl;
        outFS<<"Brute grows enraged and uses his strength attack!"<<endl;
        
        break;
        
        default :
        
        cout<<"Brute misses his attack!"<<endl;
        outFS<<"Brute misses his attack!"<<endl;
        
        break;
        
        
       }
          modifiedHP[k] = (modifiedHP[k] - getNewHealthBrute());
        
         if(modifiedHP[k] <= 0){
           
           cout<<"The warrior falls."<<endl;  
           cout<<"You smoked him!"<<endl;
           
           outFS<<"The warrior falls."<<endl;  
           outFS<<"You smoked him!"<<endl;
           
           outFS<<endl;
           outFS<<endl;
           outFS<<endl;
           
           levelUP[z] = BruteChoice.GetLevel();
           levelUP[z] = levelUP[q] + 1;
           cout<<"Brute has grown to level " << levelUP[z] <<"."<<endl;;
           outFS<<"Brute has grown to level " << levelUP[z] <<"."<<endl;;
           cout<<"Would you like to battle again?"<<endl;
           cin>>exitGame;
          
         }
       
       
     else{
      cout<<"Warriors HP is at "<<modifiedHP[k]<<endl;
        cout<<"1.High Strike      2.Charge" <<endl;
        cout<<"3.Shield Check    4.Javelin"<<endl;
           cin>>OpponentAttack;
           switch(attackMove){
         //Choose attacks switch
         case 1 :
         
         cout<<"Warrior drops his head in preparation for his High Strike attack!"<<endl;
         cout<<"Warrior throws his blade high and catches his foe"<<endl;
         
         outFS<<"Warrior drops his head in preparation for his High Strike attack!"<<endl;
         outFS<<"Warrior throws his blade high and catches his foe"<<endl;
         break;
         
         case 2:
         
         cout<<"Warrior steadys his feet in preparation for his Charge attack!"<<endl;
         cout<<"Warrior smashes hard into his foe."<<endl;
         
         outFS<<"Warrior steadys his feet in preparation for his Charge attack!"<<endl;
         outFS<<"Warrior smashes hard into his foe."<<endl;
         
         break;
         
         case 3:
         
         cout<<"Warrior lines up his shield to his opponents head for your Shield Check attack!"<<endl;
         cout<<"warrior extends abruptly and checks the shield against the head of his foe"<<endl;
         
         outFS<<"Warrior lines up his shield to his opponents head for your Shield Check attack!"<<endl;
         outFS<<"warrior extends abruptly and checks the shield against the head of his foe"<<endl;
        
         break;
         
         case 4:
         
         cout<<"Warrior stretches back preparation for his Javelin attack!"<<endl;
         cout<<"warrior lunges and catches his enemy in the leg."<<endl;
         
         outFS<<"Warrior stretches back preparation for his Javelin attack!"<<endl;
         outFS<<"warrior lunges and catches his enemy in the leg."<<endl;
         break;
         
         default:
           cout<<"You miss your attack"<<endl;  
           outFS<<"You miss your attack"<<endl;   
         
         break;
           }
       
        
       
      
         
        modifiedHealth[i] = (modifiedHealth[i] - getNewHealthWarrior());
        if(modifiedHealth[i] <= 0 ){
           
           cout<<"Brute has died!"<<endl;
           outFS<<"Brute has died!"<<endl;
          
           
          
          
         }
        else{
         
         
         
         cout<<"Brutes HP is at "<<modifiedHealth[i]<<endl;
         outFS<<"Brutes HP is at "<<modifiedHealth[i]<<endl;
        }
        }
        }
        }
   
    break;
 
     
    
    case 3 : //Mage chgoice
    cout<<"You have chosen Mage!"<<endl;
    cout<<"Your opponent has chosen Brute! Get ready for Battle!!!"<<endl;   
    cout<<"The brute screams incomprehensible threats at you!"<<endl;
    
    outFS<<"You have chosen Mage!"<<endl;
    outFS<<"Your opponent has chosen Brute! Get ready for Battle!!!"<<endl;   
    outFS<<"The brute screams incomprehensible threats at you!"<<endl;
    
    // sets array to health
    modifiedHealth[i] = MageChoice.GetHealth(); 
    modifiedHP[k] = BruteChoice.GetHealth();
     
      // HP > 0 loop
     while(modifiedHealth[i] > 0 && modifiedHP[i] > 0){
    
  
       // higher speed attack         
      if (BruteChoice.GetSpeed() > MageChoice.GetSpeed())
      {
       
       cout<<"Brute has higher speed and gets to attack first!"<<endl;
       outFS<<"Brute has higher speed and gets to attack first!"<<endl;
      
    cout<<"1.Flurry         2.Rush" <<endl;
    cout<<"3.Defening Shout 4.Strength"<<endl;
    cin>>attackMove;
       
      switch(attackMove){
        
        case 1 :
        
        cout<<"Brute leaps into towards the warrior preparing his attack"<<endl;
        cout<<"Brute swings wildly with both hands at his opponent."<<endl;
        
        outFS<<"Brute leaps into towards the warrior preparing his attack"<<endl;
        outFS<<"Brute swings wildly with both hands at his opponent."<<endl;
        
        break;
        
        case 2: 
        
        cout<<"Brute takes an aggressive stance in preparation for his Rush attack!"<<endl;
        cout<<"Brute overwhelms his oppenent in close quarters stabbing recklessly"<<endl;
        
        outFS<<"Brute takes an aggressive stance in preparation for his Rush attack!"<<endl;
        outFS<<"Brute overwhelms his oppenent in close quarters stabbing recklessly"<<endl;
        
        break;
        
        case 3:
        
        cout<<"Brute begins to inhale deeply in preparation for his shout!"<<endl;
        cout<<"Brute sends a ring of defening blood curdling sound at his opponenet!"<<endl;
        
        outFS<<"Brute begins to inhale deeply in preparation for his shout!"<<endl;
        outFS<<"Brute sends a ring of defening blood curdling sound at his opponenet!"<<endl;
        
        
        break;
        
        case 4:
        
        cout<<"Brute grows enraged and uses his strength attack!"<<endl;
        outFS<<"Brute grows enraged and uses his strength attack!"<<endl;
        
        break;
        
        default :
        
        cout<<"Brute misses his attack!"<<endl;
        outFS<<"Brute misses his attack!"<<endl;
        
        break;
        
        
       }
       //Mage Health 
        modifiedHealth[i] = (modifiedHealth[i] - getNewHealthWarrior());
        
         if(modifiedHealth[i] <= 0){
           
        cout<<"You died!"<<endl;  
        cout<<"The Brute smoked you!"<<endl;
        
        outFS<<"You died!"<<endl;  
        outFS<<"The Brute smoked you!"<<endl;
          
          
         }
        else{
        cout<<"Mages HP is at "<<modifiedHealth[i]<<endl;    
        cout<<"What is your move, Mage?."<<endl;
        cout<<"1.Combustion   2.Fire Javelin"<<endl;
        cout<<"3.Nova Strike   4.Healing touch"<<endl;
        
       cin>>OpponentAttack;
       
      switch(OpponentAttack){
        
        case 1 :
        
        cout<<"Mage takes an aggressive stance in preparation for his Combustion attack!"<<endl;
        cout<<"Mage uses Combustion! A puff of smoke quickly followed by blazing fire comes from his fingertips."<<endl;
        
        outFS<<"Mage takes an aggressive stance in preparation for his Combustion attack!"<<endl;
        outFS<<"Mage uses Combustion! A puff of smoke quickly followed by blazing fire comes from his fingertips."<<endl;
        
        
        break;
        
        case 2: 
        
        cout<<"Mage takes an aggressive stance in preparation for his Fire Javelin attack!"<<endl;
        cout<<"Mage hurls a torrent of smouldering javelins towards his foe"<<endl;
        
        outFS<<"Mage takes an aggressive stance in preparation for his Fire Javelin attack!"<<endl;
        outFS<<"Mage hurls a torrent of smouldering javelins towards his foe"<<endl;
        
        break;
        
        case 3:
        
        cout<<"Mage pulls crackling lightning from the earth in preparation for his Nova Strike attack!"<<endl;
        cout<<"Mage's lighting shoots outward in a circle around himself"<<endl;
        
        outFS<<"Mage pulls crackling lightning from the earth in preparation for his Nova Strike attack!"<<endl;
        outFS<<"Mage's lighting shoots outward in a circle around himself"<<endl;
        
        
        break;
        
        case 4:
        
        cout<<"Mage heals himself for 10 HP!"<<endl;
        outFS<<"Mage heals himself for 10 HP!"<<endl;
        
        break;
        
        default :
        
        cout<<"Mage misses his attack!"<<endl;
        outFS<<"Mage misses his attack!"<<endl;
        
        break;
        
        
       }
        
         // Brute Health
         modifiedHP[k] = (modifiedHP[k] - getNewHealthMage());
        
         if(modifiedHP[k] <= 0 ){
           
           cout<<"Brute Died!"<<endl;
           outFS<<"Brute Died!"<<endl;
           
           levelUP[z] = MageChoice.GetLevel();
           levelUP[z] = levelUP[x] + 1;
           cout<<"Mage has grown to level " << levelUP[z] <<"."<<endl;;
           
           outFS<<"Mage has grown to level " << levelUP[z] <<"."<<endl;;
           cout<<"Would you like to battle again?"<<endl;
           cin>>exitGame;
          
          
        }
        else{
         
         cout<<"Brutes HP is at "<<modifiedHP[k]<<endl;
         
         outFS<<"Brutes HP is at "<<modifiedHP[k]<<endl;
       
        }
        }
        }
        }
    
    
    break;
  
    default:
      cout<<"No Class Chosen"<<endl;
    break;
    outFS.close();
        }
        }
        }

