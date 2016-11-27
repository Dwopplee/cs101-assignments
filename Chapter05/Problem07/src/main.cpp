/*
 * main.cpp
 *
 *  Created on: Nov 27, 2016
 *      Author: CPark
 */

#include<iostream>
#include<cmath>

using namespace std;

int main(){
	int a;
	int b;
	int c;
	cout<<"Input a, b, then c.\n";
	cin>>a>>b>>c;
	if((pow(b,2)-4*a*c)<0||a==0){
		cout<<"There are no answers.\n";
	}
	else{
		int x1=(-(-b+sqrt(pow(b,2)-4*a*c))/(2*a));
		int x2=(-(-b-sqrt(pow(b,2)-4*a*c))/(2*a));
		cout<<"x = "<<x1<<" and "<<x2<<'\n';
	}
}
