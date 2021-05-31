#include "template.h"
#define ONLINE_JUDGE
struct MainProblem : public Problem {
    int a,b;
    void main () {
        cin >> a >> b;
        cout <<a+b<<"\n";
    }
};

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    MainProblem prob;
    
    #ifdef ONLINE_JUDGE
    std::cin >> prob;
    #else
    ifstream fin("input.txt");
    fin >> prob;
    fin.close();
    #endif

    std::cout << prob.solve();
}
