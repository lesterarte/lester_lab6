#include <iostream>
#include <string>
#include "usuarios.h"

using std::cout; 
using std::endl; 
using std::cin; 

usuarios::usuarios(string usuario, string pass){
	this -> password = pass; 
	this -> username = usuario; 

}
string usuarios::getUsername()
{
	return username;
}
