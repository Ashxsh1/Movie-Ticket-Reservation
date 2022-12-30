#include<iostream>

using namespace std;

class MovieTicketReservation{
    int book, silver, gold, platinum;
    public:
        void get_data()
        {
            silver = 50;
            gold = 30;
            platinum = 20;
        }
        void show_data()
        {
            cout << "Number of tickets available in Silver class: " << silver << endl;
            cout << "Number of tickets available in Gold class: " << gold << endl;
            cout << "Number of tickets available in Platinum class: " << platinum << endl;
        }
        void book_ticket()
        {
            char ch;
            cout << "Select the class ticket you want to book\n1 - Silver, 2 - Gold, 3 - Platinum: ";
            cin >> ch;
            switch(ch)
            {
                case '1':
                    cout << "Enter the number of tickets you want to book in Silver class: ";
                    cin >> book;
                    if (book > silver)
                        cout << "Out of limit!\nTry again" << endl;
                    else
                    {
                        silver -= book;
                        cout << "Ticket Cost: " << book*120 << endl;
                    }
                    break;
                case '2':
                    cout << "Enter the number of tickets you want to book in Gold class: ";
                    cin >> book;
                    if (book > gold)
                        cout << "Out of limit!\nTry again" << endl;
                    else
                    {
                        gold -= book;
                        cout << "Ticket Cost: " << book*150 << endl;
                    }
                    break;
                case '3':
                    cout << "Enter the number of tickets you want to book in Platinum class: ";
                    cin >> book;
                    if (book > platinum)
                        cout << "Out of limit!\nTry again" << endl;
                    else
                    {
                        platinum -= book;
                        cout << "Ticket Cost: " << book*200 <<"\nHurray!\nYour Tickets are booked!\nEnjoy the movie!"<< endl;
                    }
                    break;
                default:
                    cout << "Invalid input. Please try again." << endl;
                    break;
            }
        }
};

int main()
{
    MovieTicketReservation t;
    t.get_data();
    int choice;
    do
    {
        cout << "\nXYZ Theater ticket booking system:" << endl;
        cout << "\n1 -> Available Tickets" << endl;
        cout << "\n2 -> Book a ticket" << endl;
        cout << "\n3 -> Exit" << endl;
        cout << "\nEnter your choice: ";
        cin >> choice;
        switch(choice)
        {
            case 1:
                t.show_data();
                break;
            case 2:
                t.book_ticket();
                break;
            case 3:
                break;
            default:
                cout << "Invalid input. Please try again." << endl;
                break;
        }
    }while(choice != 3);
    return 0;
}