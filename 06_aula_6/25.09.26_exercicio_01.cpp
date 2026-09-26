// Exercicio 1
# include <iostream>
using namespace std;

int fat = 1;

void cal_fatorial (int x){
    for (int i = 1 ; i <= x; i++){
        // cout<<fat<<" = "<<x<<" * "<<i<<endl;
        fat = fat * i;
        }
        cout<<fat;
}
int main (){
    cal_fatorial(11);
    return 0;
}
