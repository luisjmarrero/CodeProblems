#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <cmath>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>

using namespace std;

typedef long long LL;
typedef vector <int> VI;
typedef vector <long long> VLL;
typedef vector <VI> VVI;

const LL mod = 1000000007;

vector <string> first;
vector <string> last;
vector <string> handle;
vector <int> orden;

int main()
{
	// C - Design Tutorial: Make It Nondeterministic
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	// reading strings
	for (int i = 0; i < n; i++){
		string a, b;
		cin >> a >> b;
		first.push_back(a);
		last.push_back(b);
	}
	string temp = "";
	bool answer = true;
	for (int i = 0; i < n; i++){
		int t;
		cin >> t;
		t--;
		if (temp >= first[t] && temp >= last[t]) answer = false;

		(temp >= min(first[t], last[t]))? temp = max(first[t], last[t]) : temp = min(first[t], last[t]);

	}
	if (answer) cout << "YES\n";
	else cout << "NO\n";



	return 0;
}
