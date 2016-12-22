/*
 * main.cpp
 *
 *  Created on: Dec 22, 2016
 *      Author: CPark
 */

#include<iostream>
#include<vector>

using namespace std;

int main(){
	cout<<"Please enter the number of values you want to sum.\n";
	unsigned int N;
	cin>>N;
	cout<<"Please an integer (press '|' to stop).\n";
	string test;
	int yah;
	cin>>yah;
	vector<int> yahs;
	while(cin){
		yahs.push_back(yah);
		cin>>yah;
	}
	if(N>yahs.size()){
		cerr<<"You are trying to sum too many values!";
	}
	else{
		int sum=0;
		for(unsigned int size=0;size<N;size++){
			sum=sum+yahs[size];
		}
		cout<<sum<<'\n';
	}
}


