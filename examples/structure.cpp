#include <iostream>
#include <cstring>
using namespace std;

void printPlayer(struct Player player);
void printPlayerByPointer(struct Player *player);

struct Player {
    char firstName[30];
    char lastName[30];
    char position[2];
    int number;
};

// alias to define struct
typedef struct {
    char name[30];
} Team;

void structFunctions()
{
    cout << "Struct examples: " << endl;

    struct Player player1;
    struct Player player2;

    Team team1;

    // assign values to players
    strcpy(player1.firstName, "Neymar");
    strcpy(player2.lastName, "Jr");
    player1.number = 10;

    strcpy(player2.firstName, "Diego");
    strcpy(player2.lastName, "Costa");
    player2.number = 19;

    printPlayer(player1);
    cout << "After assign another player number:" << endl;
    printPlayer(player1);

    printPlayerByPointer(&player2);
    cout << "After assign another player number:" << endl;
    printPlayerByPointer(&player2);

    // assign values to team
    strcpy(team1.name, "Japan");
    cout << "team1 name : " << team1.name << endl;
}

void printPlayer(struct Player player)
{
    cout << "firstName : " << player.firstName << endl;
    cout << "lastName : " << player.lastName << endl;
    cout << "number : " << player.number << endl;

    // assign another number
    player.number = 29;
}

void printPlayerByPointer(struct Player *player)
{
    // another way to access member for pointer
    cout << "firstName : " << player->firstName << endl;
    cout << "lastName : " << player->lastName << endl;
    cout << "number : " << player->number << endl;
    
    // assign another number
    player->number = 29;
}