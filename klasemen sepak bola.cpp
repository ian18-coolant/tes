#include <stdio.h>
#include <conio.h>
#include <windows.h>

    typedef struct
    {char nama[100];
    int jmlmain,menang,kalah,seri,goalmas,goalkem,poin;
    }detail;

    detail team[20];
    int i,z,n,goal1,goal2,jml_team;


    void gotoxy();

main ()
{



    int menu;
    char liga[100];


    do{

    system ("cls");
    printf ("                     ----Program Klasemen Sepak Bola----     \n\n\n");

    printf ("Menu Utama\n");
    printf ("1.Petunjuk\n");
    printf ("2.Mulai\n");
    printf ("3.Keluar\n");


    printf ("Masukan Pilihan menu :");
    scanf ("%d",&menu);
    system ("cls");

    switch (menu)
    {
    case 1:
    {
        printf ("Pilih salah satu Menu untuk memulai program !\n\Menu :\n\n1.Petunjuk, berisi petunjuk pengunaan program\n2.mulai, yaitu untuk memulai suatu program. Anda mulai dengan memasukan Nama\n  liga, jumlah team ,input skor, lalu akan muncul tabel klasemen\n3.Keluar, untuk mengakhiri program");
        getch ();
    }
    break;
    case 2:
    {
         //input jumlah team
    printf ("Masukan Nama Liga : ");
    scanf ("%s",&liga);
    system ("cls");
    printf ("Input jumlah team :");
    scanf ("%d",&jml_team);
    printf ("\n");
    system ("cls");

    //input nama team dengan looping
    for (i=1; i<=jml_team; i++)
    {
        printf ("Team ke-%d : ",i);
        scanf ("%s",&team[i].nama);
    }



    //input skor per tim dengan looping
    n=1;
    for (i=1; i<=jml_team; i++)
    {
        for (z=i+1; z<=jml_team; z++)
        {
            system ("cls");
            printf("Pertandingan ke-%d\n",n);
            gotoxy(0,3);
            printf("HOME");
            gotoxy(15,3);
            printf("Skor VS Skor");
            gotoxy(44,3);
            printf("AWAY\n");
            printf("%s",team[i].nama);
            gotoxy(20,4);
            printf("--");
            gotoxy(44,4);
            printf("%s",team[z].nama);
            gotoxy(18,4);
            scanf("%d",&goal1);
            gotoxy(25,4);
            scanf("%d",&goal2);
            n+=1;

            if(goal1<goal2)
            {
                team[z].poin += 3;
                team[z].goalmas += goal2;
                team[i].goalmas += goal1;
                team[i].goalkem += goal2;
                team[z].goalkem += goal1;
                team[i].jmlmain ++;
                team[z].jmlmain ++;
                team[i].kalah += 1;
                team[z].menang += 1;
            }
            else if(goal2<goal1)
            {
                team[i].poin += 3;
                team[i].goalmas += goal1;
                team[z].goalmas += goal2;
                team[i].goalkem += goal2;
                team[z].goalkem += goal1;
                team[i].jmlmain ++;
                team[z].jmlmain ++;
                team[z].kalah += 1;
                team[i].menang += 1;
            }
            else
            {
                team[i].poin += 1;
                team[z].poin += 1;
                team[i].goalmas += goal1;
                team[z].goalmas += goal2;
                team[i].goalkem += goal2;
                team[z].goalkem += goal1;
                team[i].jmlmain ++;
                team[z].jmlmain ++;
                team[i].seri += 1;
                team[z].seri += 1;
            }

        }
    }

    for (i=1; i<=jml_team; i++)
    {
        for (z=i+1; z<=jml_team; z++)
        {
            system ("cls");
            printf("Pertandingan ke-%d\n",n);
            gotoxy(0,3);
            printf("AWAY");
            gotoxy(15,3);
            printf("Skor VS Skor");
            gotoxy(44,3);
            printf("HOME\n");
            printf("%s",team[i].nama);
            gotoxy(20,4);
            printf("--");
            gotoxy(44,4);
            printf("%s",team[z].nama);
            gotoxy(18,4);
            scanf("%d",&goal1);
            gotoxy(25,4);
            scanf("%d",&goal2);
            n+=1;

            if(goal1<goal2)
            {
                team[z].poin += 3;
                team[z].goalmas += goal2;
                team[i].goalmas += goal1;
                team[i].goalkem += goal2;
                team[z].goalkem += goal1;
                team[i].jmlmain ++;
                team[z].jmlmain ++;
                team[i].kalah += 1;
                team[z].menang += 1;
            }
            else if(goal2<goal1)
            {
                team[i].poin += 3;
                team[i].goalmas += goal1;
                team[z].goalmas += goal2;
                team[i].goalkem += goal2;
                team[z].goalkem += goal1;
                team[i].jmlmain ++;
                team[z].jmlmain ++;
                team[z].kalah += 1;
                team[i].menang += 1;
            }
            else
            {
                team[i].poin += 1;
                team[z].poin += 1;
                team[i].goalmas += goal1;
                team[z].goalmas += goal2;
                team[i].goalkem += goal2;
                team[z].goalkem += goal1;
                team[i].jmlmain ++;
                team[z].jmlmain ++;
                team[i].seri += 1;
                team[z].seri += 1;
            }

        }
    }
        for(z=1; z<jml_team; z++)
        {
        for(i=1; i<jml_team; i++)
        {
            if(team[i].poin < team[i+1].poin)
                {
               strcpy (team[20].nama,team[i].nama);
               strcpy (team[i].nama,team[i+1].nama);
               strcpy (team[i+1].nama,team[20].nama);

                team[20].jmlmain = team[i].jmlmain;
                team[i].jmlmain = team[i+1].jmlmain;
                team[i+1].jmlmain = team[20].jmlmain;

                team[20].menang = team[i].menang;
                team[i].menang = team[i+1].menang;
                team[i+1].menang = team[20].menang;

                team[20].seri = team[i].seri ;
                team[i].seri = team[i+1].seri ;
                team[i+1].seri = team[20].seri ;

                team[20].kalah = team[i].kalah;
                team[i].kalah = team[i+1].kalah;
                team[i+1].kalah = team[20].kalah;

                team[20].goalmas = team[i].goalmas ;
                team[i].goalmas = team[i+1].goalmas ;
                team[i+1].goalmas = team[20].goalmas ;

                team[20].goalkem = team[i].goalkem;
                team[i].goalkem = team[i+1].goalkem;
                team[i+1].goalkem = team[20].goalkem;

                team[20].poin = team[i].poin ;
                team[i].poin = team[i+1].poin ;
                team[i+1].poin = team[20].poin ;


               }
            }

        }
    system ("cls");
    printf("          -------------------------------------------------------------\n");
    printf("          |                                                           |\n");
    printf("          |                     KLASEMEN SEPAKBOLA                    |\n");
    printf("                                liga %s                                \n",liga);
    printf("          -------------------------------------------------------------\n");
    printf("          |  Nama Team  | Main |  M  |  S  |  K  |  GM  |  GK  | Poin |\n");
    printf("          -------------------------------------------------------------\n");
    for(i=1; i<=jml_team; i++)
    {
        gotoxy(10,6+i); printf("|");
        gotoxy(12,6+i); printf("%s",team[i].nama);
        gotoxy(24,6+i); printf("|");
        gotoxy(27,6+i); printf("%d",team[i].jmlmain);
        gotoxy(31,6+i); printf("|");
        gotoxy(34,6+i); printf("%d",team[i].menang);
        gotoxy(37,6+i); printf("|");
        gotoxy(40,6+i); printf("%d",team[i].seri);
        gotoxy(43,6+i); printf("|");
        gotoxy(46,6+i); printf("%d",team[i].kalah);
        gotoxy(49,6+i); printf("|");
        gotoxy(52,6+i); printf("%d",team[i].goalmas);
        gotoxy(56,6+i); printf("|");
        gotoxy(60,6+i); printf("%d",team[i].goalkem);
        gotoxy(63,6+i); printf("|");
        gotoxy(67,6+i); printf("%d",team[i].poin);
        gotoxy(70,6+i); printf("|");
    }
    printf ("\n          -------------------------------------------------------------\n");
  
        getch ();
    }
    break;
    }
    } while (menu!=3);

}
void gotoxy(int x, int y)
{
  COORD coord;
  coord.X = x;
  coord.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}