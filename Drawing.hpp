#ifndef DRAWING_HPP
# define DRAWING_HPP

#include<iostream>

#define ROWS 10
#define COLS 40

class Drawing
{
	private:
		char canvas[ROWS][COLS];
	public:
		// --Constructors-- //
		Drawing();
		// --Destructor-- //
		~Drawing();
		
		// --Overloads-- //
		
		// --Member Functions-- //
		void initCanvas();
		void printCanvas();
		void drawPole(); 
		void drawHead(); 
		void drawBody();
		void drawLeftArm(); 
		void drawRighArm(); 
		void drawLeftLeg();
		void drawRightLeg();
};

#endif
