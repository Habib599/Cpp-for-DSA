#include <iostream>
#include <string>
using namespace std;

class Cricketer {
public:
    int jersey_no;
    string country;
};

int main() {
    Cricketer* dhoni = new Cricketer();

    // Fill the data for dhoni
    dhoni->jersey_no = 7;
    dhoni->country = "India";

    // Create another dynamic object named kohli
    Cricketer* kohli = new Cricketer();

    kohli->jersey_no = dhoni->jersey_no;
    kohli->country = dhoni->country;

    // Delete the dhoni object
    delete dhoni;

    // Print the data of kohli
    cout << "Kohli's Jersey Number: " << kohli->jersey_no << endl;
    cout << "Kohli's Country: " << kohli->country << endl;

    // Clean up kohli object
    delete kohli;

    return 0;
}
