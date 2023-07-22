#include <iostream>
using namespace std;
#define MAX_SIZE 5
int QUEUE[MAX_SIZE], FRONT, REAR = -1, ITEM;

void enQUEUE()
{
    if (REAR == MAX_SIZE - 1)
        cout << "Queue is FUll! Overflow";
    else
    {
        cout << "Enter the ITEM to be PUSHED: ";
        cin >> ITEM;
        if (FRONT == -1)
            FRONT = 0;

        else
        {
            REAR = REAR + 1;
            QUEUE[REAR] = ITEM;
        }
    }
}
void deQUEUE()
{
    if (FRONT == -1 || FRONT > REAR)
        cout << "Queue is Empty! Underflow";
    else
    {
        cout << "Poped Value: " << QUEUE[FRONT];
        FRONT = FRONT + 1;
    }
}
void DISPLAY()
{
    int i;
    if (FRONT == -1 || FRONT > REAR)
        cout << "Queue is Empty";
    else
    {
        cout << "Queue Size: " << REAR - FRONT + 1;
        cout << "\n Values: \n";
        for (i = FRONT; i <= REAR; i++)
            cout << QUEUE[i] << "\n";
    }
}
int main()
{
    int choice;
    cout << "## QUEUE main menu ##";
    cout << "\n Press 1 to enQUEUE";
    cout << "\n Press 2 for deQUEUE";
    cout << "\n Press 3 for DISPLAY";
    cout << "\n Press 4 to EXIT";
    do
    {
        cout << "\n Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            enQUEUE();
            break;
        case 2:
            deQUEUE();
            break;
        case 3:
            DISPLAY();
            break;
        case 4:
            cout << "Exit";
            break;
        default:
            cout << "Wrong Choice! Try Again..";
        }
    } while (choice != 4);
}