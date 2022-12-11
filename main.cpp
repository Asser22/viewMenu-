#include <iostream>

using namespace std;

double validationOnNumbers(double number)
{
    //if the user fails to put in a number, ask the user to re-do it
    while(cin.fail()) {
        cout << "Error! Please enter a number!" << endl;
        cin.clear(); //clear the input
        cin.ignore(256, '\n');
        cout << "Please Reenter the number: ";
        cin >> number;
    }
    return number;//return the valid number
}

void viewMenu(){
    cout << "Welcome to the main menu of the CCTV Purchasing Platform! Please select one of the below options." << endl;
    cout << "1. View User Info Menu" << endl;
    cout << "2. View Products Menu" << endl;
    cout << "3. View Orders Menu" << endl;
    cout << "(SALES+) 4. View Customer Info" << endl;
    cout << "(SALES+) 5. View Customer Orders" << endl;
    cout << "(MANAGER) 6. Update Customer Info" << endl;
    cout << "(MANAGER) 7. Edit Products Menu" << endl;

    cout << "Please enter a choice: ";
    char choice;
    scanf("%c",&choice);
    validationOnNumbers(choice);
    switch(choice) {
        case '1':

            break;
        case '2':

            break;
        case '3':

            break;
        case '4':

            break;
        case '5':

            break;
        case '6':

            break;
        case '7':

            break;
        default:
            cout << "Not a Valid Choice. \n"
                 << "Choose again.\n";
            break;
    }



}
int main() {
    viewMenu();
    return 0;
}

