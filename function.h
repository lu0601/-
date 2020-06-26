#ifndef GAME__
#define GAME__
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <stdbool.h>
#include <string.h>
#include <conio.h>
#define PlayerNum 5
#define MaxNameLength 20
#define MaxHtmNameLength 30
#define MaxTxtNameLength 30
#define MaxGameTime 7
typedef struct Player
{
    char name[MaxNameLength],htmname[MaxHtmNameLength],txtname[MaxTxtNameLength];
    int compoint[MaxGameTime],highestscore;
}Player;
typedef struct Allplayer
{
    struct Player players[PlayerNum];
}Allplayer;
#endif // GAME__
void intimate(bool cooperate,bool precooperate, int *selfpoint, int *answer,int *apppoint);
void always_lie(bool bool_always_lie,int *selfpoint, int *answer,int *apppoint);
void always_cooperate(int *choice_always_cooperate, int *selfpoint, int *answer,int *apppoint);
void foreverlie_afterbelied(int choice_foreverlie_afterbelied, bool bool_foreverlie_afterbelied, int *selfpoint, int *answer, int *apppoint);
void complicate(bool cooperate_complicate, bool cooperate_complicate_forward, int i, bool *foreverlie, int choice_complicate, int *selfpoint, int *answer, int *apppoint);
void game(int distinguish, int *a, int *b);
void print_sum(const int a);
void data(const int *Choice);
int sum(const int *data,const int *times);
void printnewrecord(bool newhighrecord);
void print_sum(const int a);
void MakeAll(FILE *allfilefp,const Allplayer *allplayer);
void MakeCharacters(FILE *playerfp, const int *times,const int *scores, const Player *plyr);
