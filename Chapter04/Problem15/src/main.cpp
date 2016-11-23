/*
 * main.cpp
 *
 *  Created on: Nov 22, 2016
 *      Author: CPark
 */

#include<iostream>
#include<vector>

using namespace std;

int main(){
	cout<<"How many primes should I find?\n";
	int n;
	cin>>n;
	vector<int> primes;
	primes.push_back(2);
	if(n>0){
		cout<<2<<" ";
		int primeNum=1;
			for(int prime=3;primeNum<n;prime++){
				for(unsigned int vsize=0;vsize<primes.size();vsize++){
					if(prime%primes[vsize]==0){
						break;
					}
					else if((vsize+1)==primes.size()){
						primes.push_back(prime);
						cout<<prime<<" ";
						vsize++;
						primeNum++;
					}
				}
			}
	}
}
