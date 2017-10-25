#include <stdio.h>
#include <iostream>
using std::cout;
using std::cin;



int main(int argc, char **argv)
{
	int count;
    int vari;
    int valor;
    int peso;
    
    
    
    
    count = 0;
    
    //pós-incremento
    vari = count++;
    
    cout<< "O valor de vari eh: " <<vari << '\n';
    cout<< "O valor de count eh: " << count << '\n';
    
    cout << "\n\n";
    
    //pré-incremento
    vari = ++count;
    
     cout<< "O valor de vari eh: " <<vari << '\n';
     cout<< "O valor de count eh: " << count << '\n';
     
    //y = ( x >= 0 )? -1 : 1;
    //se, por exemplo x = 10, y = -1;
    //Z = (x >= 0 && y <= 0 )? 10: 100
    //cout<< "O valor de y eh: " <<y << '\n';
    //cout<< "O valor de z eh: " << z << '\n';
    
    cout << "Entre com o valor do peso: \n ";
    cin >> peso;
    
    //operador ?:
    valor = (peso >= 100? -1 : 10);
    cout << "Foi atribuído" <<valor<< " a valor.\n";
    
    int peso_2, valor_2;
    cout << "\n\nentre com o segundo peso: ";
    cin >> peso_2;
    
    //operador:?
    valor_2 = (peso>= 100 && peso_2<= 10 ? -10 : 1000);
    cout << "\nFoi atribuido " << valor_2 << " a valor_2.\n";
    
    
    return 0;
    }
