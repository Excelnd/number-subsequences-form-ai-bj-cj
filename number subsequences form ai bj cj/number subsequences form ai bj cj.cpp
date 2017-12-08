// number subsequences form ai bj cj.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>
using namespace std;

int countSubsequences(string s)
{
	int aCount = 0;
	int bCount = 0;
	int cCount = 0;

	for (unsigned int i = 0; i < s.size(); i++)
	{
		if (s[i] == 'a')
			aCount = (1 + 2 * aCount);

		else if (s[i] == 'b')
			bCount = (aCount + 2 * bCount);

		else if (s[i] == 'c')
			cCount = (bCount + 2 * cCount);
	}
	return cCount;
}


int main()
{
	string s = "abbc";
	cout << countSubsequences(s) << endl;
    return 0;
}

