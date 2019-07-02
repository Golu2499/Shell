
//orphan process 

#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<sys/wait.h>

int  main()
{

   pid_t pid = fork();
   
   if( pid > 0)
   {
      sleep(3);
      printf("in a parent process");
      printf("process id = %d", getpid());
   
   }
   else if( pid == 0)
   {
   
      wait(NULL);
      printf("in a child process");
      printf("process id = %d" , getpid());
      
   
   }
   
   else
   {
      printf("process failed");
   }
   return 0;



}
