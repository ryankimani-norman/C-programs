// C functions
#include <stdio.h>

int main() {
    int x,a,b,z;
    float y;
    printf("Enter two values:");
    scanf("%d%d",&a,&b);
    x = sum(a,b);// functions calling
z = sum(10,20);// functions calling 30
y=divide(a,b);// functions calling
printf("The sum is %d \n",x);
printf("The 2nd sum is %d \n",z);
printf("The division is %.2f \n",y);
    return 0;
}
//  functions definition
int sum(int x,int y){
    int z;
    z=x+y
    return z;
    
}
//  functions definition
float devide(float a, float b){
    float c;
    c=a/b;
    return c;
    