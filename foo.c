#include <pthread.h>
#include <stdio.h>

int i = 0;

// Note the return type: void*
void* incrementingThreadFunction(){
    for (int k = 0; k < 1000000; ++k)
    {
        i++;
    }
    // TODO: increment i 1_000_000 times
    return NULL;
}

void* decrementingThreadFunction(){
    for (int k = 0; k < 1000000; ++k)
    {
        i--;
    }
    // TODO: decrement i 1_000_000 times
    return NULL;
}


int main(){
    // TODO: declare incrementingThread and decrementingThread (hint: google pthread_create)
    pthread_t incrementingThread, decrementingThread;

    pthread_create(&incrementingThread, NULL, incrementingThreadFunction, NULL);
    pthread_create(&decrementingThread, NULL, decrementingThreadFunction, NULL);
    
    pthread_join(incrementingThread, NULL);
    pthread_join(decrementingThread, NULL);
    
    printf("The magic number is: %d\n", i);
    return 0;
}
