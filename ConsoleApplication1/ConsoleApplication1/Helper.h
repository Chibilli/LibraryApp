#pragma once
#include <iostream>
#include <fstream>
using namespace std;

class Helper
{
public:

	static bool isEmpty(std::ifstream& pFile)
	{
		return pFile.peek() == std::ifstream::traits_type::eof();
	}

};

