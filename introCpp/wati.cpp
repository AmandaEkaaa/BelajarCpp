#include <iostream>
using namespace std;
int main(){
	//Deklarasi variabel
	double hargaBarang1, hargaBarang2, hargaBarang3, hargaBarang4, hargaBarang5;
	int jumlahBarang1, jumlahBarang2, jumlahBarang3, jumlahBarang4, jumlahBarang5;
	double totalHarga, uangBayar, kembalian, kekurangan;
	string namaPembeli;
	
	//Penampilan 
	cout<< "=====Selamat datang di Kasir Wati!=====" <<endl;
	
	cout<<"Masukkan Nama Pelanggan";
	getline(cin, namaPembeli) ;
	
	cout<<"Masukkan harga barang ke-1:"<<endl;
	cin>>hargaBarang1;
	cout<<"Masukkan harga Bbarang ke-2:"<<endl;
	cin>>hargaBarang2;
	cout<<"Masukkan harga barang ke-3:"<<endl;
	cin>>hargaBarang3;
	cout<<"Masukkan harga barang ke-4:"<<endl;
	cin>>hargaBarang4;
	cout<<"masukkan harga brang ke-5:"<<endl;
	cin>>hargaBarang5;
	
	//Menghitung
	totalHarga= (hargaBarang1) + (hargaBarang2) + (hargaBarang3) + (hargaBarang4) + (hargaBarang5);
	
	//Tampilan
	cout<<"Total harga barang belanjan anda sekarang adalah =" <<totalHarga<<endl;
	
	//Tanya Uangnya Berapa
	cout<<"Masukkan uang yang dibayar" <<endl;
	cin>>uangBayar;
	
	if (uangBayar>=totalHarga){
		kembalian = uangBayar - totalHarga;
	cout<<"Pembayaran berhasil,Total kembalian anda sebesar;"<<kembalian;
} else {
	double kekurangan = totalHarga - uangBayar;
	cout<<"Uang tidak cukup! Anda kekurangan;"<<kekurangan<<endl;
}
 return 0;
			
		
	}
