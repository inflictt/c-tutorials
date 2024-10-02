#include<stdio.h>
int main (){
    float key;
    printf("CALCULATOR BY SAKSHAM  \nUSER MANUAL: PRESS KEYS ACCORDINGLY \nTO ADD PRESS 1\nTO SUBTRACT PRESS 2\nTO MULTIPLY PRESS 3\nTO DIVIDE PRESS 4\nTO LEAVE PRESS 5 \nPRESS KEY (1-5) = ");
    scanf("%f",&key);
    for(int i = 1;)
    if (key==1){
        float x,y,add;
        printf("enter two numbers x and y to add");
        printf("\nENTER THE VALUE OF x=");
        scanf("%f", &x);
        printf("ENTER THE VALUE OF y=");
        scanf("%f", &y);
        add=x+y;
        printf("sum of x + y = %.3f",add);
    }
    else if (key==2){
        float x,y,sub;
        printf("enter two numbers x and y to subtract ");
        printf("\nENTER THE VALUE OF x=");
        scanf("%f", &x);
        printf("ENTER THE VALUE OF y=");
        scanf("%f", &y);
        sub=x-y;
        printf("subtracion of x - y = %.3f",sub);
    }
    else if (key==3){
        float x,y,mult;
        printf("enter two numbers x and y to multipy");
        printf("\nENTER THE VALUE OF x=");
        scanf("%f", &x);
        printf("ENTER THE VALUE OF y=");
        scanf("%f", &y);
        mult=x*y;
        printf("multiplication of x * y = %.3f",mult);
    }
    else if (key==4){
        float x,y,div;
        printf("enter two numbers x and y : ");
        printf("\nENTER THE VALUE OF x=");
        scanf("%f", &x);
        printf("ENTER THE VALUE OF y=");
        scanf("%f", &y);
    
        div=x/y;
        printf("divsion of x / y = %.3f",div);
    }
    else if (key==5){
        printf("pagal h kya");
    }
    else{
        printf("nikal ja");
    }
}