#define rtime (+30)


struct book
{
    char name[50],author[50];
    /*int id,qnty;*/
}*b;

void student(char name[])
{
int flag = 0;
 char q;
 char date_sub[50];
 time_t t;
 time(&t);
 struct tm *date_issue;
 char bn[50],bt[50];
 b=(struct book *)malloc(sizeof(struct book));
 FILE *stud;
 FILE *bk;
 bk=fopen("book.dat","r");
 stud=fopen(name,"a+");
 printf("enter the name of the book ");
 scanf("%s",bn);
 while(fread(b,sizeof(struct book),1,bk)){
 if(strcmp(b->name,bn)==0)
 {
     flag = 1;
     date_issue=ctime(&t);
     printf("date issued : %s",date_issue);
     fwrite(b,sizeof(struct book),1,stud);
 }
 }
 if(flag==0)
    printf("Book unavailable");
 q=getche();
 fclose(bk);
 fclose(stud);
 mainMenu();

}
void transaction(char name[])
{
    system("cls");
    FILE *bk;
    b=(struct book*)malloc(sizeof(struct book));
    if(fopen(name,"r")==NULL)
    {
        printf("No transactions available");
        printf("\n Do you want to return to main menu(Y/N)");
        char e=getche();
        if(e=='y'||e=='Y')
            mainMenu();
        else
            exitPage();
    }
    else
    {
        bk=fopen(name,"r");
        while(fread(b,sizeof(struct book),1,bk))
        {
            printf("%s\t%s\n",b->name,b->author);
        }
         fclose(bk);
         char c=getche();
    }
}
