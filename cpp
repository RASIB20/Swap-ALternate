#include<iostream>
using namespace std;
main(){
	int arr[6]={1,2,3,4,5,6};
	int temp=0;
	
	cout<<"Orignal Array\n";
	for(int i=0;i<arr;i++)
		cout<<arr[i];
	
	for(int i=0;i<5;i++){
		temp=arr[i];
		arr[i]=arr[i+1];
		arr[i+1]=temp;
		i++;
	}
	
	cout<<"Swaped Array\n";
	for(int i=0;i<6;i++){
		cout<<arr[i];
	}
}
