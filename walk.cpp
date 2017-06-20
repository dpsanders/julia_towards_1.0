#include <iostream>
#include <cstdlib>



using namespace std;

double drand() {
     return rand() / (RAND_MAX - 1.0);
 }

int walk(int T) {
    int x = 0;

    for (int i=1; i<=T; i++) {
        if (drand() < 0.5) {
            x += 1;
        }
        else {
            x -= 1;
        }
    }

    return x;
}


int main() {

    int N = 100000;
    int T = 10000;

    srand(time(0));

    double sumsq = 0.0;

    int w = 0;

    for (int i=1; i<=N; i++) {
        w = walk(T);
        sumsq += w*w;
    }

    sumsq /= N;

    cout << sumsq << endl;


}
