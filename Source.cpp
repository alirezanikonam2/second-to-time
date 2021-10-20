#include<iostream>
using namespace std;
int main(){

	int a, b, c, d,e,m,n,f,g;
	cout << "welcom to this program this program is for trancfor second to time" << endl<<
		"please enter second="<<endl;
	cin >> a;
	b = a / 3600;
	c = a % 3600;
	d = c / 60;
	e = c % 60;
	if (b < 10){
		cout << "0" << b;
	}
	else{
		cout << b;
	}
	cout << ":";

	if (d < 10){
		cout << "0" << d;
	}
	else{
		cout << d;
	}
	cout << ":";
	if (e < 10){
		cout << "0" << d;
	}
	else{
		cout << e;

	}





	system("pause");
	return 0;
}
