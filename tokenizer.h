#pragma once
/*Enigma Swan Adams
* CS 201 homework #4
date 2/25/21

tokenizer.h
header for tokenizer.cpp
******************************/

#ifndef TOKENIZER_H
#define TOKENIZER_H

//things that need to be included in every source file
#include <iostream>
#include <string>
#include <vector>


// Declaration: functions *************************************

//reads a line from the user
//return false is the string is a blank line
bool ReadLine(std::string& str);

//uses istringstream to read string s sepparated by white space
//"push a blank string at the end of each line" 
//(i.e. if there is a blank line in the input ad a blank string to the tokens vector)
//returns the number of tokens read from the string
unsigned StringToTokenWS(const std::string& input,
	std::vector<std::string>& tokens);

//prints out the type of token, 
//and the type of token surrounded by quotations marks
void AnalyzeTokens(const std::vector<std::string>& tokens);

#endif


