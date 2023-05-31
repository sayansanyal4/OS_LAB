#include<stdio.h>
#include<unistd.h>
void main()
{
int pid1=0,pid2=0;
pid1=fork();
if(pid1==0)
{
	printf("I am child : my id is %d and my parent id is %d \n",getpid(),getppid());
	sleep(1);
}
else
{
pid2=fork();
if(pid2==0)
{
	printf("I am another child : my id is %d and my parent id is %d \n",getpid(),getppid());
		sleep(1);
}
else
{
	printf("I am parent : my id is %d and my child ids are %d and %d \n",getpid(),pid1,pid2);
	sleep(4);
}
}
}
