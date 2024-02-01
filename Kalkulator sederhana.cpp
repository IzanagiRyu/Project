#include <iostream>
#include <string>

using namespace std;
int main(){
	//tampilan awal
	cout<<"======================================="<<endl;
	cout<<"Selamat datang di Kalkulator sederhana"<<endl;
	cout<<"======================================="<<endl;
	//nama variable yang digunakan
	int angka1,angka2,hasil;
	char oprasi;
	string loop;
	//loop
	cout<<"apakah anda ingin menggunakan kalkuator?[ya][tidak] ";cin>>loop;
	while(loop=="ya"){
		cout<<"masukan oprasi yang anda inginkan +[tambah],-[kurang],/[bagi],*[kali] ";cin>>oprasi;
		cout<<"masukan angka yang pertama: ";cin>>angka1
		;
		cout<<"masukan angka yang kedua: ";cin>>angka2;
		//percabangan oprasi
		if(oprasi=='+'){
			cout<<angka1<<oprasi<<angka2<<"="<<angka1+angka2<<endl;
		}
		else if(oprasi=='-'){
			cout<<angka1<<oprasi<<angka2<<"="<<angka1-angka2<<endl;
		}
		else if(oprasi=='/'){
			cout<<angka1<<oprasi<<angka2<<"="<<angka1/angka2<<endl;
		}
		else if(oprasi=='*'){
			cout<<angka1<<oprasi<<angka2<<"="<<angka1*angka2<<endl;
		}
		else{
			cout<<"maaf sepertinya ada kesalahan oprasi \n";
		}
		cout<<"apakah anda ingin menggunakannya kalkulator lagi?[ya][tidak]: ";
		cin>>loop;
			}
	//jika oprasi sudah selesai
		cout<<"baik terima kasih";
	return 0;
}
