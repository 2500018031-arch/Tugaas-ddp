#include <iostream>
using namespace std;

int main(){
    long detik,totaldetik;  
    float jam,menit;         

    cout << "masukan angka >1 (dalam satuan detik): ";
    cin >> detik;

    jam = (int)detik%86400 / 3600;      
    menit = ((int)detik%3600) / 60;        
    totaldetik = (int)detik%60;            

    cout << endl;
    cout << "hasil konversi:" << endl;
    cout << detik << " detik = " << jam << " jam "
         << menit << " menit " << totaldetik << " detik" << endl;

    return 0;
}
