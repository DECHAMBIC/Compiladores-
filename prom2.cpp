#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
#define INICIO 0
#define S1 1
#define S2 2
#define S3 3
#define ERROR 4

struct nodo{
    char inf;
    nodo *_0;
    nodo *_1;
    nodo *_2;
    nodo *sig;
};

void crea_f(nodo *&p);

int main(){
    nodo *p;
    p=NULL;
    nodo *q;

    int estado = INICIO;
    string cadena;
    //Ingresando cadena
    cout<<"Ingrese la cadena"<<endl;
    cin>>cadena;
    char *cadenaconver = strdup(cadena.c_str());

    for(int i=0;i <cadena.length();i++){
        //----------------------------
        switch(estado){
            case INICIO:
                if(cadenaconver[i]== '0'){
                    estado = INICIO;
                    crea_f(p);
                }
                else if(cadenaconver[i]== '2'){
                    estado = S1;
                    crea_f(p);

                }else{
                    estado = ERROR;
                }
                break;
            case S1:
                if(cadenaconver[i]== '1'){
                    estado=S2;
                    crea_f(p);
                    
                }else if(cadenaconver[i]== '0'){
                    estado = S3;
                    crea_f(p);
                }else{
                    estado= ERROR;
                }
                break;
            case S2:
                if(cadenaconver[i]== '0'){
                    estado=S2;
                }else if(cadenaconver[i]== '2'){
                    estado = S3;
                }else{
                    estado= ERROR;
                }
                break;
            case S3:
                if(cadenaconver[i]== '0'){
                    estado = S3;
                    cout<<"Cadena permitida"<<endl;
                }else if(cadenaconver[i]== '1'){
                    estado = S2;
                }else{
                    estado= ERROR;
                }
                break;
            case ERROR:
                cout<<"Cadena no permitida"<<endl;
                i = cadena.length() + 100;
                break;
        }
    }
    getch();
    return 0;


    
}

void crea_f(nodo *&p){
        nodo *q;
        nodo *r;
        char op;
        do{
            q = new(nodo);
            cin>>q->inf;

            if(p==NULL)
            {
                p = q;
            } else {
                r->sig = q;
            }
            r = q;
            cout<<"Mas datos? (S/N) (s/n) : ";
            cin>>op;
        } while (op=='S' || op=='s');
    }