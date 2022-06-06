#include "screen.h"


void updateDisplay(int width, int height);

int main (int argc, char **argv)
{
    struct winsize w;
    ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);
	
	Screen myScreen(w.ws_row, w.ws_col);
	std::system("clear");
	std::string message;
	message = "test";
	myScreen.placeElement(20, 20, message);
	//myScreen.updateDisplay();
    return 0;  // make sure your main returns int

}
