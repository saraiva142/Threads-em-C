#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <pthread.h>
#include <time.h>

void *thread_function(void *arg), *thread_function2(void *arg);
int x = 0;
int y = 0;

int main() {
    int res;
    pthread_t a_thread;
    pthread_t b_thread;

    void *thread_result;

    // Inicializa a semente para números aleatórios para eu conseguir os resultados como de 1 ou de 2 
    srand(time(NULL));

    res = pthread_create(&a_thread, NULL, thread_function, (void *) NULL);

    res = pthread_create(&b_thread, NULL, thread_function2, (void *) NULL);

    printf("\nWaiting for thread to finish...\n");
    res = pthread_join(a_thread, &thread_result);
    res = pthread_join(b_thread, &thread_result);
    exit(EXIT_SUCCESS);
}

void *thread_function(void *arg) {
            sleep(rand() % 2);
            x=1;
            if (y==0){
            printf("2");
            }
}

void *thread_function2(void *arg) {
    sleep(rand() % 2);
	y=1;
	if (x==0)
		{printf("1");}
}
