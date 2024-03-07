#include<stdio.h>
int main()
{
	int a;
	int team1[3],team2[3],team3[3];
	int team1score=0,team2score=0,team3score=0;
	printf("the number of teams is 3\n");
	printf("the number of rounds is 3\n");
	
	printf("Enter the scores of team 1 : \n");
	for(a=0;a<3;a++)
	{
		scanf("%d",&team1[a]);
	}
	
	printf("Enter the scores of team 2 : \n");
	for(a=0;a<3;a++)
	{
		scanf("%d",&team2[a]);
	}
	
	printf("Enter the scores of team 3 : \n");
	for(a=0;a<3;a++)
	{
		scanf("%d",&team3[a]);
	}
	
	for(a=0;a<3;a++)
	{
		team1score = team1score + team1[a];
	}
	
	for(a=0;a<3;a++)
	{
		team2score = team2score + team2[a];
	}
	
	for(a=0;a<3;a++)
	{
		team3score = team3score + team3[a];
	}
	printf("team1 = %d\n",team1score);
	printf("team2 = %d\n",team2score);
	printf("team3 = %d\n",team3score);

	if(team1score>team2score && team1score>team3score)
	{
		printf("team1 has the highest score\n");
		if(team2score>team3score)
		{
			printf("team3 has the lowest score\n");
		}
		else
		{
			printf("team2 has the lowest score\n");
		}
	}	
	else if(team2score>team1score && team2score>team3score)
	{
	printf("team2 has the highest score\n");
		if(team1score>team3score)
		{
			printf("team3 has the lowest score\n");
		}
		else
		{
			printf("team1 has the lowest score\n");
		}	
	}
	else if(team3score>team1score && team3score>team2score)
	{
		printf("team3 has the highest score\n");
		if(team2score>team1score)
		{
			printf("team1 has the lowest score\n");
		}
		else
		{
			printf("team2 has the lowest score\n");
		}
	}




}
