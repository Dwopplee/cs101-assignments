/*
 * main.cpp
 *
 *  Created on: Dec 22, 2016
 *      Author: CPark
 */

#include<iostream>

using namespace std;

double ctok(double c){
	double k = c + 273.15; //changed "int" to "double"
	return k; //changed "int" to "k"
}

int main() {
	double c = 0;
	cin >> c; //changed "d" to "c"
	double k = ctok(c); //removed the "" around c
	cout << k << '\n' ; //changed "Cout" to "cout";changed "'/n'" to "'\n'"
}
