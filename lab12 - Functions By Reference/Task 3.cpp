#include <iostream>
using namespace std;

/*
COMMENTED BLOCK BELOW FOR GRID FUNCTION IMPLEMENTATION IS A DIFFERENT APPROACH YET UNSECCESSFUL 👇
*/

// void grid(int& row, int& col){
//     static char matrix[13][6];
//     if(matrix[row][col] == 'X'){
//         cout<<"\n\t\t***SEAT ALREADY OCCUPIED***\n\n";
//     }
//     else {
//         cout<<"\tA\tB\tC\tD\tE\tF\n\n";
//         for(int i = 0; i<13; i++){
//             cout<<"Row "<<i+1;
//             for(int j = 0; j<6; j++){
//                 if(matrix[i][j] == matrix[row][col]){
//                     matrix[row][col] = 'X';
//                     cout<<"\tX";
//                 }
//                 else{
//                     if(matrix[i][j] == 'X'){
//                         break;
//                     }
//                     else {
//                         matrix[i][j] = '*';
//                     }
//                     cout<<"\t*";
//                 }
//             }
//             cout<<endl<<endl;
//         }
//     }
// }

/*
BELOW GRID FUNCTION IMPLEMENTATION IS SUCCESSFUL APPROACH 👇 
*/

void grid(int& row, int& col){
    static char matrix[13][6];
    
    if(matrix[row][col] == 'X'){
        cout << "\n\t\t***SEAT ALREADY OCCUPIED***\n\n";
    }
    else {
        matrix[row][col] = 'X'; // Mark the seat as booked
        cout << "\tA\tB\tC\tD\tE\tF\n\n";
        for(int i = 0; i < 13; i++){
            cout << "Row " << i + 1;
            for(int j = 0; j < 6; j++){
                if(matrix[i][j] == 'X'){
                    cout << '\t' << matrix[i][j];
                }
                else{
                    matrix[i][j] = '*';
                    cout << '\t' << matrix[i][j];
                }
            }
            cout << endl << endl;
        }
    }
}

int main(){
    int row, col, _class;
    cout<<"\n\t  **WELCOME TO SAAD INTERNATIONAL AIRLINES**\n\n  ";

    while (true){
        cout<<"To Book a seat, Select which class you want seat for: ";
        cout<<"\n 1. First Class";
        cout<<"\n 2. Business Class";
        cout<<"\n 3. Economy Class";
        cout<<"\n 4. EXIT PROGRAM\n\n";
        cin>> _class;
        switch(_class){
            case 1:
                cout<<"\nYOU CHOSE FIRST CLASS\n";
                cout<<"Enter row in which you want seat (row 1 or row 2): ";
                cin>>row;
                while(row!=1 && row!=2){
                    cout<<"\nINVALID ROW IN FIRST CLASS!";
                    cout<<"\nEnter row in which you want seat (row 1 or row 2): ";
                    cin>>row;
                    if(row == 1 || row == 2){
                        break;
                    }
                }
                cout<<"Enter which seat in row "<<row<<" you want (seat 1 to seat 6): ";
                cin>>col;
                while(col>6 || col<1){
                    cout<<"\nINVALID SEAT IN FIRST CLASS!";
                    cout<<"\nEnter which seat in row "<<row<<" you want (seat 1 to seat 6): ";
                    cin>>col;
                }
                row = row - 1;
                col = col - 1;
                grid(row, col);
            break;

            case 2:
                cout<<"\nYOU CHOSE BUSINESS CLASS\n";
                cout<<"Enter row in which you want seat (row 3 - row 7): ";
                cin>>row;
                while(row!=3 && row!=4 && row!=5 && row!=6 && row!=7){
                    cout<<"\nINVALID ROW IN BUSINESS CLASS!";
                    cout<<"\nEnter row in which you want seat (row 3 - row 7): ";
                    cin>>row;
                    if(row == 3 || row == 4 || row == 5 || row == 6 || row == 7){
                        break;
                    }
                }
                cout<<"Enter which seat in row "<<row<<" you want (seat 1 to seat 6): ";
                cin>>col;
                while(col>6 || col<1){
                    cout<<"\nINVALID SEAT IN BUSINESS CLASS!";
                    cout<<"\nEnter which seat in row "<<row<<" you want (seat 1 to seat 6): ";
                    cin>>col;
                }
                row = row - 1;
                col = col - 1;
                grid(row, col);
            break;

            case 3:
                cout<<"\nYOU CHOSE ECONOMY CLASS\n";
                cout<<"Enter row in which you want seat (row 8 - row 13): ";
                cin>>row;
                while(row!=8 && row!=9 && row!=10 && row!=11 && row!=12 && row!=13){
                    cout<<"\nINVALID ROW IN ECONOMY CLASS!";
                    cout<<"\nEnter row in which you want seat (row 8 - row 13): ";
                    cin>>row;
                    if(row == 8 || row == 9 || row == 10 || row == 11 || row == 12 || row == 13){
                        break;
                    }
                }
                cout<<"Enter which seat in row "<<row<<" you want (seat 1 to seat 6): ";
                cin>>col;
                while(col>6 || col<1){
                    cout<<"\nINVALID SEAT IN ECONOMY CLASS!";
                    cout<<"\nEnter which seat in row "<<row<<" you want (seat 1 to seat 6): ";
                    cin>>col;
                }
                row = row - 1;
                col = col - 1;
                grid(row, col);
            break;

            case 4:
                cout<<"\t\t***YOU HAVE EXITED THE PROGRAM***\n\n";
                exit(0);

            default:
                cout<<"INVALID SET OF INPUTS :( !!!\n\n";
        }
        char ch;
        cout<<"\n\n-> Do you want to register another seat? (y or n): ";
        cin>>ch;
        if (ch == 'y' || ch == 'Y'){
            continue;
        }
        else{
            break;
        }
    }
    return 0;
}
