//类模板中的static关键字

#include <iostream>

using namespace std;


template <typename T>
class AA
{
public:
    static T m_a;

    AA() {}

private:


};

    template <typename T>

    T AA<T>::m_a= 0;



int main()
{
    AA<int> a1,a3,a2;

    a1.m_a = 10;

    a2.m_a++;
    a3.m_a++;

    cout<<AA<int>::m_a<<endl;

    AA<char> a4;

     a4.m_a='ad';

     cout<<AA<char>::m_a<<endl;
    return 0;
}

