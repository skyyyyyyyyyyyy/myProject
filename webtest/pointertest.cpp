#include<iostream> 
int* example(int c){
		
	int a=1;
	int *p = &a;
	return p;

}
int test(int a){
	example(1);
	
}
