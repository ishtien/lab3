#ifndef FILECLASS_H
#include<iostream>
#include<fstream>
#include<cstdlib>
#include<vector>
#include<algorithm>
#define max_case 10000
//#include"fileclass.h"
using namespace std;
class fileclass{
public:
	void insertion_sort(vector<int> & v){
		sort(v.begin(),v.end());
	}
	void set(vector<int> &v){
		tmp=v;
	} 
	int get(int i){
		return tmp[i];
	}
private:
	vector <int> tmp;
};

#endif
int main(){
	ifstream infile("file.in",ios::in);
	int x;
	fileclass sorting;
	infile>>x;
	vector <int> tmp;
	if(!infile){
		cerr<<"failed opening!"<<endl;
		exit(1);
	}else{
		for(int i=0;i<x;i++){
			int t;
			infile>>t;
			tmp.push_back(t);
			sorting.insertion_sort(tmp);
			sorting.set(tmp);
//			for(int j=0;j<10;j++){
//				cout<<sorting.get(j)<<" ";
//			}
		}
	}
	int i;
	int k;
	int output=0;
	for(i=x-1,k=0;k<5;i--,k++){
		int ans;
		ans=sorting.get(i);
		output=output+ans;
//		cout<<tmp[i]<<" ";	
	}
	cout<<output<<"\n";

}
