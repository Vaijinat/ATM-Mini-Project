//union Inside Structure //
/*#include<stdio.h>
#include<string.h>

struct Employee
{
char name[20];
union
{
int E_id;
float salary;
}info;
};
void main()
{
struct Employee emp;
strcpy(emp.name,"Charlie");
emp.info.E_id=101;

printf("%s %d\n",emp.name,emp.info.E_id);

emp.info.salary=2500;

printf("%s %.3f\n",emp.name,emp.info.salary);
}*/

#include<stdio.h>
union Save
{
int i;
char c;
};
void main()
{
printf("Size of Save :%lu\n",sizeof(union Save));
}
