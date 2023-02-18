/*************************************************************************
 *	STRING_REPORT
 *	author: Lennart Richter
 *	adapted from:   web question & answer
 *	other citations:
 *
 *	summary:  an efficient C++ program that takes a string input from the
 *			  user and displays the number of words, characters, alphabets,
 *			  vowels, consonants and digits in that given string.
 *	overview:
 *
 *
 *
 *************************************************************************/

#include <iostream>
#include <string>

int main() {
	int numLetters = 0;
	int numVowels = 0;
	int numConsonants = 0;
	int numDigits = 0;
	int numChars = 0;
	int numWords = 0;




	std::cout << "-*-*-*-\n";
	std::cout << "Number of alphabets = " << numLetters << "\n";
	std::cout << "Number of vowels = " << numVowels << "\n";
	std::cout << "Number of consonants = " << numConsonants << "\n";
	std::cout << "Number of digits = " << numDigits << "\n";
	std::cout << "Number of characters = " << numChars << "\n";
	std::cout << "Number of words = " << numWords << "\n";
}