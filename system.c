#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<stdlib.h>

int date,month,year,option,number,total1=0,total2=0,total3=0,total4=0,total5=0,total;
char ch;
float time;

void park_details(){
  FILE *details;
  details = fopen("park details.txt", "r");
  if(details==NULL)
  {
     printf("file not found");
  } else{
    while(!feof(details)){
        ch = fgetc(details);
        printf("%c",ch);
    }
  }

}


void menu()
{
    FILE *menu;
    menu = fopen("park menu.txt", "r");
    if(menu==NULL){
        printf("file not found");
    }
    else{
        while(!feof(menu)){
            ch=fgetc(menu);
            printf("%c",ch);
        }
    }
}
int main(){
   system("CLS");
   system("color 0A"); 

   FILE *details;
   details = fopen("park details.txt", "a");
   printf("\n ENTER TODAYS DATE TO CONTINUE ");
   printf("\n\t ENTER DAY : ");
   scanf("%d",&date);
   printf("\n\t ENTER MONTH: ");
   scanf("%d",&month);
   printf("\n\t ENTER YEAR: ");
   scanf("%d",&year);
   
   fprintf(details, "\n\nDATE: %d-%d-%d", date,month,year);
   fprintf(details, "\n----------------\n");
   system("CLS");

   while(1)
{
    menu ();
    printf("ENTER AN OPTION : ");
    scanf("%d",&option);
    FILE *details;
    details = fopen("park details.txt", "a");
    
    switch(option){
        case 1:
        printf("ENTER TIME : ");
        scanf("%f",&time);
        printf("ENTER REGISTRATION NUMBER: ");
        scanf("%d",&number);
        total1 = total1+100;
        fprintf(details, "               \t\tBUS\t\t        %.2f\t\t%d\t\t100\n",time,number);
        printf("SUCCESSFULLY ADDED!!!!");
        getch();
        system("CLS");
        break;

       case 2:
        printf("ENTER TIME : ");
        scanf("%f",&time);
        printf("ENTER REGISTRATION NUMBER: ");
        scanf("%d",&number);
        total2+=80;
        fprintf(details, "               \t\tTRUCK      \t\t%.2f\t\t%d\t\t80\n",time,number);
        printf("SUCCESSFULLY ADDED!!!!");
        getch();
        system("CLS");
        break;

        case 3:
        printf("ENTER TIME : ");
        scanf("%f",&time);
        printf("ENTER REGISTRATION NUMBER: ");
        scanf("%d",&number);
        total3+=70;
        fprintf(details, "               \t\tPRIVATE CAR\t\t%.2f\t\t%d\t\t70\n",time,number);
        printf("SUCCESSFULLY ADDED!!!!");
        getch();
        system("CLS");
        break;

        case 4:
        printf("ENTER TIME : ");
        scanf("%f",&time);
        printf("ENTER REGISTRATION NUMBER: ");
        scanf("%d",&number);
        total4+=60;
        fprintf(details, "               \t\tBIKE       \t\t%.2f\t\t%d\t\t60\n",time,number);
        printf("SUCCESSFULLY ADDED!!!!");
        getch();
        system("CLS");
        break;

        case 5:
        printf("ENTER TIME : ");
        scanf("%f",&time);
        printf("ENTER REGISTRATION NUMBER: ");
        scanf("%d",&number);
        total5+=40;
        fprintf(details, "               \t\tBY CYCLE\t\t%.2f\t\t%d\t\t40\n",time,number);
        printf("SUCCESSFULLY ADDED!!!!");
        getch();
        system("CLS");
        break;

        case 6:
         
         system("CLS");
         park_details();
         printf("\n\n\n\t\t\tPRESS ANY KEY TO BACK MAIN MENU.....");

        getch ();
        system("CLS");
        break;

        case 7:
        total=total1+total2+total3+total4+total5;
        fprintf(details, "\t\t\t\t                    Total = %d TK",total);
        fprintf(details, "\n..........................................................................................\n");
        exit(0);
        break;
           

      default:
      printf("INVALID INPUT");
      getch();
      printf("\n\n\n\t\t\tPRESS ANY KEY TO BACK MAIN MENU....");
      system("CLS");
      break;
    }

}





     return 0;
}