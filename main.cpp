#include"Word.hpp"
#include"Drawing.hpp"
#include"Game.hpp"

int main(void)
{
	//std::cout << "==============START==============\n\n";

	Drawing drawing;

	Game game(drawing);

	//game.setupGame();
	game.startGame();
	//game.guessWord();

	//std::cout << letter << std::endl;
	
	//std::cout << "\n===============END===============\n";
	
	return (0);
}