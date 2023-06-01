#include <stdio.h>
#include <pthread.h>

void *child_thread(void *arg) {
    printf("This is the child thread.\n");
    pthread_exit(NULL);
}

int main() {
    pthread_t thread;
    int ret;

    ret = pthread_create(&thread, NULL, child_thread, NULL);
    if (ret != 0) {
        printf("Error creating the thread.\n");
        return 1;
    }

    printf("This is the main thread.\n");

    pthread_join(thread, NULL);

    return 0;
}

