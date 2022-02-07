#include <iostream>

/*int main() {
  std::cout << "Hello World!\n";
}
*/
using namespace std;

int main(){
    int numero = 0, divisiones = 1, residuo = 0;

    cout<<"Calcular si un numero es primo relativo o no."<<endl<<endl;
    cout<<"Ingresar un numero: ";
    cin>>numero;

    do{
        if(numero % divisiones == 0){
           residuo++;
        }
        divisiones++;
    }while(divisiones <= numero);

    if(residuo == 2){ 
        cout<<"--> El numero"<<numero<<" es primo relativo.";
    } else{
        cout<<"--> El numero "<<numero<<" no es primo relaitivo.";
    }        
    
    return 0;
}
