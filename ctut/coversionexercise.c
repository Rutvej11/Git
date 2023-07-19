#include <stdio.h>
int main()
{int a;
label:  
 printf("Enter one if want to do conversion else enter zero\n");
    scanf("%d",&a);
    if(a==1){
        int b,kmstomiles,cmstoinches,inchestofoot,poundtokgs,inchestometer;  
        printf("Enter number to select type of conversion:\n");
        scanf("%d",&b);
    switch (b)
    {
    case 1:
    printf("you have selected conversion of kms into miles\n");
    int c;
    printf("Enter the number of kms you want to convert into miles:\n");
    scanf("%d",&c);
        kmstomiles=c*0.621371;
        printf("the conversion of %d kms in miles is %d\n",c,kmstomiles);
       goto label ;
    case 2:printf("you have selected conversion of cms into inches\n");
    int d;
    printf("Enter the number of cms you want to convert into inches:\n");
    scanf("%d",&d);
        cmstoinches=d*0.393701;
        printf("the conversion of %d cms in inches is %d\n",d,cmstoinches);
       goto label ;
        case 3:printf("you have selected conversion of inches into foot\n");
    int e;
    printf("Enter the number of inches you want to convert into foot:\n");
    scanf("%d",&e);
        inchestofoot=e*0.0833333;
        printf("the conversion of %d inches in foot is %d\n",e,inchestofoot);
       goto label ;
        case 4:printf("you have selected conversion of pounds into kgs\n");
    int f;
    printf("Enter the number of pounds you want to convert into kgs:\n");
    scanf("%d",&f);
        poundtokgs=f*0.453592;
        printf("the conversion of %d pounds in kgs is %d\n",f,poundtokgs);
         goto label ;
        case 5:printf("you have selected conversion of inches into meter\n");
    int g;
    printf("Enter the number of inches you want to convert into meter:\n");
    scanf("%d",&g);
        inchestometer=g*0.0254;
        printf("the conversion of %d inches in meter is %d\n",g,inchestometer);
        goto label ;
    default:printf("You have selected wrong option\n");
        break;
    }
        
    }
    else {
        printf("you chose not to do conversion");
    }
    return 0;
}