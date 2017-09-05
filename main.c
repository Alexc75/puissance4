#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    /*SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED );
    */
    int choix = 0;
    do {
            printf("Choisissez une couleur simple pour le texte\n");
            printf("1 pour rouge\n");
            printf("2 pour bleu\n");
            printf("3 pour vert\n");
            printf("4 pour magenta\n");
            printf("5 pour cyan\n");
            printf("6 pour jaune\n");
            scanf("%d", &choix);
            if (choix < 1 | choix > 6)
                printf("ENTRE 1 ET 6\n");

        }
    while (choix < 1 | choix > 6);

    switch(choix)
    {
        case 1 :
            SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
            break;
        case 2 :
            SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE);
            break;
        case 3 :
            SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
            break;
        case 4 :
            SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE | FOREGROUND_RED);
            break;
        case 5 :
            SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE | FOREGROUND_GREEN);
            break;
        case 6 :
            SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN);
            break;
    }
    /*
    printf("Choisissez une couleur simple pour le fond(couleur primaire ou combinaison de couleurs primaires) en MAJUSCULE");
    fgets(color, 1+5*sizeof(char), stdin);
    switch(color)
    {
        case "RED" :
            SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
            break;
        case "GREEN" :
            SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
            break;
        case "BLUE" :
            SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE);
            break;
    }*/

    char* tab = calloc(42,sizeof(char));
    for (int i=0; i < 42; i++)
    {
        if (i%2 == 0)
        {
            tab[i] = 'x';
        }
        else
        {
            tab[i] = 'o';
        }

    }
    printf("|");
    for (int i=1;i<=42; i++)
    {

        if (i%7 == 0)
        {
            printf("%c",tab[i-1]);
            printf("|");
            printf("\n");
        }
        else
        {
            printf("%c",tab[i-1]);

        }
        if (i !=42)
            printf("|");
    }
    return 0;
}
