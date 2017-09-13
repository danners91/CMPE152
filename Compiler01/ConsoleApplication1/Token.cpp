#include "Token.h"




token::token()
{
	text = "";
	value = NULL;
}


/*
	Calls the superclass 'source' for its currentChar function
*/

int token::get_position() const { return position; }

char token::currentChar()
{
	return source::currentChar();
}


/*
	Calls the superclass 'source' for its nextChar function
*/
char token::nextChar()
{
	return source::nextChar();
}

char token::peekChar()
{
	return source::peekChar();
}

	


