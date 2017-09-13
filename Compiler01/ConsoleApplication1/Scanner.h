#pragma once
#include <string>
#include <fstream>
#include <iostream>
#include "Token.h"

using namespace std;

//change functions into virtual for scanner

class scanner : public source
{
protected:
	token currentToken(void);
	token nextToken(void);
	token extractToken(void);
	char currentChar(void);
	char nextChar(void);
};