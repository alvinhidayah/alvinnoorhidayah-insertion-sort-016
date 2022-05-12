#include <iostream>
using namespace std;

int main(){
	int y;
	cout<<"masukan banyak array:";
	cin>>y;
	int x[y];
	// disini itu inputan dari user dimana variabel y banyak data
	// dan array X wadah untuk data yang akan diinputkan//
	for(int i=0; i<y; i++){
		cout<<"masukan angka ke "<<i<<" :";
		//disini saya melakukan perulangan untuk mengisi index
		// dari setiap array mulai dari array ke 0
		cin>>x[i];
		cout<<endl;
	}
	for(int i=1; i<y; i++){
		int key = x[i];
		int j = i-1;
		while(j>=0 && x[j] > key){
			x[j+1] = x[j];
			j--;
			//disinipertama akan mulai perulangan
			//dari indeks ke 1 yaitu variabel i
			//variabel i akan menajdi kunci untuk dibandingkan sebelumnya
			//jika bilangan sebelumnya lebih besar, maka key akan kembali
			//key kembali dibandingkan dengan bil. ke 2 hingga menemukan
			// sampai key menemukan bilangan yang diinginkan
			//untuk menghasilkan nilai shortingan yang diinginkan disini nilai harus berada disebelah paling kanan//
			//yaitu harus di variabel key tersebut//
		}
		x[j+1] = key;
		cout<<"proses sorting"<<endl;
		//disni akan terjadi proses sort yang akan menghitung angka//
		//kemudian melakukan proses sorting angka yang diinginkan//
		for(int m=0;m<y;m++){
		cout<<x[m]<<" ";
	    }
	    cout<<endl;
	}
	cout<<"hasil array yang sudah di sorting adalah"<<endl;
	for(int m=0;m<y;m++){
		cout<<"[" <<x[m]<<" ]";
	}
}
