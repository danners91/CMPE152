#include "Scanner.h"

scanner::scanner(void)
{
	line = "";
}

token scanner::currentToken(void)
{
	return ;
}

token scanner::nextToken(void)
{
	return ;
}

token scanner::extractToken(void)
{
	return ;
}

char scanner::currentChar(void)
{
	return source::currentChar();
}

char scanner::nextChar(void)
{
	return source::nextChar();
}

/*
	Reads the file and sends the string to the token class
*/
/*void scanner::scanFile(string fileName)
{
	token toke;
	ifstream file;

	try {
		file.open("javatest.in");
		while (getline(file, line))
		{
			
		}
	}
	catch (const ifstream::failure& e)
	{
		cout << "Cannot find file" << endl;
	}
}*/