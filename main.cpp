#include"Word.hpp"
#include"Drawing.hpp"
#include"Progress.hpp"

int main(void)
{
	//std::cout << "==============START==============\n\n";

	Drawing drawing;
	
	drawing.drawPole();
	drawing.drawHead();
	drawing.drawBody();
	drawing.drawLeftArm();
	drawing.drawRighArm();
	drawing.drawLeftLeg();
	drawing.drawRightLeg();
	drawing.printCanvas();

	
	
	//std::cout << "\n===============END===============\n";
	
	return (0);
}
