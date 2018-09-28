#include<stdio.h>
#include<string.h>
struct Cricket{

    char player_name[40];
    char team_name[40];
    double batting_average;


};


void sort(struct Cricket *);
void sortTeam(struct Cricket *);

int main()
{
    struct Cricket players[5] , *p ;
    int i;

    for(i=0;i<5;i++)
    {
        scanf("%[^\n]s",players[i].player_name);
        fflush(stdin);
        scanf("%[^\n]s",players[i].team_name);
        fflush(stdin);
        scanf("%lf",&players[i].batting_average);
        fflush(stdin);
    }

    printf("\n---------------------------------\n");

    sort(players);
    sortTeam(players);

    for(i=0;i<5;i++)
    {
        if( i==0  || ( strcmp(players[i].team_name , players[i-1].team_name) ) != 0 )
        printf("%s \n",players[i].team_name);

        printf("    player name     : %s \n",players[i].player_name);
        printf("    batting average : %lf \n",players[i].batting_average);
    }

    return 0;
}

void sort(struct Cricket *p){

    int i,j;
    struct Cricket temp;
    for(i=0;i<4;i++)
    {
        for(j=0;j<=4-i;j++)
        {if((p+j)->batting_average < (p+j+1)->batting_average)
            {
                temp.batting_average=(p+j)->batting_average;
                strcpy(temp.player_name,(p+j)->player_name);
                strcpy(temp.team_name,(p+j)->team_name);


                (p+j)->batting_average=(p+j+1)->batting_average;
                strcpy((p+j)->player_name,(p+j+1)->player_name);
                strcpy((p+j)->team_name,(p+j+1)->team_name);

                (p+j+1)->batting_average=temp.batting_average;
                strcpy((p+j+1)->player_name,temp.player_name);
                strcpy((p+j+1)->team_name,temp.team_name);

            }


        }
    }


}


void sortTeam(struct Cricket *p){

    int i,j;
    struct Cricket temp;
    for(i=0;i<4;i++)
    {
        for(j=0;j<=4-i;j++)
        {if(( strcmp((p+j)->team_name , (p+j+1)->team_name) ) > 0)
            {
                temp.batting_average=(p+j)->batting_average;
                strcpy(temp.player_name,(p+j)->player_name);
                strcpy(temp.team_name,(p+j)->team_name);


                (p+j)->batting_average=(p+j+1)->batting_average;
                strcpy((p+j)->player_name,(p+j+1)->player_name);
                strcpy((p+j)->team_name,(p+j+1)->team_name);

                (p+j+1)->batting_average=temp.batting_average;
                strcpy((p+j+1)->player_name,temp.player_name);
                strcpy((p+j+1)->team_name,temp.team_name);

            }


        }
    }


}



