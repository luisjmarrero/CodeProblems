#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>

using namespace std;

struct info{
	char start;
	char end;
	int leng;
	info(char _start, char _end, int _leng){
		start = _start;
		end = _end;
		leng = _leng;
		
	}
};

bool comp(info a, info b)
{
	if (a.leng != b.leng)
		if(a.leng < b.leng) return true ;
	
	return false;
}

void uniones(){
}

int main()
{
	// 1167 - Words
	int T;
	cin >> T;
	vector <string> a;
	for (int t = 0; t < T; t++)
	{
		int m;
		vector <info> alf;
		cin >> m;
		for (int i = 0; i < m; i++)
		{
			string temp;
			cin >> temp;
			int n = temp.size();
			alf.push_back(info(temp[0], temp[n-1], n));
		}
		sort(alf.begin(), alf.end(), comp);
		int max = 0;
		vector<string> palabras;
		string x = alf[0];
		palabras.push_back(x);
		for (int k = 0; k < m; k++)
		{
			  
		}
		
	}
	return 0;
}


