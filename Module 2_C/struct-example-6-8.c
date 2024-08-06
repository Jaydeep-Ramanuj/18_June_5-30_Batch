#include <stdio.h>

struct cricketPlayer
{
    char name[20];
    int jerseyNumber;
    int totalScore;
    int highestScore;
    int isIndianPlayer;
};

struct match
{
    char matchId[5];
    char location[20];
    char date[30];
    char teams[2][2][10];
    char winningTeam[10];
};

void main()
{
    struct cricketPlayer players[5];

    for (int i = 0; i < 5; i++)
    {
        printf("\n--- Player %d details ---", i + 1);
        printf("\nEnter your name:");
        scanf("%s", &players[i].name);
        printf("\nEnter your jersey Number:");
        scanf("%d", &players[i].jerseyNumber);
        printf("\nEnter your total Score:");
        scanf("%d", &players[i].totalScore);
        printf("\nEnter your highest Score:");
        scanf("%d", &players[i].highestScore);
        printf("\nAre you Indian player ?:");
        scanf("%d", &players[i].isIndianPlayer);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("\n--- PLayer %d details ---", i + 1);
        printf("\nName: %s", players[i].name);
        printf("\nJeysey Number: %d", players[i].jerseyNumber);
        printf("\nTotal score: %d", players[i].totalScore);
        printf("\nHighest Score: %d", players[i].highestScore);
        printf("\nIs Indian ?: %d", players[i].isIndianPlayer);
    }
}
