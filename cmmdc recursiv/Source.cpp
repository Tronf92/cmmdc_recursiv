#include <iostream>
using namespace std;

int cmmdc_rec(int a,int b){
	int cmmdc;
	if(a>b){
		cmmdc=a-b;
		a=b;
		b=cmmdc;
		}
	else{
		cmmdc=b-a;
		b=a;
		a=cmmdc;
		}
	if (a==0){
		cmmdc=b;
		return cmmdc;}
	if(b==0){
		cmmdc=a;
		return cmmdc;}
	return cmmdc_rec(a,b);


}

int main(){
	int nr1,nr2;
	cout << "Introduceti primul nr " ;
	cin >> nr1;

	cout << "Introduceti al doilea nr" ;
	cin >> nr2;

	cout <<"Cmmdc este" << cmmdc_rec(nr1,nr2) << endl;



	system("pause");
	return 0;
}