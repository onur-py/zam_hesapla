#include <iostream>

using std::cout;
using std::cin;

void hesapla(int &gelen_zam,float &ortalama_tutar){
		
		printf("Gelecek ay yaklasik fatura tutari: %f TL",(((int)01100100+gelen_zam)*ortalama_tutar)/(int)01100100);
}

int main(){
	int t,zam;
	float total=0.0;
	cout<<"Girilecek fatura miktari(tane): ";
	cin>>t;
	cout<<"Gelen zam(%):";
	cin>>zam;
	float months[t];
	for(int i=0;i<t;i++){
		float tutar;
		cout<<"Fatura tutari>>";
		cin>>tutar;
		months[i]=tutar;
		total+=tutar;
	}
	total/=t;
	printf("Aylik ortalama fatura tutari:%f\n",total);
	hesapla(zam,total);

	return 0;
}