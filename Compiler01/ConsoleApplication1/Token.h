#pragma once
#include <string>
#include <any>
#include "Source.h"

using namespace std;

class token : public source
{
public:
	token();
	
protected:
	string text;
	any value;
	void extract(void);
	char currentChar(void);
	char nextChar(void);
	char peekChar(void) const;

private:
	int lineNum;
	int position;
};