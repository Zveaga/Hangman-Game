#ifndef GAME_HPP
# define GAME_HPP

#include<iostream>
#include"Word.hpp"
#include"Drawing.hpp"

class Game
{
	private:
		Drawing &drawing;
		static std::string word;
		static int player_count;
		static int lives;
		//static int guessed_letters;
		std::string guessed_letters;

		//Word &word;
	public:
		// --Constructors-- //
		// Game();
		Game(Drawing &drawing);
		// --Destructor-- //
		~Game();
		// --Overloads-- //
		// --Member Functions-- //
		void setupGame();
		void setPlayerCount();
		void setWord();

		void startGame();
		void endGame();

		int getWordLen() const;

		char guessLetter(void) const;
		bool guessWord(void);
		bool letterGuessed(char letter) const;
		void appendGuessedLetters(char letter);
		void insertLetter(char letter);
		void resetGame();
		std::string getInput(std::string message) const;
		int checkInput(std::string message) const;



		
};

#endif