/*
	Dr. David Brown
	18 Feb 16
	CSC2100
	This is a perfect example of what Program 1 should be - a coin flip guessing game
	that allows the user to guess for only one coin flip
*/

#include <iostream>
#include <string>
#include "Random.h"

using namespace std;
//I added this
int main()
{
	int userGuess,		
		coinFlip;			//Randomly generated 0 or 1 indicating coin flip result
	string headsTails;		//Heads or Tails
		
	seedRandom();			//Seed the randomizer to give good random numbers
	
	//Get the users guess to the coin flip
	cout << "Welcome to the Coin Flip Toss" << endl;
	cout << "Please enter your choice (0 for heads, 1 for tails) : ";
	cin >> userGuess; //I added this too
	
	//Did the user guess heads or tails
	if (userGuess == 0)
		headsTails = "heads";
	else
		headsTails = "tails";
	
	//Generate the result for the coin flip
	coinFlip = getRandomInt (0, 2);
	
	//See if the user got it right
	if (userGuess == coinFlip)
	{
		cout << "You chose " << headsTails << ", congratulations you guessed correctly." << endl;
		cout << "You win!" << endl;
	}
	else		//They lost so let them know...
	{
		cout << "You chose " << headsTails << ", sorry you have guessed incorrectly." << endl;
		cout << "The Computer wins" << endl;
	}
	
}
