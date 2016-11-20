/*
 * main.cpp
 *
 *  Created on: Nov 17, 2016
 *      Author: CPark
 */

#include<iostream>

using namespace std;

int main(){
	int square=1;
	int rice=0;
	while(rice<1000){
		rice=rice*2;
		rice++;
		if(rice<1000){
			square++;
		}
		else if(rice>=1000){
			cout<<"The first "<<square<<" squares have "<<rice<<" grains of rice.\n";
		}
	}
	int rice1=0;
	int square1=1;
	while(rice1<1000000){
		rice1=rice1*2;
		rice1++;
		if(rice1<1000000){
			square1++;
		}
		else if(rice1>=1000000){
			cout<<"The first "<<square1<<" squares have "<<rice1<<" grains of rice.\n";
		}
	}
	int rice2=0;
	int square2=1;
	while(rice2<1000000000){
		rice2=rice2*2;
		rice2++;
		if(rice2<1000000000){
			square2++;
		}
		else if(rice2>=1000000000){
			cout<<"The first "<<square2<<" squares have "<<rice2<<" grains of rice.\n";
		}
	}
}
