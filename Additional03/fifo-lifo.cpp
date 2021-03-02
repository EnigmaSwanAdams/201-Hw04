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
	//IM SO CONFUSED IS THE SEQUENCE WHAT THE USER IS ENTERING?
	return 0;
}


// TO DO: MAKE ALL THESE FUNCTIONS (WHAT ARE THEY SUPPOSED TO DO EXACTLY???)

// first in first out************************************************
void FifoPush(vector<string>& container, const string& item) {

}
void FifoPop(vector<string>& container, string& item) {

}

//Last in first out**************************************************
void LifoPush(vector<string>& container, const string& item) {

}
void LifoPop(vector<string>& container, string& item) {

}

//shared functionality***********************************************
bool IsContainerEmpty(const vector<string>& container) {
	return false; //CHANGE LATER
}
void PrintContainer(const vector<string>& container) {

}

//Tests
bool TestLifo() {
	return false;
}
bool TestFifo() {
	return false;
}


