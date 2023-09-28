#include <iostream>

using namespace std;

int calculaFatorial(int i){
    int fatorial = 1;
    for(int j = 1;j<=i;j++)
        fatorial*=j;
    return fatorial;
}

int main(void){
    int num1,num2,num3;
    int f1,f2,f3;
    cout << "Digite 3 numeros inteiros" << endl;
    cin >> num1 >> num2 >> num3;
    f1 = calculaFatorial(num1);
    f2 = calculaFatorial(num2);
    f3 = calculaFatorial(num3);
    cout << num1 <<"! = " << f1 << endl;
    cout << num2 <<"! = " << f2 << endl;
    cout << num3 <<"! = " << f3 << endl;
    return 0;
}