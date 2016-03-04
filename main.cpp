#include<iostream>
#include "usuarios.h"
#include "juegos.h"
#include <string>
#include <vector>

using namespace std;

int main(int argc, char*argv[])
{
	string usuario; 
	string contrasena; 
	vector<usuarios> users; 
	int op; 
	int cont=0; 
	cout<<"\n-------------------------------BIENVENIDO-------------------------"<<endl;
	cout<<"1 - Agregar Usuario:\n2 - modificar usuario\n3 - Eliminar un usuario\n"
		<<"4 - Agregar un juego\n5 - Eliminar un juego\n6 - Listar usuarios\n"
		<<"7 - Listar usuarios \n8 - Listar Juegos\n9 - Salir\nIngrese una opcion "<<endl;
	cin>>op;
	 

	while(op !=9)
	{

		if(op == 1)
		{
			cin.ignore();
			cout<<"Ingrese el nombre del Usuario "; 
			getline(cin,usuario);
			cout<<"Ingrese la contraseña del Usuario "; 
			getline(cin,contrasena);
			
			for (int i = 0; i < users.size(); i++)
			{
				if(usuario.compare(users[i].getUsername()) == 0 )
				{
					cont++; 
				}				
			}

			if(cont != 0)
			{
				cout<<"No se puede agregar el usuario porque ya existe"<<endl; 
			}
			else
			{
				users.push_back((usuarios(usuario,contrasena)));
			}

		}



		cout<<"-------------------------------BIENVENIDO-------------------------"<<endl;
		cout<<"1 - Agregar Usuario:\n2 - modificar usuario\n3 - Eliminar un usuario\n"
		<<"4 - Agregar un juego\n5 - Eliminar un juego\n6 - Listar usuarios\n"
		<<"7 - Listar usuarios \n8 - Listar Juegos\n9 - Salir\nIngrese una opcion  "<<endl;
		cin>>op; 

	}

}

