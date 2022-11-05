#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int prime(); //declare the function
int main()

{
    prime(); //call the function
    getch();
}
int prime(){
    int n;
    printf("enter the number :");
    scanf("%d",&n);
    int isprime =1; //we fix that n is prime 
    for(int i = 2; i < n; i++)      //here we define the function    //we take i=2 due to below formula 
    {
        if(n%i==0){   //now the number will divided by 2
            isprime = 0; //here system will prove false if it is not prime
        }
        }
        if(isprime){
            printf("The number %d is prime\n",n);
        }
        else{
            printf("the number %d is not prime\n",n);
                }
                      int choice; //we are taking choice for exit or next 
                      printf("Now Enter Your Choice :\n");
                      printf("1.Next :\n2.Exit :\n");
                      scanf("%d",&choice);
                      switch(choice)
                      {
                          case 1:
                          main(); // main function will repeat your program
                          printf("1.next\n");
                          break;
                          case 2:
                          exit(0); //exit 0 means now the compile will not give you any result 
                          printf("2.exit\n");
                          break;
                          default:
                          printf("Sorry  Sir Please Enter The Above Two Choice \3 \2\n");
                          printf("thank you \2 \2 \2 \3 \3 \3\n");
                      }
                                     return 0;
    }