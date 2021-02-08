#include <iostream>

using namespace std;

int main() {
    #pragma omp parallel
    {
        cout << "Hello, parallel" << endl;
    }
    return 0;
}

