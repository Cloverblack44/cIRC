#pragma once
#include <sys/ioctl.h>
#include <stdio.h>
#include <unistd.h>
#include <iostream>
#include <string>
#include <vector>

class Screen{
public:
	Screen(int x, int y) {
		width = x;
		height = y;
	}
	
	void placeElement(int x, int y, std::string &c);
	void updateDisplay();
private:
	int width;
	int height;
	std::vector<std::vector<char>> screenBuffer(height, std::vector<char>(width, 0));
	struct {
		int xPos;
		int yPos;
		std::string content;
		const char* style;
	} Element;
};