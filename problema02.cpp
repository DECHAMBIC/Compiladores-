#include<iostream>
using namespace std;

class rectangulo{
    private:
        float base;
        float altura;
    public:
        rectangulo(float, float);
        void perimetro();
        void area();
};

rectangulo::rectangulo(float _base,float _altura){
    base= _base;
    altura= _altura;
}

void rectangulo::perimetro(){
    float perimetro;
    perimetro = base*2 + altura*2;

    cout<<"El perimetro del rectangulo es: "<<perimetro<<endl;
}

void rectangulo::area(){
    float area;
    area = base * altura;
    cout<<"El area del rectangulo es: "<<area<<endl;
}

int main(){
    char op;
    float al,bas;
    do{
        cout<<endl<<"Ingrese la altura del rectangulo: ";cin>>al;
        cout<<"Ingrese el area del rectangulo: ";cin>>bas;
        rectangulo r1(bas,al);
        cout<<endl;
        r1.perimetro();
        cout<<endl;
        r1.area();
        cout<<endl<<"Otro rectangulo(S/N): ";cin>>op;
        cout<<endl<<"-----------------------------------";
    }while(op == 'S' || op == 's');


    return 0;
}