#include<iostream>
struct stu{
    int num;  //Ñ§ºÅ
};
int test(struct stu student){

	return 0;
}

struct stu test3(struct stu student){
	return student;
}
int test2(int b){
	struct stu student;
	student.num = 10;
	int a = test(student);
	test3(student);
	return a;
} 



