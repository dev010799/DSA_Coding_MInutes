#include<iostream>
#include<vector>
using namespace std;

template<typename T>
class Vector {
    T *arr;
    int cs;
    int ms;

    public:
        Vector(int max_size = 1) {
            cs = 0;
            ms = max_size;
            arr = new T[ms];
        }

        void push_back(const T d) {
            if(cs == ms) {
                T *oldArr = arr;
                ms = 2 * ms;
                arr = new T[ms];
                // Copy the elements.
                for(int i {0}; i < cs; i++) {
                    arr[i] = oldArr[i];
                }
                // Delete.
                delete [] oldArr;
            }
            arr[cs] = d;
            cs++;
        }

        void pop_back() {
            if(cs >= 0) {
                cs--;
            }
        }

        bool isEmpty() const{
            return cs == 0;
        }

        // Front, Back, At(i), [].
        T front() const{
            return arr[0];
        }

        T back() const{
            return arr[cs - 1];
        }

        T at(int i) const{
            return arr[i];
        }

        int size() const{
            return cs;
        }

        int capacity() const{
            return ms;
        }

        // Operator Overloading:
        T operator[] (int i) {
            return arr[i];
        }
};

int main() {

    Vector<char> vc;
    vc.push_back('a');
    vc.push_back('b');
    vc.push_back('c');
    vc.push_back('d');

    
    Vector<int> v(4);

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(15);
    v.push_back(6);
    v.pop_back();

    cout << v.front() << endl;
    cout << v.back() << endl;
    cout << v.at(3) << endl;
    cout << v.at(2) << endl;
    cout << v.at(1) << endl;
    

    cout << v.size() << endl;        // 5
    cout << v.capacity() << endl;   // 8

    for(int i {0}; i < v.size(); i++) {
        // cout << v.at(i) << ",";     // Instead of this.
        cout << v[i] << ",";           // use this.
    }
}