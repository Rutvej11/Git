/*#include<stdio.h>
#include<unistd.h>
int main()

{
printf("the process ID is %d\n", (int)  getpid ());
printf("the parent process ID is %d\n",(int) getpid());
 
return 0;
}*/
//using the system call
#include<stdio.h> 
#include<stdlib.h>
int main()
{

int return_value; 
return_value=system("Is-I"); 
return return_value;
}



