#pragma once
#include <string>

using namespace std;

class source
{
public:
	source();
	char currentChar() const;
	char nextChar();

protected:
	string line;
	int lineNum;
	int currentPos;
};