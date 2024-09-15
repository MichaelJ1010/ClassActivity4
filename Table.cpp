#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    cout << left << setw(15) << "course" << right << "student" << endl
    << left << setw(15) << "C++" << 100 << endl << left << setw(15) << "JavaScript" << 50 << endl;

    return 0;
}