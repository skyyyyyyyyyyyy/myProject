#include<iostream>
using namespace std;
int test(int &a){
	
	cout<<a<<endl;
	
}

int man(){
	int a=1;
	int &ra = a;
	test(ra);
	cout<<ra<<endl;
	return 0;
}
int main(){
	man();
	return 0;
}
