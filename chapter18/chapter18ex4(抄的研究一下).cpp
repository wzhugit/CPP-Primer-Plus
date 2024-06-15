//C++ Primer Plus chapter18ex4
//C++ Primer Plus example list 16.15

#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>
using namespace std;
auto outint_lambda = [](int n) {cout << n << " "; };

int main()
{
    int vals[10] = { 50, 100, 90, 180, 60, 210, 415, 88, 188, 201 };
    list<int> yadayada(vals, vals + 10); // range constructor
    list<int> etcetera(vals, vals + 10);

    // C++0x can use the following instead
   //  list<int> yadayada = {50, 100, 90, 180, 60, 210, 415, 88, 188, 201};
   //  list<int> etcetera {50, 100, 90, 180, 60, 210, 415, 88, 188, 201};

    cout << "Original lists:\n";
    for_each(yadayada.begin(), yadayada.end(), outint_lambda);
    cout << endl;
    for_each(etcetera.begin(), etcetera.end(), outint_lambda);
    cout << endl;
    yadayada.remove_if([](int n) {return n > 100; });               // use a named function object
    etcetera.remove_if([](int n) {return n > 200; });   // construct a function object
    cout << "Trimmed lists:\n";
    for_each(yadayada.begin(), yadayada.end(), outint_lambda);
    cout << endl;
    for_each(etcetera.begin(), etcetera.end(), outint_lambda);
    cout << endl;
    // std::cin.get();
    return 0;
}
