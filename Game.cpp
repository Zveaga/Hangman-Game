#include"Game.hpp"

std::string Game::word = "EMPTY";
int Game::player_count = 0;
int Game::lives = 0;

// --Constructors-- //
// Game::Game()
// {
// 	std::cout << "Basic constructor\n";
// }

Game::Game(Drawing &drawing): drawing(drawing) {}

Game::~Game()
{
	
}

// --Overloads-- //


// --Member Functions-- //

		
	
void Game::setWord()
{
	std::cout << "Enter the word to be guessed:\n-> ";
	std::getline(std::cin, this->word);
	if (this->word.empty())
		this->setWord();
	else
	{
		for (int i = 0; i < this->word.length(); i++)
			if (!std::isalpha(this->word[i]))
				this->setWord();

		for (int i = 0; i < this->word.length(); i++)
			this->word[i] = std::toupper(this->word[i]);
		//std::cout << this->word;
	}
}

void Game::setPlayerCount()
{
	std::string input;
	std::cout << "Enter from of players (5 max):\n-> ";
	std::getline(std::cin, input);
	if (input.empty()
		|| input.length() > 1
		|| !std::isdigit(input[0])
		|| (input[0] > '5'))
	{
		this->setPlayerCount();
	}
	else
	{
		this->player_count = std::stoi(input);
		//std::cout << this->player_count;
	}
	
}


void Game::setupGame()
{
	//this->setPlayerCount();
	this->setWord();

	drawing.drawLetterSpots(this->word.length());



}


void Game::startGame()
{

}


void Game::endGame()
{

}

int Game::getWordLen() const
{
	return (this->word.length());
}
