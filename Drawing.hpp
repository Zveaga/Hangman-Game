#ifndef DRAWING_HPP
# define DRAWING_HPP

#include<iostream>

class Drawing
{
	private:
		std::string pole;
		std::string head;
		std::string body;
		std::string left_arm;
		std::string right_arm;
		std::string pole;
		std::string pole;
		std::string pole;
	public:
		void drawPole(); 
		void drawHead(); 
		void drawBody();
		void drawLeftArm(); 
		void drawRighArm(); 
		void drawLeftLeg();
		void drawRightLeg();
};

#endif
