#include<iostream>
using namespace std;

int main(){
	long detik,totaldetik;
	int hari, jam, menit;
	
	cout<< "masukan angka >1 (dalam satuan detik) =";
	cin>> detik;
	
	hari=detik/86400;
	jam=(detik%86400)/3600;
	menit=(detik%3600)/60;
	totaldetik=detik%60;
	
	cout << endl;
	cout << "masukan konverensi:" <<endl;
	cout << detik << " " << "detik" << " " << " " << "=" << hari << " " << "hari" << " " << jam << " " << "jam" << " " << menit << " " << "menit" << " " << " " << totaldetik << " " << "detik";
	
	return 0;
	 
}
