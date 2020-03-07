#include <iostream>

int main()
{
    using namespace std;
    string name;
    int age;

    cout << "- Hello! What is your name?" << endl << "> ";
    cin >> name;
    cout << "- I'm glad to see you, " << name << "!" << endl
        << "- What is your age?" << endl << "> ";
    cin >> age;
    cout << "- I thought you are " << age + 2
        << " years old. You look younger!" << endl;

    return 0;
}