#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

long reparte(long m);
long binarySearch(long C, long N);

vector <long> positions;

int main()
{
   // spoj - 297 Aggressive cows
    
    long T;
    cin >> T;
    
    for (long t = 0; t < T; t++)
    {
        vector <long> aux;
        positions = aux;
        long N, C;
        cin >> N >> C;
        
        for (long y = 0; y < N; y++)
        {
            long x;
            cin >> x;
            positions.push_back(x);
        }

        sort(positions.begin(), positions.end()); 
        cout << binarySearch(C,N) << endl;
    }
}

long reparte(long m)
{
    long c=1, i=0, d;

    while(i<positions.size())
    {
        d=positions[i]+m;
        while(positions[++i]<d && i<positions.size());
        if(i!=positions.size())
            c++;
    }
    return c;
}

long binarySearch(long C, long N)
{
    long left = 1, right = positions[N-1], mid, room;
    while (right - left > 1)
    {
        mid = ( left + right ) / 2;
        room = reparte(mid);
        if ( room >= C)
            left = mid; // = mid + 1
        else
            right = mid;
    }

    return left;
}