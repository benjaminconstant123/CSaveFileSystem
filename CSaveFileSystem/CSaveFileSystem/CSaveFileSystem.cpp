#include <iostream>
#include "CSaveFile.h"
using namespace std;

struct Person {
    string name;
    int age;
};

int main()
{
    CSaveFile save("test.txt");
    vector<Person> people;
    people.push_back({ "Benjamin", 19 });
    people.push_back({ "Baptiste", 23 });

    for (auto& data : people) {
        cout << data.name << endl;
    }

}

