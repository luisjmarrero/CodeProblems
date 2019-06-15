#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
	// uva_483
	string line;
	while (getline (cin, line))
	{
		for (int i = 0; i < line.size(); ++i)
		{
			int p = 0;
			if(line[i] != ' ')
			{
				// count until first space
				while( line[i+p] != ' ' && i + p <line.size())
				{
					p++;
				}
				// print backwards
				for(int j=(i+p) - 1 ; i<=j && j<line.size();j--)
				{
					cout << line[j];
				}

				// latest position - 1 to keep cheking
				i += p - 1;
			}
			else
			{
				cout << line[i]; // single space
			}
		}

		cout << endl;
	}


}
