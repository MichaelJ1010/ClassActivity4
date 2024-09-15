#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    cout << left << setw(10) << "course" << right << "student" << endl
    << left << setw(10) << "C++" << 100 << endl << left << setw(10) << "JavaScript" << 50 << endl;
}