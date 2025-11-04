#include<iostream>
using namespace std;

int main(){
	long detik,totaldetik;
	int jam,menit;
	
	cout << "masukan angka >1 (dalam satuan detik) : ";
	cin >> detik;
	
	jam=(detik%86400)/3600;
	menit=(detik%3600)/60;
	totaldetik=detik%60;
	
	
	cout<<endl;
	cout<<"hasil konverensi:"<<endl;
	cout <<detik<<"detik"<<" "<<"="<<jam << " " << "jam" << " " << menit << " " << totaldetik << " " << "detik" <<endl;
	
	return 0;
	
}
