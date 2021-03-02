/*Enigma Swan Adams
* CS 201 homework #4
date 2/25/21

includes the function definitons for:
ReadLine and StringToTokensWS and AnalyzeTokens
*/

#include "tokenizer.h"
#include <sstream>

using std::string;
using std::endl;
using std::cout;

bool ReadLine(std::string& str) {

	std::getline(std::cin, str);

	if (!str.size()) {
		return false;
	}
	else {
		return true;
	}

}

unsigned StringToTokenWS(const std::string& input, std::vector<std::string>& tokens) {
	using std::istringstream;

	unsigned count = 0;

	istringstream instream(input);
	std::string word;
	while (instream >> word) {
		tokens.push_back(word);

		count++;
	}
	if (tokens.at(tokens.size() - 1) == "END" || tokens.at(tokens.size() - 1) == "End" || tokens.at(tokens.size() - 1) == "end") {
		// do nothing to tokens if the End has been reached
	}
	else {
		// if the end hasn't been reacvhed we add a whitespace token
		tokens.push_back("");
	}
	return count;

}

void AnalyzeTokens(const std::vector<std::string>& tokens) {
	for (auto n : tokens) {
		string type = "unprocessed";
		string word = n;

		std::istringstream instream(n);
		int  num;
		instream >> num;
		bool identifier = false;

		for (int i = 0; i < word.size(); i++) {
			if ((word.at(i) <= 'Z' && word.at(i) >= 'A') ||  // the word must be composed of letters underscores, and numbers
				(word.at(i) <= 'z' && word.at(i) >= 'a') || // only if they are not the first character 
				(word.at(i) == '_')) {					   //(if they were the type would be int)
				identifier = true;
			}
		}

		if (instream) {
			type = "[integer]        ";
		}

		//whitespace
		else if (word == "") {
			type = "[whitespace]     ";
		}

		//string
		else if (word.at(word.size() - 1) == '\"' && word.at(0) == '\"') {
			type = "[string]         ";
		}

		//identifier
		else if (identifier) {   // where identifier is a bool determined above 
			type = "[identifier]     ";
		}

		//other (idk)
		else {
			type = "[other]          ";
		}

		cout << type << "\"" << n << "\"" << endl;

	}
}