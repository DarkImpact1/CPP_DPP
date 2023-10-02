#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

const string playersFile = "players.txt"; // File to store players' names

int setup() {
    ofstream outFile(playersFile.c_str()); // Create the players file
    if (!outFile) {
        cout << "Unable to open file for create" << endl;
        return 1;
    }

    outFile.close();
    return 0;
}

void deletePlayers() {
    if (remove(playersFile.c_str()) != 0) {
        // cout << "Error deleting file" << endl;
    }
}

void createPlayersList(int numPlayers) {
    ofstream outFile(playersFile.c_str(), ios::app); // Open the players file for append
    if (!outFile) {
        cout << "Unable to open file for append" << endl;
        return;
    }

    srand(time(0));

    for (int i = 0; i < numPlayers; ++i) {
        string playerName = "Player" + to_string(i + 1);
        outFile << playerName << endl;
    }

    outFile.close();
}

void appendPlayers(int numPlayers) {
    ofstream outFile(playersFile.c_str(), ios::app); // Open the players file for append
    if (!outFile) {
        cout << "Unable to open file for append" << endl;
        return;
    }

    srand(time(0));

    for (int i = 0; i < numPlayers; ++i) {
        string playerName = "Player" + to_string(rand() % 100); // Random player names
        outFile << playerName << endl;
    }

    outFile.close();
}

void readPlayers() {
    ifstream inFile(playersFile.c_str()); // Open the players file for reading
    if (!inFile) {
        cout << "Unable to open file for reading" << endl;
        return;
    }

    string playerName;
    while (getline(inFile, playerName)) {
        // cout << playerName << endl;
    }

    inFile.close();
}

int main() {
    int n;
    cin >> n;

    cout << "Deleting the players list which has been setup" << endl;
    deletePlayers();
    cout << "Creating a new players list" << endl;
    createPlayersList(n);
    cout << "Adding more players to the list" << endl;
    appendPlayers(n);
    cout << "Printing the players list" << endl;
    readPlayers();

    return 0;
}
