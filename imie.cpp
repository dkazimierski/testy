#include<iostream>
using namespace std;


int main(){
	
	
	char imie[10];
	
	cout<<"Podaj imie\n";
	cin>>imie;
	
	cout<<"Twoje imie to:\n";
	
	for (int i=0; imie[i]!=NULL; i=i+1){
		cout<<imie[i]<<" ";
	}

	return 0;
}
