// Created By: Elias Naron
// Created On: 8/24/2017



>Guessing Game


>Step 1: THE RULES

Demarcate out of the two players which title they each have for this game.
    " IE player1, and player2."
    
The player who's role it is to guess the correct number is scored based on success.

As the player guesses numbers incorrectly, the chance of them getting the right number increases as the pool of numbers is smaller.

The score of that player will be a variable between 1 and 10 , decreasing by 1 for every incorrect answer.

>Step 2:

player1~ will generate a SINGLE whole number between 1 and 10 at random to be the "correct number".
/*

        This number should not include and decimals or fractions as indicated by 'whole number'"

*/

>Step 3: Out of the two whole numbers initially indicated by player number 1 (1 and 10),
player2 must make a random guess as to which number is the "correct number" selected by player 1.
    
    
>Step 4: This step is variable as it will differ depending on player2's guess.
        Variable 1:
            Should Player2 guess the wrong number, they are deducted a point from the original point parameters totally 10 points at a perfect guess 
        and are then signaled by player1 if that number was
        higher or lower in the variable  numbers than the "correct number".
/*
    this not only inflates the ability for player 2 to guess that number as the pool is smaller, 
    they are put further in advantage because they have potentially 9 less numbers in pool of possible numbers
*/

        Variable 2: Player 2 guesses the correct answer and is rewarded points based on the number of attempts guessed deducted from a maximum of 10.
        If this happens they are refered to step 6.
        
        
Step 5: Player 2 is prompted to guess once again for the "correct answer" but now it is out of the remaining numbers that were demarcated by player1 in the previous step.
    If this happens repeat step 4 untill you're consequently prompted by trail and error to move to step 6.
    
Step 6: You win.





