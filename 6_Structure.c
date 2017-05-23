#include <stdio.h>

struct Jenny{
	int age;
	int sex;
	char* address;
	char* name;
};
void init_JennyStruct(struct Jenny* j, int n);

int main() 
{
/*
	struct Jenny j;
	j.age = 30;
	j.sex = 1;
	j.address = "Seoul";
	j.name = "Jaeeun";
	printf("Jenny's Age: %d\n", j.age);
	printf("Jenny's sex: %d\n", j.sex);
	printf("Jenny's name: %s\n", j.name);
*/

	struct Jenny j[10];

	init_JennyStruct(j, 10);

	j[0].age = 30;
	j[0].sex = 1;

	j[1].age = 29;
	j[1].sex = 0;

	for (int i=0; i<10; i++)
	{
		printf("j[%d]'s age : %d\n", i, j[i].age);
		printf("j[%d]'s sex : %d\n", i, j[i].sex);
	}

}

void init_JennyStruct(struct Jenny* j, int n)
{
	for(int i=0; i<n; i++)
	{
		j[i].age = 0;
		j[i].sex = 0;
	}
}
