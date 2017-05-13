#include<stdio.h>
#include<pthread.h>
typedef struct
{
    int fd;
    int state;
}response_client;
 

void *action()
{  
    response_client resp;
    resp.fd = 2;
    resp.state = 1;
    pthread_exit(resp);
}
 
int main()
{
    pthread_t t1;
    //void* fd;
    //void* resp;
response_client *r;
 
    if(pthread_create(&t1, NULL, &action, NULL) != 0)
    {
 
        fprintf(stderr, "error......\n");
        exit(0);
 
    }else{
 
        printf("ok!\n");
 
    }
 
    pthread_join(t1, (void ** )&resp);
 
    printf("test %d\n\n",resp->state);
 
    return 0;
}
