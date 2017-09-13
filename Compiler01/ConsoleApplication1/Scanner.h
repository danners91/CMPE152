#pragma once
#include <string>
#include <fstream>
#include <iostream>
#include "Token.h"

using namespace std;

class scanner
{
public:
	scanner();
	void scanFile(string fileName);

private:
	string line;

};