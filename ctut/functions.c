#include <stdio.h>
//this is function tutorial
int sum(int r, int t);
void printstar(int n){
    for (int i = 0; i < n; i++)
    {
     printf("%c",'*');
    }
}
int returnnumber(){
    int a;
    printf("Enter the number");
    scanf("%d",&a);
    return a;
}

int main()
{
    int r, t, c,d;
    r = 9;
    t = 55;
    d = sum(r, t);
    printf("%d\n",d);
    printstar(8);
    c = returnnumber();
    printf("The number entered is %d",c);
    return 0;
}
int sum(int r, int t)
{
    return r + t;
}