/*Enigma Swan Adams
* CS 201 homework #4
* Additional program 2
*date 2/26/21
*
bulls-and-cows.cpp
contains main
contains the full program

sets up a vector with unique integers pulled form the
set of integers 0-9
the user guesses what these 4 numbers are (they also need to get the order right)
they are given a coresponding hint
(where the number of bulls = number they got totally correct, and
the number of cows = are the number they got right, but in the wrong position)
if the user enters a negative number the answer is printed
*/

// stuff we need 
#include <iostream>
#include<vector>
#include<string>
#include<sstream>
using std::string;
using std::vector;
using std::cout;
using std::cin;
using std::endl;


int main() {

	//set up the vector to be guessed at
	vector<int> mysteryVec = { 1,2,3,4 };
	string input = "somethings wrong if this prints";
	int numBulls = 0;
	int numCows = 0;

	//prompt only happens once befor the loop
	cout << "I have a secret 4 digit number, guess my secret by entering 4 numbers with no spaces (ex: 2345). \n"
		"hint: no numbers are repeated, and all numbers are 0-9. If you're tired of guessing enter a negative number \n"
		"(ex: -1 or -1234 ) and I'll print the solution. ";

	while (numBulls != 4) { // repeat till the mystery vector is guessed 

		//redeclare the input vector for every guess so it can be remade 
		vector<int> inputVec;
		//reset the number of bulls and cows for the next guess
		numBulls = 0;
		numCows = 0;

		//get user input 
		getline(cin, input);


		for (int n : input) { //adjusting characters for ascii values
			n = n - 48;
			inputVec.push_back(n); // creating vector of ints from the adjusted characters in the string input
		}

		if (inputVec.at(0) < 0) { // if they enter a negative number (the first int in negative) then we tell them the answer
			cout << "Alright the answer is "; // don't make them guess anymore
			for (auto n : mysteryVec) {
				cout << n;
			}
			break;
		}

		//search for bulls
		for (int i = 0; i < mysteryVec.size(); i++) { //if they ge thte number and the index right increment numBulls
			if (mysteryVec.at(i) == inputVec.at(i)) {
				numBulls++;
			}
			//search for cows
			else {
				for (auto n : mysteryVec) { //if a value they typed is anywhere in mysteryVec increment numCows
					if (inputVec.at(i) == n) {
						numCows++;
					}
				}
			}
		}


		//report to the user 

		//adding the plural if gramaticaly correct 
		string bull = "bull";
		string cow = "cow";
		if (numBulls > 1 || numBulls == 0) {
			bull.push_back('s');
		}
		if (numCows > 1 || numCows == 0) {
			cow.push_back('s');
		}

		cout << numBulls << " " << bull << " and " << numCows << " " << cow << endl;
		if (numBulls == 4) { cout << "YAY you guessed correctly"; }
	}


	return 0;
}