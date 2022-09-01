#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    if (argc < 2) {
        cout << "Hello World" << endl;
    }
    else {
        cout << "Hello" << argv[1] << ", welcome to the world of computer science!" << endl;
    }
    return 0;
}
