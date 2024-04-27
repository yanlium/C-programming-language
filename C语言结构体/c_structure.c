#include<stdio.h>
typedef struct Birthday {
	int year;//年份
	int month;//月
	int day;//日
}Birthday;
typedef struct Student {
	int id;//学号
	char* name;//名字
	int age;//年龄
	float score;//成绩
	Birthday birthday;
}Student;
//打印学生结构体信息
void printStudentInfo(Student* pStu) {
	printf("学号：%d\t姓名：%s\t年龄：%d\t成绩：%d\t生日：%d-%d-%d\n",
	pStu->id, pStu->name, pStu->age, pStu->score, pStu->birthday);
}
int main() {
	Student stu1 = { 1001,"刘常",27,83,{1996,3,15} };
	Student stu2 = { 1003,"李渊和",65,99,{1955, 1,8} };

	Student* pStu = &stu1;
	printStudentInfo(pStu);
	pStu = &stu2;//指针重新指向stu2
	printStudentInfo(pStu);
	return 0;
}