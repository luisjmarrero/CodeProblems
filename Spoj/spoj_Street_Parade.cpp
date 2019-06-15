#include <iostream>
#include <stack>

using namespace std;

int main()
{
	// spoj - 95. Street Parade	
	long n;
	cin >> n;
	while (n != 0)
	{
		stack <long> carrito;
		long c = 1;
		for (long i = 0; i < n; i++)
		{
			long x;
			cin >> x;
			while (carrito.empty()== false && carrito.top() == c)	
				{
					c++;
					carrito.pop();
				}
			if (x != c)
				carrito.push(x);
			if (x == c)
				c++;
				
		}
		for (long i = c; i <= n; i++)
		{
			if(carrito.top() == c)
			{
				c++;
				carrito.pop();
			}
			else
				break;
		}

		if (carrito.empty())
			cout << "yes" << endl;
		else
			cout << "no" << endl;
			
			cin >> n;

	}
}