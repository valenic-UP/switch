#include <iostream>
using namespace std;

int main(){

    int opcion,n;
    cout<<"escribe un número (n): ";
    cin>>n;
    

    do{
        cout<<"Elige una opción: (1-5)"<<endl;
        cout<<"1. Pintar los pares hasta n"<<endl;
        cout<<"2. Pintar los impares hasta n"<<endl;
        cout<<"3. pinta los primeros n numeros diciendo cuales son pares y cuales impares"<<endl;
        cout<<"4. La suma de "<<n<<" numeros"<<endl;
        cout<<"5. Salir"<<endl;
        cin>>opcion;

        switch(opcion){
            case 1:{
                cout<<"los numeros pares son: ";
                for(int i=0; i<=n; i+=2){
                    cout<<i<<", ";
                }
                break;
            }
            case 2:{
                cout<<"los numeros impares son: ";
                for (int i=1; i<=n; i+=2)
                cout<<i<<", ";
                break;
            }
            case 3:{
                for(int i=1; i<=n; i++){
                    if (i%2==0){
                        cout<<i<<": par"<<endl;
                    }
                    else{
                        cout<<i<<": impar"<<endl;
                    }
                }
                break;
            }
            case 4:{
                int suma=0;
                int num;
                for (int i=0; i<n; i++){
                    cout<<"escribe un número: ";
                    cin>>num;
                    suma=suma+num;
                }
                cout<<"la suma es de: "<<suma<<endl;
                break;
            }
            case 5:{
                break;
            }
            default:{
                cout<<"ingresa una opcion del 1-5";
            }
        }
    }while(opcion!=5);

    return 0;
}