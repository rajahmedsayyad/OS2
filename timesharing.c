#include<stdio.h> 
#include<unistd.h> 
void child() 
{ 
int i; 
for (i = 0; i < 50; i++) 
printf("I am child %d\n", i); 
} 
void parent() 
{ 
int i; 
for (i = 0; i < 50; i++) 
printf("I am Parent %d\n", i); 
} 
int main() 
{ 
pid_t pid = fork(); 
if (pid < 0) 
printf("Fork Failed"); 
else if (pid == 0) 
child(); 
else
parent();
return 0; 
} 
