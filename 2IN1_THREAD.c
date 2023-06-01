#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <pthread.h>

void *thread_fn1(void *);
void *thread_fn2(void *);
    char message[] = "Welcome to thread";
void main() {
    int res1,res2;
    pthread_t thread1;
    pthread_t thread2;
    void *thread_result1;
    void *thread_result2;
    res1=pthread_create(&thread1,NULL,thread_fn1,(void*)message);
    res2=pthread_create(&thread2,NULL,thread_fn2,(void*)message);
    if (res1 != 0) {
        perror("Thread creation failed");
        exit(0);
    }
    if (res2 != 0) {
        perror("Thread creation failed");
        exit(0);
    }
    printf("Waiting for thread joining \n");
    res1 = pthread_join(thread1, &thread_result1);
    if (res1 != 0) {
        perror("Thread creation failed");
        exit(0);
    }
    res2 = pthread_join(thread2, &thread_result2);
    if (res2 != 0) {
        perror("Thread creation failed");
        exit(0);
    }
    printf("Child thread joined successfully : %s \n",(char*)thread_result1);
    printf("Child thread joined successfully : %s \n",(char*)thread_result2);
}

void *thread_fn1(void *mg)
{
int i;
printf("In child thread1 \n");
for(i=0;i<=10;i++)
{
if(i%2==0)
{
printf("Thread-1 : %d \n ",i);
}
sleep(2);
}
printf("This is passed argument : %s \n ",(char*)mg);
pthread_exit("Thank You from Thread-1");
}

void *thread_fn2(void *mg)
{int i;
printf("In child thread2 \n");
for(i=0;i<=10;i++)
{
if(i%2!=0)
{
printf("Thread-2 : %d \n ",i);
}
sleep(2);
}
printf("This is passed argument : %s \n ",(char*)mg);
pthread_exit("Thank You from Thread-2");
}
