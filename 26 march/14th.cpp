#include <iostream>

class Largest {
private:
    int a, b, m;
public:
    void setData(int a_val, int b_val, int m_val) {
        a = a_val;
        b = b_val;
        m = m_val;
    }
    friend void find_Max(Largest obj);
};

void find_Max(Largest obj) {
    if (obj.a > obj.b && obj.a > obj.m)
        std::cout << "The largest number is: " << obj.a << std::endl;
    else if (obj.b > obj.a && obj.b > obj.m)
        std::cout << "The largest number is: " << obj.b << std::endl;
    else
        std::cout << "The largest number is: " << obj.m << std::endl;
}

int main() {
    Largest obj;
    int a, b, m;

    std::cout << "Enter values for a, b, and m: ";
    std::cin >> a >> b >> m;

    obj.setData(a, b, m);

    find_Max(obj);

    return 0;
}

