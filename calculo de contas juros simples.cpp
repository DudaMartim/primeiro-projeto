#include <iostream>

    using namespace std;

         int main()
        {
            int  valor, juros, parcelas, resultado;
            cout << "digite o valor da conta: ";
            cin >> valor;
            cout << "digite o valor do juros: ";
            cin >> juros;
            cout << "digite a quantidade de parcelas; ";
            cin >> parcelas;
            resultado = valor+((valor*juros*parcelas)/100);
            cout << "o valor da conta com juros e: " << resultado << endl;
            return (0);
        }