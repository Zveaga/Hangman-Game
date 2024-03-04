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
		static bool word_guessed;

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
		void guessWord(void) const;
		bool letterGuessed(char letter) const;
		void insertLetter(char letter);



		
};

#endif