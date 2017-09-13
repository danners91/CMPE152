#include "Scanner.h"

scanner::scanner()
{
	line = "";
}

/*
	Reads the file and sends the string to the token class
*/
void scanner::scanFile(string fileName)
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
}