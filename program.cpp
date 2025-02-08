#include <iostream>
#include <string>
using namespace std;

void center(int& point) {
    cout << "\n--------------- Welcome to my program ---------------\n" << endl;
    cout << "1. Zaid Game." << endl;
    cout << "2. TO-DO list." << endl;
    cout << "3. Finish the program." << endl;
    cout << "Enter your choice: ";
    cin >> point;
}

class Game {
public:
    char board[3][3] = { {'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'} };
    char currentPlayer = 'X';
    int choice;
    bool gameOver = false;

    void DrawBoard() {
        cout << "     |     |     " << endl;
        for (int i = 0; i < 3; i++) {
            cout << "  " << board[i][0] << "  |  " << board[i][1] << "  |  " << board[i][2] << endl;
            if (i < 2) cout << "_____|_____|_____" << endl;
        }
        cout << "\n";
    }

    void PlayerMove() {
        bool validMove = false;
        while (!validMove) {
            cout << "Player " << currentPlayer << ", enter a number (1-9): ";
            cin >> choice;
            int row = (choice - 1) / 3;
            int col = (choice - 1) % 3;
            if (choice >= 1 && choice <= 9 && board[row][col] != 'X' && board[row][col] != 'O') {
                board[row][col] = currentPlayer;
                validMove = true;
            }
            else {
                cout << "|* Invalid move! Please choose an empty spot *|" << endl;
            }
        }
    }

    bool CheckWin() {
        for (int i = 0; i < 3; i++) {
            if (board[i][0] == board[i][1] && board[i][1] == board[i][2]) return true;
            if (board[0][i] == board[1][i] && board[1][i] == board[2][i]) return true;
        }
        if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) return true;
        if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) return true;
        return false;
    }

    bool CheckDraw() {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (board[i][j] != 'X' && board[i][j] != 'O') return false;
            }
        }
        return true;
    }

    void SwitchPlayer() {
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }

    void Zaid_Game() {
        while (!gameOver) {
            DrawBoard();
            PlayerMove();
            if (CheckWin()) {
                DrawBoard();
                cout << "Player " << currentPlayer << " wins!" << endl;
                gameOver = true;
            }
            else if (CheckDraw()) {
                DrawBoard();
                cout << "It's a draw!" << endl;
                gameOver = true;
            }
            else {
                SwitchPlayer();
            }
        }
    }
};
class TaskManager {
public:
    string tasks[100];
    int task_count = 0;

    void menu() {
        cout << "\n-------------- TO-DO LIST --------------\n";
        cout << "1. Add new task" << endl;
        cout << "2. View tasks" << endl;
        cout << "3. Delete a task" << endl;
        cout << "4. Exit" << endl;
    }

    void add_Task() {
        if (task_count >= 100) {
            cout << "\n\t|* Task list is full *|\n" << endl;
        }
        else {
            cout << "\tEnter a new task: ";
            cin.ignore();
            getline(cin, tasks[task_count]);
            task_count++;
        }
    }

    void view_Tasks() {
        if (task_count == 0) {
            cout << "\n\t|* No tasks available *|\n" << endl;
        }
        else {
            cout << "\n\tTasks to do:" << endl;
            for (int i = 0; i < task_count; i++) {
                cout << "\t\tTask " << 1 + i << " : " << tasks[i] << endl << endl;
            }
        }
    }

    void delete_Task() {
        if (task_count == 0) {
            cout << "\n\t|* No tasks to delete *|\n" << endl;
            return;
        }
        int delete_task;
        cout << "Enter the task number to delete: ";
        cin >> delete_task;
        if (delete_task < 1 || delete_task > task_count) {
            cout << "\n\t|* Invalid task number *|\n" << endl;
        }
        else {
            for (int i = delete_task - 1; i < task_count - 1; i++) {
                tasks[i] = tasks[i + 1];
            }
            task_count--;
            cout << "\n\t|* Task deleted successfully *|\n" << endl;
        }
    }

    void ToDo_Task() {
        int option;
        do {
            menu();
            cout << "Enter your choice: ";
            cin >> option;
            switch (option) {
            case 1: add_Task(); break;
            case 2: view_Tasks(); break;
            case 3: delete_Task(); break;
            case 4: cout << "Exiting To-Do List...\n"; break;
            default:  cout << "\n\t|* Invalid choice,Try again: *|\n" << endl;
            }
        } while (option != 4);
    }
};

int main() {
    int point;
    do {
        center(point);
        if (point == 1) {
            Game s1;
            s1.Zaid_Game();
        }
        else if (point == 2) {
            TaskManager z1;
            z1.ToDo_Task();
        }
        else if (point == 3) {
            cout << "\n\tThank you for using the program <3.\n" << endl;
        }
        else {
            cout << "\n\t|* Invalid choice,Try again: *|\n" << endl;
        }
    } while (point != 3);

    return 0;
}