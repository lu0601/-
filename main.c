#include "function.h"
//#include "function.c"
int main()
{
    system("cls");
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    system("color f0");
    printf("�H�����p�C���G\n\n�ǳƦn�n�}�l�F��?\n\n");
    system("pause");
    system("cls");
    printf("�{�b�A�Q���A���e���O��H�@�_�ϥΪ������A�A�M�t�@�ӤH�@�_�ϥΡA�����H�����۹j�A�A�b�����ӥt�@�ӤH�b�������k���G\n\n(�A�̨�쳣�ݤ����誺�M�w)\n\n");
    printf("�W�h�O");
    printf("��");
    SetConsoleTextAttribute(hConsole, 0xFC );
    printf("�A��i�h 1 �T�w���A���|�o�� 3 �T�w���A�Ϥ���M�C\n\n");
    SetConsoleTextAttribute(hConsole, 0xF0 );
    printf("�A�̨�쳣�i�H���");
    SetConsoleTextAttribute(hConsole, 0xFC );
    printf("�u�X�@�v�]�� 1 �T�w���^");
    SetConsoleTextAttribute(hConsole, 0xF0 );
    printf("�Ϊ�");
    printf("�u���F�v�]����w���^�C\n\n");
    printf("�p�G�{�b���G���|��u���F�v�G����w���i�h�A���䪺�A�A�ӫ�򰵩O�H\n\n");
    printf("�A����ܬO(1)�N����F�A(2)�N��X�@�G...>");
    int score[5]= {};
    int choice1=0;
    while(scanf("%d",&choice1)==1)
    {
        printf("\n====================================\n");
        if(choice1==1)
        {
            printf("\n");
            printf("�N�O�o�ˡI�̤���n�K�y�L�H\n\n");
            printf("�p�G�A�X�@");
            printf("�A���O����ܴ��F");
            printf("�A�A�N���h 1 �T�w���A���O���i�H�o�� 3 �T�]-1:+3�^�C\n\n");
            printf("���O�A�p�G�A�̨�쳣��ܴ��F");
            printf("�A��");
            printf("��H���J�o���줰��A�]���|���h����]0�G0�^�C\n\n");
            printf("�ҥH�G����");
            printf("�u�@��H�ʡv");
            printf("�ӻ�");
            printf("�A�A���ӿ�ܡu���F�v�C\n\n");
            break;
        }
        else if(choice1==2)
        {
            printf("\n");
            printf("�⥪�y�]���L�h�A�u�|�h���@�U���A�S���n�B�r�I\n\n");
            printf("�p�G�A�X�@�A���O����ܴ��F�A�A�N���h 1 �T�w���A���O���i�H�o�� 3 �T�]-1:+3�^�C\n\n");
            printf("���O�A�p�G�A�̨�쳣��ܴ��F�A����H���J�o���줰��A�]���|���h����]0�G0�^�C\n\n");
            printf("�ҥH�G���ӡu�@��H�ʡv�ӻ��A�A���ӿ�ܡu���F�v�C\n\n");
            break;
        }
        else
        {
            printf("\n");
            printf("(������J1��2�ӨM�w���F�Ϊ̬O�X�@��I)\n�ЦA��J�@���a�I\n\n");
        }
    }
    system("pause");
    system("cls");
    printf("���O�A�p�G�ڧi�D�A�A���N��ܦX�@�G�L�|�� 1 �T�w���C\n\n");
    printf("�A�{�b�S�ӫ�򰵩O�H\n\n�A����ܬO(1)�N����F�A(2)�N��X�@�G...>");
    while(scanf("%d",&choice1)==1)
    {
        printf("\n====================================\n");
        if(choice1==1)
        {
            printf("\n");
            printf("�z�K�K���I�ʼw�ڡ㤣�L�A�o�O���T�����סI\n\n");
            printf("�p�G�A�̨�쳣��ܤF�X�@�A�A�̦U�I�X�F 1 �T�w����A�o��F 3 �T�]+2:+2�^�C\n\n");
            printf("���O�A�p�G�A��ܴ��F�A���O���o�X�@�A�A�N�Ȩ� 3 �T�w���A�����|���h 1 �T�]+3:-1�^�C \n\n");
            printf("�ҥH�A�A�٬O�u���ӡv��ܴ��F�A��ۤv�̦��Q�C\n\n");
            break;
        }
        else if(choice1==2)
        {
            printf("\n");
            printf("�S���A�ݰ_�ӽT�����ӳo�ˡK�K���O�A�J�ӷQ�Q�A�O�ܡH \n\n");
            printf("�p�G�A�̨�T����ܤF�X�@�A�A�̦U�I�X�F 1 �T�w����A�o��F 3 �T�]+2:+2�^�C\n\n");
            printf("���O�A�p�G�A��ܴ��F�A���O���o�X�@�A�A�N�Ȩ� 3 �T�w���A�����|���h 1 �T�]+3:-1�^�C \n\n");
            printf("�ҥH�A�A�٬O�u���ӡv��ܴ��F�A��ۤv�̦��Q�C\n\n");
            break;
        }
        else
        {
            printf("������J1��2�ӨM�w���F�Ϊ̬O�X�@��I\n�ЦA��J�@���a�I\n");
        }
    }
    system("pause");
    system("cls");
    system("color f0");
    printf("�A�ݡA�o�N�O�ڭ̪��~�ҤF�C\n\n�H���T�M�n�A���|���O�H���A���K�y�C\n\n���ǮɭԡA��ܡu���H���v�O�z�ʪ��I\n\n�M�ӡA�p�G�o���C��");
    SetConsoleTextAttribute(hConsole, 0xFC );
    printf("���O�@���N�����A�ӬO���ƪ��ܦh��...\n\n");
    SetConsoleTextAttribute(hConsole, 0xF0 );
    printf("���׷|���Ҥ��P�ܡH\n\n");
    system("pause");
    system("cls");
    printf("�o���A�ڭ̨Ӫ��u���I\n\n���U�ӡA");
    SetConsoleTextAttribute(hConsole, 0xFC );
    printf("�A�N�P 5 �W���P�����a�i��C���A�C�ӤH�����L�̦ۤv���u�C�������v�C\n\n");
    SetConsoleTextAttribute(hConsole, 0xF0 );
    printf("�C�쪱�a");
    SetConsoleTextAttribute(hConsole, 0xFC );
    printf("�|�P�A�什 3 �� 7 �B�A�A�ä����D���@�B�O�o�����̫�@�B�C");
    SetConsoleTextAttribute(hConsole, 0xF0 );
    printf("�A�i�H�۫H�L�̶ܡH�Ϊ̻��K�K�L�̥i�H�۫H�A�ܡH\n\n");
    printf("�ӡA�i�D�ڧA���Ĥ@�ӯu������ܡC�n�Q�M����G\n\n");
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
    char ChineseNames[PlayerNum][MaxNameLength]= {"�ҥ��","�§A�¨쩳","�j���H","�����o","�ֺ����P��"};
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
            //------------------�Ĥ@�쪱�a�}�l---------------------//
            int choice_intimate=0;
            SetConsoleTextAttribute(hConsole, 0xF9 );
            printf("��%d/5�쪱�a\n",j);
            SetConsoleTextAttribute(hConsole, 0xF0 );
            printf("�A���`���G%d\n",answer);
            bool cooperate=true;
            bool precooperate=true;
            gametimes=5;
            int yourscore[5]= {};
            for(int i=1; i<=gametimes; i++)
            {
                printf("�A�����[(1)�N����F/(2)�N��X�@]�G...>");
                scanf("%d",&choice_intimate);
                if(choice_intimate==1)
                {
                    cooperate=false;
                    intimate(cooperate, precooperate, &yourscore[i-1], &answer, &allplayers.players[j-1].compoint[i-1]);
                    compt+=allplayers.players[j-1].compoint[i-1];
                    selfpoint+=yourscore[i-1];
                    printf("�A�����ơG%d vs %d�G�q�����a������\n",selfpoint,compt);
                    printf("�A���`���G%d\n",answer);
                    precooperate=cooperate;
                }
                else if(choice_intimate==2)
                {
                    cooperate=true;
                    intimate(cooperate, precooperate, &yourscore[i-1], &answer, &allplayers.players[j-1].compoint[i-1]);
                    compt+=allplayers.players[j-1].compoint[i-1];
                    selfpoint+=yourscore[i-1];
                    printf("�A�����ơG%d vs %d�G�q�����a������\n",selfpoint,compt);
                    printf("�A���`���G%d\n",answer);
                    precooperate=cooperate;
                }
                else
                {
                    printf("������J1��2�ӨM�w���F�Ϊ̬O�X�@��I\n(�o����J�N���|�p���I)\n");
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
            printf("���^�X�����A\n�U�@��q�����a......\n\n\n");
            system("pause");
            system("cls");
            //------------------�Ĥ@�쪱�a����---------------------//
            break;
        }
        case 2:
        {
            //------------------�ĤG�쪱�a�}�l---------------------//
            int choice_always_lie=0;
            selfpoint=0;
            compt=0;
            SetConsoleTextAttribute(hConsole, 0xF1 );
            printf("��%d/5�쪱�a\n",j);
            SetConsoleTextAttribute(hConsole, 0xF0 );
            printf("�A���`���G%d\n",answer);
            bool bool_always_lie=0;
            gametimes=4;
            int yourscore[4]= {};
            for(int i=1; i<=gametimes; i++)
            {
                printf("�A�����[(1)�N����F/(2)�N��X�@]�G...>");
                scanf("%d",&choice_always_lie);
                if(choice_always_lie==1)
                {
                    bool_always_lie=false;
                    always_lie(bool_always_lie, &yourscore[i-1], &answer,&allplayers.players[j-1].compoint[i-1]);
                    compt+=allplayers.players[j-1].compoint[i-1];
                    selfpoint+=yourscore[i-1];
                    printf("�A�����ơG%d vs %d�G�q�����a������\n",selfpoint,compt);
                    printf("�A���`���G%d\n",answer);
                }
                else if(choice_always_lie==2)
                {
                    bool_always_lie=true;
                    always_lie(bool_always_lie, &yourscore[i-1], &answer,&allplayers.players[j-1].compoint[i-1]);
                    compt+=allplayers.players[j-1].compoint[i-1];
                    selfpoint+=yourscore[i-1];
                    printf("�A�����ơG%d vs %d�G�q�����a������\n",selfpoint,compt);
                    printf("�A���`���G%d\n",answer);
                }
                else
                {
                    printf("������J1��2�ӨM�w���F�Ϊ̬O�X�@��I\n(�o����J�N���|�p���I)\n");
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
            printf("���^�X�����A\n�U�@��q�����a......\n\n\n");
            system("pause");
            system("cls");
            //------------------�ĤG�쪱�a����---------------------//
            break;
        }
        case 3:
        {
            //------------------�ĤT�쪱�a�}�l---------------------//
            selfpoint=0;
            compt=0;
            SetConsoleTextAttribute(hConsole, 0xFD );
            printf("��%d/5�쪱�a\n",j);
            SetConsoleTextAttribute(hConsole, 0xF0 );
            printf("�A���`���G%d\n",answer);
            gametimes=4;
            int yourscore[5]= {};
            int choice_always_cooperate=0;
            for(int i=1; i<=4; i++)
            {
                printf("�A�����[(1)�N����F/(2)�N��X�@]�G...>");
                scanf("%d",&choice_always_cooperate);
                if(choice_always_cooperate==1)
                {
                    always_cooperate(&choice_always_cooperate, &yourscore[i-1], &answer, &allplayers.players[j-1].compoint[i-1]);
                    compt+=allplayers.players[j-1].compoint[i-1];
                    selfpoint+=yourscore[i-1];
                    printf("�A�����ơG%d vs %d�G�q�����a������\n",selfpoint,compt);
                    printf("�A���`���G%d\n",answer);
                }
                else if(choice_always_cooperate==2)
                {
                    always_cooperate(&choice_always_cooperate, &yourscore[i-1], &answer, &allplayers.players[j-1].compoint[i-1]);
                    compt+=allplayers.players[j-1].compoint[i-1];
                    selfpoint+=yourscore[i-1];
                    printf("�A�����ơG%d vs %d�G�q�����a������\n",selfpoint,compt);
                    printf("�A���`���G%d\n",answer);
                }
                else
                {
                    printf("������J1��2�ӨM�w���F�Ϊ̬O�X�@��I\n(�o����J�N���|�p���I)\n");
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
            printf("���^�X�����A\n�U�@��q�����a......\n\n\n");
            system("pause");
            system("cls");
            //------------------�ĤT�쪱�a����---------------------//
            break;
        }
        case 4:
        {
            //------------------�ĥ|�쪱�a�}�l---------------------//
            selfpoint=0;
            compt=0;
            int choice_foreverlie_afterbelied=0;
            SetConsoleTextAttribute(hConsole, 0xF2 );
            printf("��%d/5�쪱�a\n",j);
            SetConsoleTextAttribute(hConsole, 0xF0 );
            printf("�A���`���G%d\n",answer);
            gametimes=5;
            int yourscore[5]= {};
            bool bool_foreverlie_afterbelied=false;
            for(int i=1; i<=gametimes; i++)
            {
                printf("�A�����[(1)�N����F/(2)�N��X�@]�G...>");
                scanf("%d",&choice_foreverlie_afterbelied);
                if(choice_foreverlie_afterbelied==1)
                {
                    foreverlie_afterbelied(choice_foreverlie_afterbelied, bool_foreverlie_afterbelied, &yourscore[i-1], &answer, &allplayers.players[j-1].compoint[i-1]);
                    compt+=allplayers.players[j-1].compoint[i-1];
                    selfpoint+=yourscore[i-1];
                    printf("�A�����ơG%d vs %d�G�q�����a������\n",selfpoint,compt);
                    printf("�A���`���G%d\n",answer);
                    bool_foreverlie_afterbelied=true;
                }
                else if(choice_foreverlie_afterbelied==2)
                {
                    foreverlie_afterbelied(choice_foreverlie_afterbelied, bool_foreverlie_afterbelied, &yourscore[i-1], &answer, &allplayers.players[j-1].compoint[i-1]);
                    compt+=allplayers.players[j-1].compoint[i-1];
                    selfpoint+=yourscore[i-1];
                    printf("�A�����ơG%d vs %d�G�q�����a������\n",selfpoint,compt);
                    printf("�A���`���G%d\n",answer);
                }
                else
                {
                    printf("������J1��2�ӨM�w���F�Ϊ̬O�X�@��I\n(�o����J�N���|�p���I)\n");
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
            printf("���^�X�����A�U�@�쪱�a......\n\n\n");
            system("pause");
            system("cls");
            //------------------�ĥ|�쪱�a����---------------------//
            break;
        }
        case 5:
        {
            //------------------�Ĥ��쪱�a�}�l---------------------//
            selfpoint=0;
            compt=0;
            SetConsoleTextAttribute(hConsole, 0xF6 );
            printf("��%d/5�쪱�a\n",j);
            SetConsoleTextAttribute(hConsole, 0xF0 );
            bool cooperate_complicate=true, cooperate_complicate_forward=true;
            int choice_complicate=0;
            gametimes=7;
            int yourscore[7]= {};
            bool foreverlie=false;
            printf("�A���`���G%d\n",answer);
            for(int i=1; i<=gametimes; i++)
            {
                printf("�A�����[(1)�N����F/(2)�N��X�@]�G...>");
                scanf("%d",&choice_complicate);
                if(choice_complicate==1)
                {
                    cooperate_complicate=false;
                    complicate(cooperate_complicate, cooperate_complicate_forward, i, &foreverlie, choice_complicate, &yourscore[i-1], &answer, &allplayers.players[j-1].compoint[i-1]);
                    compt+=allplayers.players[j-1].compoint[i-1];
                    selfpoint+=yourscore[i-1];
                    printf("�A�����ơG%d vs %d�G�q�����a������\n",selfpoint,compt);
                    printf("�A���`���G%d\n",answer);
                    cooperate_complicate_forward=cooperate_complicate;
                }
                else if(choice_complicate==2)
                {
                    cooperate_complicate=true;
                    complicate(cooperate_complicate, cooperate_complicate_forward, i, &foreverlie, choice_complicate, &yourscore[i-1], &answer,&allplayers.players[j-1].compoint[i-1]);
                    compt+=allplayers.players[j-1].compoint[i-1];
                    selfpoint+=yourscore[i-1];
                    printf("�A�����ơG%d vs %d�G�q�����a������\n",selfpoint,compt);
                    printf("�A���`���G%d\n",answer);
                    cooperate_complicate_forward=cooperate_complicate;
                }
                else
                {
                    printf("������J1��2�ӨM�w���F�Ϊ̬O�X�@��I\n(�o����J�N���|�p���I)\n");
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
    printf("�A���̲ױo���O�G");
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
    printf("�]�̧C����7���A�̰�����49���^\n");
    printf("�ҥH�A����A��Ԫ����ǩ_�Ǩ���쩳�O�֩O�H\n\n");
    for(int j=1; j<=PlayerNum; j++)
    {
        switch(j)
        {
        case 1:
        {
            SetConsoleTextAttribute(hConsole, 0xF9 );
            printf("%s(%s)�G \n���o�I�ڲĤ@���|�X�u�X�@�v�C\n����A�ڷ|��M�A�e�@�B�@�Ҥ@�˪���ܳ��p��\n",EnglishNames[j-1],ChineseNames[j-1]);
            printf("�]�A�b�L�⤤�`�@�o��%d���^",score[j-1]);
            printnewrecord(printnewhighrecord[j-1]);
            printf("\n\n");
            SetConsoleTextAttribute(hConsole, 0xF0 );
            break;
        }
        case 2:
        {
            SetConsoleTextAttribute(hConsole, 0xF1 );
            printf("%s(%s)�G \n�����X�@�A�o�O�z�ױj�����@��\n",EnglishNames[j-1],ChineseNames[j-1]);
            printf("�]�A�b�L�⤤�`�@�o��%d���^",score[j-1]);
            printnewrecord(printnewhighrecord[j-1]);
            printf("\n\n");
            break;
        }
        case 3:
        {
            SetConsoleTextAttribute(hConsole, 0xFD );
            printf("%s(%s)�G \n�ڭ̤j�a���B�ͧa�I <3\n",EnglishNames[j-1],ChineseNames[j-1]);
            printf("�]�A�b�L�⤤�`�@�o��%d���^",score[j-1]);
            printnewrecord(printnewhighrecord[j-1]);
            printf("\n\n");
            break;
        }
        case 4:
        {
            SetConsoleTextAttribute(hConsole, 0xF2 );
            printf("%s(%s)�G \n���N�̷N�骺�Pı�C\n�ڷ|�����A���l�u�X�@�v�A���O�̦n���n�Ρu���F�v�S�ڥͮ�A�ڰL�n�N�|�Q�n�����I\n",EnglishNames[j-1],ChineseNames[j-1]);
            printf("�]�A�b�L�⤤�`�@�o��%d���^",score[j-1]);
            printnewrecord(printnewhighrecord[j-1]);
            printf("\n\n");
            break;
        }
        case 5:
        {
            SetConsoleTextAttribute(hConsole, 0xF6 );
            printf("%s(%s)�G \n���R�H�O�ڪ��S���C\n�C���}�l�ڷ|�u�X�@�v�B�u���F�v�B�u�X�@�v�B�u�X�@�v�C\n�p�G�A�ϹL�Ӵ��F�ڡA�ڴN�|���ҥ�ߨ��˸�ۧA�X�P�C\n�p�G�A�@�����F�^�ӡA���ڴN�|���¨쩳���˺^���A�A�K�K�K��C\n�o�O�`�ѰڡA�ڿ˷R����ͨ��\n",EnglishNames[j-1],ChineseNames[j-1]);
            printf("�]�A�b�L�⤤�`�@�o��%d���^\n\n",score[j-1]);
            printnewrecord(printnewhighrecord[j-1]);
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
    printf("����...�p�G���o�Ǩ���");
    SetConsoleTextAttribute(hConsole, 0xFC );
    printf("�ۤv�i�}�ի�");
    SetConsoleTextAttribute(hConsole, 0xF0 );
    printf("�A���G�S�|�O��˩O�H\n");
    system("pause");
    system("cls");
    printf("�{�b�n�i�檺�O�C����10�B�A�`�@��10���A�Aı�o���Ө����`���|�̰��A�������̫�O�]�����̫᪺Ĺ�a�^�H �J�ӷQ�M���A�M��...�а��X�A����ܡG\n");
    SetConsoleTextAttribute(hConsole, 0xF9 );
    printf("(1)%s (%s) �G�ҥ��誺�e�@�Ӱʧ@\n",EnglishNames[0],ChineseNames[0]);
    SetConsoleTextAttribute(hConsole, 0xF1 );
    printf("(2)%s (%s) �G�û����F�A�����X�@\n",EnglishNames[1],ChineseNames[1]);
    SetConsoleTextAttribute(hConsole, 0xFD );
    printf("(3)%s (%s) �G�û��X�@�A�������F\n",EnglishNames[2],ChineseNames[2]);
    SetConsoleTextAttribute(hConsole, 0xF2 );
    printf("(4)%s (%s) �G���X�@�A���O�@���Q�F�A�N�û����F\n",EnglishNames[3],ChineseNames[3]);
    SetConsoleTextAttribute(hConsole, 0xF6 );
    printf("(5)%s (%s) �G�X�@�B���F�B�X�@�B�X�@�A����p�G�A���F�A�N�|���Ӽҥ�ߪ��Ҧ��A�p�G�A�@���������A�N�|�ܦ��¨쩳\n",EnglishNames[4],ChineseNames[4]);
    SetConsoleTextAttribute(hConsole, 0xF0 );

    int player_choice=0;
    printf("...>");
    scanf("%d",&player_choice);
    while(player_choice>5 || player_choice<1)
    {
        printf("������J1~5���Ʀr��...>");
        scanf("%d",&player_choice);
    }
    printf("�n�A�A�諸�O");
    switch(player_choice)
    {
    case 1:
    {
        SetConsoleTextAttribute(hConsole, 0xF9 );
        printf("%s�A\n", ChineseNames[player_choice-1]);
        break;
    }
    case 2:
    {
        SetConsoleTextAttribute(hConsole, 0xF1 );
        printf("%s�A\n", ChineseNames[player_choice-1]);
        break;
    }
    case 3:
    {
        SetConsoleTextAttribute(hConsole, 0xFD );
        printf("%s�A\n", ChineseNames[player_choice-1]);
        break;
    }
    case 4:
    {
        SetConsoleTextAttribute(hConsole, 0xF2 );
        printf("%s�A\n", ChineseNames[player_choice-1]);
        break;
    }
    case 5:
    {
        SetConsoleTextAttribute(hConsole, 0xF6 );
        printf("%s�A\n", ChineseNames[player_choice-1]);
        break;
    }
    }
    SetConsoleTextAttribute(hConsole, 0xF0 );
    printf("�ڭ̲{�b�@�Ӥ@�ӨӬݬݧa�I�Ĥ@�����ɧ��p��O?\n");
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
            printf("�Ĥ@���G\n");
            SetConsoleTextAttribute(hConsole, 0xF9 );
            printf("�ҥ�� ");
            SetConsoleTextAttribute(hConsole, 0xF0 );
            printf("��} ");
            SetConsoleTextAttribute(hConsole, 0xF1 );
            printf("�§A�¨쩳\n\n");
            int com1[10]= {}, com2[10]= {}, vs[10]= {},sum1=0,sum2=0;
            SetConsoleTextAttribute(hConsole, 0xF0 );
            printf("*********************************");
            printf("\n* �C�B�Ԫp�G                    *\n");
            for(int j=0; j<10; j++)
            {
                if(j==0)
                {
                    vs[j]=1;
                }
                game(vs[j],&com1[j],&com2[j]);
                printf("* ");
                SetConsoleTextAttribute(hConsole, 0xF9 );
                printf("�ҥ�ߡG%2d",com1[j]);
                SetConsoleTextAttribute(hConsole, 0xF0 );
                printf("  vs ");
                SetConsoleTextAttribute(hConsole, 0xF1 );
                printf("%2d�G�§A�¨쩳", com2[j]);
                SetConsoleTextAttribute(hConsole, 0xF0 );
                printf(" *\n");
                sum1+=com1[j];
                sum2+=com2[j];
            }
            printf("*");
            SetConsoleTextAttribute(hConsole, 0xF1 );
            printf(" �`���G%2d vs %2d                ",sum1,sum2);
            SetConsoleTextAttribute(hConsole, 0xF0 );
            printf("*\n*********************************\n");
            SetConsoleTextAttribute(hConsole, 0xF1 );
            printf("\n��A��F...\n\n");
            player[0]+=sum1;
            player[1]+=sum2;
            system("pause");
            system("cls");
            break;
        }
        case 2:
        {
            SetConsoleTextAttribute(hConsole, 0xF0 );
            printf("�ĤG���G\n");
            SetConsoleTextAttribute(hConsole, 0xF9 );
            printf("�ҥ�� ");
            SetConsoleTextAttribute(hConsole, 0xF0 );
            printf("��} ");
            SetConsoleTextAttribute(hConsole, 0xFD );
            printf("�j���H\n\n");
            SetConsoleTextAttribute(hConsole, 0xF0 );
            int sum1=0,sum2=0,com1[10]= {},com2[10]= {};
            SetConsoleTextAttribute(hConsole, 0xF0 );
            printf("*****************************");
            printf("\n* �C�B�Ԫp�G                *\n");
            for(int j=0; j<10; j++)
            {
                int notcooperate = 2;
                game(notcooperate,&com1[j],&com2[j]);
                printf("* ");
                SetConsoleTextAttribute(hConsole, 0xF9 );
                printf("�ҥ�ߡG%2d",com1[j]);
                SetConsoleTextAttribute(hConsole, 0xF0 );
                printf("  vs ");
                SetConsoleTextAttribute(hConsole, 0xFD );
                printf("%2d�G�j���H ", com2[j]);
                SetConsoleTextAttribute(hConsole, 0xF0 );
                printf("*\n");
                sum1+=com1[j];
                sum2+=com2[j];
            }
            printf("*");
            SetConsoleTextAttribute(hConsole, 0xF0 );
            printf("�`���G%2d vs %2d             ",sum1,sum2);
            SetConsoleTextAttribute(hConsole, 0xF0 );
            printf("*\n*****************************\n");
            printf("\n...�A�i�঳�I�h�ä��e�һ����A�����̸t�ϸ`��Ԫ��G�ơC���u�O�I���a�H\n\n");
            player[0]+=sum1;
            player[2]+=sum2;
            system("pause");
            system("cls");
            break;
        }
        case 3:
        {
            SetConsoleTextAttribute(hConsole, 0xF0 );
            printf("�ĤT���G\n");
            SetConsoleTextAttribute(hConsole, 0xF9 );
            printf("�ҥ�� ");
            SetConsoleTextAttribute(hConsole, 0xF0 );
            printf("��}");
            SetConsoleTextAttribute(hConsole, 0xF2 );
            printf(" �����o\n\n");
            SetConsoleTextAttribute(hConsole, 0xF0 );
            printf("*****************************");
            printf("\n* �C�B�Ԫp�G                *\n");
            int com1[10]= {},com2[10]= {},sum1=0,sum2=0;
            for(int j=0; j<10; j++)
            {
                int notcooperate=2;
                game(notcooperate, &com1[j], &com2[j]);

                printf("* ");
                SetConsoleTextAttribute(hConsole, 0xF9 );
                printf("�ҥ�ߡG%2d",com1[j]);
                SetConsoleTextAttribute(hConsole, 0xF0 );
                printf("  vs ");
                SetConsoleTextAttribute(hConsole, 0xF2 );
                printf("%2d�G�����o ", com2[j]);
                SetConsoleTextAttribute(hConsole, 0xF0 );
                printf("*\n");
                sum1+=com1[j];
                sum2+=com2[j];
            }
            printf("* ");
            SetConsoleTextAttribute(hConsole, 0xF1 );
            printf("�`���G%d vs %d            *\n",sum1,sum2);
            printf("*****************************\n");
            SetConsoleTextAttribute(hConsole, 0xF0 );
            printf("\n�S���A��Ԭݰ_���٬O�����@�ƪ��A���O�J���໡�O�W�@�L�G�A�]���໡�O���M�`�C\n\n");
            player[0]+=sum1;
            player[3]+=sum2;
            system("pause");
            system("cls");
            break;
        }
        case 4:
        {
            SetConsoleTextAttribute(hConsole, 0xF0 );
            printf("�ĥ|���G\n");
            SetConsoleTextAttribute(hConsole, 0xF9 );
            printf("�ҥ�� ");
            SetConsoleTextAttribute(hConsole, 0xF0 );
            printf("��}");
            SetConsoleTextAttribute(hConsole, 0xF6 );
            printf(" �ֺ����P��\n");
            SetConsoleTextAttribute(hConsole, 0xF0 );
            int vs[10]= {},com1[10]= {},com2[10]= {},sum1=0,sum2=0;
            printf("\n*********************************");
            printf("\n* �C�B�Ԫp�G                    *\n");
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
                printf("�ҥ�ߡG%2d",com1[j]);
                SetConsoleTextAttribute(hConsole, 0xF0 );
                printf("  vs ");
                SetConsoleTextAttribute(hConsole, 0xF6 );
                printf("%2d�G�ֺ����P�� ", com2[j]);
                SetConsoleTextAttribute(hConsole, 0xF0 );
                printf("*\n");
                sum1+=com1[j];
                sum2+=com2[j];
            }
            SetConsoleTextAttribute(hConsole, 0xF0 );
            printf("* ");
            printf("�`���G%d vs %d                *\n",sum1,sum2);
            printf("*********************************\n");
            printf("\n�ä��O�C�Ӿ������|�F���M���A�M�ӳo�ز{�H�٬O�۷��M�C\n�A���j�աA���M�����T�B�Y�檺�x�O�T��A���O���D�`�h���e�u�����A���|�����ӦP�a�F���M���C\n\n");
            player[0]+=sum1;
            player[4]+=sum2;
            system("pause");
            system("cls");
            break;
        }
        case 5:
        {
            SetConsoleTextAttribute(hConsole, 0xF0 );
            printf("�Ĥ����G\n");
            SetConsoleTextAttribute(hConsole, 0xF1 );
            printf("�§A�¨쩳 ");
            SetConsoleTextAttribute(hConsole, 0xF0 );
            printf("��}");
            SetConsoleTextAttribute(hConsole, 0xFD );
            printf(" �j���H\n\n");
            SetConsoleTextAttribute(hConsole, 0xF0 );
            printf("**********************************");
            printf("\n* �C�B�Ԫp�G                     *\n");
            int com1[10]= {},com2[10]= {},sum1=0,sum2=0;
            for(int j=0; j<10; j++)
            {
                int notcooperate=3;
                game(notcooperate, &com1[j], &com2[j]);
                printf("* ");
                SetConsoleTextAttribute(hConsole, 0xF1 );
                printf("�§A�¨쩳�G%2d  ",com1[j]);
                SetConsoleTextAttribute(hConsole, 0xF0 );
                printf("vs");
                SetConsoleTextAttribute(hConsole, 0xFD );
                printf(" %2d �G�j���H ", com2[j]);
                SetConsoleTextAttribute(hConsole, 0xF0 );
                printf("*\n");
                sum1+=com1[j];
                sum2+=com2[j];
            }
            printf("* ");
            SetConsoleTextAttribute(hConsole, 0xF1 );
            printf("�`���G%d vs %d                *\n",sum1,sum2);
            SetConsoleTextAttribute(hConsole, 0xF0 );
            printf("**********************************\n");
            SetConsoleTextAttribute(hConsole, 0xF1 );
            printf("\n�ӥB�ƹ�W�A�Y�Ϧb�t�ϸ`���e�A���ǫe�u�����N�w�g�����a�F���F�D�x�誺�M���C\n\n");
            player[1]+=sum1;
            player[2]+=sum2;
            system("pause");
            system("cls");
            break;
        }
        case 6:
        {
            SetConsoleTextAttribute(hConsole, 0xF0 );
            printf("�Ĥ����G\n");
            SetConsoleTextAttribute(hConsole, 0xF1 );
            printf("�§A�¨쩳 ");
            SetConsoleTextAttribute(hConsole, 0xF0 );
            printf("��}");
            SetConsoleTextAttribute(hConsole, 0xF2 );
            printf(" �����o\n");
            SetConsoleTextAttribute(hConsole, 0xF0 );
            int com1[10]= {},com2[10]= {},sum1=0,sum2=0;
            int notcooperate=3;
            printf("\n**********************************\n");
            printf("* �C�B�Ԫp                       *\n");
            for(int j=0; j<10; j++)
            {
                game(notcooperate, &com1[j], &com2[j]);
                SetConsoleTextAttribute(hConsole, 0xF0 );
                printf("*");
                SetConsoleTextAttribute(hConsole, 0xF1 );
                printf(" �§A�¨쩳�G%2d  vs",com1[j]);
                SetConsoleTextAttribute(hConsole, 0xF2 );
                printf(" %2d �G�����o", com2[j]);
                SetConsoleTextAttribute(hConsole, 0xF0 );
                printf(" *\n");
                sum1+=com1[j];
                sum2+=com2[j];
                notcooperate=0;
            }
            SetConsoleTextAttribute(hConsole, 0xF1 );
            printf("* �`���G%d vs %d                  *\n",sum1,sum2);
            SetConsoleTextAttribute(hConsole, 0xF0 );
            printf("**********************************\n");
            SetConsoleTextAttribute(hConsole, 0xF1 );
            printf("\n�L�̧�o�ӥs���G");
            printf("�u���f�e�e�]live and let live�^�v");
            printf("�C²��ӻ��A�N�O�A�����ڡA�ڤ]�N�����A�C�ӥB�o�ر��p�b�ܦh�a�賣�A�ΡC\n\n");
            player[1]+=sum1;
            player[3]+=sum2;
            system("pause");
            system("cls");
            break;
        }
        case 7:
        {
            SetConsoleTextAttribute(hConsole, 0xF0 );
            printf("�ĤC���G\n");
            SetConsoleTextAttribute(hConsole, 0xF1 );
            printf("�§A�¨쩳 ");
            printf("��}");
            SetConsoleTextAttribute(hConsole, 0xF6 );
            printf(" �ֺ����P��\n");
            SetConsoleTextAttribute(hConsole, 0xF0 );
            int vs[10]= {},com1[10]= {},com2[10]= {},sum1=0,sum2=0;
            printf("\n**************************************\n");
            printf("* �C�B�Ԫp                           *\n");
            for(int j=0; j<10; j++)
            {
                if(j==0 || j==2 || j==3)
                {
                    vs[j]=3;
                }
                game(vs[j], &com1[j], &com2[j]);
                printf("* ");
                SetConsoleTextAttribute(hConsole, 0xF1 );
                printf("�§A�¨쩳�G%2d",com1[j]);
                SetConsoleTextAttribute(hConsole, 0xF0 );
                printf("  vs ");
                SetConsoleTextAttribute(hConsole, 0xF6 );
                printf(" %2d�G�ֺ����P��", com2[j]);
                SetConsoleTextAttribute(hConsole, 0xF0 );
                printf(" *\n");
                sum1+=com1[j];
                sum2+=com2[j];
            }
            printf("* ");
            SetConsoleTextAttribute(hConsole, 0xF1 );
            printf("�`���G%d vs %d                      *",sum1,sum2);
            SetConsoleTextAttribute(hConsole, 0xF0 );
            printf("\n**************************************\n");
            SetConsoleTextAttribute(hConsole, 0xF1 );
            printf("\n�A�i���ٷ|���ôb�C�@��h�L�ä��|�۵o�a�P�ĤH�F���M���A������b�����̪��}�a�ԮɴN��~���P�O�H\n\n");
            player[1]+=sum1;
            player[4]+=sum2;
            system("pause");
            system("cls");
            break;
        }
        case 8:
        {
            SetConsoleTextAttribute(hConsole, 0xF0 );
            printf("�ĤK���G\n");
            SetConsoleTextAttribute(hConsole, 0xFD );
            printf("�j���H ");
            SetConsoleTextAttribute(hConsole, 0xF0 );
            printf("��}");
            SetConsoleTextAttribute(hConsole, 0xF2 );
            printf(" �����o\n");
            SetConsoleTextAttribute(hConsole, 0xF0 );
            printf("\n*****************************\n");
            printf("* �C�B�Ԫp                  *\n");
            int com1[10]= {},com2[10]= {},sum1=0,sum2=0;
            for(int j=0; j<10; j++)
            {
                int cooperate=2;
                game(cooperate, &com1[j], &com2[j]);
                printf("* ");
                SetConsoleTextAttribute(hConsole, 0xFD );
                printf("�j���H�G%2d",com1[j]);
                SetConsoleTextAttribute(hConsole, 0xF0 );
                printf("  vs ");
                SetConsoleTextAttribute(hConsole, 0xF2 );
                printf("%2d�G�����o", com2[j]);
                SetConsoleTextAttribute(hConsole, 0xF0 );
                printf(" *\n");
                sum1+=com1[j];
                sum2+=com2[j];
            }
            SetConsoleTextAttribute(hConsole, 0xF0 );
            printf("* �`���G%d vs %d            *\n",sum1,sum2);
            printf("*****************************\n");
            printf("\n���O�]���A�}�a�Ը��L�Φ����ԧФ��P�G�b�}�a�Ԥ��A�A�C�ѳ��|���諸�O�P�@��x�H�C\n\n");
            player[2]+=sum1;
            player[3]+=sum2;
            system("pause");
            system("cls");
            break;
        }
        case 9:
        {
            SetConsoleTextAttribute(hConsole, 0xF0 );
            printf("�ĤE���G\n");
            SetConsoleTextAttribute(hConsole, 0xFD );
            printf("�j���H ");
            SetConsoleTextAttribute(hConsole, 0xF0 );
            printf("��}");
            SetConsoleTextAttribute(hConsole, 0xF6 );
            printf(" �ֺ����P��\n");
            SetConsoleTextAttribute(hConsole, 0xF0 );
            printf("\n*********************************\n");
            printf("* �C�B�Ԫp�G                    *\n");
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
                printf("�j���H�G%2d",com1[j]);
                SetConsoleTextAttribute(hConsole, 0xF0 );
                printf("  vs ");
                SetConsoleTextAttribute(hConsole, 0xF6 );
                printf("%2d�G�ֺ����P��", com2[j]);
                SetConsoleTextAttribute(hConsole, 0xF0 );
                printf(" *\n");
                sum1+=com1[j];
                sum2+=com2[j];
            }
            printf("* ");
            SetConsoleTextAttribute(hConsole, 0xF6 );
            printf("�`���G%d vs %d                ",sum1,sum2);
            SetConsoleTextAttribute(hConsole, 0xF0 );
            printf("*");
            printf("\n*********************************\n");
            SetConsoleTextAttribute(hConsole, 0xF6 );
            printf("\n�o�O�@�����ƹC���C�o�@�I�A���}�a�ԻP��L���Ԫ��������P�C\n\n");
            player[2]+=sum1;
            player[4]+=sum2;
            system("pause");
            system("cls");
            break;
        }
        case 10:
        {
            SetConsoleTextAttribute(hConsole, 0xF0 );
            printf("�ĤQ���G\n");
            SetConsoleTextAttribute(hConsole, 0xF2 );
            printf("�����o ");
            SetConsoleTextAttribute(hConsole, 0xF0 );
            printf("��}");
            SetConsoleTextAttribute(hConsole, 0xF6 );
            printf(" �ֺ����P��\n");
            SetConsoleTextAttribute(hConsole, 0xF0 );
            printf("\n*********************************\n");
            printf("* �C�B�Ԫp�G                    *\n");
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
                printf("�����o�G%2d",com1[j]);
                SetConsoleTextAttribute(hConsole, 0xF0 );
                printf("  vs ");
                SetConsoleTextAttribute(hConsole, 0xF6 );
                printf("%2d�G�ֺ����P��", com2[j]);
                SetConsoleTextAttribute(hConsole, 0xF0 );
                printf(" *\n");
                sum1+=com1[j];
                sum2+=com2[j];
            }
            printf("* ");
            SetConsoleTextAttribute(hConsole, 0xF2 );
            printf("�`���G%d vs %d                  ",sum1,sum2);
            SetConsoleTextAttribute(hConsole, 0xF0 );
            printf("*");
            printf("\n*********************************\n");
            SetConsoleTextAttribute(hConsole, 0xF2 );
            printf("\n�n�A�ڭ̥��^����ɸ̡C�o����Ĺ�a�N�O...(���n)\n\n");
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
    printf("���߳ӧQ(�`�n���̰�)��");
    SetConsoleTextAttribute(hConsole, 0xF9 );
    printf("Copy Cat(�ҥ��)");
    SetConsoleTextAttribute(hConsole, 0xF0 );
    printf("�I�I�I(�w�I~~)\n");
    if(player_choice==1)
    {
        SetConsoleTextAttribute(hConsole, 0xFC );
        printf("���ߧA����F�I\n\n");
    }
    else
    {
        printf("�]�藍�_��~ ");
        printf("%s ", EnglishNames[player_choice-1]);
        printf("%s ", ChineseNames[player_choice-1]);
        printf("~�^\n\n");
    }
    SetConsoleTextAttribute(hConsole, 0xF9 );
    printf("�ҥ��");
    SetConsoleTextAttribute(hConsole, 0xF0 );
    printf("�]���ܦh�O�W�A���O");
    SetConsoleTextAttribute(hConsole, 0xFC );
    printf("�����w�ߡB���f�Q�L�D�q�B�H���٤��A�Ϊ̻����f�e�e�C");
    SetConsoleTextAttribute(hConsole, 0xF0 );
    printf("\n\n�o�N�O������u�M���v�|�p�B��K���@��A�b�@�Ԫ������������}�ӡG��A�Q���C�ѻP�P�@��H�X�X���ȶȬO���M�N�q�W���u�ĤH�v�A\n\n�ӬO�P�˪��@��H�X�X�i��P�˪��C���]�Ҧp�Ԫ��^�ɡA");
    SetConsoleTextAttribute(hConsole, 0xF9 );
    printf("�ҥ��");
    SetConsoleTextAttribute(hConsole, 0xF0 );
    printf("�o�˪��H");
    SetConsoleTextAttribute(hConsole, 0xFC );
    printf("�����|Ĺ�o�@���ԧСA�L�̷|Ĺ�o����Ԫ��C\n\n");
    SetConsoleTextAttribute(hConsole, 0xF0 );
    system("pause");
    system("cls");
    printf("��M�A");
    SetConsoleTextAttribute(hConsole, 0xFC );
    printf("�@�ӤH�nĹ�o�A���H���A�Ϊ̬O�A�nĹ�o�L�H���H���A�ä��O�@��²�檺�C���N�i�H�ѨM�A\n\n�٦��N�~�B�Q�`���Y");
    SetConsoleTextAttribute(hConsole, 0xF0 );
    printf("...���ܦh���]���C\n\n�H�ڪ����Y��������A");
    SetConsoleTextAttribute(hConsole, 0xFC );
    printf("�C�ӤH���ʮ�B��h�����Ҥ��P�A�N�p�P�C���̪�����@�ˡA�����ۤv���өʡA");
    SetConsoleTextAttribute(hConsole, 0xF0 );
    printf("�ڭ̫����u���z�ѩM�ѨM�C�@�Ӱ��D�C\n\n");
    printf("���Ѫ��C���N��o�̧i�@�q���A�Ʊ�����A���Ҧ�ì�C\n\n");
    SetConsoleTextAttribute(hConsole, 0xFC );
    printf("ps:�O�ѤF��{�������᪺�����ݬݧA���C��������!)\n\n");
    SetConsoleTextAttribute(hConsole, 0xF0 );
    printf("�A���o~\n\n");
    printf("===========�C������===========\n\n");
    system("pause");
    system("cls");
    return 0;
}
