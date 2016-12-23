#include <stdio.h>
#include <stdlib.h>

#define CST 10

char A[10][10], B[10][10], SP[10][10], SC[10][10];
int a = 23, b = 23;
char name[30];

FILE *g;

struct player
{
    char name[10];
    struct player *next;
};

// SINGLEPLAYER !!! PLAYER FLEET



void generateSeaA()
{
    int i, j;

    for(i = 0; i < CST; i++)\
        for(j = 0; j < CST; j++)
            A[i][j] = '~';
}

void addShip1()
{
    int x, y;
    char c;

    printf("You are going to add the ship model:\n\nXX\n\n");

    printf("Please insert the starting coordinates of the ship:\n\n");
    scanf("%d %d", &x, &y);

    if((x-1 < 0)&&(y-1 < 0))
    {
        printf("Please insert the direction (S / E) of the ship:\n\n");
        scanf(" %c", &c);
    }
    else
        if((x-1 < 0)&&(y+1 > 9))
        {
            printf("Please insert the direction (S / W) of the ship:\n\n");
            scanf(" %c", &c);
        }
        else
            if((x+1 > 9)&&(y == 0))
            {
                printf("Please insert the direction (N / E) of the ship:\n\n");
                scanf(" %c", &c);
            }
            else
                if((x+1 > 9)&&(y+1 > 9))
                {
                    printf("Please insert the direction (N / W) of the ship:\n\n");
                    scanf(" %c", &c);
                }
                else
                    if((x-1 < 0)&&(y-1 >= 0)&&(y+1 <= 9))
                    {
                        printf("Please insert the direction (S / E / W) of the ship:\n\n");
                        scanf(" %c", &c);
                    }
                    else
                        if((x+1 > 9)&&(y-1 >= 0)&&(y+1 <= 9))
                        {
                            printf("Please insert the direction (N / E / W) of the ship:\n\n");
                            scanf(" %c", &c);
                        }
                        else
                            if((y-1 < 0)&&(x-3 >= 0)&&(x+1 <=9))
                            {
                                printf("Please insert the direction (N / S / E) of the ship:\n\n");
                                scanf(" %c", &c);
                            }
                            else
                                if((y+1 > 9)&&(x-1 >= 0)&&(x+1 <= 9))
                                {
                                    printf("Please insert the direction (N / S / W) of the ship:\n\n");
                                    scanf(" %c", &c);
                                }
                                else
                                    {
                                        printf("Please insert the direction (N / S / E / W) of the ship:\n\n");
                                        scanf(" %c", &c);
                                    }
    switch(c)
    {
        case 'N' :
            {
                A[x][y] = 'X';
                A[x-1][y] = 'X';
                break;
            }

        case 'S' :
            {
                A[x][y] = 'X';
                A[x+1][y] = 'X';
                break;
            }

        case 'E' :
            {
                A[x][y] = 'X';
                A[x][y+1] = 'X';
                break;
            }

        case 'W' :
            {
                A[x][y] = 'X';
                A[x][y-1] = 'X';
                break;
            }
    }

}

void addShip2()
{
    int x, y;
    char c;

    printf("You are going to add the ship model:\n\nXXX\n\n");

    printf("Please insert the starting coordinates of the ship:\n\n");
    scanf("%d %d", &x, &y);

    if((x-2 < 0)&&(y-2 < 0))
    {
        printf("Please insert the direction (S / E) of the ship:\n\n");
        scanf(" %c", &c);
    }
    else
        if((x-2 < 0)&&(y+2 > 9))
        {
            printf("Please insert the direction (S / W) of the ship:\n\n");
            scanf(" %c", &c);
        }
        else
            if((x+2 > 9)&&(y-2 < 0))
            {
                printf("Please insert the direction (N / E) of the ship:\n\n");
                scanf(" %c", &c);
            }
            else
                if((x+2 > 9)&&(y+2 > 9))
                {
                    printf("Please insert the direction (N / W) of the ship:\n\n");
                    scanf(" %c", &c);
                }
                else
                    if((x-2 < 0)&&(y-2 >= 0)&&(y+2 <= 9))
                    {
                        printf("Please insert the direction (S / E / W) of the ship:\n\n");
                        scanf(" %c", &c);
                    }
                    else
                        if((x+2 > 9)&&(y-2 >= 0)&&(y+2 <= 9))
                        {
                            printf("Please insert the direction (N / E / W) of the ship:\n\n");
                            scanf(" %c", &c);
                        }
                        else
                            if((y-2 < 0)&&(x-2 >= 0)&&(x+2 <=9))
                            {
                                printf("Please insert the direction (N / S / E) of the ship:\n\n");
                                scanf(" %c", &c);
                            }
                            else
                                if((y+2 > 9)&&(x-2 >= 0)&&(x+2 <= 9))
                                {
                                    printf("Please insert the direction (N / S / W) of the ship:\n\n");
                                    scanf(" %c", &c);
                                }
                                else
                                    {
                                        printf("Please insert the direction (N / S / E / W) of the ship:\n\n");
                                        scanf(" %c", &c);
                                    }

    switch(c)
    {
        case 'N' :
            {
                A[x][y] = 'X';
                A[x-1][y] = 'X';
                A[x-2][y] = 'X';
                break;
            }

        case 'S' :
            {
                A[x][y] = 'X';
                A[x+1][y] = 'X';
                A[x+2][y] = 'X';
                break;
            }

        case 'E' :
            {
                A[x][y] = 'X';
                A[x][y+1] = 'X';
                A[x][y+2] = 'X';
                break;
            }

        case 'W' :
            {
                A[x][y] = 'X';
                A[x][y-1] = 'X';
                A[x][y-2] = 'X';
                break;
            }
    }
}

void addShip3()
{
    int x, y;
    char c;

    printf("You are going to add the ship model:\n\nXXXX\n\n");

    printf("Please insert the starting coordinates of the ship:\n\n");
    scanf("%d %d", &x, &y);

    if((x-3 < 0)&&(y-3 < 0))
    {
        printf("Please insert the direction (S / E) of the ship:\n\n");
        scanf(" %c", &c);
    }
    else
        if((x-3 < 0)&&(y+3 > 9))
        {
            printf("Please insert the direction (S / W) of the ship:\n\n");
            scanf(" %c", &c);
        }
        else
            if((x+3 > 9)&&(y-3 < 0))
            {
                printf("Please insert the direction (N / E) of the ship:\n\n");
                scanf(" %c", &c);
            }
            else
                if((x+3 > 9)&&(y+3 > 9))
                {
                    printf("Please insert the direction (N / W) of the ship:\n\n");
                    scanf(" %c", &c);
                }
                else
                    if((x-3 < 0)&&(y-3 >= 0)&&(y+3 <= 9))
                    {
                        printf("Please insert the direction (S / E / W) of the ship:\n\n");
                        scanf(" %c", &c);
                    }
                    else
                        if((x+3 > 9)&&(y-3 >= 0)&&(y+3 <= 9))
                        {
                            printf("Please insert the direction (N / E / W) of the ship:\n\n");
                            scanf(" %c", &c);
                        }
                        else
                            if((y-3 < 0)&&(x-3 >= 0)&&(x+3 <=9))
                            {
                                printf("Please insert the direction (N / S / E) of the ship:\n\n");
                                scanf(" %c", &c);
                            }
                            else
                                if((y+3 > 9)&&(x-3 >= 0)&&(x+3 <= 9))
                                {
                                    printf("Please insert the direction (N / S / W) of the ship:\n\n");
                                    scanf(" %c", &c);
                                }
                                else
                                    {
                                        printf("Please insert the direction (N / S / E / W) of the ship:\n\n");
                                        scanf(" %c", &c);
                                    }
    switch(c)
    {
        case 'N' :
            {
                A[x][y] = 'X';
                A[x-1][y] = 'X';
                A[x-2][y] = 'X';
                A[x-3][y] = 'X';
                break;
            }

        case 'S' :
            {
                A[x][y] = 'X';
                A[x+1][y] = 'X';
                A[x+2][y] = 'X';
                A[x+3][y] = 'X';
                break;
            }

        case 'E' :
            {
                A[x][y] = 'X';
                A[x][y+1] = 'X';
                A[x][y+2] = 'X';
                A[x][y+3] = 'X';
                break;
            }

        case 'W' :
            {
                A[x][y] = 'X';
                A[x][y-1] = 'X';
                A[x][y-2] = 'X';
                A[x][y-3] = 'X';
                break;
            }
    }
}

void addShip4Poz1()
{
    int x1, y1;
    char light = 'R';

    while(light != 'G')
    {
        printf("Please insert the starting coordinates for the ship:\n");
        scanf("%d %d", &x1, &y1);

        if((x1 + 3 > 9)||(A[x1+1][y1-1] == 'X')||(A[x1+1][y1+1] == 'X')) printf("Error! Please choose another set of coordinates\n");
        else
        {
            A[x1][y1] = A[x1+1][y1] = A[x1+1][y1-1] = A[x1+1][y1+1] = A[x1+2][y1] = A[x1+3][y1] = 'X';
            light = 'G';
        }
    }
}

void addShip4Poz2()
{
    int x1, y1;
    char light = 'R';

    while(light != 'G')
    {
        printf("Please insert the starting coordinates for the ship:\n");
        scanf("%d %d", &x1, &y1);

        if((x1 + 3 > 9)||(A[x1+2][y1-1] == 'X')||(A[x1+2][y1+1] == 'X')) printf("Error! Please choose another set of coordinates\n");
        else
        {
            A[x1][y1] = A[x1+1][y1] = A[x1+2][y1-1] = A[x1+2][y1+1] = A[x1+2][y1] = A[x1+3][y1] = 'X';
            light = 'G';
        }
    }
}

void addShip4Poz3()
{
    int x1, y1;
    char light = 'R';

    while(light != 'G')
    {
        printf("Please insert the starting coordinates for the ship:\n");
        scanf("%d %d", &x1, &y1);

        if((y1 + 3 > 9)||(A[x1-1][y1+1] == 'X')||(A[x1+1][y1+1] == 'X')) printf("Error! Please choose another set of coordinates\n");
        else
        {
            A[x1][y1] = A[x1+1][y1+1] = A[x1-1][y1+1] = A[x1][y1+1] = A[x1][y1+2] = A[x1][y1+3] = 'X';
            light = 'G';
        }
    }
}

void addShip4Poz4()
{
    int x1, y1;
    char light = 'R';

    while(light != 'G')
    {
        printf("Please insert the starting coordinates for the ship:\n");
        scanf("%d %d", &x1, &y1);

        if((y1 + 3 > 9)||(A[x1-1][y1+2] == 'X')||(A[x1+1][y1+2] == 'X')) printf("Error! Please choose another set of coordinates\n");
        else
        {
            A[x1][y1] = A[x1][y1+1] = A[x1-1][y1+2] = A[x1+1][y1+2] = A[x1][y1+2] = A[x1][y1+3] = 'X';
            light = 'G';
        }
    }
}

void addShip4()
{
    int op;

    printf("You are going to add the ship model:\n\n  X\n XXXX\n  X\n\n");

    printf("Choose the position of the ship:\n");
    printf("1 X\n XXX\n  X\n  X ");
    printf("   \n\n2 X\n  X\n XXX\n  X\n\n");
    printf("   X\n3 XXXX\n   X\n\n");
    printf("    X\n4 XXXX\n    X\n\n");

    printf("Insert your option:");
    scanf("%d", &op);
    printf("\n");

    while((op != 1)&&(op != 2)&&(op != 3)&&(op !=4))
    {
        printf("ERROR: Option not found! Reinsert:");
        scanf("%d", &op);
        printf("\n");
    }

    switch(op)
    {
        case 1:
            addShip4Poz1();
            break;
        case 2:
            addShip4Poz2();
            break;
        case 3:
            addShip4Poz3();
            break;
        case 4:
            addShip4Poz4();
            break;
    }

}

void addShip5V()
{
    int x = 0, y = 9, i;

    printf("Please insert the coordinates of the ship\n");

    while((x < 3)&&(y > 8))
    {
        if(x < 3)   printf("X needs to be bigger than 2 (or =3).\n");
        if(y > 8)   printf("Y needs to be lower than 9 (or =8).\n");
        scanf("%d %d", &x, &y);
    }

    for(i = x; i >= x-3; i--)
    {
        A[i][y] = 'X';
        A[i][y+1] = 'X';
    }
}

void addShip5H()
{
    int x = 9, y = 9, i;

    printf("Please insert the coordinates of the ship\n");

    while((y > 6)&&(x >= 9))
    {
        if(x < 9)   printf("X needs to be lower than 9 (or =8).\n");
        if(y < 6)   printf("Y needs to be lower than 7 (or =6).\n");
        scanf("%d %d", &x, &y);
    }

    for(i = y; i <= y+3; i++)
    {
        A[x][i] = 'X';
        A[x+1][i] = 'X';
    }
}

void addShip5()
{
    char dir;

    printf("You are going to add the ship model:\n\nXXXX\nXXXX\n\n");

    printf("Would you like to place the ship vertically or horizontally? (V / H)\n\n");
    while((dir != 'H')&&(dir != 'V'))
            scanf("%c", &dir);

    switch(dir)
    {
        case 'V':
            {
                addShip5V();
                break;
            }
        case 'H':
            {
                addShip5H();
                break;
            }
    }

}

void startGameA()
{
    char a;

    generateSeaA();
    generateSeaB();

    printf("It's time for you to set up your fleet!\a\n\n\n");

    printf("Do you want to take a look at the map before launching the assault? (Y/N)");
    scanf(" %c", &a);

    if(a == 'Y')    showSeaA();
    else
    {
        printf("\n\nWatch out, big guy! You should first check your map for information! Don't be such a goofy.\n\n");
        showSeaA();
    }


    addShip5();
    showSeaA();

    addShip4();
    showSeaA();

    addShip3();
    showSeaA();

    addShip2();
    showSeaA();

    addShip1();
    showSeaA();

    generateSP();
    generateSC();
    printf("\n\n");

    buildFleet();
}

void showSeaA()
{
    int i, j;

    printf(" | 0  1  2  3  4  5  6  7  8  9\n");
    printf("_______________________________\n");
    for(i=0;i<CST;i++)
    {
        printf("%d|",i);
        for(j=0;j<CST;j++)
            printf(" %c ", A[i][j]);
        printf("\n");
    }
}




// SINGLEPLAYER !!! COMPUTER FLEET



void generateSeaB()
{
    int i, j;

    for(i = 0; i < CST; i++)\
        for(j = 0; j < CST; j++)
            B[i][j] = '~';
}

int generateVal()
{
    srand(time(NULL));
    int r = rand()%CST;

    return r;
}

char generateDir()
{
    char s[4];
    int r;

    s[0] = 'N';
    s[1] = 'S';
    s[2] = 'E';
    s[3] = 'W';

    srand(time(NULL));

    r = rand()%4;

    return s[r];
}

void buildShip1()
{
    int x1, y1;
    char built = 'F';
    char dir;

    while(built == 'F')
    {
        x1 = generateVal();
        y1 = generateVal();

        if((B[x1][y1] != 'X')&&((B[x1+1][y1] != 'X')||(B[x1-1][y1] != 'X')||(B[x1][y1+1] != 'X')||(B[x1][y1-1] != 'X')))
        {
            while(built == 'F')
            {
                dir = generateDir();

                if((dir == 'N')&&((x1-1 >= 0)&&(B[x1-1][y1] != 'X')))
                {
                    B[x1][y1] = 'X';
                    B[x1-1][y1] = 'X';
                    built = 'T';
                }

                if((dir == 'S')&&((x1+1 <= 9)&&(B[x1+1][y1] != 'X')))
                {
                    B[x1][y1] = 'X';
                    B[x1+1][y1] = 'X';
                    built = 'T';
                }

                if((dir == 'E')&&((y1+1 <= 9)&&(B[x1][y1+1] != 'X')))
                {
                    B[x1][y1] = 'X';
                    B[x1][y1+1] = 'X';
                    built = 'T';
                }

                if((dir == 'W')&&((y1-1 >= 0)&&(B[x1][y1-1] != 'X')))
                {
                    B[x1][y1] = 'X';
                    B[x1][y1-1] = 'X';
                    built = 'T';
                }
            }
        }

    }

}

void buildShip2()
{
    int x1, y1;
    char built = 'F';
    char dir;

    while(built == 'F')
    {
        x1 = generateVal();
        y1 = generateVal();

        if((B[x1][y1] != 'X')&&(((B[x1+2][y1] != 'X')&&(B[x1+1][y1] != 'X'))||((B[x1-2][y1] != 'X')&&(B[x1-1][y1] != 'X'))||((B[x1][y1+2] != 'X')&&(B[x1][y1+1] != 'X'))||((B[x1][y1-2] != 'X')&&(B[x1][y1-1] != 'X'))))
        {
            while(built == 'F')
            {
                dir = generateDir();

                if((dir == 'N')&&((x1-2 >= 0)&&(B[x1-1][y1] != 'X')&&(B[x1-2][y1] != 'X')))
                {
                    B[x1][y1] = 'X';
                    B[x1-1][y1] = 'X';
                    B[x1-2][y1] = 'X';
                    built = 'T';
                }

                if((dir == 'S')&&((x1+2 <= 9)&&(B[x1+1][y1] != 'X')&&(B[x1+2][y1] != 'X')))
                {
                    B[x1][y1] = 'X';
                    B[x1+1][y1] = 'X';
                    B[x1+2][y1] = 'X';
                    built = 'T';
                }

                if((dir == 'E')&&((y1+2 <= 9)&&(B[x1][y1+1] != 'X')&&(B[x1][y1+2] != 'X')))
                {
                    B[x1][y1] = 'X';
                    B[x1][y1+1] = 'X';
                    B[x1][y1+2] = 'X';
                    built = 'T';
                }

                if((dir == 'W')&&((y1-2 >= 0)&&(B[x1][y1-1] != 'X')&&(B[x1][y1-2] != 'X')))
                {
                    B[x1][y1] = 'X';
                    B[x1][y1-1] = 'X';
                    B[x1][y1-2] = 'X';
                    built = 'T';
                }
            }
        }

    }
}

void buildShip3()
{
    int x1, y1;
    char built = 'F';
    char dir;

    while(built == 'F')
    {
        x1 = generateVal();
        y1 = generateVal();

        if((B[x1][y1] != 'X')&&(((B[x1+3][y1] != 'X')&&(B[x1+2][y1] != 'X')&&(B[x1+1][y1] != 'X'))||((B[x1-3][y1] != 'X')&&(B[x1-2][y1] != 'X')&&(B[x1-1][y1] != 'X'))||((B[x1][y1+3] != 'X')&&(B[x1][y1+2] != 'X')&&(B[x1][y1+1] != 'X'))||((B[x1][y1-3] != 'X')&&(B[x1][y1-2] != 'X')&&(B[x1][y1-1] != 'X'))))
        {
            while(built == 'F')
            {
                dir = generateDir();

                if((dir == 'N')&&((x1-3 >= 0)&&(B[x1-1][y1] != 'X')&&(B[x1-2][y1] != 'X')&&(B[x1-3][y1] != 'X')))
                {
                    B[x1][y1] = 'X';
                    B[x1-1][y1] = 'X';
                    B[x1-2][y1] = 'X';
                    B[x1-3][y1] = 'X';
                    built = 'T';
                }

                if((dir == 'S')&&((x1+3 <= 9)&&(B[x1+1][y1] != 'X')&&(B[x1+2][y1] != 'X')&&(B[x1+3][y1] != 'X')))
                {
                    B[x1][y1] = 'X';
                    B[x1+1][y1] = 'X';
                    B[x1+2][y1] = 'X';
                    B[x1+3][y1] = 'X';
                    built = 'T';
                }

                if((dir == 'E')&&((y1+3 <= 9)&&(B[x1][y1+1] != 'X')&&(B[x1][y1+2] != 'X')&&(B[x1][y1+3] != 'X')))
                {
                    B[x1][y1] = 'X';
                    B[x1][y1+1] = 'X';
                    B[x1][y1+2] = 'X';
                    B[x1][y1+3] = 'X';
                    built = 'T';
                }

                if((dir == 'W')&&((y1-3 >= 0)&&(B[x1][y1-1] != 'X')&&(B[x1][y1-2] != 'X')&&(B[x1][y1-3] != 'X')))
                {
                    B[x1][y1] = 'X';
                    B[x1][y1-1] = 'X';
                    B[x1][y1-2] = 'X';
                    B[x1][y1-3] = 'X';
                    built = 'T';
                }
            }
        }

    }
}

void buildShip4()
{
    int x1, y1;
    char built = 'F';
    char dir;

    while(built == 'F')
    {
        x1 = generateVal();
        y1 = generateVal();

        if((B[x1][y1]!='X')&&(((B[x1+3][y1]!='X')&&(B[x1+1][y1+1]!='X')&&(B[x1+1][y1-1]!='X'))||((B[x1-3][y1]!='X')&&(B[x1-1][y1+1]!='X')&&(B[x1-1][y1-1]!='X'))||((B[x1][y1+3]!='X')&&(B[x1+1][y1+1]!='X')&&(B[x1-1][y1+1]!='X'))||((B[x1][y1-3]!='X')&&(B[x1+1][y1-1]!='X')&&(B[x1-1][y1-1]!='X'))))
        {
            while(built == 'F')
            {
                dir = generateDir();

                if((dir == 'N')&&((y1+1 <= 9)&&(y1-1 >= 0)&&(x1-1 >= 0)&&(x1+2 <= 9)&&(B[x1-1][y1] != 'X')&&(B[x1+1][y1] != 'X')&&(B[x1+2][y1] != 'X')&&(B[x1][y1-1] != 'X')&&(B[x1][y1+1] != 'X')))
                {
                    B[x1][y1] = 'X';
                    B[x1-1][y1] = 'X';
                    B[x1+1][y1] = 'X';
                    B[x1+2][y1] = 'X';
                    B[x1][y1-1] = 'X';
                    B[x1][y1+1] = 'X';
                    built = 'T';
                }

                if((dir == 'S')&&((y1+1 <= 9)&&(y1-1 >= 0)&&(x1-2 >= 0)&&(x1+1 <= 9)&&(B[x1+1][y1] != 'X')&&(B[x1-2][y1] != 'X')&&(B[x1-1][y1] != 'X')&&(B[x1][y1-1] != 'X')&&(B[x1][y1+1] != 'X')))
                {
                    B[x1][y1] = 'X';
                    B[x1+1][y1] = 'X';
                    B[x1-2][y1] = 'X';
                    B[x1-1][y1] = 'X';
                    B[x1][y1-1] = 'X';
                    B[x1][y1+1] = 'X';
                    built = 'T';
                }

                if((dir == 'E')&&((y1+1 <= 9)&&(y1-2 >= 0)&&(x1-1 >= 0)&&(x1+1 <= 9)&&(B[x1][y1+1] != 'X')&&(B[x1][y1-2] != 'X')&&(B[x1][y1-1] != 'X')&&(B[x1-1][y1] != 'X')&&(B[x1+1][y1] != 'X')))
                {
                    B[x1][y1] = 'X';
                    B[x1][y1+1] = 'X';
                    B[x1][y1-2] = 'X';
                    B[x1][y1-1] = 'X';
                    B[x1-1][y1] = 'X';
                    B[x1+1][y1] = 'X';
                    built = 'T';
                }

                if((dir == 'W')&&((y1+2 <= 9)&&(y1-1 >= 0)&&(x1-1 >= 0)&&(x1+1 <= 9)&&(B[x1][y1-1] != 'X')&&(B[x1][y1+2] != 'X')&&(B[x1][y1+1] != 'X')&&(B[x1-1][y1] != 'X')&&(B[x1+1][y1] != 'X')))
                {
                    B[x1][y1] = 'X';
                    B[x1][y1-1] = 'X';
                    B[x1][y1+2] = 'X';
                    B[x1+1][y1] = 'X';
                    B[x1][y1+1] = 'X';
                    B[x1-1][y1] = 'X';
                    built = 'T';
                }
            }
        }

    }
}

void buildShip5()
{
    char built = 'F';
    int x, y;
    char dir;

    while(built == 'F')
    {
        x = generateVal();
        y = generateVal();

        if((y+1 <= 9)&&(x+3 <= 9)&&(B[x][y] != 'X')&&((B[x+1][y] != 'X')&&(B[x+2][y] != 'X')&&(B[x+3][y] != 'X'))&&((B[x][y+1] != 'X')&&(B[x+1][y+1]!='X')&&(B[x+2][y+1]!='X')&&(B[x+3][y+1])))
        {
            B[x][y] = 'X';
            B[x][y+1] = 'X';
            B[x+1][y] = 'X';
            B[x+1][y+1] = 'X';
            B[x+2][y] = 'X';
            B[x+2][y+1] = 'X';
            B[x+3][y] = 'X';
            B[x+3][y+1] = 'X';
            built ='T';
        }
        else
        if((x+1 <= 9)&&(y+3 <= 9)&&(B[x][y] != 'X')&&((B[x][y+1] != 'X')&&(B[x][y+2] != 'X')&&(B[x][y+3] != 'X'))&&((B[x+1][y] != 'X')&&(B[x+1][y+1]!='X')&&(B[x+1][y+2]!='X')&&(B[x+1][y+3])))
        {
            B[x][y] = 'X';
            B[x][y+1] = 'X';
            B[x+1][y] = 'X';
            B[x+1][y+1] = 'X';
            B[x+1][y+2] = 'X';
            B[x][y+2] = 'X';
            B[x][y+3] = 'X';
            B[x+1][y+3] = 'X';
            built ='T';
        }

    }
}

void buildFleet()
{
    buildShip5();
    //showSeaB();

    buildShip4();
    //showSeaB();

    buildShip3();
    //showSeaB();

    buildShip2();
    //showSeaB();

    buildShip1();
    //showSeaB();
}

void showSeaB()
{
    int i, j;

    printf(" | 0  1  2  3  4  5  6  7  8  9\n");
    printf("_______________________________\n");
    for(i=0;i<CST;i++)
    {
        printf("%d|",i);
        for(j=0;j<CST;j++)
            printf(" %c ", B[i][j]);
        printf("\n");
    }
}


void generateSC()
{
    int i, j;

    for(i = 0; i < CST; i++)\
        for(j = 0; j < CST; j++)
            SC[i][j] = '~';
}

void generateSP()
{
    int i, j;

    for(i = 0; i < CST; i++)\
        for(j = 0; j < CST; j++)
            SP[i][j] = '~';
}


// SHOTS MECHANICS


int headTails()
{
    srand(time(NULL));

    return rand()%2;

    // 0 = Player turn
    // 1 = PC turn
}

int shotsPlayerA()  // Return 1 for ship hit / 0 for no hit
{
    int x, y;
    int hit = 0, fired = 0;

    while(fired == 0)
    {
        //showSeaSC();
        printf("\nInsert sector coordinates to be attacked\n\n");
        scanf("%d %d", &x, &y);

        if((B[x][y] == 'X')&&(SC[x][y] == '~'))
        {
            SC[x][y] = 'X';
            hit = 1;
            fired = 1;
            a--;
        }
        else
        {
            if((B[x][y] != 'X')&&(SC[x][y] == '~'))
                {
                    SC[x][y] = 'O';
                    fired = 1;
                }

                else
                {
                    if(SC[x][y] == 'X')
                    fired = 0;
                }
        }
    }


    return hit;
}

int shotsPlayerPC()     // Return 1 for ship hit / 0 for no hit
{
    //srand(time(NULL));
    int x, y;
    int hit = 0, fired = 0;

    do
    {
        srand(time(NULL));
        x = rand()%10;
        y = rand()%10;

        if((A[x][y] == 'X')&&(SP[x][y] == '~'))
        {
            SP[x][y] = 'X';
            hit =1;
            //showSeaSP();
            printf("PC attacks sector %d:%d\n\n\n\n", x, y);
            fired = 1;
            b--;
        }
        else
        {
            if((A[x][y] == '~')&&(SP[x][y] == '~'))
            {
                SP[x][y] = 'O';
                //showSeaSP();
                printf("PC attacks sector %d:%d\n\n\n\n", x, y);
                fired = 1;
            }
            else
            {
                if((SP[x][y] == 'O')||(SP[x][y] == 'X'))
                    fired = 0;
            }
        }
    }
    while(fired == 0);

    return hit;
}

void battleSPlayer()
{
    int coin, turn = 1, t;
    int x;

    coin = headTails();
    if(coin == 1)
        {
            printf("Player turn to attack:\n");
            showSeaSC();
            //showSeaB();

            x = shotsPlayerA();
            turn++;
            if(x == 0)
                t = 1;
            else
            {
                t = 0;
                //a--;
            }
            showSeaSC();
            printf("\n\n\n\n\n");
        }
    else
        {
            printf("PC turn to attack:\n");
            //showSeaSP();

            x = shotsPlayerPC();
            turn++;
            if(x == 0)
                t = 0;
            else
            {
                t = 1;
                //b--;
            }
            showSeaSP();
            printf("\n\n\n\n\n");
        }

    do
    {
        if(t == 1)
        {
            printf("PC turn to attack:\n");
            //showSeaSP();

            x = shotsPlayerPC();
            turn++;
            if(x == 0)
                t = 0;
            else
            {
                t = 1;
                //b--;
            }
            showSeaSP();
            printf("\n\n\n\n\n");
        }
        else
        {
            printf("Player turn to attack:\n");
            showSeaSC();
            //showSeaB();

            x = shotsPlayerA();
            turn++;
            if(x == 0)
                t = 1;
            else
            {
                t = 0;
                //a--;
            }
            showSeaSC();
            printf("\n\n\n\n\n");
        }
    }
    while((turn != 200)&&(a > 0)&&(b > 0));

    if(a == 0)
        printf("Well done, Sir! Enemy has been destroyed!\n\n");
    else
        printf("The battle seems to have ended, and not in our favor, but the war isn't lost yet.\n\n");

    //g = fopen("Scoreboard.in", "w");

    //printf("Remember your score! Type your name : ");
    //scanf("%s", &name);
    //fprintf(g, "%s : %d\n", name, b);
    //fclose(g);

    printf("\n\n\t\t\t\t\tGame Over!\n\n");
}

void showSeaSP()
{
    int i, j;

    printf("PC ATTACKS SEA:\n");

    printf(" | 0  1  2  3  4  5  6  7  8  9\n");
    printf("_______________________________\n");
    for(i=0;i<CST;i++)
    {
        printf("%d|",i);
        for(j=0;j<CST;j++)
            printf(" %c ", SP[i][j]);
        printf("\n");
    }
}

void showSeaSC()
{
    int i, j;

    printf("PLAYER ATTACKS SEA:\n");

    printf(" | 0  1  2  3  4  5  6  7  8  9\n");
    printf("_______________________________\n");
    for(i=0;i<CST;i++)
    {
        printf("%d|",i);
        for(j=0;j<CST;j++)
            printf(" %c ", SC[i][j]);
        printf("\n");
    }
}



// MULTIPLAYER !!! UNDER CONSTRUCTION



void startGameB()
{
    showSeaB();

    addShip5();
    showSeaB();

    addShip4();
    showSeaB();

    addShip3();
    showSeaB();

    addShip2();
    showSeaB();

    addShip1();
    showSeaB();

    generateSC();
}

struct player* createProfile()
{
    struct player *add = (struct player *)malloc(sizeof(struct player));;

    printf("What's your name, Commander?\n");
    scanf("%s", &add->name);

    add->next = NULL;

    return add;
    free(add);
}


// MAIN MENU



int main()
{
    int menu;

    while(menu != 3)
    {
        printf("\n\nWelcome to Best Of Battleships 2015!\n\n");

        printf("1.Singleplayer mode\n");
        printf("2.Multiplayer mode - Unavailable at the moment; will come back in aprox. 10 minutes\n");
        printf("3.Exit game\n");

        scanf("%d", &menu);

        switch(menu)
        {
            case 1 :
            {
                printf("Welcome to Battleships v2.0 // Singleplayer mode\n");

                startGameA();

                printf("Time to meet our foe!\n\n");

                battleSPlayer();

                g = fopen("Scoreboard.in", "a");

                printf("Remember your score! Type your name : ");
                scanf("%s", &name);
                fprintf(g, "%s : %d\n", name, b);
                fclose(g);

                printf("What would you like to do next?\n1 - Play again\n2 - Play against your friend\n3 - Exit game\n");
                scanf("%d", menu);
                break;
            }

            case 2 :
            {
                struct player *gen1 = (struct player *)malloc(sizeof(struct player)), *gen2 = (struct player *)malloc(sizeof(struct player));
                gen1 = NULL;
                gen2 = NULL;

                printf("Welcome to Battleships v2.0 // Multiplayer 1vs1\n");

                printf("Content unavailable at the moment. Come back later\n");

                gen1 = createProfile();
                gen2 = createProfile();
                gen1->next = gen2;
                gen2->next = gen1;
                printf("\n\nPlayers are:\n\nP1: %s\n\nP2: %s\n\n", gen1->name, gen2->name);

                break;
            }

            case 3 :
            {
                printf("Good day, Sir! Shall we meet again!\n");
                break;
            }
    }
    }

    return 0;
}
