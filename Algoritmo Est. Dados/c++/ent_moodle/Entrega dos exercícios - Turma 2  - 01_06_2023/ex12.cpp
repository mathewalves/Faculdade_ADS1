#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main(){
	int s, neg, maior, a[8];
	
	cout << "digite os elem do primeiro vetor:" <<endl;
	for (int i = 0; i<8; i++){
		cin >> a[i];
	}
	
	s=0;
	neg=0;
	maior= a[0];
	
for (int i = 0; i<8; i++){
	if (a[i] >=20 && a[i]<30){
		s = s+a[i];
	}
	if (a[i]<0){
		neg= neg+1;
	}
	if (a[i]>maior){
	maior = a[i];
}
cout << "soma: " << s;
cout << "\nnum neg: " << neg;
cout << "\nmaior: " << maior;

	return 0;
}
}

