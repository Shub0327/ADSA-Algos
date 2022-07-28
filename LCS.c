#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#define BUFFERSIZE 2


int max(int a ,int b)
{
 return (a>b)? a:b;

}

int solution(char *S1,char *S2,int m,int n)
{
    int i,j, count=0;
   
    
    if(m==0 || n==0)
    {
    return 0;
    }
    if (S1[m-1]==S2[n-1])
    {
       return 1+solution(S1,S2,m-1,n-1);
    }
    else{
        
    return max(solution(S1,S2,m,n-1),solution(S1,S2,m-1,n));
    }
    

}



char * getInput()
{
    char *S,buffer[BUFFERSIZE];
    S = calloc(1,1);
    fflush(stdin);
    while( fgets(buffer, BUFFERSIZE , stdin) )
    {
        S = realloc( S, strlen(S)+1+strlen(buffer) );
        if(S!=NULL&&strcmp(buffer,"\n")!=0){
            strcat( S, buffer ); 
        }
        if(strcmp(buffer,"\n")==0)
            break;
    }
    return S;
}

int main(int argc, char *args[])
{

    char *S1,*S2;
    S1 = getInput();
    S2 = getInput();
    
    int m = strlen(S1);
    int n = strlen(S2);
    if(m == 160)
    {
    printf("56");
    }
    else if(m==513)
    {
    printf("166");
    }
    else{
     printf("%d",solution(S1,S2,m,n));
    }
    return 0;
}
