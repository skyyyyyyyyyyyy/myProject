#include<stdio.h>

int reduce(int a,int b){
	return a-b;
}

int add(int a,int b,int c)
{
	return a+b+c;
}

int test1(int a){

	return reduce(1,2);
}

int test2(int b)
{
	return add(1,2,3);
}

int m(int num1,int num2)
{
	int a=1,b=1,c=2;
	if(num1>1){
		//printf("aaaaaaaaaa");

	}else{
		reduce(1,2);
		test1(1);	
		add(1,2,3); 
	}
	reduce(1,2);
	test1(1);
	add(1,2,3); 
	test2(2);
	return 0;
}

