// #include <iostream>
// using namespace std;
// template <class t>
// class vector
// {
// public:
//     t *arr;
//     int size;
// } vector(int m)
// {
//     size = m;
//     arr = new t[size];
// }
// todotproduct(vector &v)
// {
//     t d = 0;
//     for (int i = 0; i < size; i++)
//     {
//         t d = this->arr[i] * v.arr[i];
//     }
//     return d;
// }
// }
// ;
// int main()
// {
//     vector<float> v1(3);
//     v1.arr[0] = 1.32;
//     v1.arr[1] = 3.11;
//     v1.arr[2] = 2.87;
// }

#include <iostream>
using namespace std;

template <class T>
class Vector
{
public:
    T *arr;
    int size;

    Vector(int m)
    {
        size = m;
        arr = new T[size];
    }

    T dotProduct(Vector &v)
    {
        T result = 0;
        for (int i = 0; i < size; i++)
        {
            result += this->arr[i] * v.arr[i];
        }
        return result;
    }
};

int main()
{
    Vector<float> v1(3);
    v1.arr[0] = 1.32;
    v1.arr[1] = 3.11;
    v1.arr[2] = 2.87;

    Vector<float> v2(3);
    v2.arr[0] = 2.5;
    v2.arr[1] = 1.0;
    v2.arr[2] = 3.2;

    float result = v1.dotProduct(v2);
    cout << "Dot product: " << result << endl;

    // Don't forget to delete the dynamically allocated memory
    delete[] v1.arr;
    delete[] v2.arr;

    return 0;
}
