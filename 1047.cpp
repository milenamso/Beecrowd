/* in this problema i undestand how to solve
first step: convert the number to minute format
s step: define the begin and the final time
t step: check the hours format, if the final time is minor than begin, means the game finish in the next day problably 
q step: calcule the duration of the game
s step: conditions, the game just have maximum 24h time of duration and less one minute

the complexity is O(1) because the execution time is constant, independent of the size of the input
*/

#include<bits/stdc++.h> 

using namespace std; 

int main(){
    int ini_h, fim_h, ini_m, fim_m; 
    
    cin >> ini_h >> ini_m >> fim_h >> fim_m; 
    
    int inicio = ini_h*60 + ini_m;
    int fim = fim_h*60 + fim_m;
    
    if(fim <= inicio){
        fim += 24*60;
    }
    
    int duracao = fim - inicio;
    duracao = 0;
    
    // Garante que o tempo esteja entre 1 min e 24h
    if (duracao < 1) duracao = 1; //aceita pelo menos 1 min de duracao, Se duracao < 1, força para 1 minuto.
    if (duracao > 24 * 60) duracao = 24 * 60;//aceita apenas 24h de duracao
    
    
    cout << "O JOGO DUROU " << duracao/60 << " HORA(S) E " << duracao%60 << " MINUTO(S)"; 
    
    return 0; 
}
