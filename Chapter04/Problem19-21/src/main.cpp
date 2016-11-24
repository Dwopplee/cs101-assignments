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
	vector<int> scores;
	vector<string> names;
	int score;
	string name;
	cout<<"Please input a name and a score.\n";
	cin>>name>>score;
	for(unsigned int num=0;num<=names.size()||num==0;num++){
		if(num!=0&&name==names[num-1]){
			cout<<"You have already used this name. Please input another.\n";
			num=0;
		}
		else if(num==names.size()){
			if(name=="noName"&&score==0){
				for(num=0;num<names.size();num++){
					if(num<=names.size()){
						cout<<names[num]<<" "<<scores[num]<<"\n";
					}
					else{
						break;
					}
				}
				break;
			}
			else{
				names.push_back(name);
				scores.push_back(score);
				cout<<"Would you like to input a new name or view previous ones?\n";
				while(10>1){
					cout<<"Type 'previous' or 'new'.\n";
					string check;
					cin>>check;
					if(check=="previous"){
						cout<<"Would you like to input a name or a score?\n";
						string check2;
						cin>>check2;
						while(2>1){
							if(check2=="name"){
								cout<<"Please input the name.\n";
								cin>>name;
								for(num=1;num<=names.size();num++){
									if(name==names[num-1]){
										cout<<scores[num-1]<<"\n";
										break;
									}
									else if(num==names.size()){
										cout<<"Name not found.\n";
									}
								}
								break;
							}
							else if(check2=="score"){
								cout<<"Please input the score.\n";
								cin>>score;
								for(num=1;num<=scores.size();num++){
									vector<string> scoreCheck;
									if(score==scores[num-1]){
										cout<<names[num-1]<<"\n";
										scoreCheck.push_back(names[num-1]);
									}
									else if(num==scores.size()&&scoreCheck.size()==0){
										cout<<"Score not found.\n";
										break;
									}
									else if(num==scores.size()){
										break;
									}
								}
								break;
							}
							else{
								cout<<"Please type 'name' or 'score'.\n";
								cin>>check2;
							}
						}
					}
					else if(check=="new"){
						break;
					}
				}
			}
		}
		cin>>name>>score;
	}
}
