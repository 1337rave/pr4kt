#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Train {
    int number;
    string departureTime;
    string destination;

    Train(int num, const string& time, const string& dest)
        : number(num), departureTime(time), destination(dest) {}
};

int main() {
    vector<Train> trains; 

    trains.push_back(Train(101, "07:00", "Vinnitsa"));
    trains.push_back(Train(202, "09:30", "Lviv"));
    trains.push_back(Train(303, "12:35", "Odessa"));

    cout << "All trains:" << endl;
    for (const auto& train : trains) {
        cout << "Train number: " << train.number << ", Departure time: " << train.departureTime << ", Destination: " << train.destination << endl;
    }

    string destinationQuery = "Vinnitsa";
    cout << "Trains to " << destinationQuery << ":" << endl;
    for (const auto& train : trains) {
        if (train.destination == destinationQuery) {
            cout << "Train number: " << train.number << ", Departure time: " << train.departureTime << endl;
        }
    }

    return 0;
}
