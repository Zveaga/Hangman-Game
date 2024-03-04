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

void Drawing::drawLetterSpots(int numLeters)
{
	if (numLeters == 1)
		canvas[11][4] = '_';
	else
		for (int j = 4; j < (numLeters * 2) + 4; j++)
			canvas[11][++j] = '_';
}

void Drawing::insertLetter(char letter, std::string word)
{
	for (int i = 0; i < word.length(); i++)
		if (word[i] == letter && word.length() == 1)
			this->canvas[11][4] = letter;
		else if (word[i] == letter && i == 0)
			this->canvas[11][5] = letter;
		else if (word[i] == letter)
			this->canvas[11][5 + (i * 2)] = letter;
}


void (Drawing::*drawing_functions[])(void) = 
{
	&Drawing::drawPole,
	&Drawing::drawHead,
	&Drawing::drawBody,
	&Drawing::drawLeftArm,
	&Drawing::drawRighArm,
	&Drawing::drawLeftLeg,
	&Drawing::drawRightLeg,
};

void Drawing::drawPart(int i)
{
	(this->*drawing_functions[i])();
}
