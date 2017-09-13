#pragma once
#include <string>
#include <fstream>
#include <iostream>
#include "Token.h"

using namespace std;

class scanner : public source
{
public:
	scanner();
	token currentToken(void);
	token nextToken(void);
	token extractToken(void);
	char currentChar(void);
	char nextChar(void);

protected:
	string line;

};