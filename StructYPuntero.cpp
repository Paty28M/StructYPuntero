#include<iostream>
#include<conio.h>
#include <string.h>
#include <stdlib.h>
using namespace std;

struct Animal{
	char nombre[20];
	int edad;
	struct Animal *ptr;
}animal1,animal2, *inicio;

int main(int argc, char** argv){
	inicio=&animal1;
	inicio->ptr=&animal2;
	cout<<"Edad del animal 1: ";
	cin>>inicio->edad;
	cout<<"Nombre del animal 1: ";
	fflush(stdin);
	cin.getline(inicio->nombre,20,'\n');
	cout<<endl;
	
	cout<<"Edad del animal 2: ";
	cin>>inicio->edad;
	cout<<"Nombre del animal 2: ";
	fflush(stdin);
	cin.getline(inicio->ptr->nombre,20,'\n');
	cout<<endl;
	
	int totaldeanimales=10;
	
	struct Animal animal3;
	inicio->ptr->ptr=&animal3;
	cout<<"Edad del animal 3: ";
	cin>>(inicio+2)->edad;
	cout<<"Nombre del animal 3: ";
	fflush(stdin);
	cin.getline((inicio+2)->ptr->nombre,20,'\n');
	cout<<endl;
	
	
	cout<<"Direccion inicio: "<<&inicio<<endl;
	cout<<"Direccion animal 1: "<<&animal1<<endl;
	cout<<"Direccion animal 2: "<<&animal2<<endl;
	cout<<"Direccion animal 3: "<<&animal3<<endl<<endl;
	cout<<"Edad que se guardo 1: "<<inicio->edad<<endl;
	cout<<"Nombre que se guardo 1: "<<inicio->nombre<<endl<<endl;
	cout<<"Edad que se guardo 2: "<<(inicio+1)->edad<<endl;
	cout<<"Nombre que se guardo 2: 
"<<(inicio+1)->nombre<<endl<<endl;
	cout<<"Edad que se guardo 3: "<<(inicio+2)->edad<<endl;
	cout<<"Nombre que se guardo 3: "<<(inicio+2)->nombre<<endl;
	
	cin.get();
	return 0;
	
}
