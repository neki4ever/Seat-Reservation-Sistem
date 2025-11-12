#include <iostream>
using namespace std;

int main()
{

    bool menuRunning = true;
    int menuChoice, i, j, row, col;
    char quitSelect;
    int seatsFree = 0;
    int seats[10][10] = {
        
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    };

    while(menuRunning)
    {

        cout << endl;
        cout << "============================" << endl;
        cout << "----Menu----" << endl;
        cout << "1. Display seats" << endl;
        cout << "2. Reserve seats" << endl;
        cout << "3. Cancel reservation" << endl;
        cout << "4. Seats available" << endl;
        cout << "5. Reset seats" << endl;
        cout << "6. QUIT" << endl;
        cout << "============================" << endl;
        cout << endl;
        cout << "Choose an option: ";
        cin >> menuChoice;

        switch(menuChoice)
        {
            case 1:
                cout << "============================" << endl;
                for(i = 0; i < 10; i++)
                {
                    cout << endl;
                    for(j = 0; j < 10; j++)
                    {
                        cout << "[" << seats[i][j] << "]" << " ";
                    }
                }

                cout << endl;

            break;

            case 2:
                cout << "Enter seat row: ";
                cin >> row;
                cout << endl;
                cout << "Enter seat column: ";
                cin >> col;
                cout << endl;

                if(row < 0 || row >= 10 || col < 0 || col >= 10){
                    cout << "Invalid seat position! Please choose between 0 and 9.";
                    break;
                }

                if(seats[row][col] == 1){
                    cout << "Seat already reserved! Choose a different seat! \n";
                } else {
                    seats[row][col] = 1;
                    cout << "Seat reserved successfully! \n ";
                }

                seatsFree = 0;

            break;

            case 3:
                cout << "Enter seat row: ";
                cin >> row;
                cout << endl;
                cout << "Enter seat column: ";
                cin >> col;

                if(row < 0 || row >= 10 || col < 0 || col >= 10){
                    cout << "Invalid seat position! Please choose between 0 and 9.";
                    cout << endl;
                    break;
                }

                if(seats[row][col] == 0){
                    cout << "Seat already unreserved!";
                    cout << endl;
                    break;
                } else {
                    seats[row][col] = 0;
                    cout << endl;
                    cout << "Seat successfully unreserved!";
                }

                seatsFree = 0;

            break;

            case 4:

                for(i = 0; i < 10; i++)
                {
                    for(j = 0; j < 10; j++)
                    {
                        if(seats[i][j] == 0){
                            seatsFree += 1;
                        }


                    }
                }

                cout << endl;
                cout << "Seats free: " << seatsFree;
                cout << endl;

            break;

            case 5:
                for(i = 0; i < 10; i++)
                {
                    for(j = 0; j < 10; j++)
                    {
                        if(seats[i][j] == 1)
                        {
                            seats[i][j] = 0;
                        }
                    }
                }

                seatsFree = 0;

            break;

            case 6:
                cout << endl;
                cout << "!=!=!=!=!=!=!=!=!=!=!=!=!=!=!" << endl;
                cout << "Are you sure you want to quit?[Y/N]: " << endl;
                cout << "!=!=!=!=!=!=!=!=!=!=!=!=!=!=!" << endl;
                cin >> quitSelect;

                if(quitSelect =='n' || quitSelect == 'N'){
                    break;
                } else if(quitSelect == 'y' || quitSelect == 'Y'){
                    cout << "Goodbye!" << endl;
                    menuRunning = false;
                } else {
                    cout << "Please type Y or N!";
                    break;
                }

                

            break;

            default:
                cout << "Please select options 1 through 6!";
            break;

        }
    }



}