#include"Word.hpp"






// --Constructors-- //
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

// --Destructor-- //
Word::~Word()
{
	std::cout << "Word object destructed\n"; 
}

// --Overloads-- //


// --Member Functions-- //
std::string Word::getWord(void)
{
	return(this->word);
}

