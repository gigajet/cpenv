#include <bits/stdc++.h>

class Problem {
    public:
        Problem() {}
        virtual void solve()=0;
    inline friend std::ostream& operator << (std::ostream &o, const Problem &p) {
        return o << p.out.rdbuf();
    }
    inline friend std::istream& operator >> (std::istream &i, Problem &p) {
        return i >> p.inp.rdbuf();
    }

    template <typename T> inline friend
    Problem& operator << (Problem& p, const T& t) {
        p.out << t; return p;
    }

    template <typename T> inline friend
    Problem& operator >> (Problem& p, T& t) {
        p.inp >> t; return p;
    }
    private:
        std::stringstream inp, out;
};

struct MainProblem : public Problem {
    int a,b;
    void solve () {
        *this >> a >> b;
        *this <<3<<"\n";
    }
};

int main() {
    MainProblem prob;
    std::cin >> prob;
    prob.solve();
    std::cout << prob;
    return 0;
}
