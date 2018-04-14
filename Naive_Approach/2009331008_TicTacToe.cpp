#include<stdio.h>

int main()
{
    int i, t, p[5], q[5];
    char c;
    char a[1000]="+-----------+\n| . | . | . |\n|   |   |   |\n ----------- \n| . | . | . |\n|   |   |   |\n ----------- \n| . | . | . |\n|   |   |   |\n+-----------+\n\n\n";
    char b[1000]=".-----------.\n| 1 | 2 | 3 |\n|   |   |   |\n ----------- \n| 4 | 5 | 6 |\n|   |   |   |\n ----------- \n| 7 | 8 | 9 |\n|   |   |   |\n ----------- \n\n\n";
    printf("       WELCOME TO THIS GAME         \n\nHere I will show you the position of the area.\nYou have to select any number to select your area.\nIf you can draw a straight line with your area, you will be victorious.\n\n");
    for(i=0; i<142; i++)
        printf("%c", b[i]);

    printf("<<<<If you are agree to start a game, press 'y'  , or press 'n' to Exit>>>>>\n\n\n\n");
    printf("Enter Your Choice:  ");
    scanf("%c", &c);
    if(c=='y')
    {
        printf("Here is a empty board:\n\n");
        for(i=0; i<142; i++)
            printf("%c", a[i]);

        printf("Select a area: ");
        scanf("%d", &t);
            p[0]=t;
        if(t<10&&t>0)
        {
            {
                if(t==1)
                    a[16]='X';
                else if(t==2)
                    a[20]='X';
                else if(t==3)
                    a[24]='X';
                else if(t==4)
                    a[58]='X';
                else if(t==5)
                    a[62]='X';
                else if(t==6)
                    a[66]='X';
                else if(t==7)
                    a[100]='X';
                else if(t==8)
                    a[104]='X';
                else
                    a[108]='X';

            }
            for(i=0; i<142; i++)
                printf("%c", a[i]);
        }
        else
        {
            goto End;
        }


        if(t==1||t==2||t==3||t==4||t==6||t==7||t==8||t==9)
            {
                a[62]='O';
                q[0]=5;
            }
        else
            {
                a[16]='O';
                q[0]=1;
            }
        for(i=0; i<142; i++)
            printf("%c", a[i]);

                {
                    printf("Select another area:  ");
                    scanf("%d", &t);
                    p[1]=t;
                    if(t<10&&t>0)
                    {
                        {
                            if(t==1)
                                a[16]='X';
                            else if(t==2)
                                a[20]='X';
                            else if(t==3)
                                a[24]='X';
                            else if(t==4)
                                a[58]='X';
                            else if(t==5)
                                a[62]='X';
                            else if(t==6)
                                a[66]='X';
                            else if(t==7)
                                a[100]='X';
                            else if(t==8)
                                a[104]='X';
                            else
                                a[108]='X';

                        }
                        for(i=0; i<142; i++)
                            printf("%c", a[i]);
                    }
                    else
                    {
                        goto End;
                    }

                    {
                        if(p[0]==1)
                             {
                                 if(p[1]==2)
                                    {
                                        a[24]='O';
                                        q[1]=3;
                                    }
                                else if(p[1]==3)
                                    {
                                        a[20]='O';
                                        q[1]=2;
                                    }
                                else if(p[1]==4)
                                    {
                                        a[100]='O';
                                        q[1]=7;
                                    }
                                else if(p[1]==6)
                                    {
                                        a[20]='O';
                                        q[1]=2;
                                    }
                                else if(p[1]==7)
                                    {
                                        a[58]='O';
                                        q[1]=4;
                                    }
                                else if(p[1]==8)
                                    {
                                        a[58]='O';
                                        q[1]=4;
                                    }
                                else
                                    {
                                        a[20]='O';
                                        q[1]=2;
                                    }

                             }
                        else if(p[0]==2)
                             {
                                 if(p[1]==1)
                                    {
                                        a[24]='O';
                                        q[1]=3;
                                    }
                                 else if(p[1]==3)
                                    {
                                        a[16]='O';
                                        q[1]=1;
                                    }
                                 else
                                    {
                                        a[16]='O';
                                        q[1]=1;
                                    }
                             }
                        else if(p[0]==3)
                             {
                                 if(p[1]==2)
                                    {
                                        a[16]='O';
                                        q[1]=1;
                                    }
                                 else if(p[1]==6)
                                    {
                                        a[108]='O';
                                        q[1]=9;
                                    }
                                 else if(p[1]==8)
                                    {
                                        a[58]='O';
                                        q[1]=4;
                                    }
                                 else if(p[1]==9)
                                    {
                                        a[66]='O';
                                        q[1]=6;
                                    }
                                 else
                                    {
                                        a[20]='O';
                                        q[1]=2;
                                    }
                            }
                        else if(p[0]==4)
                            {
                                if(p[1]==1)
                                    {
                                        a[100]='O';
                                        q[1]=7;
                                    }
                                else if(p[1]==7)
                                    {
                                        a[16]='O';
                                        q[1]=1;
                                    }
                                else
                                    {
                                        a[16]='O';
                                        q[1]=1;
                                    }
                            }
                        else if(p[0]==5)
                            {
                                if(p[1]==2)
                                {
                                    a[104]='O';
                                    q[1]=8;
                                }
                                else if(p[1]==3)
                                {
                                    a[100]='O';
                                    q[1]=7;
                                }
                                else if(p[1]==4)
                                {
                                    a[66]='O';
                                    q[1]=6;
                                }
                                else if(p[1]==6)
                                {
                                    a[58]='o';
                                    q[1]=4;
                                }
                                else if(p[1]==7)
                                {
                                    a[24]='O';
                                    q[1]=3;
                                }
                                else if(p[1]==8)
                                {
                                    a[20]='O';
                                    q[1]=2;
                                }
                                else
                                {
                                    a[24]='O';
                                    q[1]=3;
                                }
                            }
                        else if(p[0]==6)
                            {
                                if(p[1]==9)
                                    {
                                        a[24]='O';
                                        q[1]=3;
                                    }
                                else if(p[1]==3)
                                    {
                                        a[108]='O';
                                        q[1]=9;
                                    }
                                else
                                    {
                                        a[24]='O';
                                        q[1]=3;
                                    }
                            }
                        else if(p[0]==7)
                            {
                                 if(p[1]==1)
                                    {
                                        a[58]='O';
                                        q[1]=4;
                                    }
                                 else if(p[1]==4)
                                    {
                                        a[16]='O';
                                        q[1]=1;
                                    }
                                 else if(p[1]==8)
                                    {
                                        a[108]='O';
                                        q[1]=9;
                                    }
                                 else if(p[1]==9)
                                    {
                                        a[104]='O';
                                        q[1]=8;
                                    }
                                 else
                                    {
                                        a[58]='O';
                                        q[1]=4;
                                    }
                            }
                         else if(p[0]==8)
                            {
                                if(p[1]==9)
                                    {
                                        a[100]='O';
                                        q[1]=7;
                                    }
                                else if(p[1]==3)
                                    {
                                        a[108]='O';
                                        q[1]=9;
                                    }
                                else
                                    {
                                        a[24]='O';
                                        q[1]=3;
                                    }
                            }
                         else if(p[0]==9)
                            {
                                 if(p[1]==1)
                                    {
                                        a[20]='O';
                                        q[1]=2;
                                    }
                                else if(p[1]==2)
                                    {
                                        a[58]='O';
                                        q[1]=4;
                                    }
                                else if(p[1]==3)
                                    {
                                        a[66]='O';
                                        q[1]=6;
                                    }
                                else if(p[1]==4)
                                    {
                                        a[20]='O';
                                        q[1]=2;
                                    }
                                else if(p[1]==6)
                                    {
                                        a[24]='O';
                                        q[1]=3;
                                    }
                                else if(p[1]==7)
                                    {
                                        a[104]='O';
                                        q[1]=8;
                                    }
                                else
                                    {
                                        a[100]='O';
                                        q[1]=7;
                                    }

                            }

                    }
                    for(i=0; i<142; i++)
                            printf("%c", a[i]);

                }
    //aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
                printf("Select another area:  ");
                    scanf("%d", &t);
                    p[2]=t;
                    if(t<10&&t>0)
                    {
                        {
                            if(t==1)
                                a[16]='X';
                            else if(t==2)
                                a[20]='X';
                            else if(t==3)
                                a[24]='X';
                            else if(t==4)
                                a[58]='X';
                            else if(t==5)
                                a[62]='X';
                            else if(t==6)
                                a[66]='X';
                            else if(t==7)
                                a[100]='X';
                            else if(t==8)
                                a[104]='X';
                            else
                                a[108]='X';

                        }
                        for(i=0; i<142; i++)
                            printf("%c", a[i]);
                    }
                    else
                    {
                        goto End;
                    }
    //oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo
                    {
                        if(p[0]==1)
                             {
                                 if(p[1]==2)
                                    {
                                        if(p[2]==7)
                                            {
                                                a[58]='O';
                                                q[2]=4;
                                            }
                                        else
                                            {
                                                a[100]='O';
                                                printf("SORRY, YOU ARE DEAFETED!!\n");
                                                goto result;

                                            }


                                    }
                                else if(p[1]==3)
                                    {
                                        if(p[2]==8)
                                            {
                                                a[58]='O';
                                                q[2]=4;
                                            }
                                        else
                                            {
                                                a[104]='O';
                                                printf("SORRY, YOU ARE DEAFETED!!\n");
                                                goto result;
                                            }

                                    }
                                else if(p[1]==4)
                                    {
                                        if(p[2]==3)
                                            {
                                                a[20]='O';
                                                q[2]=2;
                                            }
                                        else
                                            {
                                                a[24]='O';
                                                printf("SORRY, YOU ARE DEAFETED!!\n");
                                                goto result;
                                            }
                                    }
                                else if(p[1]==6)
                                    {
                                        if(p[2]==8)
                                            {
                                                a[24]='O';
                                                q[2]=3;
                                            }
                                        else
                                            {
                                                a[104]='O';
                                                printf("SORRY, YOU ARE DEAFETED!!\n");
                                                goto result;
                                            }
                                    }
                                else if(p[1]==7)
                                    {
                                        if(p[2]=6)
                                            {
                                                a[108]='O';
                                                q[2]=9;
                                            }
                                        else
                                            {
                                                a[66]='O';
                                                printf("SORRY, YOU ARE DEAFETED!!\n");
                                                goto result;
                                            }
                                    }
                                else if(p[1]==8)
                                    {
                                        if(p[2]=6)
                                            {
                                                a[108]='O';
                                                q[2]=9;
                                            }
                                        else
                                            {
                                                a[66]='O';
                                                printf("SORRY, YOU ARE DEAFETED!!\n");
                                                goto result;
                                            }
                                    }
                                else
                                    {
                                        if(p[2]==8)
                                            {
                                                a[100]='O';
                                                q[2]=7;
                                            }
                                        else
                                            {
                                                a[104]='O';
                                                printf("SORRY, YOU ARE DEAFETED!!\n");
                                                goto result;
                                            }
                                    }

                             }
    //RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR
                        else if(p[0]==2)
                             {
                                 if(p[1]==1)
                                    {
                                        if(p[2]==7)
                                            {
                                                a[58]='O';
                                                q[2]=4;
                                            }
                                        else
                                            {
                                                a[100]='O';
                                                printf("SORRY, YOU ARE DEAFETED!!\n");
                                                goto result;
                                            }
                                    }
                                 else if(p[1]==3)
                                    {
                                        if(p[2]==9)
                                            {
                                                a[66]='O';
                                                q[2]=6;
                                            }
                                        else
                                            {
                                                a[108]='O';
                                                printf("SORRY, YOU ARE DEAFETED!!\n");
                                                goto result;
                                            }

                                    }
                                 else
                                    {
                                        if(a[108]!='X')
                                            {
                                                a[108]='O';
                                                q[2]=9;
                                                printf("SORRY, YOU ARE DEAFETED!!\n");
                                                goto result;
                                            }
                                        else
                                            {
                                                a[24]='O';
                                                q[2]=3;
                                            }


                                    }
                             }
    //RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR
                        else if(p[0]==3)
                             {
                                 if(p[1]==2)
                                    {
                                        if(p[2]==9)
                                            {
                                                a[66]='O';
                                                q[2]=6;
                                            }
                                        else
                                            {
                                                a[108]='O';
                                                printf("SORRY, YOU ARE DEAFETED!!\n");
                                                goto result;
                                            }
                                    }
                                 else if(p[1]==6)
                                    {
                                        if(p[2]==1)
                                            {
                                                a[20]='O';
                                                q[2]=2;
                                            }
                                        else
                                            {
                                                a[16]='O';
                                                printf("SORRY, YOU ARE DEAFETED!!\n");
                                                goto result;
                                            }

                                    }
                                 else if(p[1]==8)
                                    {
                                        if(p[2]==6)
                                            {
                                                a[108]='O';
                                                q[2]=9;
                                            }
                                        else
                                            {
                                                a[66]='O';
                                                printf("SORRY, YOU ARE DEAFETED!!\n");
                                                goto result;
                                            }
                                    }
                                 else if(p[1]==9)
                                    {
                                        if(p[2]==4)
                                            {
                                                a[104]='O';
                                                q[2]=8;
                                            }
                                        else
                                            {
                                                a[58]='O';
                                                printf("SORRY, YOU ARE DEAFETED!!\n");
                                                goto result;
                                            }

                                    }
                                 else
                                    {
                                       if(p[2]==8)
                                       {
                                           if(a[16]=='.')
                                                {
                                                    a[16]='O';
                                                    q[2]=1;
                                                }

                                           else if(a[58]=='.')
                                                {
                                                    a[58]='O';
                                                    q[2]=4;
                                                }
                                            else
                                                {
                                                    a[100]='O';
                                                    q[2]=7;
                                                }
                                       }
                                       else
                                       {
                                                a[104]='O';
                                                printf("SORRY, YOU ARE DEAFETED!!\n");
                                                goto result;

                                       }
                                    }
                            }
   //RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR
                        else if(p[0]==4)
                            {
                                if(p[1]==1)
                                    {
                                        if(p[2]==3)
                                            {
                                                a[20]='O';
                                                q[2]=2;
                                            }
                                        else
                                            {
                                                a[24]='O';
                                                printf("SORRY, YOU ARE DEAFETED!!\n");
                                                goto result;

                                            }

                                    }
                                else if(p[1]==7)
                                    {
                                        if(p[2]==9)
                                            {
                                                a[104]='O';
                                                q[2]=8;
                                            }
                                        else
                                            {
                                                a[108]='O';
                                                printf("SORRY, YOU ARE DEAFETED!!\n");
                                                goto result;
                                            }
                                    }
                                else
                                    {
                                        if(a[108]=='.')
                                            {
                                                a[108]='O';
                                                printf("SORRY, YOU ARE DEAFETED!!\n");
                                                goto result;
                                            }
                                        else if(a[104]=='.')
                                            {
                                                a[104]='O';
                                                q[2]=8;
                                            }
                                        else
                                            {
                                                a[66]='O';
                                                q[2]=6;
                                            }


                                    }
                            }
    //RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR
                        else if(p[0]==5)
                            {
                                if(p[1]==2)
                                {
                                    if(p[2]==6)
                                        {
                                            a[58]='O';
                                            q[2]=4;
                                        }
                                    else if(p[2]==4)
                                        {
                                            a[66]='O';
                                            q[2]=6;
                                        }
                                    else
                                        {
                                            a[100]='O';
                                            q[2]=7;
                                        }

                                }
                                else if(p[1]==3)
                                {
                                    if(p[2]==4)
                                        {
                                            a[66]='O';
                                            q[2]=6;
                                        }
                                    else
                                        {
                                            a[58]='O';
                                            printf("SORRY, YOU ARE DEAFETED!!\n");
                                            goto result;
                                        }
                                }
                                else if(p[1]==4)
                                {
                                    if(p[2]==2)
                                        {
                                            a[104]='O';
                                            q[2]=8;
                                        }
                                    else if(p[2]==8)
                                        {
                                            a[20]='O';
                                            q[2]=2;
                                        }
                                    else if(p[2]==9)
                                        {
                                            a[104]='O';
                                            q[2]=8;
                                        }
                                    else
                                        {
                                            a[24]='O';
                                            q[2]=3;
                                        }
                                }
                                else if(p[1]==6)
                                {
                                    if(p[2]==7)
                                        {
                                            a[24]='O';
                                            q[2]=3;
                                        }
                                    else
                                        {
                                            a[100]='O';
                                            printf("SORRY, YOU ARE DEAFETED!!\n");
                                            goto result;
                                        }
                                }
                                else if(p[1]==7)
                                {
                                    if(p[2]==2)
                                        {
                                            a[104]='O';
                                            q[2]=8;
                                        }
                                    else
                                        {
                                            a[20]='O';
                                            printf("SORRY, YOU ARE DEAFETED!!\n");
                                            goto result;
                                        }
                                }
                                else if(p[1]==8)
                                {
                                    if(p[2]==3)
                                        {
                                            a[100]='O';
                                            q[2]=7;
                                        }
                                    else
                                        {
                                            a[24]='O';
                                            printf("SORRY, YOU ARE DEAFETED!!\n");
                                            goto result;
                                        }
                                }
                                else
                                {
                                    if(p[2]==2)
                                        {
                                            a[104]='O';
                                            q[2]=8;
                                        }
                                    else
                                        {
                                            a[20]='O';
                                            printf("SORRY, YOU ARE DEAFETED!!\n");
                                            goto result;
                                        }
                                }
                            }
    //RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR
                        else if(p[0]==6)

                            {
                                if(p[1]==9)
                                    {
                                        if(p[2]==7)
                                            {
                                                a[104]='O';
                                                q[2]=8;
                                            }
                                        else
                                            {
                                                a[100]='O';
                                                printf("SORRY, YOU ARE DEAFETED!!\n");
                                                goto result;
                                            }


                                    }
                                else if(p[1]==3)
                                    {
                                        if(p[2]==1)
                                            {
                                                a[20]='O';
                                                q[2]=2;
                                            }
                                        else
                                            {
                                                a[16]='O';
                                                printf("SORRY, YOU ARE DEAFETED!!\n");
                                                goto result;
                                            }
                                    }
                                else
                                    {
                                        if(a[100]=='.')
                                            {
                                                a[100]='O';
                                                printf("SORRY, YOU ARE DEAFETED!!\n");
                                                goto result;
                                            }
                                        else if(a[104]=='.')
                                            {
                                                a[104]='O';
                                                q[2]=8;
                                            }
                                        else
                                            {
                                                a[58]='O';
                                                q[2]=4;
                                            }

                                    }
                            }
      //RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR
                        else if(p[0]==7)
                            {
                                 if(p[1]==1)
                                    {
                                        if(p[2]==6)
                                            {
                                                a[108]='O';
                                                q[2]=9;
                                            }
                                        else
                                            {
                                                a[66]='O';
                                                printf("SORRY, YOU ARE DEAFETED!!\n");
                                                goto result;
                                            }


                                    }
                                 else if(p[1]==4)
                                    {
                                        if(p[2]==9)
                                            {
                                                a[104]='O';
                                                q[2]=8;
                                            }
                                        else
                                            {
                                                a[108]='O';
                                                printf("SORRY, YOU ARE DEAFETED!!\n");
                                                goto result;
                                            }
                                    }
                                 else if(p[1]==8)
                                    {
                                        if(p[2]==1)
                                            {
                                                a[58]='O';
                                                q[2]=4;
                                            }
                                        else
                                            {
                                                a[16]='O';
                                                printf("SORRY, YOU ARE DEAFETED!!\n");
                                                goto result;
                                            }

                                    }
                                 else if(p[1]==9)
                                    {
                                        if(p[2]==2)
                                            {
                                                a[66]='O';
                                                q[2]=6;
                                            }
                                        else
                                            {
                                                a[20]='O';
                                                printf("SORRY, YOU ARE DEAFETED!!\n");
                                                goto result;
                                            }
                                    }
                                 else
                                    {
                                       if(a[108]=='.')
                                            {
                                                a[108]='O';
                                                q[2]=9;
                                            }
                                        else if(a[104]=='.')
                                            {
                                                a[104]='O';
                                                q[2]=8;
                                            }
                                        else
                                            {
                                                a[24]='O';
                                                q[2]=3;
                                            }

                                    }
                            }
       //RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR
                         else if(p[0]==8)
                            {
                                if(p[1]==9)
                                    {
                                        if(p[2]==3)
                                            {
                                                a[66]='O';
                                                q[2]=6;
                                            }
                                        else
                                            {
                                                a[24]='O';
                                                printf("SORRY, YOU ARE DEAFETED!!\n");
                                                goto result;
                                            }

                                    }
                                else if(p[1]==3)
                                    {
                                        if(p[2]==1)
                                            {
                                                a[20]='O';
                                                q[2]=2;
                                            }
                                        else
                                            {
                                                a[16]='O';
                                                printf("SORRY, YOU ARE DEAFETED!!\n");
                                                goto result;
                                            }
                                    }
                                else
                                    {
                                        if(a[108]=='.')
                                            {
                                                a[108]='O';
                                                q[2]=9;
                                            }
                                        else if(a[100]=='.')
                                            {
                                                a[100]='O';
                                                q[2]=7;
                                            }
                                        else
                                            {
                                                a[24]='O';
                                                q[2]=3;
                                            }

                                    }
                            }
        //RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR
                         else if(p[0]==9)
                            {
                                 if(p[1]==1)
                                    {
                                        if(p[2]==8)
                                            {
                                                a[100]='O';
                                                q[2]=7;
                                            }
                                        else
                                            {
                                                a[104]='O';
                                                printf("SORRY, YOU ARE DEAFETED!!\n");
                                                goto result;
                                            }
                                    }
                                else if(p[1]==2)
                                    {
                                        if(p[2]==6)
                                            {
                                                a[24]='O';
                                                q[2]=3;
                                            }
                                        else
                                            {
                                                a[66]='O';
                                                printf("SORRY, YOU ARE DEAFETED!!\n");
                                                goto result;
                                            }

                                    }
                                else if(p[1]==3)
                                    {
                                       if(p[2]==4)
                                            {
                                                a[104]='O';
                                                q[2]=8;
                                            }
                                        else
                                            {
                                                a[58]='O';
                                                printf("SORRY, YOU ARE DEAFETED!!\n");
                                                goto result;
                                            }
                                    }
                                else if(p[1]==4)
                                    {
                                        if(p[2]==8)
                                            {
                                                a[100]='O';
                                                q[2]=7;
                                            }
                                        else
                                            {
                                                a[104]='O';
                                                printf("SORRY, YOU ARE DEAFETED!!\n");
                                                goto result;
                                            }
                                    }
                                else if(p[1]==6)
                                    {
                                        if(p[2]==7)
                                            {
                                                a[104]='O';
                                                q[2]=8;
                                            }
                                        else
                                            {
                                                a[100]='O';
                                                printf("SORRY, YOU ARE DEAFETED!!\n");
                                                goto result;
                                            }
                                    }
                                else if(p[1]==7)
                                    {
                                       if(p[2]==2)
                                            {
                                                a[66]='O';
                                                q[2]=6;
                                            }
                                        else
                                            {
                                                a[20]='O';
                                                printf("SORRY, YOU ARE DEAFETED!!\n");
                                                goto result;
                                            }
                                    }
                                else
                                    {
                                        if(p[2]==3)
                                            {
                                                a[66]='O';
                                                q[2]=6;
                                            }
                                        else
                                            {
                                                a[24]='O';
                                                printf("SORRY, YOU ARE DEAFETED!!\n");
                                                goto result;
                                            }
                                    }

                            }

                    }
                    for(i=0; i<142; i++)
                        printf("%c", a[i]);
    //OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
            printf("Select another area:  ");
                    scanf("%d", &t);
                    p[3]=t;
                    if(t<10&&t>0)
                    {
                        {
                            if(t==1)
                                a[16]='X';
                            else if(t==2)
                                a[20]='X';
                            else if(t==3)
                                a[24]='X';
                            else if(t==4)
                                a[58]='X';
                            else if(t==5)
                                a[62]='X';
                            else if(t==6)
                                a[66]='X';
                            else if(t==7)
                                a[100]='X';
                            else if(t==8)
                                a[104]='X';
                            else
                                a[108]='X';

                        }

                        {
                    if(p[0]==1||p[1]==1||p[2]==1||p[3]==1)
                                {
                                    if(p[1]==2||p[2]==2||p[3]==2||p[0]==2)
                                    {
                                        if(p[1]==3||p[2]==3||p[3]==3||p[0]==3)
                                        {
                                            printf("Congratulation, You have won The match>>>>>>>>!!!!!!!!\n");
                                            goto result;
                                        }

                                    }
                                }
                            else if(p[0]==4||p[1]==4||p[2]==4||p[3]==4)
                                {
                                    if(p[0]==5||p[1]==5||p[2]==5||p[3]==5)
                                    {
                                        if(p[0]==6||p[1]==6||p[2]==6||p[3]==6)
                                        {
                                            printf("Congratulation, You have won The match>>>>>>>>!!!!!!!!\n");
                                            goto result;
                                        }

                                    }
                                }
                            else if(p[0]==7||p[1]==7||p[2]==7||p[3]==7)
                                {
                                    if(p[0]==8||p[1]==8||p[2]==8||p[3]==8)
                                    {
                                        if(p[0]==9||p[1]==9||p[2]==9||p[3]==9)
                                        {
                                            printf("Congratulation, You have won The match>>>>>>>>!!!!!!!!\n");
                                            goto result;
                                        }

                                    }
                                }
                            else if(p[0]==1||p[1]==1||p[2]==1||p[3]==1)
                                {
                                    if(p[0]==4||p[1]==4||p[2]==4||p[3]==4)
                                    {
                                        if(p[0]==7||p[1]==7||p[2]==7||p[3]==7)
                                        {
                                            printf("Congratulation, You have won The match>>>>>>>>!!!!!!!!\n");
                                            goto result;
                                        }

                                    }
                                }
                            else if(p[0]==2||p[1]==2||p[2]==2||p[3]==2)
                                {
                                    if(p[0]==5||p[1]==5||p[2]==5||p[3]==5)
                                    {
                                        if(p[0]==8||p[1]==8||p[2]==8||p[3]==8)
                                        {
                                            printf("Congratulation, You have won The match>>>>>>>>!!!!!!!!\n");
                                            goto result;
                                        }

                                    }
                                }
                            else if(p[0]==3||p[1]==3||p[2]==3||p[3]==3)
                                {
                                    if(p[0]==6||p[1]==6||p[2]==6||p[3]==6)
                                    {
                                        if(p[0]==9||p[1]==9||p[2]==9||p[3]==9)
                                        {
                                            printf("Congratulation, You have won The match>>>>>>>>!!!!!!!!\n");
                                            goto result;
                                        }

                                    }
                                }
                            else if(p[0]==1||p[1]==1||p[2]==1||p[3]==1)
                                {
                                    if(p[0]==5||p[1]==5||p[2]==5||p[3]==5)
                                    {
                                        if(p[0]==9||p[1]==9||p[2]==9||p[3]==9)
                                        {
                                            printf("Congratulation, You have won The match>>>>>>>>!!!!!!!!\n");
                                            goto result;
                                        }

                                    }
                                }
                            else if(p[0]==3||p[1]==3||p[2]==3||p[3]==3)
                                {
                                    if(p[0]==5||p[1]==5||p[2]==5||p[3]==5)
                                    {
                                        if(p[0]==7||p[1]==7||p[2]==7||p[3]==7)
                                        {
                                            printf("Congratulation, You have won The match>>>>>>>>!!!!!!!!\n");
                                            goto result;
                                        }

                                    }
                                }



                        }
                        for(i=0; i<142; i++)
                            printf("%c", a[i]);
                    }
                    else
                    {
                        goto End;
                    }
        //CCCCCHHHHHEEEEKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKK
                {
                    for(i=0; i<142; i++)
                        {
                            if(a[i]=='.')
                                {
                                    a[i]='O';
                                    if(i==16)
                                        q[3]=1;
                                    else if(i==20)
                                        q[3]=2;
                                    else if(i==24)
                                        q[3]=3;
                                    else if(i==58)
                                        q[3]=4;
                                    else if(i==62)
                                        q[3]=5;
                                    else if(i==66)
                                        q[3]=6;
                                    else if(i==100)
                                        q[3]=7;
                                    else if(i==104)
                                        q[3]=8;
                                    else
                                        q[3]=9;
                                    break;
                                }

                        }
                    //CheKKK KKKK KKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKK

                        {
                            if(q[0]==1||q[1]==1||q[2]==1||q[3]==1)
                                {
                                    if(q[1]==2||q[2]==2||q[3]==2||q[0]==2)
                                    {
                                        if(q[1]==3||q[2]==3||q[3]==3||q[0]==3)
                                        {
                                            printf("SORRY, YOU ARE DEAFETED!!\n");
                                            goto result;
                                        }

                                    }
                                }
                            else if(q[0]==4||q[1]==4||q[2]==4||q[3]==4)
                                {
                                    if(q[0]==5||q[1]==5||q[2]==5||q[3]==5)
                                    {
                                        if(q[0]==6||q[1]==6||q[2]==6||q[3]==6)
                                        {
                                            printf("SORRY, YOU ARE DEAFETED!!\n");
                                            goto result;
                                        }

                                    }
                                }
                            else if(q[0]==7||q[1]==7||q[2]==7||q[3]==7)
                                {
                                    if(q[0]==8||q[1]==8||q[2]==8||q[3]==8)
                                    {
                                        if(q[0]==9||q[1]==9||q[2]==9||q[3]==9)
                                        {
                                            printf("SORRY, YOU ARE DEAFETED!!\n");
                                            goto result;
                                        }

                                    }
                                }
                            else if(q[0]==1||q[1]==1||q[2]==1||q[3]==1)
                                {
                                    if(q[0]==4||q[1]==4||q[2]==4||q[3]==4)
                                    {
                                        if(q[0]==7||q[1]==7||q[2]==7||q[3]==7)
                                        {
                                            printf("SORRY, YOU ARE DEAFETED!!\n");
                                            goto result;
                                        }

                                    }
                                }
                            else if(q[0]==2||q[1]==2||q[2]==2||q[3]==2)
                                {
                                    if(q[0]==5||q[1]==5||q[2]==5||q[3]==5)
                                    {
                                        if(q[0]==8||q[1]==8||q[2]==8||q[3]==8)
                                        {
                                            printf("SORRY, YOU ARE DEAFETED!!\n");
                                            goto result;
                                        }

                                    }
                                }
                            else if(q[0]==3||q[1]==3||q[2]==3||q[3]==3)
                                {
                                    if(q[0]==6||q[1]==6||q[2]==6||q[3]==6)
                                    {
                                        if(q[0]==9||q[1]==9||q[2]==9||q[3]==9)
                                        {
                                            printf("SORRY, YOU ARE DEAFETED!!\n");
                                            goto result;
                                        }

                                    }
                                }
                            else if(q[0]==1||q[1]==1||q[2]==1||q[3]==1)
                                {
                                    if(q[0]==5||q[1]==5||q[2]==5||q[3]==5)
                                    {
                                        if(q[0]==9||q[1]==9||q[2]==9||q[3]==9)
                                        {
                                            printf("SORRY, YOU ARE DEAFETED!!\n");
                                            goto result;
                                        }

                                    }
                                }
                            else if(q[0]==3||q[1]==3||q[2]==3||q[3]==3)
                                {
                                    if(q[0]==5||q[1]==5||q[2]==5||q[3]==5)
                                    {
                                        if(q[0]==7||q[1]==7||q[2]==7||q[3]==7)
                                        {
                                            printf("SORRY, YOU ARE DEAFETED!!\n");
                                            goto result;
                                        }

                                    }
                                }



                        }

                        for(i=0; i<142; i++)
                                printf("%c", a[i]);

                }
        //OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
                    printf("Select Last area:  ");
                    scanf("%d", &t);
                    p[4]=t;
                    if(t<10&&t>0)
                    {
                        {
                            if(t==1)
                                a[16]='X';
                            else if(t==2)
                                a[20]='X';
                            else if(t==3)
                                a[24]='X';
                            else if(t==4)
                                a[58]='X';
                            else if(t==5)
                                a[62]='X';
                            else if(t==6)
                                a[66]='X';
                            else if(t==7)
                                a[100]='X';
                            else if(t==8)
                                a[104]='X';
                            else
                                a[108]='X';

                        }

                        {
                            if(p[0]==1||p[1]==1||p[2]==1||p[3]==1||p[4]==1)
                                {
                                    if(p[1]==2||p[2]==2||p[3]==2||p[0]==2||p[4]==2)
                                    {
                                        if(p[1]==3||p[2]==3||p[3]==3||p[0]==3||p[4]==3)
                                        {
                                            printf("Congratulation, You have won The match>>>>>>>>!!!!!!!!\n");
                                            goto result;
                                        }

                                    }
                                }
                            else if(p[0]==4||p[1]==4||p[2]==4||p[3]==4||p[4]==4)
                                {
                                    if(p[0]==5||p[1]==5||p[2]==5||p[3]==5||p[4]==5)
                                    {
                                        if(p[0]==6||p[1]==6||p[2]==6||p[3]==6||p[4]==6)
                                        {
                                            printf("Congratulation, You have won The match>>>>>>>>!!!!!!!!\n");
                                            goto result;
                                        }

                                    }
                                }
                            else if(p[0]==7||p[1]==7||p[2]==7||p[3]==7||p[4]==7)
                                {
                                    if(p[0]==8||p[1]==8||p[2]==8||p[3]==8||p[4]==8)
                                    {
                                        if(p[0]==9||p[1]==9||p[2]==9||p[3]==9||p[4]==9)
                                        {
                                            printf("Congratulation, You have won The match>>>>>>>>!!!!!!!!\n");
                                            goto result;
                                        }

                                    }
                                }
                            else if(p[0]==1||p[1]==1||p[2]==1||p[3]==1||p[4]==1)
                                {
                                    if(p[0]==4||p[1]==4||p[2]==4||p[3]==4||p[4]==4)
                                    {
                                        if(p[0]==7||p[1]==7||p[2]==7||p[3]==7||p[4]==7)
                                        {
                                            printf("Congratulation, You have won The match>>>>>>>>!!!!!!!!\n");
                                            goto result;
                                        }

                                    }
                                }
                            else if(p[0]==2||p[1]==2||p[2]==2||p[3]==2||p[4]==2)
                                {
                                    if(p[0]==5||p[1]==5||p[2]==5||p[3]==5||p[4]==5)
                                    {
                                        if(p[0]==8||p[1]==8||p[2]==8||p[3]==8||p[4]==8)
                                        {
                                            printf("Congratulation, You have won The match>>>>>>>>!!!!!!!!\n");
                                            goto result;
                                        }

                                    }
                                }
                            else if(p[0]==3||p[1]==3||p[2]==3||p[3]==3||p[4]==3)
                                {
                                    if(p[0]==6||p[1]==6||p[2]==6||p[3]==6||p[4]==6)
                                    {
                                        if(p[0]==9||p[1]==9||p[2]==9||p[3]==9||p[4]==9)
                                        {
                                            printf("Congratulation, You have won The match>>>>>>>>!!!!!!!!\n");
                                            goto result;
                                        }

                                    }
                                }
                            else if(p[0]==1||p[1]==1||p[2]==1||p[3]==1||p[4]==1)
                                {
                                    if(p[0]==5||p[1]==5||p[2]==5||p[3]==5||p[4]==5)
                                    {
                                        if(p[0]==9||p[1]==9||p[2]==9||p[3]==9||p[4]==9)
                                        {
                                            printf("Congratulation, You have won The match>>>>>>>>!!!!!!!!\n");
                                            goto result;
                                        }

                                    }
                                }
                            else if(p[0]==3||p[1]==3||p[2]==3||p[3]==3||p[4]==3)
                                {
                                    if(p[0]==5||p[1]==5||p[2]==5||p[3]==5||p[4]==5)
                                    {
                                        if(p[0]==7||p[1]==7||p[2]==7||p[3]==7||p[4]==7)
                                        {
                                            printf("Congratulation, You have won The match>>>>>>>>!!!!!!!!\n");
                                            goto result;
                                        }

                                    }
                                }
                            else if(p[0]==1||p[0]==2||p[0]==3||p[0]==4||p[0]==5||p[0]==6||p[0]==7||p[0]==8||p[0]==9)
                                {
                                    printf("<<<<<<<<<<<<<   The Game is Drawn     >>>>>>>>>>>>>\n");
                                    goto result;
                                }
                            else
                                {
                                    printf("<<<<<<<<<<<<<   The Game is Drawn     >>>>>>>>>>>>>\n");
                                    goto result;
                                }



                        }

                    }
                    else
                    {
                        goto End;
                    }

    //Lllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllll

                     result: for(i=0; i<142; i++)
                                printf("%c", a[i]);

        }



 End:

 return 0;
}


