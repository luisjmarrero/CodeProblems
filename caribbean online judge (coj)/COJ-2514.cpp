#include <iostream>
#include <cstdio>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <utility>
#define INF 2000000000
using namespace std;
typedef long long ll;
typedef vector <int> vi;
typedef vector <long long> vll;
typedef pair<int, int> ii;

vi ratings;
vector <string> names;

int main()
{
	// 2514 - Elo Calculator
	// Not submitted
	string l;
	int n;
	cin >> l >> n;

	double prom = 0;
	for (int i = 0; i < n; i++)
	{
		string nombre;
		int ra, k;
		double w, we;
		cin >> nombre >> ra >> w >> we >> k;
		//scanf("%s %d %d %d %d", &nombre, &ra, &w, &we, &k);
		names.push_back(nombre);
		int r = ra + k * (w - we);
		//cout << r << " " << " " <<  ra << " " << k << " " << w << " " << we;
		ratings.push_back(r);
		prom += ra;
	}

	cout << "Tournament: " << l << "\n";
	cout << "Number of players: " << n << "\n";
	cout << "New ratings: \n";
	for (int j = 0; j < n; j++)
	{
		cout << names[j] << " " << ratings[j] << "\n";
	}
	double media = prom/n;
	cout << "Media Elo: " << rint(media) ;
	return 0;
}

/*
R = Ra + K (W - We)

OUTPUT EXAMPLE
Tournament: Capablanca
Number of players: 5
New ratings:
Delgado 2766
Quesada 2637
Gonzalez 2460
Bruzon 2664
Arencibia 2536
Media Elo: 2617
*/
