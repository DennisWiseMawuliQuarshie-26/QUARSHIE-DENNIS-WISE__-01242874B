
/*Explain the difference between the do-while and while loops in C++. When would you
use each one? */


/*1. while loop (Entry-controlled loop)
 */

int i = 1; {

    while (i <= 5) 
    cout << i << " ";
    i++;
}

    return 0 ;




/*2. do…while loop (Exit-controlled loop)*/

do {
    cout << "1. Play Game\n2. Exit\n";
    cin >> choice;
} while (choice != 2);
