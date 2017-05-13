#include <pthread.h>
#include <stdio.h>

/* The function run when the thread is created */

void* compute_thread (void*);

int main( ) {
	/* This is data describing the thread created */

	pthread_t tid; /* thread ID structure */
	pthread_attr_t attr; /* thread attributes */
	char hello[ ] = {"Hello, "}; /* some typical data */
	char thread[ ] = {"thread"};
	/* Initialize the thread attribute structure */

	pthread_attr_init(&attr);

	/* Create another thread. ID is returned in &tid */
	/* The last parameter passed to the thread function */

	pthread_create(&tid, &attr, compute_thread, thread);

	/* Continue on with the base thread */
	printf("%s",hello);
	sleep(1);
	printf("hi\n");
	exit(0);
}

/* The thread function to be run */

void* compute_thread(void* dummy) {

	printf("%s",dummy);
	return;
}
