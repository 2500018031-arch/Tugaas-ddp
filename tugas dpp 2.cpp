#include<iostream>
using namespace std;

int main(){
	long detik,totaldetik;
	float hari, jam, menit;
	
	cout<< "masukan angka >1 (dalam satuan detik) =";
	cin>> detik;
	
	hari=detik%86400;
	jam=((int)detik%86400)/3600;
	menit=((int)detik%3600)/60;
	totaldetik=(int)detik%60;
	
	cout << endl;
	cout << "hasil konverensi:" <<endl;
	cout << detik << " " << "detik" << " " << " " << "=" << hari << " " << "hari" << " " << jam << " " << "jam" << " " << menit << " " << "menit" << " " << " " << totaldetik << " " << "detik";
	
	return 0;
	 
}
