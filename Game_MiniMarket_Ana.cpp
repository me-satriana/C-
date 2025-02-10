#include <iostream>
#include <stdlib.h>
using namespace std;

//Program Ana
//Tantangan dari Aii
//Mini Market
// I Can Do It

void jns_kendaraan() {
    cout << "1. mobil" << endl;
    cout << "2. motor" << endl;
    cout << "3. sepeda" << endl;
}

void jns_tokoh () {
	cout << "1. Tokoh pakaian" << endl;
	cout << "2. Tokoh sepatu" << endl;
	cout << "3. Tokoh aksesoris" << endl;
	cout << "4. Tokoh Buah" << endl;
}

struct tokoh {
  double nama;
  double harga;
  double jumlah;
  double t_harga;
 };
 
int main() {
    //program stengah mati
    
    //deklarasi variabel
   int B,C,D, kode, w,x,y,z, W, X, Y, Z, An;
   double min, mak;
   double uang,m;
   double t_1harga, t_2harga, t_3harga, t_4harga;
   string  A, E, a, n,q, k, ukuran = "all size";
   int t_harga1, t_harga2, t_harga3,t_harga4, total_h, total_b;
   int ya, s, xxl, l, xl;
   string acs[4] = {"Jam", "Topi", "Kacamata", "Kalung"};
   string pkn[4] = {"Kaos", "Switer", "Rok", "Celana"};
   string spt[4] = {"Sneakers", "Sport", "Boot", "Loafers"};
   string buah[4] = {"Apel", "Mangga", "Jeruk", "Semangka"};
   
   //pokok utama pakaian
   tokoh item1;
   tokoh item2;
   tokoh item3;
   tokoh item4;
   //pokok utama sepatu
   tokoh shoe1;
   tokoh shoe2;
   tokoh shoe3;
   tokoh shoe4;
   //pokok utama aksesoris
   tokoh acs1;
   tokoh acs2;
   tokoh acs3;
   tokoh acs4;
   //pokok utama buah
   tokoh buah1;
   tokoh buah2;
   tokoh buah3;
   tokoh buah4;
   
    //menentukan harga  
   item1.harga = 25000;
   item1.jumlah = 12;
   item1.t_harga = item1.harga * item1.jumlah;
    
   item2.harga = 75000;
   item2.jumlah = 10;
   item2.t_harga = item2.harga * item2.jumlah;
     
   item3.harga = 45000;
   item3.jumlah = 15;
   item3.t_harga = (item3.harga * item3.jumlah);
    
   item4.harga = 80000;
   item4.jumlah = 12;
   item4.t_harga = (item4.harga * item4.jumlah);
   
   shoe1.harga = 250000;
   shoe1.jumlah = 10;
	
   shoe2.harga = 150000;
   shoe2.jumlah = 10;
   
   shoe3.harga = 300000;
   shoe3.jumlah = 10;
   
   shoe4.harga = 200000;
   shoe4.jumlah = 12;
   
   acs1.harga = 45000;
   acs1.jumlah = 15;
   acs1.t_harga = acs1.harga * acs1.jumlah;
   
   acs2.harga = 30000;
   acs2.jumlah = 12;
   acs2.t_harga = acs2.harga * acs2.jumlah;
   
   acs3.harga = 25000;
   acs3.jumlah = 25;
   acs3.t_harga = acs3.harga * acs3.jumlah;
   
   acs4.harga = 15000;
   acs4.jumlah = 20;
   acs4.t_harga = acs4.harga * acs4.jumlah;
   
   buah1.harga = 25000;
   buah1.jumlah = 15;
   buah1.t_harga = buah1.harga * buah1.jumlah;
   
   buah2.harga = 10000;
   buah2.jumlah = 15;
   buah2.t_harga = buah2.harga * buah2.jumlah;
   
   buah3.harga = 15000;
   buah3.jumlah = 15;
   buah3.t_harga = buah3.harga * buah3.jumlah;
   
   buah4.harga = 25000;
   buah4.jumlah = 15;
   buah4.t_harga = buah4.harga * buah4.jumlah;
   
   //tampilan utama
    do {
       system ("cls");
       cout << "|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|" << endl;
       cout << "|       Game Automatic Market Ana     |" << endl;
       cout << "|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|" << endl << endl;
       cout << "play"<<endl;
       cout << "             selamat datang           " << endl;
       cout << "          di Pusat Perbelanjaan   " << endl;
       cout << "<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>" << endl << endl;
       cout << "Lanjut <y/n> : "; cin >> A;
       system ("cls");
       if ( A == "y") {
		    do { //memasuki area parkir
		    	system ("cls");
				cout << "____________________________" << endl;
			    cout << "# Anda memasuki area parkir #" << endl << endl;
			    cout << "ada yang bisa saya bantu?" << endl;
			    cout << "1. parkir kendaraan\n2. ambil kendaraan" << endl;
			    cout << "~~~~~~~~~~~~~~~~~~~" << endl;
			    cout << "customer <1/2> : "; cin >> B;
			    system ("cls");
			    if ( B == 1) { //melayani
			       cout << "_____________________" << endl;
			       cout << "jenis kendaraan anda : " << endl;
			       jns_kendaraan();
			       cout << "customer : "; cin >> C;
			       system ("cls");
			       cout << "~~~~~~~~~~~~~~~~~~~~~" << endl;
			       cout << "(kendaraan anda aman)" << endl;
			       cout << "~~~~~~~~~~~~~~~~~~~~~" << endl;
			       cout << "Masuk sebagai : " << endl; 
				   cout << "1. pelanggan \n2. penjual" << endl;
				   cout << "pilihan <1/2> : "; cin >> ya;
			       system ("cls");
				   if (ya == 1) { //memasuki pusat belanja
				        cout << "anda adalah pelanggan " << endl << endl;
						cout << "~~~~~~~~~~~~~~~~~" << endl;
						jns_tokoh ();
						cout << "pilih kebutuhan anda : "; cin >> An;
						system ("cls");
						if (An == 1) { //menampilkan tokoh pakaian
					        cout << "tokoh pakaian Ana" << endl;
					        cout << "~~~~~~~~~~~~~~" << endl;
					        cout << "tampilkan produk <y/n> : "; cin >> n;
					        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
					        system ("cls");
					        
					        W = 0;
					        X = 0;
					        Y = 0; 
					        Z = 0;	
					        
					        //menampilkan tokoh pakaian
						    do { 
						    	system ("cls");
					    		cout << "Produk tersedia di toko Ana" << endl;
						        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
						        cout << "kode : 1" << endl;
						        cout << "nama   \t: " << pkn[0] << endl;
						        cout << "harga  \t: Rp." << item1.harga << " /lembar" << endl;
						        cout << "stok   \t: " << item1.jumlah - (W) << endl;
						        cout << "t.harga\t: Rp." << item1.t_harga << endl; 
						        cout << "~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
						        cout << "kode : 2" << endl;
						        cout << "nama   \t: " << pkn[1] << endl;
						        cout << "harga  \t: Rp." << item2.harga << " /lembar" << endl;
						        cout << "stok   \t: " << item2.jumlah - (X) << endl;
						        cout << "t.harga\t: Rp." << item2.t_harga << endl; 
						        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
						        cout << "kode : 3" << endl;
						        cout << "nama   \t: " << pkn[2] << endl;
						        cout << "harga  \t: Rp." << item3.harga << " /lembar" << endl;
						        cout << "stok   \t: " << item3.jumlah - (Y) << endl;
						        cout << "t.harga\t: Rp." << item3.t_harga << endl;  
						        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
						        cout << "kode : 4" << endl;
						        cout << "nama   \t: " << pkn[3] << endl;
						        cout << "harga  \t: Rp." << item4.harga << " /lembar" << endl;
						        cout << "stok   \t: " << item4.jumlah - (Z) << endl;
						        cout << "t.harga\t: Rp." << item4.t_harga << endl; 
						        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
						        cout << endl;
						        cout << "masukkan kode belanja : "; cin >> kode;
						        cout << endl;
			                    
			                    //Menampilkan pilihan dengan kode
			                    
						        if (kode == 1){				        	
									cout << "nama   \t: " << pkn[0] << endl;
									cout << "harga  \t: Rp." << item1.harga << " /lembar" << endl;
									cout << "jumlah \t: "; cin >> W;
									t_harga1 = W * item1.harga;
									cout << "t.harga\t: Rp." << t_harga1;
									cout << endl;
						        }
						        else if (kode == 2){
									cout <<"nama   \t: " << pkn[1] << endl;
									cout <<"harga  \t: Rp." << item2.harga << " /lembar" << endl;
									cout <<"jumlah \t: "; cin >> X;
									t_harga2 = X * item2.harga;
									cout << "t.harga\t: Rp." << t_harga2; 
									cout << endl;
						        }
						        else if (kode == 3){
									cout << "nama   \t: " << pkn[2] << endl;
									cout << "harga  \t: Rp." << item3.harga << " /lembar" << endl;
									cout << "jumlah \t: "; cin >> Y;
									t_harga3 = Y * item3.harga;
									cout << "t.harga\t: Rp." << t_harga3;
									cout << endl;
						        }
						        else if (kode == 4){
									cout << "nama   \t: " << pkn[3] << endl;
									cout << "harga  \t: Rp." << item4.harga << " /lembar" << endl;
									cout << "jumlah \t: "; cin >> Z;
									t_harga4 = Z * item4.harga;							
									cout << "t.harga\t: Rp." << t_harga4;
									cout << endl;
						        }
						        else {
									cout << "kode tidak tersedia" << endl;
						        }
						        cout << endl;
						        cout << "tambah produk belanja anda <y/n> : "; cin >> a;
						        system ("cls");
						    } while ( a == "y"); 
						    
							//deklarasi variabel
						    t_harga1 = W * item1.harga;
						    t_harga2 = X * item2.harga;
						    t_harga3 = Y * item3.harga;
						    t_harga4 = Z * item4.harga;
						    
						    //menampilkan proses pembayaran
					        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
					        cout << "Anda memasuki area kasir" << endl;
					        cout << "=================================" << endl;
					        cout << "total belanja anda : " << endl;
					        cout << "1. "<<pkn[0]<<" \t: " << W << " lembar" << endl;
					        cout << "   total harga \t: Rp." << t_harga1 << endl;
					        cout << endl;
					        cout << "2. " << pkn[1] << " \t: " << X << " lembar" << endl;
					        cout << "   total harga \t: Rp." << t_harga2 << endl;
					        cout << endl;
					        cout << "3. " << pkn[2] << "\t: " << Y <<" lembar" << endl;
					        cout << "   total harga \t: Rp." << t_harga3 << endl;
					        cout << endl;
					        cout << "4. " << pkn[3] << " \t: " << Z << " lembar" << endl;
					        cout << "   total harga \t: Rp." << t_harga4 << endl;
					        cout << endl;
					        total_h = (t_harga1 + t_harga2) + (t_harga3 + t_harga4); 
					        cout << "total pembayaran anda    \t: Rp." << total_h << endl;
					        cout << "masukkan nominal uang    \t: Rp."; cin >> uang;
					        min = total_h - uang;
					        mak = uang - total_h;
					        double i, l;
					        if (uang < total_h){  //menampilkan kondisi
					           cout << "uang anda kurang      \t: Rp." << min << endl;
					           cout << "tmbah pembayaran <y/n>\t: "; cin >> q;
					            if (q == "y"){
					               cout << "uang tambahan anda\t: Rp."; cin >> m;
					               if (m > min) {
					               	 i = m - min;
					               	 cout << "kembalian anda  \t: Rp." << i;
								   }
								   else if (m < min) {
								   	 l = min - m;
								   	 cout << "uang anda kurang\t: Rp." << l;
								   }
								   else {
								   	 cout << "uang pas" << endl;
								   }
								   cout << endl;
					            }
					            else {
					               cout << "belanja anda ditahan" << endl;
					            }
					        }
					        else if (uang > total_h){
					          cout << "kembalian anda         \t: Rp." << mak << endl;
					        }
					        else {
					          cout << "uang anda pas" << endl;
					        }
					        cout << "=================================" << endl;
					        cout << "Transaksi selesai" << endl;
				    	}
						else if (An == 2) { //menampilkan tokoh sepatu
							cout << "Tokoh sepatu" << endl;
							cout << "~~~~~~~~~~~~~~" << endl;
					        cout << "tampilkan produk <y/n> : "; cin >> n;
					        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
					        system ("cls");					        
						    
					        W = 0;
					        X = 0;
					        Y = 0; 
					        Z = 0;	
					        
					        //menampilkan produk
						    do {
						    	system ("cls");
					    		cout << "Produk tersedia di toko kami" << endl;
						        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
						        cout << "kode : 1" << endl;
						        cout << "nama   \t: " << spt[0] << endl;
						        cout << "harga  \t: Rp." << shoe1.harga << " /pasang" << endl;
						        cout << "stok   \t: " << shoe1.jumlah - (W) << endl;
						        cout << "ukuran \t: " << ukuran << endl; 
						        cout << "~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
						        cout << "kode : 2" << endl;
						        cout << "nama   \t: " << spt[1] << endl;
						        cout << "harga  \t: Rp." << shoe2.harga << " /pasang" << endl;
						        cout << "stok   \t: " << shoe2.jumlah - (X) << endl;
						        cout << "ukuran \t: " << ukuran << endl; 
						        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
						        cout << "kode : 3" << endl;
						        cout << "nama   \t: " << spt[2] << endl;
						        cout << "harga  \t: Rp." << shoe3.harga << " /pasang" << endl;
						        cout << "stok   \t: " << shoe3.jumlah - (Y) << endl;
						        cout << "ukuran \t: " << ukuran << endl;  
						        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
						        cout << "kode : 4" << endl;
						        cout << "nama   \t: " << spt[3] << endl;
						        cout << "harga  \t: Rp." << shoe4.harga << " /pasang" << endl;
						        cout << "stok   \t: " << shoe4.jumlah - (Z) << endl;
						        cout << "ukuran \t: " << ukuran << endl; 
						        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
						        cout << endl;
						        cout << "masukkan kode belanja : "; cin >> kode;
						        cout << endl;					        	        
			                	
			                	//menampilkan pilihanmu sesuai kode
						        if (kode == 1){				        	
									cout << "nama         \t: " << spt[0] << endl;
									cout << "harga        \t: Rp." << shoe1.harga << " /pasang" << endl;
									cout << "jumlah       \t: "; cin >> W;
									for (int a = 1; a <= W; a++) {
									   cout << "ukuran " << a << "\t: "; cin >> s;
									}
									t_harga1 = shoe1.harga * W;
									cout << "t.harga      \t: Rp." << t_harga1;
									cout << endl;
						        }
						        else if (kode == 2){
									cout << "nama        \t: " << spt[1] << endl;
									cout << "harga       \t: Rp." << shoe2.harga << " /pasang" << endl;
									cout << "jumlah      \t: "; cin>>X;
									for (int a = 1; a <= X; a++) {
								       cout<<"ukuran "<<a<<"\t: "; cin>>xxl;
								    }
									t_harga2 = shoe2.harga * X ;
									cout << "t.harga    \t: Rp." <<t_harga2; 
									cout << endl;
						        }
						        else if (kode == 3){
									cout << "nama       \t: " << spt[2] << endl;
									cout << "harga      \t: Rp." << shoe3.harga << " /pasang" << endl;
									cout << "jumlah     \t: "; cin >> Y;
									for (int a = 1; a <= Y; a++) {
									   cout<<"ukuran " << a << "\t: ";; cin >> l;
								    }
									t_harga3 = shoe3.harga * Y;
									cout <<"t.harga    \t: Rp." << t_harga3;
									cout << endl;
						        }
						        else if (kode == 4){
									cout << "nama       \t: " << spt[3] << endl;
									cout << "harga      \t: Rp." << shoe4.harga << " /pasang" << endl;
									cout << "jumlah     \t: "; cin>>Z;
									for (int a = 1; a <= Z; a++) {
								       cout << "ukuran " << a << "\t: "; cin >> xl;
								    }
									t_harga4 = shoe4.harga * Z;							
									cout << "t.harga    \t: Rp." << t_harga4;
									cout << endl;
						        }
						        else {
									cout<<"kode tidak tersedia"<<endl;
						        }
						        cout << endl;
						        cout << "tambah produk belanja anda <y/n> : "; cin >> a;
						        system ("cls");
						    } while ( a == "y"); 
							//deklarasi 
						    t_harga1 = W * shoe1.harga;
						    t_harga2 = X * shoe2.harga;
						    t_harga3 = Y * shoe3.harga;
						    t_harga4 = Z * shoe4.harga;
						    
						    //menampilkan belanjamu
					        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;  
					        cout << "Anda memasuki area kasir" << endl;
					        cout << "=================================" << endl;
					        cout << "total belanja anda : " << endl;
					        cout << "1. "<<spt[0]<<" \t: " << W << " pasang" << endl;
					        cout << "   total harga \t: Rp." << t_harga1 << endl;
					        cout << endl;
					        cout << "2. " << spt[1] << " \t: " << X << " pasang" << endl;
					        cout << "   total harga \t: Rp." << t_harga2 << endl;
					        cout << endl;
					        cout << "3. " << spt[2] << " \t: " << Y << " pasang" << endl;
					        cout << "   total harga \t: Rp." << t_harga3 << endl;
					        cout << endl;
					        cout << "4. " << spt[3] << " \t: " << Z << " pasang" << endl;
					        cout << "   total harga \t: Rp."<<t_harga4<<endl;
					        cout << endl;
					        total_h = (t_harga1 + t_harga2) + (t_harga3 + t_harga4); 
					        cout << "total pembayaran anda    \t: Rp." << total_h << endl;
					        cout << "masukkan nominal anda    \t: Rp."; cin >> uang;
					        min = total_h - uang;
					        mak = uang - total_h;
					        double i, l;
					        
					        //kondisi pembayaran anda
					        if (uang < total_h){
					           cout << "uang anda kurang      \t: Rp." << min << endl;
					           cout << "tmbah pembayaran <y/n>\t: "; cin >> q;
					           cout << endl;
					            if (q == "y"){
					               cout << "uang tambahan anda\t: Rp."; cin >> m;
					               if (m > min) {
					               	 i = m - min;
					               	 cout << "kembalian anda  \t: Rp." << i;
								   }
								   else if (m < min) {
								   	 l = min - m;
								   	 cout << "uang anda kurang\t: Rp." << l;
								   }
								   else {
								   	 cout << "uang pas" << endl;
								   }
								   cout << endl;
					            }
					            else {
					               cout << "belanja anda ditahan" << endl;
					            }
					        }
					        else if (uang > total_h){
					          cout << "kembalian anda         \t: Rp." << mak << endl;
					        }
					        else {
					          cout << "uang anda pas" << endl;
					        }
					        cout << endl;
					        cout << "================================="<<endl;
					        cout << "Transaksi selesai"<<endl;
						}
						else if (An == 3) { //menampikan tokoh aksesoris
							cout << "Tokoh aksesoris" << endl;
							cout << "~~~~~~~~~~~~~~" << endl;
					        cout << "tampilkan produk <y/n> : "; cin >> n;
					        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
					        system ("cls");					        
						    //deklarasi
					        W = 0;
					        X = 0;
					        Y = 0; 
					        Z = 0;	
					        
						    do { //menampilkan produk
						    	system ("cls");
					    		cout << "Produk tersedia di toko kami" << endl;
						        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
						        cout << "kode : 1" << endl;
						        cout << "nama   \t: " << acs[0] << endl;
						        cout << "harga  \t: Rp." << acs1.harga << " /pcs" << endl;
						        cout << "stok   \t: " << acs1.jumlah - (W) << endl;
						        cout << "t.harga\t: Rp. " << acs1.t_harga << endl;
						        cout << "~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
						        cout << "kode : 2" << endl;
						        cout << "nama   \t: " << acs[1] << endl;
						        cout << "harga  \t: Rp." << acs2.harga << " /pcs" << endl;
						        cout << "stok   \t: " << acs2.jumlah - (X) << endl;
								cout << "t.harga\t: Rp. " << acs2.t_harga << endl;  
						        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
						        cout << "kode : 3" << endl;
						        cout << "nama   \t: " << acs[2] << endl;
						        cout << "harga  \t: Rp." << acs3.harga << " /pcs" << endl;
						        cout << "stok   \t: " << acs3.jumlah - (Y) << endl;
						        cout << "t.harga\t: Rp. " << acs3.t_harga << endl;  
						        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
						        cout << "kode : 4" << endl;
						        cout << "nama   \t: " << acs[3] << endl;
						        cout << "harga  \t: Rp." << acs4.harga << " /pcs" << endl;
						        cout << "stok   \t: " << acs4.jumlah - (Z) << endl;
						        cout << "t.harga\t: Rp. " << acs4.t_harga << endl; 
						        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
						        cout << endl;
						        cout << "masukkan kode belanja : "; cin >> kode;
						        cout << endl;					        	        
			            		
			            		//menampilkan belanjamu sesuai kode
						        if (kode == 1){				        	
									cout << "nama   \t: " << acs[0] << endl;
									cout << "harga  \t: Rp." << acs1.harga << " /pcs" << endl;
									t_harga1 = acs1.harga * W;
									cout << "t.harga\t: Rp." << t_harga1;
									cout << endl;
						        }
						        else if (kode == 2){
									cout << "nama   \t: " << acs[1] << endl;
									cout << "harga  \t: Rp." << acs2.harga << " /pcs" << endl;
									cout << "jumlah \t: "; cin >> X;
									t_harga2 = acs2.harga * X ;
									cout << "t.harga\t: Rp." << t_harga2; 
									cout << endl;
						        }
						        else if (kode == 3){
									cout << "nama   \t: " << acs[2] << endl;
									cout << "harga  \t: Rp." << acs3.harga << " /pcs" << endl;
									cout << "jumlah \t: "; cin >> Y;
									t_harga3 = acs3.harga * Y;
									cout << "t.harga\t: Rp." << t_harga3;
									cout << endl;
						        }
						        else if (kode == 4){
									cout << "nama   \t: " << acs[3] << endl;
									cout << "harga  \t: Rp." << acs4.harga << " /pcs" << endl;
									cout << "jumlah \t: "; cin >> Z;
									t_harga4 = acs4.harga * Z;							
									cout << "t.harga\t: Rp." << t_harga4;
									cout << endl;
						        }
						        else {
									cout << "kode tidak tersedia" << endl;
						        }
						        cout << endl;
						        cout << "tambah produk belanja anda <y/n> : "; cin >> a;
						        system ("cls");
						    } while ( a == "y");  
						    
						    //deklrasi
						    t_harga1 = W * acs1.harga;
						    t_harga2 = X * acs2.harga;
						    t_harga3 = Y * acs3.harga;
						    t_harga4 = Z * acs4.harga;
						    
						    //memasuki area kasir
					        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
					        cout << "Anda memasuki area kasir" << endl;
					        cout << "=================================" << endl;
					        cout << "total belanja anda : " << endl;
					        cout << "1. "<<acs[0]<<" \t: " << W << " pcs" << endl;
					        cout << "   total harga \t: Rp." << t_harga1 << endl;
					        cout << endl;
					        cout << "2. " << acs[1] << " \t: " << X << " pcs" << endl;
					        cout << "   total harga \t: Rp." << t_harga2 << endl;
					        cout << endl;
					        cout << "3. "<<acs[2]<<"\t: " << Y << " pcs" << endl;
					        cout << "   total harga \t: Rp." << t_harga3 << endl;
					        cout << endl;
					        cout << "4. " << acs[3] << " \t: " << Z << " pcs" << endl;
					        cout << "   total harga \t: Rp." << t_harga4 << endl;
					        cout << endl;
					        total_h = (t_harga1 + t_harga2) + (t_harga3 + t_harga4); 
					        cout << "total pembayaran anda    \t: Rp." << total_h << endl;
					        cout << "uang anda senilai        \t: Rp."; cin >> uang;
					        min = total_h - uang;
					        mak = uang - total_h;
					        double i, l;
					        
					        //menampilkan kondisi pembayaran
					        if (uang < total_h){
					           cout << "uang anda kurang      \t: Rp." << min << endl;
					           cout << "tmbah pembayaran <y/n>\t: "; cin >> q;
					           cout << endl;
					            if (q == "y"){
					               cout << "uang tambahan anda\t: Rp."; cin >> m;
					               if (m > min) {
					               	 i = m - min;
					               	 cout << "kembalian anda  \t: Rp." << i;
								   }
								   else if (m < min) {
								   	 l = min - m;
								   	 cout << "uang anda kurang\t: Rp." << l;
								   }
								   else {
								   	 cout << "uang pas" << endl;
								   }
								   cout << endl;
					            }
					            else {
					               cout << "belanja anda ditahan" << endl;
					            }
					        }
					        else if (uang > total_h){
					          cout << "kembalian anda         \t: Rp." << mak << endl;
					        }
					        else {
					          cout << "uang anda pas" << endl;
					        }
					        cout << endl;
					        cout << "=================================" << endl;
					        cout << "Transaksi selesai" << endl;
						}
						else if (An == 4) {
							cout << "Tokoh Buah" << endl;
							cout << "~~~~~~~~~~~~~~" << endl;
					        cout << "tampilkan produk <y/n> : "; cin >> n;
					        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
					        system ("cls");					        
						    
						    //deklrasi
					        W = 0;
					        X = 0;
					        Y = 0; 
					        Z = 0;	
					        
						    do { //menampilkan produk
						    	system ("cls");
					    		cout << "Buah tersedia di toko kami" << endl;
						        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
						        cout << "kode : 1" << endl;
						        cout << "nama   \t: " << buah[0] << endl;
						        cout << "harga  \t: Rp." << buah1.harga << " /kg" << endl;
						        cout << "stok   \t: " << buah1.jumlah - (W) << endl;
						        cout << "~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
						        cout << "kode : 2" << endl;
						        cout << "nama   \t: " << buah[1] << endl;
						        cout << "harga  \t: Rp." << buah2.harga << " /kg" << endl;
						        cout << "stok   \t: " << buah2.jumlah - (X) << endl; 
						        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
						        cout << "kode : 3" << endl;
						        cout << "nama   \t: " << buah[2] << endl;
						        cout << "harga  \t: Rp." << buah3.harga << " /kg" << endl;
						        cout << "stok   \t: " << buah3.jumlah - (Y) << endl;  
						        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
						        cout << "kode : 4" << endl;
						        cout << "nama   \t: " << buah[3] << endl;
						        cout << "harga  \t: Rp." << buah4.harga << " /kg"<<endl;
						        cout << "stok   \t: " << buah4.jumlah - (Z) << endl; 
						        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
						        cout << endl;
						        cout << "masukkan kode belanja : "; cin >> kode;
						        cout << endl;	
								
								//menampilkan belanjamu sesuai kode
						        if (kode == 1){				        	
									cout << "nama   \t: " << buah[0] << endl;
									cout << "harga  \t: Rp." << buah1.harga << " /kg" << endl;
									cout << "jumlah \t: "; cin >> W;	
									t_harga1 = buah1.harga * W;
									cout <<"t.harga\t: Rp." << t_harga1;
									cout << endl;
						        }
						        else if (kode == 2){
									cout << "nama   \t: " << buah[1] << endl;
									cout << "harga  \t: Rp." << buah2.harga << " /kg" << endl;
									cout << "jumlah \t: "; cin >> X;
									t_harga2 = buah2.harga * X ;
									cout << "t.harga\t: Rp." << t_harga2; 
									cout << endl;
						        }
						        else if (kode == 3){
									cout << "nama   \t: " << buah[2] << endl;
									cout << "harga  \t: Rp." << buah3.harga << " /kg" << endl;
									cout << "jumlah \t: "; cin >> Y;
									t_harga3 = buah3.harga * Y;
									cout << "t.harga\t: Rp." << t_harga3;
									cout << endl;
						        }
						        else if (kode == 4){
									cout << "nama   \t: " << buah[3] << endl;
									cout << "harga  \t: Rp." << buah4.harga << " /kg" << endl;
									cout << "jumlah \t: "; cin >> Z;
									t_harga4 = buah4.harga * Z;							
									cout << "t.harga\t: Rp." << t_harga4;
									cout << endl;
						        }
						        else {
									cout << "kode tidak tersedia" << endl;
						        }
						        cout << endl;
						        cout << "tambah produk belanja anda <y/n> : "; cin >> a;
						        system ("cls");
						    } while ( a == "y");  
						    
						    //deklrasi
						    t_harga1 = W * buah1.harga;
						    t_harga2 = X * buah2.harga;
						    t_harga3 = Y * buah3.harga;
						    t_harga4 = Z * buah4.harga;
						    
						    //melakukan pembayaran
					        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
					        cout << "Anda memasuki area kasir" << endl;
					        cout << "=================================" << endl;
					        cout << "total belanja anda : " << endl;
					        cout << "1. "<<buah[0]<<" \t: " << W << " kg" << endl;
					        cout << "   total harga \t: Rp." << t_harga1 << endl;
					        cout << endl;
					        cout << "2. " << buah[1] << " \t: " << X << " kg" << endl;
					        cout << "   total harga \t: Rp." << t_harga2 << endl;
					        cout << endl;
					        cout << "3. " << buah[2] << "\t: " << Y << " kg" << endl;
					        cout << "   total harga \t: Rp." << t_harga3 << endl;
					        cout << endl;
					        cout << "4. " << buah[3] << " \t: " << Z << " kg" << endl;
					        cout << "   total harga \t: Rp." << t_harga4 << endl;
					        cout << endl;
					        total_h = (t_harga1 + t_harga2) + (t_harga3 + t_harga4); 
					        cout << "total pembayaran anda    \t: Rp." << total_h << endl;
					        cout << "masukkan nominal anda    \t: Rp."; cin >> uang;
					        min = total_h - uang;
					        mak = uang - total_h;
					        double i, l;
					        
					        //menampilkan kondisi keuangan
					        if (uang < total_h){
					           cout << "uang anda kurang      \t: Rp." << min << endl;
					           cout << "tmbah pembayaran <y/n>\t: "; cin >> q;
					           cout << endl;
					            if (q == "y"){
					               cout << "uang tambahan anda\t: Rp."; cin >> m;
					               if (m > min) {
					               	 i = m - min;
					               	 cout << "kembalian anda  \t: Rp." << i;
								   }
								   else if (m < min) {
								   	 l = min - m;
								   	 cout << "uang anda kurang\t: Rp." << l;
								   }
								   else {
								   	 cout << "uang pas" << endl;
								   }
								   cout << endl;
					            }
					            else {
					               cout << "belanja anda ditahan" << endl;
					            }
					        }
					        else if (uang > total_h){
					          cout << "kembalian anda         \t: Rp." <<mak << endl;
					        }
					        else {
					          cout << "uang anda pas" << endl;
					        }
					        cout << endl;
					        cout << "=================================" << endl;
					        cout << "Transaksi selesai" << endl;
						}
						else {
							cout << "tokoh tidak tersedia" << endl;
						}
						
			        }  
			        else if (ya == 2) {
			        	int h, T;
			        	
			        	cout << "anda adalah penjual" << endl << endl;
			        	cout << "masukkan jumlah tokoh anda : "; cin >> T;
			        	tokoh tkoh[T];
			        	string tokoh,nama;
			        	for (int a = 0; a < T; a++){
			        		cout << "nama tokoh " << a+1 << ": "; cin >> tokoh;
			        		cout << "nama barang    \t: "; cin >> nama ;
			        		cout << "jumlah barang  \t: "; cin >> tkoh[a].jumlah ;
			        		cout << "harga barang   \t: Rp."; cin >> h;
			        		tkoh[a].t_harga = tkoh[a].jumlah * h;
			        		cout << "total harga    \t: Rp." << tkoh[a].t_harga << endl;
			        		cout << endl;
			        		system("cls");
						}
						
						cout << "=======================================" << endl;
						cout << "Tokoh Anda" << endl;
						cout << "~~~~~~~~~~~~~~~~~~~" << endl;
						for (int a = 0; a < T; a++){
			        		cout << "Tokoh "<<a+1<<": " << tokoh<<endl;
			        		cout << "nama barang    \t: " << nama <<endl;
			        		cout << "jumlah barang  \t: " << tkoh[a].jumlah <<endl;
			        		cout << "harga barang   \t: Rp." << h << endl;
			        		tkoh[a].t_harga = tkoh[a].jumlah * h;
			        		cout << "total harga    \t: Rp." << tkoh[a].t_harga << endl;
			        		cout << endl;
			        	}
						
					}
			        else {
			        	cout << "Tidak tersedia" << endl;
					}
				} 
				else if ( B == 2) {  //mengambil kendaraan masuk area parkir
			        cout << "_____________________" << endl;
			        cout << "jenis kendaraan anda :" << endl;
			        jns_kendaraan();
			        cout << "~~~~~~~~~~~~~~~~" << endl;
			        cout << "customer : "; cin >> D;
			        system("cls");
			        
			        //menampilkan kodisi bayar uang parkir
			        if ( D == 1) {
			            cout << "tarif anda Rp.5000" << endl;
			            cout << "bayar <y/n> = ";cin >> E;
			            if ( E == "y") {
			            	system("cls");
			               cout << "terima kasih telah berkunjung" << endl;
			            } else {
			               cout << "kendaraan anda ditahan" << endl;
			            }
			        }
			        else if ( D == 2 ) {
			        	system("cls");
			            cout << "tarif anda : Rp. 2000" << endl;
			            cout << "customer : bayar <y/n> = "; cin >> E;
			            if ( E == "y") {
			               system("cls");
			               cout << "terima kasih telah berkunjung" << endl;
			            } else {
			            	system("cls");
			                cout << "kendaraan anda ditahan" << endl;
			            }
			        }
			        else if (D == 3){
			        	system("cls");
			            cout << "tarif anda : Rp.1000" << endl;
			            cout << "bayar <y/n> = "; cin >> E;
			            if ( E == "y") {
			               system("cls");
			               cout << "terima kasih telah berkunjung" << endl;
			            } else {
			               system("cls");
			               cout << "kendaraan anda ditahan" << endl;
			            }
			        }
			        else {
			        	cout << "jenis kendaraan tidak dikenali" << endl;
					}
			    }
				else {
					system("cls");
					cout << "maaf,layanan tidak tersedia" << endl;
			    }
			cout << endl;    
			cout << "Kembali ke parkiran <y/n> : "; cin >> k;
        	} while (k == "y");
        system ("cls");
        cout << "Terima kasih atas kunjungan anda" << endl;	
		}
		else {
		    cout << "~~~~~~~~~~~~~~~~~~~~~" << endl;
		    cout << "Yakin ? " << endl;		
		}
		//penutup   
	cout << endl;	
	cout << "repeat the game <y/n> : "; cin >> n;
	} while( n == "y" );
	system("cls");
	cout << "Finish the Game" << endl;
	
	return 0;
}
