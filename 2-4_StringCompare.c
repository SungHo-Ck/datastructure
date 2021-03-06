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

int humans_equal(human_being person1,human_being person2);

int main(void){
	human_being person1,person2;
	printf("Input person1 data(name,age,salary):\n");
	scanf("%s",person1->name);	
	scanf("%d",person1->age);	
	scanf("%f",person1->salary);	
	printf("Input person2 data(name,age,salary):\n");	
	scanf("%s",person2->name);	
	scanf("%d",person2->age);	
	scanf("%f",person2->salary);	

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
