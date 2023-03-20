    #include <iostream>
    using namespace std;

    class Processor {
        int price;
        string model;
    public:
        Processor() {
            price = 0;
            model = nullptr;
        }
        void Print() {
            cout << "Цена: " << price << "\n" << "Модель: " << model << endl;
        }
    };

    class Memory {
        int price;
        string model;
    public:
        Memory () {
            price = 0;
            model = nullptr;
        }
        void Print() {
            cout << "Цена: " << price << "\n" << "Модель: " << model << endl;
        }
    };

    class Videocard{
        int price;
        string model;
    public:
        Videocard() {
            price = 0;
            model = nullptr;
        }
        void Print() {
            cout << "Цена: " << price << "\n" << "Модель: " << model << endl;
        }
    };

    class WebCamera {
        int price;
        string model;
    public:
        WebCamera() {
            price = 0;
            model = nullptr;
        }
        void Print() {
            cout << "Цена: " << price << "\n" << "Модель: " << model << endl;
        }
    };

    class Printer {
        int price;
        string model;
    public:
        Printer() {
            price = 0;
            model = nullptr;
        }
        void Print() {
            cout << "Цена: " << price << "\n" << "Модель: " << model << endl;
        }
    };

    class Mouse {
        int price;
        string model;
    public:
        Mouse() {
            price = 0;
            model = nullptr;
        }
        void Print() {
            cout << "Цена: " << price << "\n" << "Модель: " << model << endl;
        }
    };

    class Laptop {
        Processor p;
        Videocard v;
        Memory d;
        WebCamera* w;
        Printer* pr;
        Mouse* m;
    public:
        Laptop (Processor pr, Videocard vi, Memory dy, WebCamera* we, Mouse* mo, Printer* prin){
            p = pr;
            v = vi;
            d = dy;
            w = we;
            m = mo;
            this->pr = prin;
        }
        ~Laptop (){
            delete pr;
            delete w;
            delete m;
        }
        void Print(){
            cout << "Процессор\n";
            p.Print();
            cout << "Видеокарта\n";
            v.Print();
            cout << "Динамическая память\n";
            d.Print();
            cout << "Веб-камера\n";
            w->Print();
            cout << "Принтер\n";
            pr->Print();
            cout << "Мышь\n";
            m->Print();
            
        }
    };

    int main() {
        Processor p;
        Videocard v;
        Memory d;
        WebCamera* w;
        Printer* pr;
        Mouse* m;
        Computer comp(p, v, d, w, m, pr);
        comp.Print();
    }
