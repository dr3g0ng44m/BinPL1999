#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
<<<<<<< HEAD
#define NUM_THREADS 35
=======
#define NUM_THREADS 15
>>>>>>> bd6ad824300636f14b39030e1710c64bb5b4ce27
void *PrintHello(void *threadid)
{
    long tid;
    tid = (long)threadid;
    printf("Hello World! It's me, thread #%ld!\n", tid);
    pthread_exit(NULL);
}
int main()
{
	pthread_t threads[NUM_THREADS];
   int rc;
   long t;
   for(t=0; t<NUM_THREADS; t++){
    printf("In main: creating thread %ld\n", t);
    rc = pthread_create(&threads[t],NULL, PrintHello, (void *)t);
    if (rc){
      printf("ERROR; return from pthread_create() is %d\n", rc);
      exit(-1);
    }
   }
 
   /* Last thing that main() should do */
   pthread_exit(NULL);
}
