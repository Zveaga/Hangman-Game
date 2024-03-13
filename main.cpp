#include"Word.hpp"
#include"Drawing.hpp"
#include"Game.hpp"

int main(void)
{
	//std::cout << "==============START==============\n\n";

	Drawing drawing;

	Game game(drawing);

	game.startGame();

	
	//std::cout << "\n===============END===============\n";
	
	return (0);
}