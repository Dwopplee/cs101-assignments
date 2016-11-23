/*
 * main.cpp
 *
 *  Created on: Nov 21, 2016
 *      Author: CPark
 */
#include<iostream>
#include<vector>

using namespace std;

int main(){
	vector<int>primes;
	primes.push_back(2);
	cout<<"2 "; //print 2, as the first prime
	for(int num=3;num<100;num++){ //check each number from 3-100
		for(unsigned int vsize=0;vsize<primes.size();vsize++){
			if(num%primes[vsize]==0){ //compares previous primes to current number
				break; //moves on if divisible
			}
			else if((vsize+1)==primes.size()){ //checks if all previous primes were checked
				primes.push_back(num); //adds the prime to the vector
				cout<<num<<" "; //prints the prime number
				vsize++;
			}
		}
	}
}
