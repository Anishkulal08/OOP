#include<iostream>
#include<iomanip>
#include<string>
#include<cstdlib>
using namespace std;

class cricket
{
public:
    string player_code, name;
    int matches_play, total_runs, not_out;

    cricket()
    {
        matches_play = 0;
        total_runs = 0;
        not_out = 0;
    }

    void details()
    {
        cout << "Enter the Player Code: ";
        cin >> player_code;

        cout << "Enter the Player Name: ";
        cin >> name;

        cout << "Enter Number of matches Played: ";
        cin >> matches_play;

        cout << "Enter Total Runs: ";
        cin >> total_runs;

        cout << "Enter Number of times not out: ";
        cin >> not_out;
    }

    void average_run()
    {
        int out = matches_play - not_out;

        if(out == 0)
        {
            cout << "Average cannot be calculated because player was never out.";
        }
        else
        {
            float avg = (float)total_runs / out;

            cout << "Average Score of " << name
                 << " is: " << fixed << setprecision(2) << avg;
        }
    }

    void average_run(cricket p[], int count)
    {
        if(count == 0)
        {
            cout << "No players entered.";
            return;
        }

        float avg = 0;
        int valid_players = 0;

        for(int i = 0; i < count; i++)
        {
            int out = p[i].matches_play - p[i].not_out;

            if(out != 0)
            {
                avg += (float)p[i].total_runs / out;
                valid_players++;
            }
        }

        if(valid_players == 0)
        {
            cout << "Average cannot be calculated.";
        }
        else
        {
            avg = avg / valid_players;

            cout << "Average Score of all players: "
                 << fixed << setprecision(2) << avg;
        }
    }

    void display()
    {
        cout << "\nPlayer Code: " << player_code;
        cout << "\nPlayer Name: " << name;
        cout << "\nNumber of matches played: " << matches_play;
        cout << "\nTotal runs: " << total_runs;
        cout << "\nNumber of times not out: " << not_out;
        cout << "\n";
    }
};

int main()
{
    cricket p[10];
    int choice, count = 0;

    while(true)
    {
        cout << "\n\n-------Menu-------";
        cout << "\n1. Enter Player Detail";
        cout << "\n2. Display Average Run";
        cout << "\n3. Average Run of All Players";
        cout << "\n4. Display Players Sorted by Total Runs";
        cout << "\n5. Exit";

        cout << "\nEnter Your Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                if(count >= 10)
                {
                    cout << "Maximum number of players reached.";
                }
                else
                {
                    p[count].details();
                    count++;
                }
                break;

            case 2:
            {
                int indx;

                if(count == 0)
                {
                    cout << "Enter players first.";
                    break;
                }

                cout << "Enter player number to check average run: ";
                cin >> indx;

                if(indx <= 0 || indx > count)
                {
                    cout << "Please enter a valid player number.";
                }
                else
                {
                    p[indx - 1].average_run();
                }

                break;
            }

            case 3:
                p[0].average_run(p, count);
                break;

            case 4:
            {
                for(int i = 0; i < count - 1; i++)
                {
                    for(int j = 0; j < count - i - 1; j++)
                    {
                        if(p[j].total_runs > p[j + 1].total_runs)
                        {
                            cricket temp = p[j];
                            p[j] = p[j + 1];
                            p[j + 1] = temp;
                        }
                    }
                }

                cout << "\nPlayers sorted according to total runs:\n";

                for(int i = 0; i < count; i++)
                {
                    p[i].display();
                }

                break;
            }

            case 5:
                exit(0);

            default:
                cout << "Invalid choice.";
        }
    }

    return 0;
}