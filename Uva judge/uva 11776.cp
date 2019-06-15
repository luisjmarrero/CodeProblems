#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Horario{
    int inicio;
    int final;
    
    Horario(int _inicio, int _final){
		inicio =  _inicio;
		final = _final;
	}
    
};

bool menor_que(Horario a, Horario b){
    
	if ((a.inicio != b.inicio)){
		if (a.inicio < b.inicio) return true;
		else return false;
	}
	else if ((a.final != b.final)){
		if (a.final < b.final) return true;
		else return false;
	}
    
    return false;
}

int main(){

    // uva 11776
    
    int cant, m , a, b, i, j, n, cas = 0;
    
    cin >> n;
    
    while (n != -1){
        vector<Horario> horario;
        cas++;
        cant = 0;
        m = 0;
        for (int k = 0; k < n; k++){
        cin >> i;
        a=i;
        b=0;
        horario.push_back(Horario(a,b));
        cin >> j;
        a=j;
        b=1;
        horario.push_back(Horario(a,b));
        }
    
    sort(horario.begin(), horario.end(), menor_que);
    
    for (int i  = 0; i < horario.size(); i++) {
        
        if (horario[i].final == 0) {
            cant++;
        }
        else
            cant--;
        
        if (cant > m ) m = cant;
        
    }
    
    cout << "Case " << cas << ": " << m << endl ;
    cin >> n;
    }
}