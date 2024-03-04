#ifndef DRAWING_HPP
# define DRAWING_HPP

#include<iostream>

#define ROWS 15
#define COLS 50

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
		void drawPart(int i);
		void (Drawing::*drawing_functions[7])();
		
		void drawLetterSpots(int numLeters);
		void insertLetter(char letter, std::string word);
};

#endif
