#include <iostream>
using namespace std;

int suma(int a, int b){
    return a+b;
}
int resta (int a, int b){
    return a-b;
}

int multiplicacion (int a, int b){
    return a*b;
}
main(){
    int a,b,resultado;
    char op;
    cout<<"Calculadora"<<endl;
    cout<<"Modo de uso de la calculadora, ingrese dos enteros y el simbolo que contiene la operacion"<<endl;
    cout<<"Operaciones: "<<endl;
    cout<<endl<<endl<<"+ - Suma"<<endl;
    cout<<"- - Resta"<<endl;
    cout<<"* - Producto"<<endl;
    cout<<"/ - Diferencia"<<endl;
    cout<<"Ejemplo de Uso de la Herramienta:"<<endl;
    cout<<"2 3 +  Ejecuta la Suma 2+3"<<endl;
    cout<<"2 3 -  Ejecuta la Operacion 2-3"<<endl;
    cout<<endl<<"Ingrese la Operacion: ";
    cin>>a>>b>>op;    
    switch(op){
        case '+':
        resultado = suma(a,b);
        cout<<"Resultado:  "<<resultado<<endl;
        getchar();
		break;
        case '-':
        resultado = resta(a,b);
        cout<<"Resultado:  "<<resultado<<endl;
        getchar();
		break;
        case '*':
        resultado = multiplicacion(a,b);
        cout<<"Resultado: "<< resultado <<endl;
        getchar();
        
        break;
        case '/':
        cout<<"No Implementado aun"<<endl;
        getchar();
        //resultado = suma(a,b);
        break;
        default:
        	cout<<"Error de Operacion"<<endl;
        	getchar();
			break;
    }
    

}


