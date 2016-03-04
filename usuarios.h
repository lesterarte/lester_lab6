#pragma once 
#include <string>
#include <vector>

using std::string; 
using std::vector; 

class usuarios{

		string username; 
		string password; 
		vector<int> games; 
		
public:
		usuarios(string,string);
		bool addgame(int id);
		bool deletegame(int id);
		void chancepassword(string password);
		string getUsername();
		bool isvalidpassword(string username, string password);
		string toString()const;

};