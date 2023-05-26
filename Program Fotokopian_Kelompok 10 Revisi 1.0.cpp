// Program Fotokopian
// Program dapat menghitung biaya seluruh layanan fotokopi
// program dapat menghitung diskon dan kembalian
#include <iostream>
#include <fstream>
using namespace std;

int main () {

	//KAMUS
	char y;
	int i, n, pilih, buku, jumlahBarang[50];
	int lembar1, lembar2, lembar3, lembar4, lembar5, lembar7;
	float harga1 = 0.0, harga2 = 0.0, harga3 = 0.0, harga4 = 0.0, harga5 = 0.0, harga6 = 0.0, harga7 = 0.0;
	float diskon1 = 0.0, diskon2 = 0.0, diskon3 = 0.0, diskon4 = 0.0;
	float biaya, diskon, subtotal, total, uangDiterima, kembalian;
	float hargaBarang[50], barang[50];
	string namaPelanggan, namaBarang[50];
	ofstream file;

	//ALGORITMA
	cout << "------------------------" << endl;
	cout << "=====SMART FOTOCOPY=====" << endl;
	cout << "------------------------" << endl;
	cout << endl;

	cout << "Masukkan Nama Pelanggan : ";	//user memasukkan nama pelanggan
	cin >> namaPelanggan;
	cout << endl;

	do { //aksi
		cout << "     MENU PILIHAN     " << endl;
		cout << "1. Fotokopi Hitam Putih" << endl;
		cout << "2. Fotokopi Berwarna" << endl;
		cout << "3. Print Hitam Putih" << endl;
		cout << "4. Print Berwarna" << endl;
		cout << "5. Laminating" << endl;
		cout << "6. Jilid" << endl;
		cout << "7. Jasa Pengetikan" << endl;
		cout << "8. Beli Barang" << endl;
		cout << endl;

		cout << "Masukkan Pilihan Layanan : "; //user memasukkan angka pilihan
		cin >> pilih;
		cout << endl;

		switch (pilih) {
			//user memasukkan angka 1
			case 1 :
				cout <<"Berapa lembar? ";   //user memasukkan jumlah lembar
				cin >> lembar1;
				harga1 = 300 * lembar1; 	//proses hitung biaya fotokopi hitam putih
				cout << "Biaya Fotokopi Hitam Putih \t: Rp"<< harga1 << " untuk " << lembar1 << " lembar"<< endl;

				if (lembar1 >= 3) {					//jika jumlah lembar >= 3, maka
					diskon1 = (lembar1/3) * 300;	//proses hitung diskon fotokopi hitam putih
					cout <<"Potongan harga sebesar \t\t: Rp" << diskon1 << endl;

				} else {
					cout << endl;
				}
				break;

			//user memasukkan angka 2
			case 2 :
				cout << "Berapa Lembar? ";  //user memasukkan jumlah lembar
				cin >> lembar2;
				harga2 = 500 * lembar2;		//proses hitung biaya fotokopi berwarna
				cout << "Biaya Fotokopi Berwarna \t: Rp" << harga2 << " untuk " << lembar2 << " lembar" << endl;

				if (lembar2 >= 3) {					//jika jumlah lembar >= 3, maka
					diskon2 = (lembar2/3) * 500;	//proses hitung diskon fotokopi berwarna
					cout <<"Potongan harga sebesar \t\t: Rp" << diskon2 << endl;

				} else {
					cout << endl;
				}
				break;

			//user memasukkan angka 3
			case 3 :
				cout << "Berapa lembar? ";  //user memasukkan jumlah lembar
				cin >> lembar3;
				harga3 = 500 * lembar3;		//proses hitung biaya print hitam putih
				cout << "Biaya Print Hitam Putih \t: Rp"<< harga3 <<" untuk " <<lembar3<< " lembar" << endl;

				if (lembar3 >= 3) {					//jika jumlah lembar >= 3, maka
					diskon3 = (lembar3/3) * 500;	//proses hitung diskon print hitam putih
					cout <<"Potongan harga sebesar \t\t: Rp" << diskon3 << endl;

				} else {
					cout << endl;
				}
				break;

			//user memasukkan angka 4
			case 4 :
				cout << "Berapa lembar? ";	//user memasukkan jumlah lembar
				cin >> lembar4;
				harga4 = 1000 * lembar4;	//proses hitung biaya print berwarna
				cout << "Biaya Print Berwarna \t: Rp" << harga4 <<" untuk " << lembar4 << " lembar"<< endl;

				if (lembar4 >= 3) {					//jika jumlah lembar >= 3, maka
					diskon4 = (lembar4/3) * 1000;	//proses hitung diskon print berwarna
					cout <<"Potongan harga sebesar \t: Rp" << diskon4 << endl;

				} else {
					cout << endl;
				}
				break;

			//user memasukkan angka 5
			case 5 :
				cout << "Berapa lembar? ";	//user memasukkan jumlah lembar
				cin >> lembar5;
				harga5 = 4000 * lembar5;	//proses hitung biaya laminating
				cout << "Biaya Laminating \t: Rp" << harga5 << " untuk " << lembar5 << " lembar" << endl;
				break;

			//user memasukkan angka 6
			case 6 :
				cout << "Berapa buku ? ";	//user memasukkan jumlah buku
				cin >> buku;
				harga6 = 3000 * buku;		//proses hitung biaya jilid buku
				cout << "Biaya Jilid \t\t: Rp" << harga6 <<" untuk " << buku << " buku" << endl;
				break;

			//user memasukkan angka 7
			case 7 :
				cout << "Berapa lembar? ";	//user memasukkan jumlah lembar setelah pengetikan selesai
				cin >> lembar7;
				harga7 = 1000 * lembar7;	//proses hitung biaya pengetikkan
				cout << "Biaya Jasa Pengetikan \t: Rp" << harga7 << " untuk " << lembar7<<" lembar" << endl;
				break;

			//user memasukkan angka 8
			case 8 :
				i = 0;	//inisialisasi variabel i
				n = 0;	//inisialisasi variabel n

       			do{	//aksi
        			cout<<"Nama Barang : ";		//user memasukkan nama barang yang dibeli
					cin>>namaBarang[i];

					cout<<"Jumlah      : ";		//user memasukkan jumlah barang tersebut
					cin>>jumlahBarang[i];

					cout<<"Harga       : Rp";	//user memasukkan harga per satuan barang tersebut
					cin>>hargaBarang[i];
					n++;						//banyaknya pengulangan

		 			barang[i] = jumlahBarang[i] * hargaBarang[i];	//proses hitung harga barang yang dibeli
		 			subtotal += barang[i];	//proses hitung barang terakumulasi
					i++;
					cout << endl;

					cout <<"Barang lain? (y/t) ";	//user memasukkan 'y' untuk menambah layanan dan 't' untuk selesai
					cin >> y;
					cout << "-------------------------------" << endl;

       			} while (y=='y'||y=='Y');	//program akan mengulang transaksi pembelian barang lagi

       			for (i=0; i<n; i++) {	//inisialisasi pencacah, kondisi pengulangan, next-pencacah
        			cout <<"Barang: "<< namaBarang[i] << endl;	//muncul tampilan otomatis barang yang di inputkan
        			cout <<"Harga: Rp" << barang[i] << " untuk "<< jumlahBarang[i]<< " pcs"<< endl;	//muncul tampilan harga setelah diakumulasikan
    			}
				break;

			//user memasukkan angka yang tidak terdapat dipilihan
			default :
				cout << "Pilihan Salah" << endl;
				break;
	}
		cout << "------------------------------" << endl;
		cout << "Ada lagi ? (y/t) ";	//user memasukkan 'y' untuk menambah layanan dan 't' untuk selesai
		cin >> y;
		cout << "------------------------------" << endl;

	} while (y=='y'|| y=='Y');	//program akan mengulang transaksi layanan di smart fotocopy lagi

	cout << "=============================================================" << endl;

	biaya = harga1 + harga2 + harga3 + harga4 + harga5 + harga6 + harga7 + subtotal;	//proses menghitung total biaya sebelum dikurangi diskon
	cout << "Biaya seluruh layanan \t\t\t: Rp" << biaya << endl;

	diskon = diskon1 + diskon2 + diskon3 + diskon4;										//proses menghitung total diskon (jika ada)
	cout << "Anda Mendapat Potongan Harga sebesar \t: Rp" << diskon << endl;

	total = biaya - diskon;																//proses menghitung total biaya yang harus dibayarkan
	cout << "Total yang harus dibayarkan \t\t: Rp" << total << endl;

	cout << "Uang yang dibayarkan \t\t\t: Rp";											//user memasukkan nominal uang yang diberikan pelanggan
	cin >> uangDiterima;

	kembalian = uangDiterima - total;													//proses hitung kembalian pelanggan
	cout << "Kembalian Anda sebesar \t\t\t: Rp" << kembalian << endl;
	cout << "=============================================================" << endl;

	//Tampilan Struk Transaksi pada Smart Fotocopy
   file.open("struk.txt");							//struk akan tersimpan pada format .txt
    file << "------------------------" << endl;
	file << "=====SMART FOTOCOPY=====" << endl;
	file << "------------------------" << endl;
	file << endl;
	file << "Nama Pelanggan \t: " << namaPelanggan<< endl;
	file << "=============================================================" << endl;

    if (harga1>0){
        file << "Biaya Fotokopi Hitam Putih \t: Rp"<< harga1 << " untuk " << lembar1 << " lembar"<< endl;
    }
    if (harga2>0){
        file << "Biaya Fotokopi Berwarna \t: Rp" << harga2 << " untuk " << lembar2 << " lembar" << endl;

    }
    if (harga3>0){
        file << "Biaya Print Hitam Putih \t: Rp"<< harga3 <<" untuk " <<lembar3 << " lembar" << endl;

    }
    if (harga4>0){
        file << "Biaya Print Berwarna \t: Rp" << harga4 <<" untuk " << lembar4 << " lembar"<< endl;

    }
    if (harga5>0){
        file << "Biaya Laminating \t: Rp" << harga5 << " untuk " << lembar5 << " lembar" << endl;

    }
    if (harga6>0){
        file << "Biaya Jilid \t\t: Rp" << harga6 <<" untuk " << buku << " buku" << endl;

    }
    if (harga7>0){
       file << "Biaya Jasa Pengetikan \t: Rp" << harga7 << " untuk " << lembar7<<" Lembar" << endl;

    }
    if (i>=1){
	for (i=0; i<n; i++) {
        file << namaBarang[i] <<"\t\t\t\t\t: Rp"<< barang[i] << " untuk "<< jumlahBarang[i] <<" pcs"<< endl;
	}
    }
	file << "=============================================================" << endl;
	file << "Biaya seluruh layanan \t\t\t: Rp" << biaya << endl;
	file << "Anda Mendapat Potongan Harga sebesar \t: Rp" << diskon << endl;
	file << "Total yang harus dibayarkan \t\t: Rp" << total << endl;
	file << "Uang yang Diterima \t\t\t: Rp" << uangDiterima << endl;
    file << "Kembalian Anda sebesar \t\t\t: Rp" << kembalian << endl;
	file << "=============================================================" << endl;
	file << "Terimakasih"<< endl;

	file.close();	//akhir file eksternal, file tersimpan

	return 0;	//menutup program

}
