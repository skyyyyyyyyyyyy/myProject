#include<stdio.h>
#include<stdlib.h>
struct stu{

    int num;  //Ñ§ºÅ

};

int test(struct stu student){



	return 0;

}

struct teach{

    int num;  //¹¤ºÅ

};
struct stu test3(struct stu student,struct teach teacher);

int test2(int b){

	struct stu student;
	struct teach teacher;

	student.num = 10;

	test(student);

	test3(student,teacher);

	return 1;

} 





struct stu test3(struct stu student,struct teach teacher){

	return student;

}


