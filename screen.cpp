#include "screen.h"

struct {
	// Foreground colours
	const char* BLACK = "\033[30m";
	const char* RED = "\033[31m";
	const char* GREEN = "\033[32m";
	const char* YELLOW = "\033[33m";
	const char* BLUE = "\033[34m";
	const char* MAGENTA = "\033[35m";
	const char* CYAN = "\033[36m";
	const char* WHITE = "\033[97m";

	// Background colours
	const char* bBLACK = "\033[40m";
	const char* bRED = "\033[41m";
	const char* bGREEN = "\033[42m";
	const char* bYELLOW = "\033[43m";
	const char* bBLUE = "\033[44m";
	const char* bMAGENTA = "\033[45m";
	const char* bCYAN = "\033[46m";
	const char* bWHITE = "\033[107m";

} Colors;

void Screen::placeElement(int x, int y, std::string &c){
	for (int i = 0; i <= c.length(); i++){
		screenBuffer[x+i][y] = c[i];
	}
}

/*
void Screen::updateDisplay(){
	std::system("clear");
	for (int i = 0; i <= screenBuffer.size(); i++){
		for (int j = 0; j <= screenBuffer[i].size(); j++){
			printf("%c", screenBuffer[j][i]);
		}
	}
}*/