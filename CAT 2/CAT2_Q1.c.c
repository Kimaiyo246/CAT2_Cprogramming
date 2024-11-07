//A structure program named employee
#include<stdio.h>
#include<string.h>
//declaring structure variables
struct employee
{
//Declaration of variables 
char name[50];
int id;
char department[20];
float salary;
char email[50];
}employee1;
int main() //The main function
{
//struct employee1
strcpy(employee1.name,"john doe");
employee1.id=12345;
strcpy(employee1.department,"Human resources");
employee1.salary=55000.50;
strcpy(employee1.email,"john.doe@company.com");
//displaying the output 
printf("Name       :%s\n",employee1.name);
printf("ID         :%d\n",employee1.id);
printf("Department :%s\n",employee1.department);
printf("Salary     :%.2f\n",employee1.salary);
printf("email      :%s\n",employee1.email);
return 0;
}