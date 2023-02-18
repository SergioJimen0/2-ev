//Instrucciones básicas
//condicional múltiple

#include<iostream>//Librería de cabecera
using namespace std;

int main(){
    //definimos 3 variables
    int resp;
    cout<<"************************"<<endl;
    cout<<"*         MENU         *"<<endl;
    cout<<"************************"<<endl;
    cout<<"1. Volver a mostrar el menu."<<endl;
    cout<<"2. Despedirme."<<endl;
    cout<<"3. Salir."<<endl;
    cout<<"ELIGE UNA OPCION (1,2 o 3): ";
    cin>> resp;
   
    switch(resp){
        case 1:
            cout<<"************************"<<endl;
            cout<<"*         MENU         *"<<endl;
            cout<<"************************"<<endl;
            cout<<"1. Volver a mostrar el menu."<<endl;
            cout<<"2. Despedirme."<<endl;
            cout<<"3. Salir."<<endl;
            cout<<"ELIGE UNA OPCION (1,2 o 3): ";
            break;
        case 2:
            cout<<"Estas despedido";
            break;
        case 3:
            break;
        default:
            cout<<"No has elegido ninguna opcion";    
       
    }
   
    return 0;
}


Anuncio: "//Instrucciones básicas…"
Antonio López
Fecha de creación: 13 dic 202213 dic 2022
//Instrucciones básicas
#include<iostream>//Librería de cabecera
using namespace std;

int main(){
    //definimos 3 variables
    int x,y,z;
    cout<<"introduce tres variables: ";
    cin>> x >> y >> z;
    cout<<"Has introducido las variables: ";
    cout<< x <<"," <<y <<"," << z << endl;
    return 0;
}