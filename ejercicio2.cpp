#include<iostream>
#include<time.h>
using namespace std;

int cubo(int& i){
	
	i = i* i * i;
	return i;
	
}

int main(){
	
	int x;
	cout<<"ingresar un numero: ";
	cin>>x;
	cout<<cubo(x);
	return 0;
}

