

#include <iostream>
using namespace std;



////void createPassword() { creating a password by the client
//
//}



//void generatePassword() {
//
//}

void addMoney() { // add money wallet
    
    bool loop = false;
    
    while (loop == false) {
        
        int choice = 0;
        
        double currency = 0;
        
        cout << endl << "    ***Add Money***" << endl << endl;
        cout << "     1: Dollar" << endl;
        cout << "     2: Dinar" << endl;
        cout << "     3: Euro" << endl;
        cout << "     4: Peso" << endl;
        cout << "     5: Pound" << endl;
        cout << "     6: Exit" << endl << endl;
        cout << "     Choice: ";
        
        cin >> choice;
        
        
        switch (choice) { // choice in wallet for add money
            case 1:
                cout << "How much would you like to add? (Format: n.nn)\n";
                cin >> currency;
                
                cout << "Added " << endl;
                break;
                
            case 2:
                cout << "How much would you like to add? (Format: n.nn)\n";
                cin >> currency;
                
                cout << "Added " << endl;
                break;
                
            case 3:
                cout << "How much would you like to add? (Format: n.nn)\n";
                cin >> currency;
                
                cout << "Added " << endl;
                break;
                
            case 4:
                cout << "How much would you like to add? (Format: n.nn)\n";
                cin >> currency;
                
                cout << "Added " << endl;
                break;
                
            case 5:
                cout << "How much would you like to add? (Format: n.nn)\n";
                cin >> currency;
                
                cout << "Added " << endl;
                break;
                
            case 6:
                loop = true;
                break;
                
            default:
                cout << "**Please enter a valid choice**\n" << endl;
                break;
                
        }
        
    }
}


void CheckPassword() { // check password in wallet
    char password;
    cin >> password;
    
    if (password == '78qw86') {
        cout << "you have successfully logged in";
    }
}



void viewWallet() { /// viev wallet
    cout << "    ***Viewing Wallet***" << endl;
    cout << "     1: Dollars: " << "\n";
    cout << "     2: Dinars: " << "\n";
    cout << "     3: Euro: " << "\n";
    cout << "     4: Peso: " << "\n";
    cout << "     5: Pound: " << "\n";
    cout   << endl << endl;
    system("pause");
}


int main() {
    
    cout << "***Welcome to our wallet***";
    cout << endl << endl;
    cout << "Press any key to activate";
    
    int choice = 0; // choise in wallet
    cin >> choice;
    double currency = 0; //
    
    viewWallet(); // call function
    
    switch (choice) { // subtract in wallet
        case 1:
            cout << "How much would you like to subtract?";
            cin >> currency;
            cout << "Subtracted " << currency << " in dollars to wallet" << endl;
            break;
        case 2:
            cout << "How much would you like to subtract?";
            cin >> currency;
            cout << "Subtracted " << currency << " in dollars to wallet" << endl;
            break;
        case 3:
            cout << "How much would you like to subtract?";
            cin >> currency;
            cout << "Subtracted " << currency << " in euros to wallet\n" << endl;
            break;
        case 4:
            cout << "How much would you like to subtract?";
            cin >> currency;
            cout << "Subtracted "  << currency << " in pesos to wallet\n" << endl;
            break;
        case 5:
            cout << "How much would you like to subtract?";
            cin >> currency;
            cout << "Subtracted " <<  currency << " in pounds to wallet\n" << endl;
            break;
        default:
            cout << "Please enter a valid choice**\n" << endl;
            break;
    }
    
    
    cout << currency << endl; // check how much is left
    
    addMoney(); // add money in wallet
    
    cout << "Transactions" << endl;
    cout << "Story Wallet" << endl;
    cout << "Сheck wallet" << endl;
    
    
    //  creating transaction data
    
//
//    const int size = 3;
//    int arr[size] = {
//        4405566944382491,
//        4405567690063582,
//        4405562373873027};
//
//    for (int i = 0; i < size; i++) {
//        cout << i << endl; // my cards
//    }
//
    
    // about cards
    
    
    
    
    
    
    
    //  сreate story in wallet
    
    
    
    
    
    
    
    
}


