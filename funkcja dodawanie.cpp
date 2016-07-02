#include <iostream>
using namespace std;

int oblicz(int a, int b){
	
	return a+b;
}

int oblicz(int a){
	
	return a*2;
}

int oblicz(double a){
	
	return a*3;
}


int main(){
	
	int c=5;
	
	
	cout<<oblicz(c);

	
	
	
	return 0;
}
