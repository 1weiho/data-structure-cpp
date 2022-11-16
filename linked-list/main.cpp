#include <iostream>

#include "linked-list.cpp"

using namespace std;

int main() {
    LinkedList linkedList;
    int option = -1;
    int input;

    system("clear");
    cout << "[Option List]" << endl;
    cout << "(0) Exit" << endl;
    cout << "(1) Print list" << endl;
    cout << "(2) Push a number to the front of list" << endl;
    cout << "(3) Push a number to the end of list" << endl;
    cout << "(4) Delete a number in the list" << endl;
    cout << "(5) Clear the list" << endl;
    cout << "(6) Reverse the list" << endl << endl;

    while (option != 0) {
        cout << "> ";
        cin >> option;

        switch (option) {
            case 0:
                system("clear");
                break;
            case 1:
                cout << "[OUTPUT] ";
                linkedList.printList();
                cout << endl;
                break;
            case 2:
                cout << "[OUTPUT] Enter a number you want to push to front"
                     << endl
                     << "> ";
                cin >> input;
                linkedList.pushFront(input);
                cout << "[OUTPUT] Push " << input
                     << " to the front of list successfully" << endl
                     << endl;
                break;
            case 3:
                cout << "[OUTPUT] Enter a number you want to push to end"
                     << endl
                     << "> ";
                cin >> input;
                linkedList.pushEnd(input);
                cout << "[OUTPUT] Push " << input
                     << " to the end of list successfully" << endl
                     << endl;
                break;

            case 4:
                cout << "[OUTPUT] Enter a number you want to delete" << endl
                     << "> ";
                cin >> input;
                cout << "[OUTPUT] ";
                linkedList.deleteNode(input);
                cout << endl;
                break;
            case 5:
                cout << "[OUTPUT] ";
                linkedList.clear();
                cout << endl;
                break;
            // case 6:
            //     linkedList.reverse();
            //     break;
            default:
                cout << "[OUTPUT] INVALID OPTION: " << option << endl << endl;
                break;
        }
    }
}
