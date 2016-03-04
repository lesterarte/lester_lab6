#include <iostream>
#include <string>
#include "usuarios.h"
#include "juegos.h"

using namespace std;

usuarios::usuarios(string usuario, string pass){
	this -> password = pass; 
	this -> username = usuario; 

}

string usuarios::getUsername()
{
	return username;
}

string usuarios::toString()const
{

		cout<<username<< "   "<<password<<endl; 

}

bool usuarios::addgame(int id)
{

	int cont = 0; 
	for(int i=0; i<juegos.size(); i++)
	{
		if(id == juegos[i])
		{
			cont++;
			break; 
		}
	}

	if(cont != 0){
		return true; 
	}
	else
	{
		return false; 
	}

}

bool usuarios::deletegame(int id)
{
	int cont = 0; 
	for(int i=0; i<juegos.size(); i++)
	{
		if(id == juegos[i])
		{
			cont++;
			break; 
		}
	}

	if(cont != 0){
		return true; 
	}
	else
	{
		return false; 
	}


}

void usuarios::chancepassword(string pass)
{
	this -> password = pass;  
	
}

bool usuarios::isvalidpassword(string username, string password)
{


}
		
