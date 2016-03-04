#pragma once 
#include <string>

using std::string; 

class juegos{

		int id; 
		string name; 
		int year; 
		string developers; 
		string genre;


public: 
		juegos(int id, string name,int year,string developers, 
			string genre);
		int getId();
		string toString()const;
};