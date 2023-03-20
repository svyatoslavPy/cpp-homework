    #include <iostream>
    using namespace std;

    class Point {
        int x;
        int y;
    public:
        Point() {
            x = 0;
            y = 0;
        }
        Point operator+=(Point& p) {
            this->x += p.x;
            this->y += p.y;
            return *this;
        }
        int getX() const {
            return x;
        }
        int getY() const {
            return y;
        }
        ostream& operator<<(ostream& o, const Point& p) {
            o << p.getX() << " " << p.getY();;
            return o;
        }
    };

    template<class T, int size>
    class MyArray {
        T* arr = new T[size];
    public:
        MyArray() {
            arr = nullptr;
        }
        ~MyArray() {
            delete[] arr;
        }
        T sum() {
            T sum = 0;
            if (arr != nullptr) {
                for (int i; i < size; i++) {
                    sum += arr[i];
                }
            }
            return sum;
        }
    };

    int main() {
        MyArray<Point, 2> PointArr;
        cout << PointArr.sum();
        MyArray<double, 2> DoubleArr;
        cout << DoubleArr.sum();
    }
