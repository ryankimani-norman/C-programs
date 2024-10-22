// C structures
#include <stdio.h> // scanf(),printf()
#include<string.h> // strcpy()

struct student {
    char name[4];
    char reg_no[15];
    char email[30];
    float marks;
    int phone_no,ID;
} student1,student2;
int main(){
    
    //initializing variable(operator)
    //strcpy(student1.name,"Ryan");
    //strcpy(student1.reg_no,"BCS-05-0116/2024");
 //strcpy(student1.email,"ryannorman396@gmail.com");
 student1.ID = 24371984;
 student1. phone_no =90257079;
 student1.marks = 79.2;
 
 //promt the user to enter name
 printf("Enter name");
 scanf("%s",&student1.name);
 
 // print the name
 printf("Name:%s\n",student1.name);
 printf("Reg_no:%s\n",student1.reg_no);
printf("Email:%s\n",student1.email);
printf("ID:%d\n",student1.ID);
printf("Phone_no:%d",student1.phone_no);
printf("Marks:%f\n",student1.marks);


    return 0;
}