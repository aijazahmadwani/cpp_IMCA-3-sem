/*
Author : Aijaz Ahmad Wani
email : aijazahmad9864@gmail.com
Date : 20 -6- 2019
*/

#include <iostream>
using namespace std;

int main()
{
	int rows;
	cout<<"Enter no. of rows : ";
	cin>>rows;
	for(int i=0; i<rows; i++){
		for(int j=0; j<=i; j++){
			cout<<"* ";
		}
		cout<<endl;
	}
}