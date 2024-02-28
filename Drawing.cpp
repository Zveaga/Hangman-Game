#include"Drawing.hpp"


// --Constructors-- //
Drawing::Drawing()
{
	initCanvas();
}

// --Destructor-- //
Drawing::~Drawing()
{
	
}

// --Overloads-- //


// --Member Functions-- //
void Drawing::initCanvas()
{
	for (int i = 0; i < ROWS; i++)
		for (int j = 0; j < COLS; j++)
			canvas[i][j] = ' ';
	for (int j = 0; j < COLS; j++)
		canvas[0][j] = '*';
	for (int j = 0; j < COLS; j++)
		canvas[ROWS - 1][j] = '*';
	for (int i = 1; i < ROWS - 1; i++)
		canvas[i][0] = '*';
	for (int i = 1 ; i < ROWS - 1; i++)
		canvas[i][COLS - 1] = '*';
	
}

void Drawing::printCanvas()
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
			std::cout << canvas[i][j];
		std::cout << std::endl;
	}
}

void Drawing::drawPole()
{
	for (int j = 34; j < 42; j++)
		canvas[2][j] = '_';
	for (int i = 3; i < 13; i++)
		canvas[i][41] = '|';

	canvas[3][34]= '|';
}

void Drawing::drawHead()
{

	canvas[4][34] = '_';
	canvas[4][33] = '_';
	canvas[4][35] = '_';

	canvas[5][32] = '/';
	canvas[5][36] = '\\';

	canvas[6][32] = '\\';
	canvas[6][36] = '/';

	canvas[6][34] = '_';
	canvas[6][33] = '_';
	canvas[6][35] = '_';

	canvas[5][33] = '.';
	canvas[5][35] = '.';

	// std::cout << " ___\n";
	// std::cout << "/. .\\\n";
	// std::cout << "\\___/\n";
	// // std::cout << " -\n";

}

// void Drawing::drawHead()
// {

// 	canvas[4][34] = '-';
// 	canvas[4][33] = '-';
// 	canvas[4][35] = '-';

// 	canvas[5][32] = '(';
// 	canvas[5][36] = ')';

// 	canvas[6][34] = '-';
// 	canvas[6][33] = '-';
// 	canvas[6][35] = '-';

// 	canvas[5][33] = '.';
// 	canvas[5][35] = '.';

// 	std::cout << " __\n";
// 	std::cout << "/..\\\n";
// 	std::cout << "\\__/\n";
// 	// std::cout << " -\n";

// }

void Drawing::drawBody()
{
	for (int i = 7; i < 10; i++)
		canvas[i][34] = '|';
}

void Drawing::drawLeftArm()
{
	canvas[8][33] = '/';
	// canvas[9][32] = '/';
}

void Drawing::drawRighArm()
{
	canvas[8][35] = '\\';
}

void Drawing::drawLeftLeg()
{
	canvas[10][33] = '/';
}

void Drawing::drawRightLeg()
{
	canvas[10][35] = '\\';
}
