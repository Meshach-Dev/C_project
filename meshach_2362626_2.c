/*Q-2
Calculate the score card for the following categories Dance, music, drama,
mime, solo singing. Display the team details and their scores for each category.
*/
#include <stdio.h>
int main()
{
    int s_dance = 0, s_music = 0, s_drama = 0, s_mime = 0, s_solo_singing = 0, t_s = 0;

    printf("Enter the score of Dance team : \n");
    scanf("%d", &s_dance);
    printf("Enter the score of Music team : \n");
    scanf("%d", &s_music);
    printf("Enter the score of Drama team : \n");
    scanf("%d", &s_drama);
    printf("Enter the score of Mime team : \n");
    scanf("%d", &s_mime);
    printf("Enter the score of Solo Singing team : \n");
    scanf("%d", &s_solo_singing);

    t_s = s_dance + s_music + s_drama + s_mime + s_solo_singing;

    printf("\n\n-------------------Score Card--------------------\n\n\n");
    printf("Dance Team\nScore : %d\n\n", s_dance);
    printf("Music Team\nScore : %d\n\n", s_music);
    printf("Drama Team\nScore : %d\n\n", s_drama);
    printf("Mime Team\nScore : %d\n\n", s_mime);
    printf("Solo Singing Team\nScore : %d\n\n", s_solo_singing);

    printf("Total Score : %d\n\n", t_s);

    if (s_dance > s_music && s_dance > s_drama && s_dance > s_mime && s_dance > s_solo_singing)
    {
        printf("Dance team has score the most!");
    }
    else if (s_music > s_drama && s_music > s_mime && s_music > s_solo_singing)
    {
        printf("Music team has score the most!");
    }
    else if (s_drama > s_mime && s_drama > s_solo_singing)
    {
        printf("Drama team has score the most!");
    }
    else if (s_mime > s_solo_singing)
    {
        printf("Mime team has score the most!");
    }
    else
    {
        printf("Solo singing team has score the most!");
    }
    printf("\n\n--------------------Thank you!-----------------");
}