#include <stdio.h>
#include <stdlib.h>
char arr[8][8];
int traversal(int posx,int posy,char c)
{
    //Going Up
    if(c=='X')
    {
        int i;
        int flagup=1;
        int a =posx;
        for(i=posx-1;i>=0;i--)
        {
            if(arr[posx-1][posy]=='0')
                {
                    while(arr[i][posy]!='X')
                    {
                        i--;
                        if(i<0)
                        {
                            flagup=0;
                            break;
                        }
                    }
                    if(i>0)
                    {
                        while(a-1!=i)
                        {
                            arr[a-1][posy]='X';
                            a--;
                        }

                    }
                }
                else
                    flagup=0;
        }
        int flagdown=1;
        a =posx;
        for(i=posx+1;i<8;i++)
        {
            if(arr[posx+1][posy]=='0')
                {
                    while(arr[i][posy]!='X')
                    {
                        i++;
                        if(i>7)
                        {
                            flagdown=0;
                            break;
                        }
                    }
                    if(i<7)
                    {
                        while(a+1!=i)
                        {
                            arr[a+1][posy]='X';
                            a++;
                        }

                    }
                }
                else
                    flagdown=0;
        }
        int flagleft=1;
        a =posy;
        for(i=posy-1;i>=0;i--)
        {
            if(arr[posx][posy-1]=='0')
                {
                    while(arr[posx][i]!='X')
                    {
                        i--;
                        if(i<0)
                        {
                            flagleft=0;
                            break;
                        }
                    }
                    if(i>0)
                    {
                        while(a-1!=i)
                        {
                            arr[posx][a-1]='X';
                            a--;
                        }

                    }
                }
                else
                    flagleft=0;
        }
        int flagright=1;
        a =posy;
        for(i=posy+1;i<8;i++)
        {
            if(arr[posx][posy+1]=='0')
                {
                    while(arr[posx][i]!='X')
                    {
                        i++;
                        if(i>7)
                        {
                            flagright=0;
                            break;
                        }
                    }
                    if(i<7)
                    {
                        while(a+1!=i)
                        {
                            arr[posx][a+1]='X';
                            a++;
                        }

                    }
                }
                else
                    flagright=0;
        }

        int flagdiagrightbottom=1;
        for(i=1;i<8;i++)
        {
            if(arr[posx+i][posy+i]=='0')
            {
                while(arr[posx+i][posy+i]!='X')
                {
                    i++;
                    if((posx+i>7)||(posy+i>7))
                    {
                        flagdiagrightbottom=0;
                        break;
                    }
                    if(flagdiagrightbottom!=0)
                    {
                        while(i!=0)
                        {
                            arr[posx+i][posy+i]='X';
                            i--;
                        }
                    }
                }
            }
            else
                {
                    flagdiagrightbottom=0;
                }
        }
        int flagdiagrightup=1;
        for(i=1;i<8;i++)
        {
            if(arr[posx-i][posy+i]=='0')
            {
                while(arr[posx-i][posy+i]!='X')
                {
                    i++;
                    if((posx-i<0)||(posy+i>7))
                    {
                        flagdiagrightup=0;
                        break;
                    }
                    if(flagdiagrightup!=0)
                    {
                        while(i!=0)
                        {
                            arr[posx-i][posy+i]='X';
                            i--;
                        }
                    }
                }
            }
            else
                {
                    flagdiagrightup=0;
                }
        }
        int flagdiagleftbottom=1;
        for(i=1;i<8;i++)
        {
            if(arr[posx+i][posy-i]=='0')
            {
                while(arr[posx+i][posy-i]!='X')
                {
                    i++;
                    if((posx+i>7)||(posy-i<0))
                    {
                        flagdiagleftbottom=0;
                        break;
                    }
                    if(flagdiagleftbottom!=0)
                    {
                        while(i!=0)
                        {
                            arr[posx+i][posy-i]='X';
                            i--;
                        }
                    }
                }
            }
            else
                {
                    flagdiagleftbottom=0;
                }
        }
        int flagdiagleftup=1;
        for(i=1;i<8;i++)
        {
            if(arr[posx-i][posy-i]=='0')
            {
                while(arr[posx-i][posy-i]!='X')
                {
                    i++;
                    if((posx-i<0)||(posy-i<0))
                    {
                        flagdiagleftup=0;
                        break;
                    }
                    if(flagdiagleftup!=0)
                    {
                        while(i!=0)
                        {
                            arr[posx-i][posy-i]='X';
                            i--;
                        }
                    }
                }
            }
            else
                {
                    flagdiagleftup=0;
                }
        }
        if((flagdiagleftbottom==0)&&(flagdiagleftup==0)&&(flagdiagrightbottom==0)&&(flagdiagrightup==0)&&(flagdown==0)&&(flagleft==0)&&(flagright==0)&&(flagup==0))
            return -1;
            return 1;
    }
    if(c=='0')
    {
        int i;
        int flagup=1;
        int a =posx;
        for(i=posx-1;i>=0;i--)
        {
            if(arr[posx-1][posy]=='X')
                {
                    while(arr[i][posy]!='0')
                    {
                        i--;
                        if(i<0)
                        {
                            flagup=0;
                            break;
                        }
                    }
                    if(i>0)
                    {
                        while(a-1!=i)
                        {
                            arr[a-1][posy]='0';
                            a--;
                        }

                    }
                }
                else
                    flagup=0;
        }
        int flagdown=1;
        a =posx;
        for(i=posx+1;i<8;i++)
        {
            if(arr[posx+1][posy]=='X')
                {
                    while(arr[i][posy]!='0')
                    {
                        i++;
                        if(i>7)
                        {
                            flagdown=0;
                            break;
                        }
                    }
                    if(i<7)
                    {
                        while(a+1!=i)
                        {
                            arr[a+1][posy]='0';
                            a++;
                        }

                    }
                }
                else
                    flagdown=0;
        }
        int flagleft=1;
        a =posy;
        for(i=posy-1;i>=0;i--)
        {
            if(arr[posx][posy-1]=='X')
                {
                    while(arr[posx][i]!='0')
                    {
                        i--;
                        if(i<0)
                        {
                            flagleft=0;
                            break;
                        }
                    }
                    if(i>0)
                    {
                        while(a-1!=i)
                        {
                            arr[posx][a-1]='0';
                            a--;
                        }

                    }
                }
                else
                    flagleft=0;
        }
        int flagright=1;
        a =posy;
        for(i=posy+1;i<8;i++)
        {
            if(arr[posx][posy+1]=='X')
                {
                    while(arr[posx][i]!='0')
                    {
                        i++;
                        if(i>7)
                        {
                            flagright=0;
                            break;
                        }
                    }
                    if(i<7)
                    {
                        while(a+1!=i)
                        {
                            arr[posx][a+1]='0';
                            a++;
                        }

                    }
                }
                else
                    flagright=0;
        }

        int flagdiagrightbottom=1;
        for(i=1;i<8;i++)
        {
            if(arr[posx+i][posy+i]=='X')
            {
                while(arr[posx+i][posy+i]!='0')
                {
                    i++;
                    if((posx+i>7)||(posy+i>7))
                    {
                        flagdiagrightbottom=0;
                        break;
                    }
                    if(flagdiagrightbottom!=0)
                    {
                        while(i!=0)
                        {
                            arr[posx+i][posy+i]='0';
                            i--;
                        }
                    }
                }
            }
            else
                {
                    flagdiagrightbottom=0;
                }
        }
        int flagdiagrightup=1;
        for(i=1;i<8;i++)
        {
            if(arr[posx-i][posy+i]=='X')
            {
                while(arr[posx-i][posy+i]!='0')
                {
                    i++;
                    if((posx-i<0)||(posy+i>7))
                    {
                        flagdiagrightup=0;
                        break;
                    }
                    if(flagdiagrightup!=0)
                    {
                        while(i!=0)
                        {
                            arr[posx-i][posy+i]='0';
                            i--;
                        }
                    }
                }
            }
            else
                {
                    flagdiagrightup=0;
                }
        }
        int flagdiagleftbottom=1;
        for(i=1;i<8;i++)
        {
            if(arr[posx+i][posy-i]=='X')
            {
                while(arr[posx+i][posy-i]!='0')
                {
                    i++;
                    if((posx+i>7)||(posy-i<0))
                    {
                        flagdiagleftbottom=0;
                        break;
                    }
                    if(flagdiagleftbottom!=0)
                    {
                        while(i!=0)
                        {
                            arr[posx+i][posy-i]='0';
                            i--;
                        }
                    }
                }
            }
            else
                {
                    flagdiagleftbottom=0;
                }
        }
        int flagdiagleftup=1;
        for(i=1;i<8;i++)
        {
            if(arr[posx-i][posy-i]=='X')
            {
                while(arr[posx-i][posy-i]!='0')
                {
                    i++;
                    if((posx-i<0)||(posy-i<0))
                    {
                        flagdiagleftup=0;
                        break;
                    }
                    if(flagdiagleftup!=0)
                    {
                        while(i!=0)
                        {
                            arr[posx-i][posy-i]='0';
                            i--;
                        }
                    }
                }
            }
            else
                {
                    flagdiagleftup=0;
                }
        }
        if((flagdiagleftbottom==0)&&(flagdiagleftup==0)&&(flagdiagrightbottom==0)&&(flagdiagrightup==0)&&(flagdown==0)&&(flagleft==0)&&(flagright==0)&&(flagup==0))
            return -1;
    }
   return 1;
}
int checkValidityX(int posx,int posy)
{
    if(arr[posx][posy]=='X'||arr[posx][posy]=='0')
       {
         printf("Invalid Entry Enter again");
         return -1;
       }
    if(posx>7||posy>7||posx<0||posy<0)
       {
         printf("Invalid Entry Enter again");
         return -1;
       }
    return 1;
}

int checkValidity0(int posx,int posy)
{
    if(arr[posx][posy]=='X'||arr[posx][posy]=='0')
       {
         printf("Invalid Entry Enter again");
         return -1;
       }
    if(posx>7||posy>7||posx<0||posy<0)
       {
         printf("Invalid Entry Enter again");
         return -1;
       }
    return 1;
}
void printboard()
{
    int i,j;
    printf("  0 1 2 3 4 5 6 7\n");

    for(i=0;i<8;i++)
    {
        printf("%d|",i);
        for(j=0;j<8;j++)
        {
            printf("%c|",arr[i][j]);

        }
        printf("\n");
    }
}
void inputX()
{
    printf("\n It is turn of X\n Enter the position at which you want to place X");
    int posx=0;
    int posy=0;
    do
    {
        scanf("%d%d",&posx,&posy);
    }while(checkValidityX(posx,posy)!=1);
    arr[posx][posy]='X';
    int a= traversal(posx,posy,'X');
    printboard();
}
void input0()
{
    printf("\n It is turn of 0\n Enter the position at which you want to place 0");
    int posx=0,posy=0;
    do
    {
        scanf("%d%d",&posx,&posy);
    }while(checkValidity0(posx,posy)!=1);
    arr[posx][posy]='0';
    int a=traversal(posx,posy,'0');
    printboard();
}
int main()
{
    arr[3][3]=arr[4][4]='0';
    arr[3][4]=arr[4][3]='X';
    printboard();
    int ctr=0;
    while(ctr!=60)
    {
    inputX();
    input0();
    ctr+=2;
    system("CLS");
    printboard();
   }
    return 0;
}
