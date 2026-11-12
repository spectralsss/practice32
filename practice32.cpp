#include <iostream>

using namespace std;

class Employer {
public:
    virtual void Print() = 0;
    virtual ~Employer() {}
};

class President : public Employer {
public:
    void Print() override {
        cout << "President" << endl;
    }
};

class Manager : public Employer {
public:
    void Print() override {
        cout << "Manager" << endl;
    }
};

class Worker : public Employer {
public:
    void Print() override {
        cout << "Worker" << endl;
    }
};

int main() {
    Employer* staff[] = {
        new President(),
        new Manager(),
        new Worker()
    };

    for (int i = 0; i < 3; ++i) {
        staff[i]->Print();
    }

    for (int i = 0; i < 3; ++i) {
        delete staff[i];
    }

}