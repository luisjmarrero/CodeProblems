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
//const LL tenSix = 1000000;

VI people;

int abs(int x){
	return (x > 0)? x : -x;
}

int main()
{
	// B_Design_Tutorial_Learn_from__Life
	ios_base::sync_with_stdio(false);
	int n, k;
	cin >> n >> k;
	for (int i = 0; i < n; i++){
		int t;
		cin >> t;
		people.push_back(t);
	}
	sort(people.begin(), people.end());
	reverse(people.begin(), people.end());
	int answer = 0, a, b =1;
	for (int i = 0; i < people.size(); i+=k){
		a = people[i];
		answer += abs(a-b)*2;
	}
	cout << answer<< endl;

	return 0;
}
