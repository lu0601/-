#include "function.h"
//#include "function.c"
int main()
{
    system("cls");
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    system("color f0");
    printf("信任的小遊戲：\n\n準備好要開始了嗎?\n\n");
    system("pause");
    system("cls");
    printf("現在，想像你面前有臺兩人一起使用的機器，你和另一個人一起使用，中間以機器相隔，你在左側而另一個人在機器的右側：\n\n(你們兩位都看不到對方的決定)\n\n");
    printf("規則是");
    printf("當");
    SetConsoleTextAttribute(hConsole, 0xFC );
    printf("你放進去 1 枚硬幣，對方會得到 3 枚硬幣，反之亦然。\n\n");
    SetConsoleTextAttribute(hConsole, 0xF0 );
    printf("你們兩位都可以選擇");
    SetConsoleTextAttribute(hConsole, 0xFC );
    printf("「合作」（放 1 枚硬幣）");
    SetConsoleTextAttribute(hConsole, 0xF0 );
    printf("或者");
    printf("「欺騙」（不放硬幣）。\n\n");
    printf("如果現在說：對方會選「欺騙」：不放硬幣進去，左邊的你，該怎麼做呢？\n\n");
    printf("你的選擇是(1)代表欺騙，(2)代表合作：...>");
    int score[5]= {};
    int choice1=0;
    while(scanf("%d",&choice1)==1)
    {
        printf("\n====================================\n");
        if(choice1==1)
        {
            printf("\n");
            printf("就是這樣！憑什麼要便宜他？\n\n");
            printf("如果你合作");
            printf("，但是對方選擇欺騙");
            printf("，你將失去 1 枚硬幣，但是對方可以得到 3 枚（-1:+3）。\n\n");
            printf("但是，如果你們兩位都選擇欺騙");
            printf("，那");
            printf("兩人都既得不到什麼，也不會失去什麼（0：0）。\n\n");
            printf("所以：按照");
            printf("「一般人性」");
            printf("來說");
            printf("，你應該選擇「欺騙」。\n\n");
            break;
        }
        else if(choice1==2)
        {
            printf("\n");
            printf("把左臉也伸過去，只會多挨一下打，沒有好處呀！\n\n");
            printf("如果你合作，但是對方選擇欺騙，你將失去 1 枚硬幣，但是對方可以得到 3 枚（-1:+3）。\n\n");
            printf("但是，如果你們兩位都選擇欺騙，那兩人都既得不到什麼，也不會失去什麼（0：0）。\n\n");
            printf("所以：按照「一般人性」來說，你應該選擇「欺騙」。\n\n");
            break;
        }
        else
        {
            printf("\n");
            printf("(必須輸入1或2來決定欺騙或者是合作喔！)\n請再輸入一次吧！\n\n");
        }
    }
    system("pause");
    system("cls");
    printf("但是，如果我告訴你，對方將選擇合作：他會投 1 枚硬幣。\n\n");
    printf("你現在又該怎麼做呢？\n\n你的選擇是(1)代表欺騙，(2)代表合作：...>");
    while(scanf("%d",&choice1)==1)
    {
        printf("\n====================================\n");
        if(choice1==1)
        {
            printf("\n");
            printf("哇……有點缺德啊～不過，這是正確的答案！\n\n");
            printf("如果你們兩位都選擇了合作，你們各付出了 1 枚硬幣後，得到了 3 枚（+2:+2）。\n\n");
            printf("但是，如果你選擇欺騙，但是對方卻合作，你將賺到 3 枚硬幣，但對方會失去 1 枚（+3:-1）。 \n\n");
            printf("所以，你還是「應該」選擇欺騙，對自己最有利。\n\n");
            break;
        }
        else if(choice1==2)
        {
            printf("\n");
            printf("沒錯，看起來確實應該這樣……但是，仔細想想，是嗎？ \n\n");
            printf("如果你們兩枚都選擇了合作，你們各付出了 1 枚硬幣後，得到了 3 枚（+2:+2）。\n\n");
            printf("但是，如果你選擇欺騙，但是對方卻合作，你將賺到 3 枚硬幣，但對方會失去 1 枚（+3:-1）。 \n\n");
            printf("所以，你還是「應該」選擇欺騙，對自己最有利。\n\n");
            break;
        }
        else
        {
            printf("必須輸入1或2來決定欺騙或者是合作喔！\n請再輸入一次吧！\n");
        }
    }
    system("pause");
    system("cls");
    system("color f0");
    printf("你看，這就是我們的窘境了。\n\n信任固然好，但會讓別人佔你的便宜。\n\n有些時候，選擇「不信任」是理性的！\n\n然而，如果這場遊戲");
    SetConsoleTextAttribute(hConsole, 0xFC );
    printf("不是一次就結束，而是重複玩很多次...\n\n");
    SetConsoleTextAttribute(hConsole, 0xF0 );
    printf("答案會有所不同嗎？\n\n");
    system("pause");
    system("cls");
    printf("這次，我們來玩真的！\n\n接下來，");
    SetConsoleTextAttribute(hConsole, 0xFC );
    printf("你將與 5 名不同的玩家進行遊戲，每個人都有他們自己的「遊戲策略」。\n\n");
    SetConsoleTextAttribute(hConsole, 0xF0 );
    printf("每位玩家");
    SetConsoleTextAttribute(hConsole, 0xFC );
    printf("會與你對局 3 到 7 步，你並不知道哪一步是這局的最後一步。");
    SetConsoleTextAttribute(hConsole, 0xF0 );
    printf("你可以相信他們嗎？或者說……他們可以相信你嗎？\n\n");
    printf("來，告訴我你的第一個真正的選擇。要想清楚喔：\n\n");
    system("pause");
    system("cls");
    Allplayer allplayers;
    for(int i=0; i<PlayerNum; i++)
    {
        for(int j=0; j<7; j++)
        {
            allplayers.players[i].compoint[j]=0;
        }
    }
    char EnglishNames[PlayerNum][MaxNameLength]= {"Copy Cat","Killing You","Goodness","Smart","Detector Holmes"}; //"","","","",""
    char ChineseNames[PlayerNum][MaxNameLength]= {"模仿貓","黑你黑到底","大善人","牛文聰","福爾摩星兒"};
    bool printnewhighrecord[5];
    for(int i=0; i<PlayerNum; i++)
    {
        printnewhighrecord[i]=false;
        strcpy(allplayers.players[i].name,EnglishNames[i]);
        strcpy(allplayers.players[i].htmname,allplayers.players[i].name);
    }
    int answer=0,gametimes=0,selfpoint=0,compt=0;
    for(int j=1; j<=PlayerNum; j++)
    {
        switch(j)
        {
        case 1:
        {
            //------------------第一位玩家開始---------------------//
            int choice_intimate=0;
            SetConsoleTextAttribute(hConsole, 0xF9 );
            printf("第%d/5位玩家\n",j);
            SetConsoleTextAttribute(hConsole, 0xF0 );
            printf("你的總分：%d\n",answer);
            bool cooperate=true;
            bool precooperate=true;
            gametimes=5;
            int yourscore[5]= {};
            for(int i=1; i<=gametimes; i++)
            {
                printf("你的選擇[(1)代表欺騙/(2)代表合作]：...>");
                scanf("%d",&choice_intimate);
                if(choice_intimate==1)
                {
                    cooperate=false;
                    intimate(cooperate, precooperate, &yourscore[i-1], &answer, &allplayers.players[j-1].compoint[i-1]);
                    compt+=allplayers.players[j-1].compoint[i-1];
                    selfpoint+=yourscore[i-1];
                    printf("你的分數：%d vs %d：電腦玩家的分數\n",selfpoint,compt);
                    printf("你的總分：%d\n",answer);
                    precooperate=cooperate;
                }
                else if(choice_intimate==2)
                {
                    cooperate=true;
                    intimate(cooperate, precooperate, &yourscore[i-1], &answer, &allplayers.players[j-1].compoint[i-1]);
                    compt+=allplayers.players[j-1].compoint[i-1];
                    selfpoint+=yourscore[i-1];
                    printf("你的分數：%d vs %d：電腦玩家的分數\n",selfpoint,compt);
                    printf("你的總分：%d\n",answer);
                    precooperate=cooperate;
                }
                else
                {
                    printf("必須輸入1或2來決定欺騙或者是合作喔！\n(這次輸入將不會計分！)\n");
                }
                printf("\n");
            }
            strcat(allplayers.players[j-1].htmname,".htm");
            FILE *player1fp=fopen(allplayers.players[j-1].htmname,"w");
            if(!player1fp)
            {
                printf("Cannot open %s",allplayers.players[j-1].htmname);
                return 1;
            }
            score[j-1]=sum(yourscore,&gametimes);
            strcpy(allplayers.players[j-1].txtname,allplayers.players[j-1].name);
            strcat(allplayers.players[j-1].txtname,".txt");
            FILE *player1txt=fopen(allplayers.players[j-1].txtname,"r");
            if(!player1txt)
            {
                printf("Cannot open %s",allplayers.players[j-1].name);
                return 1;
            }
            int num=0;
            fscanf(player1txt,"%d",&num);
            if(num<score[j-1])
            {
                if(num!=-100)
                {
                    printnewhighrecord[j-1]=true;
                }
                FILE *player1txt=fopen(allplayers.players[j-1].txtname,"w");
                num=score[j-1];
                allplayers.players[j-1].highestscore=num;
                fprintf(player1txt,"%d",score[j-1]);
            }
            else
            {
                allplayers.players[j-1].highestscore=num;
            }
            MakeCharacters(player1fp, &gametimes, yourscore, &(allplayers.players[j-1]));
            printf("\n");
            printf("此回合結束，\n下一位電腦玩家......\n\n\n");
            system("pause");
            system("cls");
            //------------------第一位玩家結束---------------------//
            break;
        }
        case 2:
        {
            //------------------第二位玩家開始---------------------//
            int choice_always_lie=0;
            selfpoint=0;
            compt=0;
            SetConsoleTextAttribute(hConsole, 0xF1 );
            printf("第%d/5位玩家\n",j);
            SetConsoleTextAttribute(hConsole, 0xF0 );
            printf("你的總分：%d\n",answer);
            bool bool_always_lie=0;
            gametimes=4;
            int yourscore[4]= {};
            for(int i=1; i<=gametimes; i++)
            {
                printf("你的選擇[(1)代表欺騙/(2)代表合作]：...>");
                scanf("%d",&choice_always_lie);
                if(choice_always_lie==1)
                {
                    bool_always_lie=false;
                    always_lie(bool_always_lie, &yourscore[i-1], &answer,&allplayers.players[j-1].compoint[i-1]);
                    compt+=allplayers.players[j-1].compoint[i-1];
                    selfpoint+=yourscore[i-1];
                    printf("你的分數：%d vs %d：電腦玩家的分數\n",selfpoint,compt);
                    printf("你的總分：%d\n",answer);
                }
                else if(choice_always_lie==2)
                {
                    bool_always_lie=true;
                    always_lie(bool_always_lie, &yourscore[i-1], &answer,&allplayers.players[j-1].compoint[i-1]);
                    compt+=allplayers.players[j-1].compoint[i-1];
                    selfpoint+=yourscore[i-1];
                    printf("你的分數：%d vs %d：電腦玩家的分數\n",selfpoint,compt);
                    printf("你的總分：%d\n",answer);
                }
                else
                {
                    printf("必須輸入1或2來決定欺騙或者是合作喔！\n(這次輸入將不會計分！)\n");
                }
                printf("\n");
            }
            strcat(allplayers.players[j-1].htmname,".htm");
            FILE *player2fp=fopen(allplayers.players[j-1].htmname,"w");
            if(!player2fp)
            {
                printf("Cannot open %s",allplayers.players[j-1].htmname);
                return 1;
            }
            score[j-1]=sum(yourscore,&gametimes);
            strcpy(allplayers.players[j-1].txtname,allplayers.players[j-1].name);
            strcat(allplayers.players[j-1].txtname,".txt");
            FILE *player2txt=fopen(allplayers.players[j-1].txtname,"r");
            if(!player2txt)
            {
                printf("Cannot open %s",allplayers.players[j-1].name);
                return 1;
            }
            int num=0;
            fscanf(player2txt,"%d",&num);
            //printf("%d", num);
            //printf("%d %d\n", num, score[j-1]);
            if(num<score[j-1])
            {
                if(num!=-100)
                {
                    printnewhighrecord[j-1]=true;
                }
                FILE *player2txt=fopen(allplayers.players[j-1].txtname,"w");
                num=score[j-1];
                allplayers.players[j-1].highestscore=num;
                //printf("print %d to %s", score[j-1], allplayers.players[j-1].txtname);
                fprintf(player2txt,"%d",score[j-1]);
            }
            else
            {
                allplayers.players[j-1].highestscore=num;
            }
            MakeCharacters(player2fp, &gametimes, yourscore, (&allplayers.players[j-1]));
            printf("此回合結束，\n下一位電腦玩家......\n\n\n");
            system("pause");
            system("cls");
            //------------------第二位玩家結束---------------------//
            break;
        }
        case 3:
        {
            //------------------第三位玩家開始---------------------//
            selfpoint=0;
            compt=0;
            SetConsoleTextAttribute(hConsole, 0xFD );
            printf("第%d/5位玩家\n",j);
            SetConsoleTextAttribute(hConsole, 0xF0 );
            printf("你的總分：%d\n",answer);
            gametimes=4;
            int yourscore[5]= {};
            int choice_always_cooperate=0;
            for(int i=1; i<=4; i++)
            {
                printf("你的選擇[(1)代表欺騙/(2)代表合作]：...>");
                scanf("%d",&choice_always_cooperate);
                if(choice_always_cooperate==1)
                {
                    always_cooperate(&choice_always_cooperate, &yourscore[i-1], &answer, &allplayers.players[j-1].compoint[i-1]);
                    compt+=allplayers.players[j-1].compoint[i-1];
                    selfpoint+=yourscore[i-1];
                    printf("你的分數：%d vs %d：電腦玩家的分數\n",selfpoint,compt);
                    printf("你的總分：%d\n",answer);
                }
                else if(choice_always_cooperate==2)
                {
                    always_cooperate(&choice_always_cooperate, &yourscore[i-1], &answer, &allplayers.players[j-1].compoint[i-1]);
                    compt+=allplayers.players[j-1].compoint[i-1];
                    selfpoint+=yourscore[i-1];
                    printf("你的分數：%d vs %d：電腦玩家的分數\n",selfpoint,compt);
                    printf("你的總分：%d\n",answer);
                }
                else
                {
                    printf("必須輸入1或2來決定欺騙或者是合作喔！\n(這次輸入將不會計分！)\n");
                }
                printf("\n");
            }
            score[j-1]=sum(yourscore,&gametimes);
            strcat(allplayers.players[j-1].htmname,".htm");
            FILE *player3fp=fopen(allplayers.players[j-1].htmname,"w");
            if(!player3fp)
            {
                printf("Cannot open %s",allplayers.players[j-1].htmname);
                return 1;
            }
            score[j-1]=sum(yourscore,&gametimes);
            strcpy(allplayers.players[j-1].txtname,allplayers.players[j-1].name);
            strcat(allplayers.players[j-1].txtname,".txt");
            FILE *player3txt=fopen(allplayers.players[j-1].txtname,"r");
            if(!player3txt)
            {
                printf("Cannot open %s",allplayers.players[j-1].name);
                return 1;
            }
            int num=0;
            fscanf(player3txt,"%d",&num);
            if(num<score[j-1])
            {
                if(num!=-100)
                {
                    printnewhighrecord[j-1]=true;
                }
                FILE *player3txt=fopen(allplayers.players[j-1].txtname,"w");
                num=score[j-1];
                allplayers.players[j-1].highestscore=num;
                fprintf(player3txt,"%d",score[j-1]);
            }
            else
            {
                allplayers.players[j-1].highestscore=num;
            }
            MakeCharacters(player3fp, &gametimes, yourscore, (&allplayers.players[j-1]));
            printf("此回合結束，\n下一位電腦玩家......\n\n\n");
            system("pause");
            system("cls");
            //------------------第三位玩家結束---------------------//
            break;
        }
        case 4:
        {
            //------------------第四位玩家開始---------------------//
            selfpoint=0;
            compt=0;
            int choice_foreverlie_afterbelied=0;
            SetConsoleTextAttribute(hConsole, 0xF2 );
            printf("第%d/5位玩家\n",j);
            SetConsoleTextAttribute(hConsole, 0xF0 );
            printf("你的總分：%d\n",answer);
            gametimes=5;
            int yourscore[5]= {};
            bool bool_foreverlie_afterbelied=false;
            for(int i=1; i<=gametimes; i++)
            {
                printf("你的選擇[(1)代表欺騙/(2)代表合作]：...>");
                scanf("%d",&choice_foreverlie_afterbelied);
                if(choice_foreverlie_afterbelied==1)
                {
                    foreverlie_afterbelied(choice_foreverlie_afterbelied, bool_foreverlie_afterbelied, &yourscore[i-1], &answer, &allplayers.players[j-1].compoint[i-1]);
                    compt+=allplayers.players[j-1].compoint[i-1];
                    selfpoint+=yourscore[i-1];
                    printf("你的分數：%d vs %d：電腦玩家的分數\n",selfpoint,compt);
                    printf("你的總分：%d\n",answer);
                    bool_foreverlie_afterbelied=true;
                }
                else if(choice_foreverlie_afterbelied==2)
                {
                    foreverlie_afterbelied(choice_foreverlie_afterbelied, bool_foreverlie_afterbelied, &yourscore[i-1], &answer, &allplayers.players[j-1].compoint[i-1]);
                    compt+=allplayers.players[j-1].compoint[i-1];
                    selfpoint+=yourscore[i-1];
                    printf("你的分數：%d vs %d：電腦玩家的分數\n",selfpoint,compt);
                    printf("你的總分：%d\n",answer);
                }
                else
                {
                    printf("必須輸入1或2來決定欺騙或者是合作喔！\n(這次輸入將不會計分！)\n");
                }
                printf("\n");
            }
            score[j-1]=sum(yourscore,&gametimes);
            strcat(allplayers.players[j-1].htmname,".htm");
            FILE *player4fp=fopen(allplayers.players[j-1].htmname,"w");
            if(!player4fp)
            {
                printf("Cannot open %s",allplayers.players[j-1].htmname);
                return 1;
            }
            score[j-1]=sum(yourscore,&gametimes);
            strcpy(allplayers.players[j-1].txtname,allplayers.players[j-1].name);
            strcat(allplayers.players[j-1].txtname,".txt");
            FILE *player4txt=fopen(allplayers.players[j-1].txtname,"r");
            if(!player4txt)
            {
                printf("Cannot open %s",allplayers.players[j-1].name);
                return 1;
            }
            int num=0;
            fscanf(player4txt,"%d",&num);
            if(num<score[j-1])
            {
                if(num!=-100)
                {
                    printnewhighrecord[j-1]=true;
                }
                FILE *player4txt=fopen(allplayers.players[j-1].txtname,"w");
                num=score[j-1];
                allplayers.players[j-1].highestscore=num;
                fprintf(player4txt,"%d",score[j-1]);
            }
            else
            {
                allplayers.players[j-1].highestscore=num;
            }
            MakeCharacters(player4fp, &gametimes, yourscore, (&allplayers.players[j-1]));
            printf("此回合結束，下一位玩家......\n\n\n");
            system("pause");
            system("cls");
            //------------------第四位玩家結束---------------------//
            break;
        }
        case 5:
        {
            //------------------第五位玩家開始---------------------//
            selfpoint=0;
            compt=0;
            SetConsoleTextAttribute(hConsole, 0xF6 );
            printf("第%d/5位玩家\n",j);
            SetConsoleTextAttribute(hConsole, 0xF0 );
            bool cooperate_complicate=true, cooperate_complicate_forward=true;
            int choice_complicate=0;
            gametimes=7;
            int yourscore[7]= {};
            bool foreverlie=false;
            printf("你的總分：%d\n",answer);
            for(int i=1; i<=gametimes; i++)
            {
                printf("你的選擇[(1)代表欺騙/(2)代表合作]：...>");
                scanf("%d",&choice_complicate);
                if(choice_complicate==1)
                {
                    cooperate_complicate=false;
                    complicate(cooperate_complicate, cooperate_complicate_forward, i, &foreverlie, choice_complicate, &yourscore[i-1], &answer, &allplayers.players[j-1].compoint[i-1]);
                    compt+=allplayers.players[j-1].compoint[i-1];
                    selfpoint+=yourscore[i-1];
                    printf("你的分數：%d vs %d：電腦玩家的分數\n",selfpoint,compt);
                    printf("你的總分：%d\n",answer);
                    cooperate_complicate_forward=cooperate_complicate;
                }
                else if(choice_complicate==2)
                {
                    cooperate_complicate=true;
                    complicate(cooperate_complicate, cooperate_complicate_forward, i, &foreverlie, choice_complicate, &yourscore[i-1], &answer,&allplayers.players[j-1].compoint[i-1]);
                    compt+=allplayers.players[j-1].compoint[i-1];
                    selfpoint+=yourscore[i-1];
                    printf("你的分數：%d vs %d：電腦玩家的分數\n",selfpoint,compt);
                    printf("你的總分：%d\n",answer);
                    cooperate_complicate_forward=cooperate_complicate;
                }
                else
                {
                    printf("必須輸入1或2來決定欺騙或者是合作喔！\n(這次輸入將不會計分！)\n");
                }
                printf("\n");
            }
            score[j-1]=selfpoint;
            strcat(allplayers.players[j-1].htmname,".htm");
            FILE *player5fp=fopen(allplayers.players[j-1].htmname,"w");
            if(!player5fp)
            {
                printf("Cannot open %s",allplayers.players[j-1].htmname);
                return 1;
            }
            score[j-1]=sum(yourscore,&gametimes);
            strcpy(allplayers.players[j-1].txtname,allplayers.players[j-1].name);
            strcat(allplayers.players[j-1].txtname,".txt");
            FILE *player5txt=fopen(allplayers.players[j-1].txtname,"r");
            if(!player5txt)
            {
                printf("Cannot open %s",allplayers.players[j-1].name);
                return 1;
            }
            int num=0;
            fscanf(player5txt,"%d",&num);
            if(num<score[j-1])
            {
                if(num!=-100)
                {
                    printnewhighrecord[j-1]=true;
                }
                FILE *player5txt=fopen(allplayers.players[j-1].txtname,"w");
                num=score[j-1];
                allplayers.players[j-1].highestscore=num;
                fprintf(player5txt,"%d",score[j-1]);
            }
            else
            {
                allplayers.players[j-1].highestscore=num;
            }
            MakeCharacters(player5fp, &gametimes, yourscore, (&allplayers.players[j-1]));
            system("pause");
            system("cls");
            break;
        }
        }
    }
    bool sumnewhigh = false;
    printf("你的最終得分是：");
    SetConsoleTextAttribute(hConsole, 0xFC );
    printf("%d\n",answer);
    FILE *sumfp = fopen("Sum.txt", "r");
    int num=0;
    fscanf(sumfp, "%d", &num);
    fclose(sumfp);
    if(num<answer)
    {
        FILE *sumfp = fopen("Sum.txt", "w");
        fprintf(sumfp, "%d", answer);
        fclose(sumfp);
        if(num!=-100)
        {
            printnewrecord(1);
        }
    }
    SetConsoleTextAttribute(hConsole, 0xF0 );
    printf("（最低分為7分，最高分為49分）\n");
    printf("所以，剛剛跟你對戰的那些奇怪角色到底是誰呢？\n\n");
    for(int j=1; j<=PlayerNum; j++)
    {
        switch(j)
        {
        case 1:
        {
            SetConsoleTextAttribute(hConsole, 0xF9 );
            printf("%s(%s)： \n哈囉！我第一次會出「合作」。\n之後，我會選和你前一步一模一樣的選擇喔喵～\n",EnglishNames[j-1],ChineseNames[j-1]);
            printf("（你在他手中總共得到%d分）",score[j-1]);
            printnewrecord(printnewhighrecord[j-1]);
            printf("\n\n");
            SetConsoleTextAttribute(hConsole, 0xF0 );
            break;
        }
        case 2:
        {
            SetConsoleTextAttribute(hConsole, 0xF1 );
            printf("%s(%s)： \n絕不合作，這是弱肉強食的世界\n",EnglishNames[j-1],ChineseNames[j-1]);
            printf("（你在他手中總共得到%d分）",score[j-1]);
            printnewrecord(printnewhighrecord[j-1]);
            printf("\n\n");
            break;
        }
        case 3:
        {
            SetConsoleTextAttribute(hConsole, 0xFD );
            printf("%s(%s)： \n我們大家做朋友吧！ <3\n",EnglishNames[j-1],ChineseNames[j-1]);
            printf("（你在他手中總共得到%d分）",score[j-1]);
            printnewrecord(printnewhighrecord[j-1]);
            printf("\n\n");
            break;
        }
        case 4:
        {
            SetConsoleTextAttribute(hConsole, 0xF2 );
            printf("%s(%s)： \n我哞佮意輸的感覺。\n我會先給你面子「合作」，但是最好不要用「欺騙」惹我生氣，我袂爽就會想要報仇！\n",EnglishNames[j-1],ChineseNames[j-1]);
            printf("（你在他手中總共得到%d分）",score[j-1]);
            printnewrecord(printnewhighrecord[j-1]);
            printf("\n\n");
            break;
        }
        case 5:
        {
            SetConsoleTextAttribute(hConsole, 0xF6 );
            printf("%s(%s)： \n分析人是我的特長。\n遊戲開始我會「合作」、「欺騙」、「合作」、「合作」。\n如果你反過來欺騙我，我就會像模仿貓那樣跟著你出牌。\n如果你一直不騙回來，那我就會像黑到底那樣榨乾你，嘿嘿嘿～。\n這是常識啊，我親愛的花生兒～\n",EnglishNames[j-1],ChineseNames[j-1]);
            printf("（你在他手中總共得到%d分）",score[j-1]);
            printnewrecord(printnewhighrecord[j-1]);
            printf("\n\n");
            break;
        }
        }
    }
    for(int i=0; i<PlayerNum; i++)
    {
        printnewhighrecord[i]=false;
    }
    FILE *allfp=fopen("Allplayer.htm","w");
    if(!allfp)
    {
        printf("Cannot open Allplayer.htm");
        return 1;
    }
    MakeAll(allfp, &allplayers);
    SetConsoleTextAttribute(hConsole, 0xF0 );
    system("pause");
    system("cls");
    printf("那麼...如果讓這些角色");
    SetConsoleTextAttribute(hConsole, 0xFC );
    printf("自己展開博奕");
    SetConsoleTextAttribute(hConsole, 0xF0 );
    printf("，結果又會是怎樣呢？\n");
    system("pause");
    system("cls");
    printf("現在要進行的是每局走10步，總共玩10局，你覺得哪個角色總分會最高，能夠笑到最後呢（成為最後的贏家）？ 仔細想清楚，然後...請做出你的選擇：\n");
    SetConsoleTextAttribute(hConsole, 0xF9 );
    printf("(1)%s (%s) ：模仿對方的前一個動作\n",EnglishNames[0],ChineseNames[0]);
    SetConsoleTextAttribute(hConsole, 0xF1 );
    printf("(2)%s (%s) ：永遠欺騙，絕不合作\n",EnglishNames[1],ChineseNames[1]);
    SetConsoleTextAttribute(hConsole, 0xFD );
    printf("(3)%s (%s) ：永遠合作，絕不欺騙\n",EnglishNames[2],ChineseNames[2]);
    SetConsoleTextAttribute(hConsole, 0xF2 );
    printf("(4)%s (%s) ：先合作，但是一旦被騙，就永遠欺騙\n",EnglishNames[3],ChineseNames[3]);
    SetConsoleTextAttribute(hConsole, 0xF6 );
    printf("(5)%s (%s) ：合作、欺騙、合作、合作，之後如果你欺騙，就會按照模仿貓的模式，如果你一直不反擊，就會變成黑到底\n",EnglishNames[4],ChineseNames[4]);
    SetConsoleTextAttribute(hConsole, 0xF0 );

    int player_choice=0;
    printf("...>");
    scanf("%d",&player_choice);
    while(player_choice>5 || player_choice<1)
    {
        printf("必須輸入1~5的數字喔...>");
        scanf("%d",&player_choice);
    }
    printf("好，你選的是");
    switch(player_choice)
    {
    case 1:
    {
        SetConsoleTextAttribute(hConsole, 0xF9 );
        printf("%s，\n", ChineseNames[player_choice-1]);
        break;
    }
    case 2:
    {
        SetConsoleTextAttribute(hConsole, 0xF1 );
        printf("%s，\n", ChineseNames[player_choice-1]);
        break;
    }
    case 3:
    {
        SetConsoleTextAttribute(hConsole, 0xFD );
        printf("%s，\n", ChineseNames[player_choice-1]);
        break;
    }
    case 4:
    {
        SetConsoleTextAttribute(hConsole, 0xF2 );
        printf("%s，\n", ChineseNames[player_choice-1]);
        break;
    }
    case 5:
    {
        SetConsoleTextAttribute(hConsole, 0xF6 );
        printf("%s，\n", ChineseNames[player_choice-1]);
        break;
    }
    }
    SetConsoleTextAttribute(hConsole, 0xF0 );
    printf("我們現在一個一個來看看吧！第一局的賽局如何呢?\n");
    system("pause");
    system("cls");
    int player[PlayerNum]= {};
    for(int i=1; i<=10; i++)
    {
        switch(i)
        {
        case 1:
        {
            SetConsoleTextAttribute(hConsole, 0xF0 );
            printf("第一局：\n");
            SetConsoleTextAttribute(hConsole, 0xF9 );
            printf("模仿貓 ");
            SetConsoleTextAttribute(hConsole, 0xF0 );
            printf("對陣 ");
            SetConsoleTextAttribute(hConsole, 0xF1 );
            printf("黑你黑到底\n\n");
            int com1[10]= {}, com2[10]= {}, vs[10]= {},sum1=0,sum2=0;
            SetConsoleTextAttribute(hConsole, 0xF0 );
            printf("*********************************");
            printf("\n* 每步戰況：                    *\n");
            for(int j=0; j<10; j++)
            {
                if(j==0)
                {
                    vs[j]=1;
                }
                game(vs[j],&com1[j],&com2[j]);
                printf("* ");
                SetConsoleTextAttribute(hConsole, 0xF9 );
                printf("模仿貓：%2d",com1[j]);
                SetConsoleTextAttribute(hConsole, 0xF0 );
                printf("  vs ");
                SetConsoleTextAttribute(hConsole, 0xF1 );
                printf("%2d：黑你黑到底", com2[j]);
                SetConsoleTextAttribute(hConsole, 0xF0 );
                printf(" *\n");
                sum1+=com1[j];
                sum2+=com2[j];
            }
            printf("*");
            SetConsoleTextAttribute(hConsole, 0xF1 );
            printf(" 總分：%2d vs %2d                ",sum1,sum2);
            SetConsoleTextAttribute(hConsole, 0xF0 );
            printf("*\n*********************************\n");
            SetConsoleTextAttribute(hConsole, 0xF1 );
            printf("\n喔，對了...\n\n");
            player[0]+=sum1;
            player[1]+=sum2;
            system("pause");
            system("cls");
            break;
        }
        case 2:
        {
            SetConsoleTextAttribute(hConsole, 0xF0 );
            printf("第二局：\n");
            SetConsoleTextAttribute(hConsole, 0xF9 );
            printf("模仿貓 ");
            SetConsoleTextAttribute(hConsole, 0xF0 );
            printf("對陣 ");
            SetConsoleTextAttribute(hConsole, 0xFD );
            printf("大善人\n\n");
            SetConsoleTextAttribute(hConsole, 0xF0 );
            int sum1=0,sum2=0,com1[10]= {},com2[10]= {};
            SetConsoleTextAttribute(hConsole, 0xF0 );
            printf("*****************************");
            printf("\n* 每步戰況：                *\n");
            for(int j=0; j<10; j++)
            {
                int notcooperate = 2;
                game(notcooperate,&com1[j],&com2[j]);
                printf("* ");
                SetConsoleTextAttribute(hConsole, 0xF9 );
                printf("模仿貓：%2d",com1[j]);
                SetConsoleTextAttribute(hConsole, 0xF0 );
                printf("  vs ");
                SetConsoleTextAttribute(hConsole, 0xFD );
                printf("%2d：大善人 ", com2[j]);
                SetConsoleTextAttribute(hConsole, 0xF0 );
                printf("*\n");
                sum1+=com1[j];
                sum2+=com2[j];
            }
            printf("*");
            SetConsoleTextAttribute(hConsole, 0xF0 );
            printf("總分：%2d vs %2d             ",sum1,sum2);
            SetConsoleTextAttribute(hConsole, 0xF0 );
            printf("*\n*****************************\n");
            printf("\n...你可能有點懷疑之前所說的，戰壕裡聖誕節休戰的故事。那只是碰巧吧？\n\n");
            player[0]+=sum1;
            player[2]+=sum2;
            system("pause");
            system("cls");
            break;
        }
        case 3:
        {
            SetConsoleTextAttribute(hConsole, 0xF0 );
            printf("第三局：\n");
            SetConsoleTextAttribute(hConsole, 0xF9 );
            printf("模仿貓 ");
            SetConsoleTextAttribute(hConsole, 0xF0 );
            printf("對陣");
            SetConsoleTextAttribute(hConsole, 0xF2 );
            printf(" 牛文聰\n\n");
            SetConsoleTextAttribute(hConsole, 0xF0 );
            printf("*****************************");
            printf("\n* 每步戰況：                *\n");
            int com1[10]= {},com2[10]= {},sum1=0,sum2=0;
            for(int j=0; j<10; j++)
            {
                int notcooperate=2;
                game(notcooperate, &com1[j], &com2[j]);

                printf("* ");
                SetConsoleTextAttribute(hConsole, 0xF9 );
                printf("模仿貓：%2d",com1[j]);
                SetConsoleTextAttribute(hConsole, 0xF0 );
                printf("  vs ");
                SetConsoleTextAttribute(hConsole, 0xF2 );
                printf("%2d：牛文聰 ", com2[j]);
                SetConsoleTextAttribute(hConsole, 0xF0 );
                printf("*\n");
                sum1+=com1[j];
                sum2+=com2[j];
            }
            printf("* ");
            SetConsoleTextAttribute(hConsole, 0xF1 );
            printf("總分：%d vs %d            *\n",sum1,sum2);
            printf("*****************************\n");
            SetConsoleTextAttribute(hConsole, 0xF0 );
            printf("\n沒錯，休戰看起來還是挺戲劇化的，但是既不能說是獨一無二，也不能說是不尋常。\n\n");
            player[0]+=sum1;
            player[3]+=sum2;
            system("pause");
            system("cls");
            break;
        }
        case 4:
        {
            SetConsoleTextAttribute(hConsole, 0xF0 );
            printf("第四局：\n");
            SetConsoleTextAttribute(hConsole, 0xF9 );
            printf("模仿貓 ");
            SetConsoleTextAttribute(hConsole, 0xF0 );
            printf("對陣");
            SetConsoleTextAttribute(hConsole, 0xF6 );
            printf(" 福爾摩星兒\n");
            SetConsoleTextAttribute(hConsole, 0xF0 );
            int vs[10]= {},com1[10]= {},com2[10]= {},sum1=0,sum2=0;
            printf("\n*********************************");
            printf("\n* 每步戰況：                    *\n");
            for(int j=0; j<10; j++)
            {
                if(j==1)
                {
                    vs[j]=1;
                }
                else if(j==2)
                {
                    vs[j]=3;
                }
                else
                {
                    vs[j]=2;
                }
                game(vs[j], &com1[j], &com2[j]);
                printf("* ");
                SetConsoleTextAttribute(hConsole, 0xF9 );
                printf("模仿貓：%2d",com1[j]);
                SetConsoleTextAttribute(hConsole, 0xF0 );
                printf("  vs ");
                SetConsoleTextAttribute(hConsole, 0xF6 );
                printf("%2d：福爾摩星兒 ", com2[j]);
                SetConsoleTextAttribute(hConsole, 0xF0 );
                printf("*\n");
                sum1+=com1[j];
                sum2+=com2[j];
            }
            SetConsoleTextAttribute(hConsole, 0xF0 );
            printf("* ");
            printf("總分：%d vs %d                *\n",sum1,sum2);
            printf("*********************************\n");
            printf("\n並不是每個戰壕都會達成和平，然而這種現象還是相當普遍。\n再次強調，雖然有明確、嚴格的軍令禁止，但是有非常多的前線部隊，都會不約而同地達成和平。\n\n");
            player[0]+=sum1;
            player[4]+=sum2;
            system("pause");
            system("cls");
            break;
        }
        case 5:
        {
            SetConsoleTextAttribute(hConsole, 0xF0 );
            printf("第五局：\n");
            SetConsoleTextAttribute(hConsole, 0xF1 );
            printf("黑你黑到底 ");
            SetConsoleTextAttribute(hConsole, 0xF0 );
            printf("對陣");
            SetConsoleTextAttribute(hConsole, 0xFD );
            printf(" 大善人\n\n");
            SetConsoleTextAttribute(hConsole, 0xF0 );
            printf("**********************************");
            printf("\n* 每步戰況：                     *\n");
            int com1[10]= {},com2[10]= {},sum1=0,sum2=0;
            for(int j=0; j<10; j++)
            {
                int notcooperate=3;
                game(notcooperate, &com1[j], &com2[j]);
                printf("* ");
                SetConsoleTextAttribute(hConsole, 0xF1 );
                printf("黑你黑到底：%2d  ",com1[j]);
                SetConsoleTextAttribute(hConsole, 0xF0 );
                printf("vs");
                SetConsoleTextAttribute(hConsole, 0xFD );
                printf(" %2d ：大善人 ", com2[j]);
                SetConsoleTextAttribute(hConsole, 0xF0 );
                printf("*\n");
                sum1+=com1[j];
                sum2+=com2[j];
            }
            printf("* ");
            SetConsoleTextAttribute(hConsole, 0xF1 );
            printf("總分：%d vs %d                *\n",sum1,sum2);
            SetConsoleTextAttribute(hConsole, 0xF0 );
            printf("**********************************\n");
            SetConsoleTextAttribute(hConsole, 0xF1 );
            printf("\n而且事實上，即使在聖誕節之前，有些前線部隊就已經悄悄地達成了非官方的和平。\n\n");
            player[1]+=sum1;
            player[2]+=sum2;
            system("pause");
            system("cls");
            break;
        }
        case 6:
        {
            SetConsoleTextAttribute(hConsole, 0xF0 );
            printf("第六局：\n");
            SetConsoleTextAttribute(hConsole, 0xF1 );
            printf("黑你黑到底 ");
            SetConsoleTextAttribute(hConsole, 0xF0 );
            printf("對陣");
            SetConsoleTextAttribute(hConsole, 0xF2 );
            printf(" 牛文聰\n");
            SetConsoleTextAttribute(hConsole, 0xF0 );
            int com1[10]= {},com2[10]= {},sum1=0,sum2=0;
            int notcooperate=3;
            printf("\n**********************************\n");
            printf("* 每步戰況                       *\n");
            for(int j=0; j<10; j++)
            {
                game(notcooperate, &com1[j], &com2[j]);
                SetConsoleTextAttribute(hConsole, 0xF0 );
                printf("*");
                SetConsoleTextAttribute(hConsole, 0xF1 );
                printf(" 黑你黑到底：%2d  vs",com1[j]);
                SetConsoleTextAttribute(hConsole, 0xF2 );
                printf(" %2d ：牛文聰", com2[j]);
                SetConsoleTextAttribute(hConsole, 0xF0 );
                printf(" *\n");
                sum1+=com1[j];
                sum2+=com2[j];
                notcooperate=0;
            }
            SetConsoleTextAttribute(hConsole, 0xF1 );
            printf("* 總分：%d vs %d                  *\n",sum1,sum2);
            SetConsoleTextAttribute(hConsole, 0xF0 );
            printf("**********************************\n");
            SetConsoleTextAttribute(hConsole, 0xF1 );
            printf("\n他們把這個叫做：");
            printf("「互惠寬容（live and let live）」");
            printf("。簡單來說，就是你不打我，我也就不打你。而且這種情況在很多地方都適用。\n\n");
            player[1]+=sum1;
            player[3]+=sum2;
            system("pause");
            system("cls");
            break;
        }
        case 7:
        {
            SetConsoleTextAttribute(hConsole, 0xF0 );
            printf("第七局：\n");
            SetConsoleTextAttribute(hConsole, 0xF1 );
            printf("黑你黑到底 ");
            printf("對陣");
            SetConsoleTextAttribute(hConsole, 0xF6 );
            printf(" 福爾摩星兒\n");
            SetConsoleTextAttribute(hConsole, 0xF0 );
            int vs[10]= {},com1[10]= {},com2[10]= {},sum1=0,sum2=0;
            printf("\n**************************************\n");
            printf("* 每步戰況                           *\n");
            for(int j=0; j<10; j++)
            {
                if(j==0 || j==2 || j==3)
                {
                    vs[j]=3;
                }
                game(vs[j], &com1[j], &com2[j]);
                printf("* ");
                SetConsoleTextAttribute(hConsole, 0xF1 );
                printf("黑你黑到底：%2d",com1[j]);
                SetConsoleTextAttribute(hConsole, 0xF0 );
                printf("  vs ");
                SetConsoleTextAttribute(hConsole, 0xF6 );
                printf(" %2d：福爾摩星兒", com2[j]);
                SetConsoleTextAttribute(hConsole, 0xF0 );
                printf(" *\n");
                sum1+=com1[j];
                sum2+=com2[j];
            }
            printf("* ");
            SetConsoleTextAttribute(hConsole, 0xF1 );
            printf("總分：%d vs %d                      *",sum1,sum2);
            SetConsoleTextAttribute(hConsole, 0xF0 );
            printf("\n**************************************\n");
            SetConsoleTextAttribute(hConsole, 0xF1 );
            printf("\n你可能還會有疑惑。一般士兵並不會自發地與敵人達成和平，為什麼在戰壕裡的陣地戰時就格外不同呢？\n\n");
            player[1]+=sum1;
            player[4]+=sum2;
            system("pause");
            system("cls");
            break;
        }
        case 8:
        {
            SetConsoleTextAttribute(hConsole, 0xF0 );
            printf("第八局：\n");
            SetConsoleTextAttribute(hConsole, 0xFD );
            printf("大善人 ");
            SetConsoleTextAttribute(hConsole, 0xF0 );
            printf("對陣");
            SetConsoleTextAttribute(hConsole, 0xF2 );
            printf(" 牛文聰\n");
            SetConsoleTextAttribute(hConsole, 0xF0 );
            printf("\n*****************************\n");
            printf("* 每步戰況                  *\n");
            int com1[10]= {},com2[10]= {},sum1=0,sum2=0;
            for(int j=0; j<10; j++)
            {
                int cooperate=2;
                game(cooperate, &com1[j], &com2[j]);
                printf("* ");
                SetConsoleTextAttribute(hConsole, 0xFD );
                printf("大善人：%2d",com1[j]);
                SetConsoleTextAttribute(hConsole, 0xF0 );
                printf("  vs ");
                SetConsoleTextAttribute(hConsole, 0xF2 );
                printf("%2d：牛文聰", com2[j]);
                SetConsoleTextAttribute(hConsole, 0xF0 );
                printf(" *\n");
                sum1+=com1[j];
                sum2+=com2[j];
            }
            SetConsoleTextAttribute(hConsole, 0xF0 );
            printf("* 總分：%d vs %d            *\n",sum1,sum2);
            printf("*****************************\n");
            printf("\n那是因為，陣地戰跟其他形式的戰役不同：在陣地戰中，你每天都會面對的是同一批軍人。\n\n");
            player[2]+=sum1;
            player[3]+=sum2;
            system("pause");
            system("cls");
            break;
        }
        case 9:
        {
            SetConsoleTextAttribute(hConsole, 0xF0 );
            printf("第九局：\n");
            SetConsoleTextAttribute(hConsole, 0xFD );
            printf("大善人 ");
            SetConsoleTextAttribute(hConsole, 0xF0 );
            printf("對陣");
            SetConsoleTextAttribute(hConsole, 0xF6 );
            printf(" 福爾摩星兒\n");
            SetConsoleTextAttribute(hConsole, 0xF0 );
            printf("\n*********************************\n");
            printf("* 每步戰況：                    *\n");
            int vs[10]= {},com1[10]= {},com2[10]= {},sum1=0,sum2=0;
            for(int j=0; j<10; j++)
            {
                if(j==0 || j==2 || j==3)
                {
                    vs[j]=2;
                }
                else
                {
                    vs[j]=1;
                }
                game(vs[j], &com1[j], &com2[j]);
                printf("* ");
                SetConsoleTextAttribute(hConsole, 0xFD );
                printf("大善人：%2d",com1[j]);
                SetConsoleTextAttribute(hConsole, 0xF0 );
                printf("  vs ");
                SetConsoleTextAttribute(hConsole, 0xF6 );
                printf("%2d：福爾摩星兒", com2[j]);
                SetConsoleTextAttribute(hConsole, 0xF0 );
                printf(" *\n");
                sum1+=com1[j];
                sum2+=com2[j];
            }
            printf("* ");
            SetConsoleTextAttribute(hConsole, 0xF6 );
            printf("總分：%d vs %d                ",sum1,sum2);
            SetConsoleTextAttribute(hConsole, 0xF0 );
            printf("*");
            printf("\n*********************************\n");
            SetConsoleTextAttribute(hConsole, 0xF6 );
            printf("\n這是一場重複遊戲。這一點，讓陣地戰與其他的戰爭完全不同。\n\n");
            player[2]+=sum1;
            player[4]+=sum2;
            system("pause");
            system("cls");
            break;
        }
        case 10:
        {
            SetConsoleTextAttribute(hConsole, 0xF0 );
            printf("第十局：\n");
            SetConsoleTextAttribute(hConsole, 0xF2 );
            printf("牛文聰 ");
            SetConsoleTextAttribute(hConsole, 0xF0 );
            printf("對陣");
            SetConsoleTextAttribute(hConsole, 0xF6 );
            printf(" 福爾摩星兒\n");
            SetConsoleTextAttribute(hConsole, 0xF0 );
            printf("\n*********************************\n");
            printf("* 每步戰況：                    *\n");
            int vs[10]= {},com1[10]= {},com2[10]= {},sum1=0,sum2=0;
            for(int j=0; j<10; j++)
            {
                if(j==0)
                {
                    vs[j]=2;
                }
                else if(j==2 || j==3)
                {
                    vs[j]=3;
                }
                else if(j==1)
                {
                    vs[j]=1;
                }
                game(vs[j], &com1[j], &com2[j]);
                printf("* ");
                SetConsoleTextAttribute(hConsole, 0xF2 );
                printf("牛文聰：%2d",com1[j]);
                SetConsoleTextAttribute(hConsole, 0xF0 );
                printf("  vs ");
                SetConsoleTextAttribute(hConsole, 0xF6 );
                printf("%2d：福爾摩星兒", com2[j]);
                SetConsoleTextAttribute(hConsole, 0xF0 );
                printf(" *\n");
                sum1+=com1[j];
                sum2+=com2[j];
            }
            printf("* ");
            SetConsoleTextAttribute(hConsole, 0xF2 );
            printf("總分：%d vs %d                  ",sum1,sum2);
            SetConsoleTextAttribute(hConsole, 0xF0 );
            printf("*");
            printf("\n*********************************\n");
            SetConsoleTextAttribute(hConsole, 0xF2 );
            printf("\n好，我們先回到比賽裡。這次的贏家就是...(鼓聲)\n\n");
            player[3]+=sum1;
            player[4]+=sum2;
            system("pause");
            system("cls");
            break;
        }
        }
    }
    SetConsoleTextAttribute(hConsole, 0xF0 );
    system("pause");
    printf("\n");
    for(int i=0; i<PlayerNum; i++)
    {
        switch(i)
        {

        case 0:
        {
            SetConsoleTextAttribute(hConsole, 0xF9 );
            print_sum(player[i]);
            break;
        }
        case 1:
        {
            SetConsoleTextAttribute(hConsole, 0xF1 );
            print_sum(player[i]);
            break;
        }
        case 2:
        {
            SetConsoleTextAttribute(hConsole, 0xFD );
            print_sum(player[i]);
            break;
        }
        case 3:
        {
            SetConsoleTextAttribute(hConsole, 0xF2 );
            print_sum(player[i]);
            break;
        }
        case 4:
        {
            SetConsoleTextAttribute(hConsole, 0xF6 );
            print_sum(player[i]);
            break;
        }
        }
        Sleep(200);
    }
    SetConsoleTextAttribute(hConsole, 0xF0 );
    printf("恭喜勝利(總積分最高)的");
    SetConsoleTextAttribute(hConsole, 0xF9 );
    printf("Copy Cat(模仿貓)");
    SetConsoleTextAttribute(hConsole, 0xF0 );
    printf("！！！(歡呼~~)\n");
    if(player_choice==1)
    {
        SetConsoleTextAttribute(hConsole, 0xFC );
        printf("恭喜你答對了！\n\n");
    }
    else
    {
        printf("（對不起啦~ ");
        printf("%s ", EnglishNames[player_choice-1]);
        printf("%s ", ChineseNames[player_choice-1]);
        printf("~）\n\n");
    }
    SetConsoleTextAttribute(hConsole, 0xF9 );
    printf("模仿貓");
    SetConsoleTextAttribute(hConsole, 0xF0 );
    printf("也有很多別名，像是");
    SetConsoleTextAttribute(hConsole, 0xFC );
    printf("黃金定律、互惠利他主義、以牙還牙，或者說互惠寬容。");
    SetConsoleTextAttribute(hConsole, 0xF0 );
    printf("\n\n這就是為什麼「和平」會如雨後春筍一般，在一戰的戰壕中蔓延開來：當你被迫每天與同一批人——不僅僅是普遍意義上的「敵人」，\n\n而是同樣的一批人——進行同樣的遊戲（例如戰爭）時，");
    SetConsoleTextAttribute(hConsole, 0xF9 );
    printf("模仿貓");
    SetConsoleTextAttribute(hConsole, 0xF0 );
    printf("這樣的人");
    SetConsoleTextAttribute(hConsole, 0xFC );
    printf("不單單會贏得一場戰役，他們會贏得整場戰爭。\n\n");
    SetConsoleTextAttribute(hConsole, 0xF0 );
    system("pause");
    system("cls");
    printf("當然，");
    SetConsoleTextAttribute(hConsole, 0xFC );
    printf("一個人要贏得你的信任，或者是你要贏得他人的信任，並不是一個簡單的遊戲就可以解決，\n\n還有意外、利害關係");
    SetConsoleTextAttribute(hConsole, 0xF0 );
    printf("...等很多的因素。\n\n人際的關係錯綜複雜，");
    SetConsoleTextAttribute(hConsole, 0xFC );
    printf("每個人的性格、原則都有所不同，就如同遊戲裡的角色一樣，都有自己的個性，");
    SetConsoleTextAttribute(hConsole, 0xF0 );
    printf("我們很難真正理解和解決每一個問題。\n\n");
    printf("今天的遊戲就到這裡告一段落，希望能讓你有所收穫。\n\n");
    SetConsoleTextAttribute(hConsole, 0xFC );
    printf("ps:別忘了到程式結束後的網頁看看你的遊戲紀錄喔!)\n\n");
    SetConsoleTextAttribute(hConsole, 0xF0 );
    printf("再見囉~\n\n");
    printf("===========遊戲結束===========\n\n");
    system("pause");
    system("cls");
    return 0;
}
