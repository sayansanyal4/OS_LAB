#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <pthread.h>

void *thread_fn(void *);
    char message[] = "Welcome to thread";

void main() {
    int res;
    pthread_t th;
    void *thread_result;
    res=pthread_create(&th,NULL,thread_fn,(void*)message);
    if (res != 0) {
        perror("Thread creation failed");
        exit(0);
    }
    printf("Waiting for thread joining \n");
    
    res = pthread_join(th, &thread_result);
    if (res != 0) {
        perror("Thread join failed");
        exit(0);
    }
    
    printf("Child thread joined successfully : %s \n",(char*)thread_result);
    printf("Main thread exiting.\n");
}

void *thread_fn(void *mg)
{
printf("In child thread \n");
sleep(2);
printf("This is passed argument : %s \n ",(char*)mg);
pthread_exit("Thank You");
}
