// H

#include <iostream>

using namespace std;

int main()
{
    int m, n;
    while (cin >> n >> m)
    {
        int p = 0;
        for (int i = 0; i < n; i++)
        {
            bool stus = true;
            for (int j = 0; j < m; j++)
            {
                int a;
                cin >> a;
                if (a == 0)
                    stus = false;
            }
            
            if (stus) p++;
        }
        
        cout << p << endl;
        // p = 0;
    }
}