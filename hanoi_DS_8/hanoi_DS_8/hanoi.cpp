/*Ashley Faul
4/14/17
Data Structures Project 8
Write a program that makes use of a recursive function to solve the 
'Towers Of Hanoi math problem*/

//Hey, Ash here.  So this is a program that will solve the 'Tower of Hanoi' puzzle using a recursive function.
//Basically this particular program will allow the user to enter however many disks they would like to be in the puzzle.
//Once the user enters a number of disks, the AI gets to work using the recursive function to show the user how to solve the puzzle
//by showing where to move each disk.
//This is a complex puzzle solved by a surprisingly simple recursive function.

#include <iostream> //input/output stream
#include <fstream>
using namespace std; //Summon the library

void move(int, int, int, int); //Hey guys, Ash here, so here's where the main part of the commenting starts.  This is what we call a function prototype.  

int main() //The main function starts here.  
{

	int num; //We're creating an integer here labled num.  
	cout << "Hello, My name is SAI.  I was created to solve the 'Towers of Hanoi' puzzle using a recursive function." << endl; //This prompts the user.
	//(Side note, SAI is the name of my first AI i built 2 Decembers ago, so I incorperate him in to my code from time to time). 
	cout << "\nEnter the number of disks, and I will solve the puzzle: " << endl; //More prompt
	cin >> num; //This is where the user enters the number of disks in the puzzle to be solved by the AI
	cout << endl; //Space
	move(num, 1, 3, 2); //This is our function call.  This call the function to run in the output. 
	system("Pause"); //Pauses the output so we can see it in action
	return 0; //Return 0 for a successful code

}

void move(int count, int needle1, int needle3, int needle2) //Here is our actual function which comes after the main function. 




{

	ofstream hanoiSolutionText;


	if (count > 0)  //The count represents the disk we are on.
	{
		
		move(count - 1, needle1, needle2, needle3); //The needles are the other 3 needles that we will be working with in the puzzle
		cout << " Move disk " << count << " from " << needle1 << " to " << needle3 << "." << endl; //move from the current disk to needle one to needle 3 and so on and so forth until the disks are moved
		hanoiSolutionText.open("hanoiSolution.txt");
		hanoiSolutionText << " Move disk " << count << " from " << needle1 << " to " << needle3 << ".";
		move(count - 1, needle2, needle3, needle1); //this is where the recursiveness comes in, notice we called the function again here to keep moving the disks on needles until all the disks are on the right needle.
		

	

	}
	
	hanoiSolutionText.close();

	//If you have never played the towers of hanoi I suggest looking it up.  The aim of the game is to move all the disks from one end to the other 
	//but you cant stack a bigger disk on a smaller disk.
	//It says that theres monks at the temple of hanoi moving 64 of these disks around and that when all the disks are on one needle 
	//the universe would end. 
	//Even using the speed of this computer it would still take 500 or more years to solve the 64 puzzle.
	//I would reccomend a smaller number, like 3.

	//Ok yall, I had fun with this one, ABLC, signing out~



}