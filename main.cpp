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
				cout<<"\nNo se puede agregar el usuario porque ya existe"<<endl; 
			}
			else
			{
				users.push_back((usuarios(usuario,contrasena)));
			}

		}

		if(op == 3)
		{

			cout<<"Ingrese el Usuario a Eliminar"; 
			getline(cin,usuario);
			for (int i = 0; i < users.size(); i++)
			{
				if (usuario.compare(users[i].getUsername()) == 0)
				{
					users.erase(users.begin()+i);
					cont++; 
					break;
					
				}
				
			}

			if (cont == 0)
			{
				cout<<"\nNo se puede Eliminar porque el usuario no existe"<<endl;

			}

		}

		if(op == 4)
		{
			int id,year;
			string name,developers,genre; 
			cout<<"Ingrese el nombre del usuario que quiere agregar  un juego ";
			getline(cin,usuario);
			for (int i = 0; i < users.size(); i++)
			{
				if (usuario.compare(users[i].getUsername()) == 0)
				{
					cout<<"Ingrese el id del juego a ingresar";
					cin>>id;

					if(users[i].addgame(id) == true)
					{
						cin.ignore();
						cout<<"Ingrese el nombre del juego: ";
						getline(cin,name);
						cout<<"Ingrese los creadores: ";
						getline(cin,developers);

					}
					
				}
				
			}

			if (cont == 0)
			{
				cout<<"\nNo se puede Eliminar porque el usuario no existe"<<endl;

			}	
		}




		cout<<"-------------------------------BIENVENIDO-------------------------"<<endl;
		cout<<"1 - Agregar Usuario:\n2 - modificar usuario\n3 - Eliminar un usuario\n"
		<<"4 - Agregar un juego\n5 - Eliminar un juego\n6 - Listar usuarios\n"
		<<"7 - Listar usuarios \n8 - Listar Juegos\n9 - Salir\nIngrese una opcion  "<<endl;
		cin>>op; 

	}

}

