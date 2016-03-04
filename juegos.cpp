#include <iostream>
#include <string>
#include "juegos.h"

using std::cout; 
using std::endl; 
using std::cin; 

juegos::juegos(int id, string name,int year,string developers,string genre)
{
	this -> id = id; 
	this -> name = name; 
	this -> year = year; 
	this -> developers = developers;  
	this -> genre = genre; 

}
		
int juegos::getId()
{
	return id; 

}

string juegos::toString()const
{
	cout<<id<<"   "<<name<< "    "<<year<<"    "<<developers
		<<"   "<<genre<<endl; 

}

