#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ofstream f;
	f.open("failiychilki.opentxt");
	 cout<<"vvedi"<<endl;
	string nf;
	cin>>nf;
	f<<nf;
	cin>>nf;
	f<<nf;
	
	for (int i=1; i<100; i++) {
		f<<i;
	}
	
	cout<<"Yes"<<endl;
	
	
	
}

