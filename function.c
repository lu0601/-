#include "function.h"
void intimate(bool cooperate,bool precooperate, int *selfpoint, int *answer,int *apppoint)
{
    if(cooperate==true && precooperate==true)
    {
        (*selfpoint)+=2;
        (*answer)+=2;
        (*apppoint)+=2;
        printf("你：合作 vs 合作：電腦\n");
    }
    else if(cooperate==true && precooperate==false)
    {
        (*selfpoint)-=1;
        (*answer)-=1;
        (*apppoint)+=3;
        printf("你：合作 vs 欺騙：電腦\n");
    }
    else if(cooperate==false && precooperate==true)
    {
        (*selfpoint)+=3;
        (*answer)+=3;
        (*apppoint)-=1;
        printf("你：欺騙 vs 合作：電腦\n");
    }
    else
    {
        printf("你：欺騙 vs 欺騙：電腦\n");
    }
}
void always_lie(bool bool_always_lie,int *selfpoint, int *answer,int *apppoint)
{
    if(bool_always_lie==true)
    {
        (*selfpoint)-=1;
        (*answer)-=1;
        (*apppoint)+=3;
        printf("你：合作 vs 欺騙：電腦\n");
    }
    else
    {
        printf("你：欺騙 vs 欺騙：電腦\n");
    }
}
void always_cooperate(int *choice_always_cooperate, int *selfpoint, int *answer,int *apppoint)
{
    if(*choice_always_cooperate==2)
    {
        (*selfpoint)+=2;
        (*answer)+=2;
        (*apppoint)+=2;
        printf("你：合作 vs 合作：電腦\n");
    }
    else
    {
        (*selfpoint)+=3;
        (*answer)+=3;
        (*apppoint)-=1;
        printf("你：欺騙 vs 合作：電腦\n");
    }
}
void foreverlie_afterbelied(int choice_foreverlie_afterbelied, bool bool_foreverlie_afterbelied, int *selfpoint, int *answer, int *apppoint)
{
    if(bool_foreverlie_afterbelied==false)
    {
        if(choice_foreverlie_afterbelied==2)
        {
            (*selfpoint)+=2;
            (*answer)+=2;
            (*apppoint)+=2;
            printf("你：合作 vs 合作：電腦\n");
        }
        else if(choice_foreverlie_afterbelied==1)
        {
            (*selfpoint)+=3;
            (*answer)+=3;
            (*apppoint)-=1;
            printf("你：欺騙 vs 合作：電腦\n");
        }
    }
    else if(bool_foreverlie_afterbelied==true)
    {
        if(choice_foreverlie_afterbelied==2)
        {
            (*selfpoint)-=1;
            (*answer)-=1;
            (*apppoint)+=3;
            printf("你：合作 vs 欺騙：電腦\n");
        }
        else
        {
            printf("你：欺騙 vs 欺騙：電腦\n");
        }
    }
}
void complicate(bool cooperate_complicate, bool cooperate_complicate_forward, int i, bool *foreverlie, int choice_complicate, int *selfpoint, int *answer, int *apppoint)
{
    if(i==1 || i==3 || i==4)
    {
        if(choice_complicate==1)
        {
            (*foreverlie)=true;
            (*selfpoint)+=3;
            (*answer)+=3;
            (*apppoint)-=1;
            printf("你：欺騙 vs 合作：電腦\n");
        }
        else if(choice_complicate==2)
        {
            (*selfpoint)+=2;
            (*answer)+=2;
            (*apppoint)+=2;
            printf("你：合作 vs 合作：電腦\n");
        }
    }
    else if(i==2)
    {
        if(choice_complicate==1)
        {
            (*foreverlie)=true;
            printf("你：欺騙 vs 欺騙：電腦\n");
        }
        else if(choice_complicate==2)
        {
            (*selfpoint)-=1;
            (*answer)-=1;
            (*apppoint)+=3;
            printf("你：合作 vs 欺騙：電腦\n");
        }
    }
    else if(i<=7 && i>=5)
    {
        if((*foreverlie)==true)
        {
            intimate(cooperate_complicate, cooperate_complicate_forward, selfpoint,answer,apppoint);
        }
        else
        {
            always_lie(cooperate_complicate, selfpoint, answer, apppoint);
        }
    }
}

void game(int distinguish, int *a, int *b)
{
    switch(distinguish)
    {
    case 1:
    {
        (*a)-=1;
        (*b)+=3;
        break;
    }
    case 2:
    {
        (*a)+=2;
        (*b)+=2;
        break;
    }
    case 3:
    {
        (*a)+=3;
        (*b)-=1;
        break;
    }
    }
}
void print_sum(const int a)
{
    printf("  總分：%d\n\n",a);
}
void data(const int *Choice)
{
    const char name[10][10]= {"模仿貓","黑你黑到底","大善人","牛文聰","福爾摩星兒"};

    const int color[5]= {1,0,4,6,2};
    //system("color f0");
    //cout << name[Choice-1] << "，"<<endl;
    printf("***%s，***\n",name[(*Choice)-1]);
}
int sum(const int *data,const int *times)
{
    int summary=0;
    for(int i=0; i<(*times); i++)
    {
        summary+=data[i];
    }
    return summary;
}
void printnewrecord(bool newhighrecord)
{
    if(newhighrecord)
    {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, 0xFC );
        printf("New High Record!\n");
        SetConsoleTextAttribute(hConsole, 0xF0 );
        return;
    }
    else
    {
        return;
    }
}
void MakeAll(FILE *allfilefp,const Allplayer *allplayer)
{
    fprintf(allfilefp, "<table>\n");
    for(int i=0; i<5; i++)
    {
        fprintf(allfilefp, "<tr><td><a href=\"%s\">%s</a></td></tr>"
                ,allplayer->players[i].htmname,allplayer->players[i].name);
    }
    fprintf(allfilefp, "</table>\n");
}
void MakeCharacters(FILE *playerfp, const int *times,const int *scores, const Player *plyr)
{
    //printf("%s",plyr.name);
    fprintf(playerfp,"<tr>\n");
    fprintf(playerfp,"<img width=100 height=125 src=\"%s.jpg\">",plyr->name);
    fprintf(playerfp,"</tr>\n");
    fprintf(playerfp, "<table border = \"1\">\n"
            "<tr>\n"
            "<td> Component's name </td>\n"
            "<td> This time </td>\n");
    for(int i=1; i<=(*times); i++)
    {
        fprintf(playerfp,"<td> Round %2d</td> \n",i);
    }
    fprintf(playerfp,"<td> Total </td>\n");
    fprintf(playerfp, "<td> Highest record ever</td>\n");
    fprintf(playerfp, "</tr>\n"
            "<tr>\n"
            "<td>%s</td>\n",plyr->name);
    fprintf(playerfp, "<td>Your score</td>\n");
    int total=0;
    for(int i=0; i<(*times); i++)
    {
        fprintf(playerfp, "<td> %2d </td>\n",scores[i]);
        total+=scores[i];
    }
    fprintf(playerfp, "<td> %2d </td>\n",total);
    fprintf(playerfp, "<td> %2d </td>\n",plyr->highestscore);
}
