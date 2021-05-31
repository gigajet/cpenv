#ifndef _problem_h_
#define _problem_h_

#include <iostream>
#include <sstream>

class Problem {
    public:
    virtual ~Problem() {} //Non-virtual interface idiom
    virtual void main()=0; //every problem should implement this
    Problem& solve() {main(); return *this;}

    inline friend 
    std::ostream& operator << (std::ostream &o, const Problem &p) 
    {
        return o << p.cout.rdbuf();
    }

    inline friend 
    std::istream& operator >> (std::istream &i, Problem &p) 
    {
        return i >> p.cin.rdbuf();
    }

    inline friend 
    Problem& operator << (Problem& receive, Problem& give) 
    {
        receive.cin << give.cout.rdbuf();
        return receive;
    }

    inline friend
    Problem& operator >> (Problem& give, Problem &receive)
    {
        give.cout >> receive.cin.rdbuf();
        return give;
    }

    template <typename T> inline friend
    Problem& operator << (Problem& p, const T& t) 
    {
        p.cin << t << " "; return p;
    }

    template <typename T> inline friend
    Problem& operator >> (Problem& p, T& t) 
    {
        p.cout >> t; return p;
    }

    protected:
        std::stringstream cin, cout;
};


#endif