#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>
using namespace std;
vector <int> vi;
int arr[30];

int main()
{
	//	Boy or Girl
	string user;
	cin >> user;
	// string alphabet = 'abcdefghijklmnopqrstuvwxyz';
	int answer = 0;
	for (int i = 0; i < user.size(); i++)
	{
		arr[user[i]-97] = 1;
	}
	for (int j = 0; j < 28; j++)
		answer += arr[j];

	if (answer % 2 == 0) cout <<"CHAT WITH HER!";
	else cout << "IGNORE HIM!";

	return 0;
}

