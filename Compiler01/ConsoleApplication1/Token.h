#pragma once
#include <string>
#include <any>
#include "Source.h"

using namespace std;

class token : public source
{
public:
	token();
	void extract(void);
	char currentChar(void);
	char nextChar(void);
	char peekChar(void) const;
protected:
	string text;
	any value;
};