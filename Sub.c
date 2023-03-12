
#include<stdio.h>

int main(){

    int number1,number2,sub,mult,sum;
    float division;
    printf("enter two integer");
    scanf("%d%d",&number1,&number2);
    sub=number1-number2;
    mult=number1*number2;
    sum=number1+number2;
    division=number1/number2;
    
    
    printf("the sub of number1 and number2=%d\n,",sum);
    printf("the mult of number1 and number2=%d\n",sub);
    printf("the sum of number1 and number2=%d\n",mult);
    printf("the division of number1 and number2=%f/n",division);


 return 0;


};
getch();
