#include <iostream>
using namespace std;

class seseorang {
public:
    virtual void pesan() = 0;
    //virtual void pesan() {
    //      cout << "Pesan dari seseorang" << endl;
    //}
};

class jaka :public seseorang {
public:
    void pesan() {
        cout << "Pesan dari Jaka" << endl;
    }
};

class lia :public seseorang {
public:
    void pesan() {
        cout << "Pesan dari Lia" << endl;
    }
};

int main()
{
    seseorang* obyek;
    jaka a;
    lia b;

    obyek = &a;
    obyek->pesan();
    obyek = &b;
    obyek->pesan();
    // a. seseorang::pesan();

    return 0;
}
