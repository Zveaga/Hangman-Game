#include"Drawing.hpp"









void Drawing::drawCanvas()
{
	for (int i = 0; i < ROWS; i++)
		for (int j = 0; j < COLS; j++)
			canvas[i][j] = ' ';
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
	for (int j = 28; j < 36; j++)
		canvas[2][j] = '_';
	for (int i = 3; i < 8; i++)
		canvas[i][35] = '|';
}

void Drawing::drawHead()
{

}

void Drawing::drawBody()
{

}

void Drawing::drawLeftArm()
{

}

void Drawing::drawRighArm()
{

}

void Drawing::drawLeftLeg()
{

}

void Drawing::drawRightLeg()
{

}
