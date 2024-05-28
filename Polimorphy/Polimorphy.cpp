#include <iostream>
using namespace std;

class seseorang {
public:
    virtual void pesam() = 0;
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



int main()
{
    
}
