#include <iostream>
#include <cstdlib>
#include <cstring>
#include <string>
#include <fstream>

using namespace std;

int main (){
	string search;
	int offset;
	string line;

	ifstream Myfile;

	if (!Myfile){
		cout << "ERROR";
		exit(1);
	}

	while(!Myfile.eof()){
		getline(Myfile,line);
			if((offset = line.find(search,0)) != string :: npos){
				cout << "FOUNDED"<< endl;
			}else{
				cout<< "NOT FOUNDED"<<endl;
			}
	}

	Myfile.close();
}
