/*Enigma Swan Adams
* CS 201 homework #4
* Additional program 2
*date 2/27/21

fifo-lifo.cpp
contains main

contains the full program
SAY WHAT THE PROGRAM DOES HERE PLEASE
*/

#include<iostream>
#include<vector>
#include<string>
using std::vector;
using std::string;
using std::cout;
using std::endl;

//first in first out
void FifoPush(vector<string>& container, const string& item); 
void FifoPop(vector<string>& container, string& item);

//Last in first out
void LifoPush(vector<string>& container, const string& item);
void LifoPop(vector<string>& container, string& item);

//shared functionality
bool IsContainerEmpty(const vector<string>& container);
void PrintContainer(const vector<string>& container);

bool TestLifo();
bool TestFifo();

int main() {
	//USE FUNCTION TO DEMONSTRATE TO USER

	/*
	vector <string> peopleToBeInLine{ "A", "B", "C", "D" };
	vector<string> peopleInLine;

	cout << "Lets demonstrat eht econcepts of fifo (first in first out),and lifo (last in last out). \n"
		"Suppose to atart you and your friends are waiting in line to buy movie tickets. \n"
		"There are 4 other people infront of you. Person A, person B, person C and person D. \n"
		"When those 4 people intially got in line (supposing the ticket booth \n"
		"wasn't open yet) it happened like this: " << endl;

	
	for (auto n : peopleToBeInLine) {
		FifoPush(peopleInLine, n);
		cout << "Now person " << n << " is at the back of the line" << endl;

		cout << "Now the line consists of ";
		PrintContainer(peopleInLine);
		cout << endl;
	}

	
	cout << "\nOnce the booth opens the line will begin to move and people will leave \n"
		"the line starting with the person who is currently \n"
		"first in line." << endl;

	for (int i = peopleInLine.size() - 1; i >= 0; i--) {
		cout << "Person " << peopleInLine.at(i) << " just got their ticket" << endl;
		FifoPop(peopleInLine, peopleInLine.at(i));
		cout << "Now the line consists of ";
		PrintContainer(peopleInLine);
		cout << endl;
	}
*/
	vector <string> books = { "A", "B", "C", "D" };
	vector <string> booksOnShelf;

	cout << "Now suppose instead you have a pile of books. To make this pile of books you first stacked books \n"
		"A, B, C, and D like so: " << endl;

	for (auto n : books) {
		LifoPush(booksOnShelf, n);
		cout << "Now book " << n << " is on the top of the stack" << endl;

		cout << "Now the stack consists of ";
		PrintContainer(booksOnShelf);
		cout << endl;
	}

	cout << "\nNow say we want remove all of these books. We have to remove them like such: " << endl;
	for (int i = 0; i < 4; i++) {
		cout << "Book " << booksOnShelf.at(0) << " just got removed from the stack" << endl;
		LifoPop(booksOnShelf, booksOnShelf.at(0));
		cout << "Now the stack consists of ";
		PrintContainer(booksOnShelf);
		cout << endl;
	}
	return 0;
	
}



// first in first out************************************************
//adds to the front of the vector (which is the back of the line)
void FifoPush(vector<string>& container, const string& item) {
	container.insert(container.begin(), item);
}
//takes one away from the end of the vector (which is the front of the line)
//deosn't neccessarily remove the item specified, just removes the person form the fornt of the line
void FifoPop(vector<string>& container, string& item) {  
	container.pop_back();
	
}

//Last in first out**************************************************
// this actually just does the same thing as FifoPush, since its just creating the vector
void LifoPush(vector<string>& container, const string& item) {
	container.insert(container.begin(), item);
}
//simply removes the first element regardless of what is placed in item
void LifoPop(vector<string>& container, string& item) {
	container.erase(container.begin());
}

//shared functionality***********************************************
//returns true or false whethor the contianer is empty
bool IsContainerEmpty(const vector<string>& container) {
	return !container.size();
}

//prints container with spaces between the objects
void PrintContainer(const vector<string>& container) {
	for (auto n : container) {
		cout << n << " ";
	}
}

//Tests
bool TestLifo() {
	return false;
}
bool TestFifo() {
	return false;
}


