#include <stdio.h>
int main()
{
    int choice;
    float x, y, add, sub, mult, div;
    printf("CALCULATOR BY SAKSHAM  \nUSER MANUAL: PRESS KEYS ACCORDINGLY \nTO ADD PRESS 1\nTO SUBTRACT PRESS 2\nTO MULTIPLY PRESS 3\nTO DIVIDE PRESS 4\nTO LEAVE PRESS 5 \nPRESS KEY (1-5) = ");
    scanf("%d", &choice);
    printf("ENTER THE VALUE OF x=");
    scanf("%f", &x);
    printf("ENTER THE VALUE OF y=");
    scanf("%f", &y);
    switch (choice)
    {
    case 1:
        printf("Addition\n");
        printf("enter two numbers x and y to add");
        add = x + y;
        printf("%.3f+%.3f = %.3f ",x,y, add);
        break;
    case 2:
        printf("Subtraction\n");
        scanf("%f", &y);
        sub = x - y;
        printf("%.3f-%.3f = %.3f ",x,y, sub);
        break;
    case 3:
        printf("Multiplication\n");
        mult = x * y;
        printf("%.3f*%.3f =  %.3f " ,x,y, mult);
        break;
    case 4:
        printf("Divide\n");
        div = x / y;
        printf("%.3f/%.3f = %.3f ",x,y, div);
        break;
    case 5:
        printf("Leaving...");
        break;
    case 6:
        printf("Please recheck menu");
        break;
    }
}
