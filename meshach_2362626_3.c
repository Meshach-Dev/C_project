/*Q-3
Extend the previous program (Q-2) using switch case for each category.
*/
#include <stdio.h>
int main()
{
    int s_dance = 0, s_music = 0, s_drama = 0, s_mime = 0, s_solo_singing = 0, t_s = 0, n = 0;

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

    printf("\n\nTo display the score of the Dance Team Enter '1'\n");
    printf("To display the score of the Music Team Enter '2' \n");
    printf("To display the score of the Drama Team Enter '3' \n");
    printf("To display the score of the Mime Team Enter '4' \n");
    printf("To display the score of the Solo Singing Team Enter '5'\n");
    printf("To display the score card Enter '6'\n");
    printf("\n\nInput:");
    scanf("%d", &n);

    switch (n)
    {
    case 1:
        printf("Dance Team\nScore : %d\n\n", s_dance);
        break;

    case 2:
        printf("Music Team\nScore : %d\n\n", s_music);
        break;

    case 3:
        printf("Drama Team\nScore : %d\n\n", s_drama);
        break;

    case 4:
        printf("Mime Team\nScore : %d\n\n", s_mime);
        break;

    case 5:
        printf("Solo Singing Team\nScore : %d\n\n", s_solo_singing);
        break;

    case 6:
        t_s = s_dance + s_music + s_drama + s_mime + s_solo_singing;

        printf("-------------------Score Card--------------------\n\n\n");
        printf("Dance Team\nScore : %d\n\n", s_dance);
        printf("Music Team\nScore : %d\n\n", s_music);
        printf("Drama Team\nScore : %d\n\n", s_drama);
        printf("Mime Team\nScore : %d\n\n", s_mime);
        printf("Solo Singing Team\nScore : %d\n\n", s_solo_singing);

        printf("Total Score : %d\n\n\n", t_s);

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
        break;

    default:
        printf("Invalid Input!");
    }
}