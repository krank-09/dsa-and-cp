// Class 29: templates, virtual functions and vtables.

// #include<iostream>
#include<bits/stdc++.h>
using namespace std;
// template is a generator of generic classes and functions
// once generated the compiler will go to the already generated code instead of 
// generating the code again
// template<class T>
// template<typename T>
// vtable store function address/pointers
// vpointer is created for the base class
// and accessed through inheritance for derived class
// vtable is created for the each and every class
// 
template <int MOD = 1000000007>
struct Modular
{
    int value;
    static const int MOD_value = MOD;
    Modular(long long v = 0)
    {
        value = v % MOD;
        if (value < 0)
            value += MOD;
    }
    Modular(long long a, long long b) : value(0)
    {
        *this += a;
        *this /= b;
    }
    Modular &operator+=(Modular const &b)
    {
        value += b.value;
        if (value >= MOD)
            value -= MOD;
        return *this;
    }
    Modular &operator-=(Modular const &b)
    {
        value -= b.value;
        if (value < 0)
            value += MOD;
        return *this;
    }
    Modular &operator*=(Modular const &b)
    {
        value = (long long)value * b.value % MOD;
        return *this;
    }
    friend Modular mexp(Modular a, long long e)
    {
        Modular res = 1;
        while (e)
        {
            if (e & 1)
                res *= a;
            a *= a;
            e >>= 1;
        }
        return res;
    }
    friend Modular inverse(Modular a) { return mexp(a, MOD - 2); }
    Modular &operator/=(Modular const &b) { return *this *= inverse(b); }
    friend Modular operator+(Modular a, Modular const b) { return a += b; }
    friend Modular operator-(Modular a, Modular const b) { return a -= b; }
    friend Modular operator-(Modular const a) { return 0 - a; }
    friend Modular operator*(Modular a, Modular const b) { return a *= b; }
    friend Modular operator/(Modular a, Modular const b) { return a /= b; }
    friend std::ostream &operator<<(std::ostream &os, Modular const &a) { return os << a.value; }
    friend bool operator==(Modular const &a, Modular const &b) { return a.value == b.value; }
    friend bool operator!=(Modular const &a, Modular const &b) { return a.value != b.value; }
};