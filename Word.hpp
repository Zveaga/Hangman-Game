#ifndef WORD_HPP
# define WORD_HPP

#include<iostream>

class Word
{
	private:
		std::string word;
	public:
		// --Constructors-- //
		Word();
		Word(const std::string &word);
		// --Destructor-- //
		~Word();
		// --Overloads-- //
		
		// --Member Functions-- //
		std::string getWord(void);
		void setWord(const std::string &word);


};

#endif
