#include"Word.hpp"

Word::Word()
{
	std::cout << "Basic constructor called\n"; 
	this->word = "EMPTY";	
}

Word::Word(std::string word)
{
	std::cout << "Name constructor called\n"; 
	this->word = word;
}

Word::~Word()
{
	std::cout << "Word object destructed\n"; 
}

std::string Word::getWord(void)
{
	return(this->word);
}

