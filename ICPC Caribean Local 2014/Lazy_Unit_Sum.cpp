#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

string ingresa (int n){
    string temp;
    while(n>0){
        temp.insert(temp.begin(), n%10+'0');
        n/=10;
    }
    return temp;
}

int main()
{
	// Lazy Unit Sum
    int t;
    cin >> t;
    string s;
    for(int i=0; i<t; i++){
        cin >> s;
        while(s.size()>1){
            int sum =0;
            for(int j=0; j<s.size(); j++){
                sum += s[j]-'0';
            }
            s = ingresa(sum);
        }
        cout << s << endl;
    }
    return 0;
}
