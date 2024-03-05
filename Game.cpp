#include"Game.hpp"

std::string Game::word = "EMPTY";
int Game::player_count = 0;
int Game::lives = 7;
int Game::guessed_letters = 0;

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
	drawing.printCanvas();
}

std::string Game::getInput(std::string message)
{
	std::string input;
	do
	{
		std::getline(std::cin, input);	
	} while (input.empty());

	return (input);
	
}

void Game::startGame()
{
	std::string input;

	while (true)
	{
		if (guessWord() == true)
		{
			std::cout << "YOU GUESSED THE WORD BEFORE BEING HANGED, NICE!\n";
		}
		else
			std::cout << "YOU HAVE BEEN HANGED!" << std::endl;
		input = getInput("Enter:\n-> (1) to start a new game\n-> (2) to quit game\n");
		resetGame();	
		setupGame();
		if (input[0] == '1')
		{
			// resetGame();
			// setupGame();
			continue ;
		}
		else if (input[0] == '2')
			break ;
	}
}


void Game::endGame()
{

}

int Game::getWordLen() const
{
	return (this->word.length());
}

char Game::guessLetter() const
{
	std::string letter;

	do {
		std::cout << "Guess letter:\n-> ";
		std::getline(std::cin, letter);
		if (letter.empty() || !std::isalpha(letter[0]) || letter.length() > 1)
		{
			std::cout << "\nEnter a single letter only!\n";
			std::cin.clear();
			continue ;
		}
		break ;
	} while (true);
	return (std::toupper(letter[0]));
}

bool Game::letterGuessed(char letter) const
{
	size_t letter_pos = word.find_first_of(letter);
	if (letter_pos == std::string::npos)
		return (false);
	return (true);
}

bool Game::guessWord(void) const
{
	char letter;
	int	i = 0;
	while (true)
	{
		letter = guessLetter();
		if (letterGuessed(letter))
		{
			guessed_letters++;
			if (guessed_letters == word.length())
				return (true);
			drawing.insertLetter(letter, this->word);
			drawing.printCanvas();
			std::cout << "Letter Guessed!\n\n";
		}
		else
		{
			this->lives--;
			if (this->lives < 0)
				return (false);
			drawing.drawPart(i++);
			drawing.printCanvas();
			std::cout << "Letter not guessed!\n\n";
		}
	}
	//std::cout << "\n\n====GAME OVER====\n";
}

void Game::resetGame()
{
	this->lives = 7;
	this->player_count = 0;
	this->word.clear();
	this->drawing.clearCanvas();
	this->guessed_letters = 0;
}


// void Game::insertLetter(char letter)
// {
// 	for (int i = 0; i < word.length(); i++)
// 		if (this->word[i] == letter)
// 			this->drawing.
// }



// void Game::guessLetter()
// {
// 	char letter;
// 	std::cout << "Guess letter\n- ";
// 	std::cin >> letter;
// 	if (std::cin.fail() || std::cin.peek() != '\n' ||  )
// 	{
// 		std::cin.clear();
// 		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
// 		this->guessLetter();
// 	}
// }
