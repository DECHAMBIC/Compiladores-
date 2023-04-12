
#include<iostream>

using namespace std;

class Persona{
    private:
        int edad;
        string nombre;
    public:
        Persona(int,string);
        void leer();
        void correr();
};

Persona::Persona(int _edad,string _nombre){
    edad = _edad;
    nombre = _nombre;
}

void Persona::leer(){
    cout<<"Soy "<<nombre<<" y estoy leyendo un libro"<<endl;
}

void Persona ::correr(){
    cout<<"Soy "<<nombre<<" y estoy corriendo una maraton y tengo "<<edad<<" anios"<<endl;
}



int main(){
    char op; 
    string nom;
    int ed;
    
    do{
        cout<<"Ingrese el nombre: ";cin>>nom;
        cout<<"Ingrese la edad: ";cin>>ed;
        cout<<endl;
        Persona p1(ed,nom);
        cout<<"Lectura:"<<endl;
        p1.leer();
        cout<<endl<<"Maraton: "<<endl;;
        p1.correr();
        cout<<endl<<"Otra persona? (S/N)";cin>>op;
        cout<<endl<<"------------------------------"<<endl;
    }while(op == 'S' || op == 's');

    return 0;
}