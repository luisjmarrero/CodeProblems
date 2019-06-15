// B

#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

int pos[200100];
int check[200100];

int test(int val)
{
    int i = val;
    int answer = 0;
    do {
        i = pos[i];
        answer++;
    } while (i != val);
    return answer;
}

int main()
{
    int p;
    while(cin >> p)
    {
        int n = p/2;
        
        
        int i = 1, j = 1;
        while (j < p)
        {
            pos[j] = n+i;
            j++;
            pos[j] = i;
            j++, i++;
        }
        
    //    for (int i = 1; i <= p; i++) {
    //        cout << pos[i] << ", " ;
    //    }
        
        cout << test(1) << endl;
    }

}