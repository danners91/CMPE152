#pragma once
#include <string>
#include <fstream>
#include <iostream>

using namespace std;

class source
{
public:
	source(string fileName);
	char currentChar(void) const;
	char nextChar(void);
	int getLineNum(void);
	int getCurrentPos(void);

private:
	string line;
	ifstream file; //variable not used
	int lineNum;
	int currentPos;
};