#include<stdio.h>
#include<string.h>
#define FALSE 0
#define TRUE 1

typedef struct{
	int month;
	int day;
	int year;
} date;

typedef struct{
	char name[10];
	int age;
	float salary;
	date dob;
}human_being;

person1.dob.month=2;
person1.dob.day=11;
person1.dob.year=1944;

int humans_equal(human_being person1,human_being person2);

int main(void){
	//input part
	//
	
	if(humans_equal(person1,person2))
		printf("The two human beings are the same.\n");
	else	
		printf("The two human beings are not the same.\n");
	return 0;
}

int humans_equal(human_being person1,human_being person2){
	if (strcmp(person1.name, person2.name))
		return FALSE;
	if (person1.age != person2.age)
		return FALSE;
	if (person1.salary != person2.salary)
		return FALSE;
	return TRUE;
}
