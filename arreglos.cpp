#include<iostream>
using namespace std;


int main() {
	
	int arr[10];
	cout<<"ingrese 10 números:\n\n";
	int counter=0;
	int x=0;
	int aux;
	for(int i=0;i<10;i++){
		cin>>x;
		counter++;
		arr[i]=x;
		int a=0;
		for (int j=0;j<counter;j++){
			
			if(x==arr[j]){
				a++;
			}	
		}
		if (a>=2){
			i--;
			counter--;
			cout<<"no se pueden repetir numeros\n";
			a=0;
		}
	}
	
	cout<<"\n  Numeros ingresados [ ";
	
	for (int i=0;i<10;i++){
		cout<<arr[i]<<" ";
	}cout<<"] ";
	
	for (int i= 1; i<10;i++){
		for(int j=0;j<9;j++){
			if(arr[j]>arr[j+1]){
				aux=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=aux;
			}
		}
	}
	cout<<"\n  Numeros ordenados [ ";
	for (int i=0;i<10;i++){
		cout<<arr[i]<<" ";
	}
	
	cout<<"]";
	return 0;
}
