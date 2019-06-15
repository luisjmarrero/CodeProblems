//  spoj - 4180. Pizza Location
// luisjmarrero

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// NOT FINISHED

struct Solitario {
	int x, y, s;
	
	Solitario(int _x, int _y, int _s) 
	{
		x = _x;
		y = _y;
		s = _s;
	}
};

struct Solar
{
	int xx, yy;
	Solar(int _xx, int _yy){
		xx = _xx;
		yy = _yy;
	}
};

int main()
{
	
	int k, r;
	cin >> k >> r;
	int M;
	cin >> M;
	vector <Solar> solares;
	for (int m = 0; m < M; m++)
	{
		int a, b;
		cin >> a >> b;
		solares.push_back(Solar(a,b));
	}
	int N;
	cin >> N;
	vector <Solitario> solitarios;
	for (int n = 0; n < N; n++)
	{
		int a, b, c;
		cin >> a >> b >> c;
		solitarios.push_back(Solitario(a,b,c));
	}
	
	
}

struct client
{
	int x, y, v;
	void client(int xx, int yy, int vv)
	{
		x=xx;
		y=yy;
		v=vv;
	}
};

struct loc
{
	int x, y;
	void client(int xx, int yy)
	{
		x=xx;
		y=yy;
	}
};

client clientes[100];
loc lugares[20]

int uniones(int n, int pos[], int m)
{
	for(int f=0; f<m; f++)
	{
		for(int i=0; i<n; i++)
		{
			if( distancia(clientes[i], lugares[pos[f]]) == true )
			{
				for(int g=0; g)
			}

		}		
	}

	
}

