#pragma once
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

class Helper
{
public:

	static bool isEmpty(std::ifstream& pFile)
	{
		return pFile.peek() == std::ifstream::traits_type::eof();
	}


   static int getIndex(vector<Book> v, Book book)
    {
        auto it = find(v.begin(), v.end(), book);

        if (it != v.end())
        {
            int index = it - v.begin();
            return index;
        }
        else {
            return -1;
        }

    }

};

