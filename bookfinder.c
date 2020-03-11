void bookFinder()
{
    system("cls");
    squareTemplate();
    system("COLOR F6");
    gotoxy(46,8);
    printf("BOOKFINDER");
    gotoxy(36,10);
    printf("Find the location of the books");
    gotoxy(40,14);
    printf("Press any key to continue  ");
    char i = getche();
    bookFinderMenu();
}

void bookFinderMenu()
{
    system("cls");
    squareTemplate();
    gotoxy(48,8);
    printf("BOOKFINDER");
    gotoxy(36,10);
    printf("1. Map of library");
    br(1);
    printf("2. Search for a particular book");
    br(1);
    printf("3. Exit from BOOKFINDER");
    gotoxy(40,20);
    printf("Enter your choice  ");
    char i = getche();
    switch(i)
    {
        case '1':
            fillBlankMap();
            break;
        case '2':
            bookOptions();
            break;
        case '3':
            system("COLOR 2E");
            mainMenu();
            break;
        default:
            bookFinderMenuError();
    }
}

void bookFinderMenuError()
{
    system("cls");
    squareTemplate();
    gotoxy(26,8);
    printf("You have entered invalid information");
    br(2);
    printf("Do you want to return to the BOOKFINDER(Y/N)? ");
    char ch = getche();
    switch(ch)
    {
        case 'Y':
        case 'y':
            bookFinderMenu();
            break;
        case 'N':
        case 'n':
            mainMenu();
            break;
        default:
            mainMenuError();
    }
}

void blankMap()
{
    system("cls");
    system("COLOR 0A");
    for(int p=5;p<=100;p++)
    {
        for(int q=3;q<=25;q++)
        {
            if(p==5||p==100||q==3||q==25)
            {
                gotoxy(p,q);
                printf("*");
            }
        }
    }
    // The map starts here
    lineHorizontal(5,100,8);
    lineVertical(75,8,25);
    lineVertical(25,8,15);
    lineHorizontal(5,75,15);
    lineVertical(36,15,25);
}

void fillBlankMap()
{
    blankMap();
    gotoxy(50,1);
    printf("LIBRARY");
    gotoxy(50,5);
    printf("Section A");
    gotoxy(10,12);
    printf("Section B");
    gotoxy(47,12);
    printf("Section C");
    gotoxy(82,16);
    printf("Section D");
    gotoxy(12,20);
    printf("Section E");
    gotoxy(47,20);
    printf("Section F");
    gotoxy(12,26);
    getche();
    system("COLOR F6");
    bookFinderMenu();
}

void bookOptions()
{
    system("cls");
    squareTemplate();
    gotoxy(26,8);
    printf("1. Physics");
    br(1);
    printf("2. Chemistry");
    br(1);
    printf("3. Mathematics");
    br(1);
    printf("4. Computer Programming");
    br(2);
    printf("Enter Your Choice ");
    char ch = getche();
    switch(ch)
    {
    case '1':
        physicsMap();
    case '2':
        chemistryMap();
    case '3':
        mathMap();
    case '4':
        cMap();
    default:
        bookFinderMenuError();
    }
}

void physicsMap()
{
    blankMap();
    gotoxy(50,1);
    printf("PHYSICS");
    gotoxy(50,16);
    printf("++");
    br(1);
    printf("++");
    gotoxy(12,26);
    getche();
    system("COLOR F6");
    bookFinderMenu();
}

void chemistryMap()
{
    blankMap();
    gotoxy(50,1);
    printf("CHEMISTRY");
    gotoxy(12,17);
    printf("++");
    br(1);
    printf("++");
    gotoxy(12,26);
    getche();
    system("COLOR F6");
    bookFinderMenu();
}

void mathMap()
{
    blankMap();
    gotoxy(50,1);
    printf("MATHEMATICS");
    gotoxy(13,12);
    printf("++");
    br(1);
    printf("++");
    gotoxy(12,26);
    getche();
    system("COLOR F6");
    bookFinderMenu();
}

void cMap()
{
    blankMap();
    gotoxy(40,1);
    printf("COMPUTER PROGRMMING");
    gotoxy(80,14);
    printf("++");
    br(1);
    printf("++");
    gotoxy(12,26);
    getche();
    system("COLOR F6");
    bookFinderMenu();
}
