#include<iostream>
using namespace std;
int main(){
	int x,y; 
	string memilih;
	int hasil;
	cout<<"Masukan nilai x: "<<endl;
	cin>>x;
	cout<<"Masukan nilai y: "<<endl;
	cin>>y;
	cout<<"masukan memilih: "<<endl;
	cin>>memilih;
	if(memilih== "penjumlahan"){
		hasil= x+y;
		cout<<"Hasil penjumlahan :  " <<hasil<<endl;
		cout<<"Program ini adalah program kalkulator sederhana: "<<hasil<<endl;
	}
	else if(memilih=="pembagian"){
		hasil= x/y;
		cout<<"Hasil pembagian: "<<hasil<<endl;
		cout<<"Program ini adalah program kalkulator sederhana: "<<hasil<<endl;
	}
	else if(memilih=="perkalian" ){
		hasil= x*y;
		cout<<"Hasil perkalian :  "<<hasil<<endl;
		cout<<"Program ini adalah program kalkulator sederhana: "<<hasil<<endl;
	}
	else if(memilih== "pengurangan"){
		hasil=x-y;
		cout<<"Hasil pengurangan: "<<hasil<<endl;
		cout<<"Program ini adalah program kalkulator sederhana: "<<hasil<<endl;
	}
	else{
		cout<<"Anda tidak memilih"<<endl;
	}
	
	
	return 0;
}
