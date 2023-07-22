#include <iostream>
using namespace std;
#define max_size 4
int TOP = 0, value;
int stack[max_size];

void PUSH()
{
    if (TOP == max_size)
        cout << "No space in stack !! stack is overflow";
    else
    {
        cout << "\nEnter the value : ";
        cin >> value;
        stack[TOP] = value;
        TOP = TOP + 1;
    }
}
void POP()
{
    if (TOP == 0)
        cout << " \nStack is empty ";
    else
    {
        TOP = TOP - 1;
        cout << "\nremoved value is : " << stack[TOP];
    }
}
void DISPLAY()
{
    if (TOP == 0)
        cout << "\nStack is empty";
    else
    {
        int i;
        cout << "\nStack Size : " << TOP;
        cout << "\nValues are : \n";
        for (i = TOP - 1; i >= 0; i--)
            cout << stack[i] << "\n";
    }
}
int main()
{
    int choice;
    cout << "## Stack menu ##";
    cout << endl;
    cout << "\nPress 1 to PUSH data";
    cout << "\nPress 2 for POP data";
    cout << "\nPress 3 to DISPLAY data";
    cout << "\nPress 4 for EXIT";
    cout << endl;
    do
    {
        cout << "\nEnter your choice : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            PUSH();
            break;
        case 2:
            POP();
            break;
        case 3:
            DISPLAY();
            break;
        default:
            cout << " \nWrong choice !! please choice 1 to 4";
        case 4:
            cout << " \nExited ";
            return 0;
            break;
        }

    } while (value != 4);
}
