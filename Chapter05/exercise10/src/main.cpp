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
	double yah;
	cin>>yah;
	vector<double> yahs;
	vector<double> yahDiffs;
	double yahDiff;
	while(cin){
		yahs.push_back(yah);
		cin>>yah;
		if(yahs.size()>1 && yahs.size()<=N){
			yahDiff = yahs[yahs.size()-1] - yahs[yahs.size()-2];
			yahDiffs.push_back(yahDiff);
		}
	}
	if(N>yahs.size()){
		cerr<<"You are trying to sum too many values!";
	}
	else{
		double sum=0;
		for(unsigned int size=0;size<N;size++){
			sum=sum+yahs[size];
		}
		cout<<sum<<'\n';
		for(unsigned int size2=0;size2<=yahDiffs.size() && size2<(N-1);size2++){
			cout<<yahDiffs[size2]<<" ";
		}
	}
}
