/*Enigma Swan Adams
* CS 201 homework #4
date 2/25/21

tokenizertest.cpp
contains main

tests that the program functions
as described in the homework deascription
and includes finals version where user input 
will be used
*/

#include"tokenizer.h"
using std::string;
using std::cout;
using std::endl;

int main() {
	//strickly for testing each function******************************

	//std::cout << " Please type some text" << std::endl;
	//string  x;
	//bool torf = ReadLine(x);
	//cout << "You entered" << x << "was it a blank line: " << torf << endl;

	/*
	string input = "Program hellowworld begin print \"hellow\" I = 3 + 5";
	string input02 = "begin";
	//string fullInput = input + "\n" + input02;
	std::vector<string> tokens;
	//cout << StringToTokenWS(input, tokens) << endl;
	//cout << StringToTokenWS(input02, tokens) << endl;
	//for (auto n : tokens) {
	//	cout << n << endl;
	//}
	*/
	//StringToTokenWS(input, tokens);
	//AnalyzeTokens(tokens);	// to use later 



	//part tha requires user intput***********************************
	//takes input until the user types "end" "End" or "END"
	string command = "GO";
	string input = "somethings Wrong";
	std::vector<string> tokens;

	std::cout << "Please type some text. When you are done, type \"END\", \"end\", or \"End\": " << std::endl;

	do {

		if (ReadLine(input)) {
			StringToTokenWS(input, tokens);
		}

		command = (tokens.at(tokens.size() - 1));
	} while (command != "END" && command != "End" && command != "end"); // runs until "End" or "END" or "end" becomes the last token 

	AnalyzeTokens(tokens);

	return 0;
}
