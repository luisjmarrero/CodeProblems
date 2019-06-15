#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>
using namespace std;

string change(string a)
{
    for(int i = 0; i < a.size(); i++)
    {
        if(a[i] == 'L') a[i] = 'R';
        else a[i] = 'L';

    }
    return a;

}
int main()
{
	// The Dragon Curve
    int n;
    while(true)
    {

         cin >> n;
         if(n==-1)break;
            vector<string> VS =  vector<string>(16,"");
            VS[0] = "";
            VS[1] = "L";
            VS[2] = "LLR";

            for(int i = 3; i < VS.size(); i++)
            {
                string re = VS[i-1];
                reverse(re.begin(), re.end());
                VS[i]= VS[i-1] + 'L' + change(re);

            }

            cout << VS[n] <<endl;

            /*for(int i = 0; i <= 4; i++)
            {
                cout << VS[i] << endl;

            }*/
    }
    return 0;
}
