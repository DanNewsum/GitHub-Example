#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Variable declarations
    string firstName, color, adjective;

    // Output and input
    cout << "HELLO, WHAT IS YOUR NAME? ";
    cin >> firstName;

	cout << "ENTER AN ADJECTIVE? ";
	cin >> adjective;

    cout << "WHAT IS YOUR FAVORITE COLOR? ";
    cin >> color;

    cout << endl;
    cout << "So can I call you "  << adjective  << color << " " << firstName << "?" << endl;

    return 0;
}
