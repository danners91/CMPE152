#include "Source.h"

source::source()
{
	line = "";
	lineNum = 0;
	currentPos = 0;
}

char source::currentChar() const
{
	return '0';
}

char source::nextChar()
{
	this->currentPos++;
	return '0';
}