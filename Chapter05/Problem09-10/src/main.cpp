/*
 * main.cpp
 *
 *  Created on: Nov 27, 2016
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
/*int main(){
	cout<<"Please enter the number of values you want to sum.";
	int N;
	cin>>N;
	int integer;
	string test;
	while(test!="|"){
		cout<<"Please enter some integers (press '|' to stop).\n";
		cin>>test||integer;
		vector<int> integers;
		if(cin>>test&&test=="|"){
			if(N>integers.size()){
				cerr<<"There are not enough values to sum.";
			}
			else{
				cout<<"The sum of the first "<<N<<" numbers (";
				for(int checkN=0;checkN<N;checkN++){
					cout<<integers[checkN]<<" ";
				}
				cout<<") is"<<" ";
			}
		}
		else if(cin>>integer){
			cout<<"Yah";
			integers.push_back(integer);
		}
	}
}*/
