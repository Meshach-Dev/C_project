#include<stdio.h>
#include<string.h>
	int teamnumber;
	char teamname[30];
	char teamcategory[30];
	char winner2[30],winner3[30];
	char winner1[30];
	
	int score[5];
	int totalscore;
	
void teamdetails()
{

	printf("Enter team name : ");
	gets(teamname);
	printf("Enter team category : ");
	gets(teamcategory);
	printf("Enter team number : ");
	scanf("%d",&teamnumber);

}
void performancescore()
{
	int a;
	printf("Enter the score of the team for each of the 5 rounds\n");
	for(a=0;a<5;a++)
	{
		scanf("%d",&score[a]);	
	}	
	for(a=0;a<5;a++)
	{
		totalscore=totalscore + score[a];	
	} 
}

void winnerslist()
{
	printf("Enter the top 3 teams of the event");
	fflush(stdin);
	printf("\nFirst name : ");
	gets(winner1);
	printf("\nSecond : ");
	gets(winner2);
	printf("\nThird : ");
	gets(winner3);
}

int main()
{
	teamdetails();
	performancescore();
	winnerslist();
	
	printf("\n\nthe team name is %s\n",teamname);
	printf("the team category is %s\n",teamcategory);
	printf("the team number is %d\n\n",teamnumber);
	printf("the total score of the team is %d\n\n",totalscore);
	printf("the winners of the event are :\n");
	printf("First : %s\n",winner1);
	printf("Second : %s\n",winner2);
	printf("Third : %s\n",winner3);
	
}

