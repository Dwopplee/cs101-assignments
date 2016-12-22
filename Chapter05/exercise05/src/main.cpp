/*
 * main.cpp
 *
 *  Created on: Nov 26, 2016
 *      Author: CPark
 */

#include<iostream>

using namespace std;

double ctok(double c){
		double k = c + 273.15; //changed int to double
		return k; //added semicolon; changed int to k
		if(c<-273.15){
			cerr<<"The temperature cannot go that low.";
		}
}

double ktoc(double k){
	double c=k-273.15;
	return c;
}

int main(){
	double c=0;
	double k=0;
	string type;
	cout<<"Celsius to Kelvin or Kelvin to Celsius.\n Type ctok or ktoc.\n";
	cin>>type;
	if(type=="ctok"){
		cin>>c; //changed d to c
		if(c>=-273.15){
			double k=ctok(c); //removed "" around c
			cout<<k<<'\n'; //Cout to cout
		}
		else if(c<-273.15){
			cerr<<"The temperature cannot go that low.";
		}
	}
	else if(type=="ktoc"){
		cin>>k;
		if(k<0){
			cerr<<"The temperature cannot go that low.";
		}
		else{
			double c=ktoc(k);
			cout<<c<<'\n';
		}
	}
}
