#include <iostream>
using namespace std;


class Grandfather {
private:
    int propertyValue;

public:
    Grandfather() : propertyValue(500) {}

    int transferProperty() {
        return propertyValue;
    }
};


class Grandson : public Grandfather {
public:
    void receiveProperty(int value) {
        cout << "Received the Property worth " << value << " Cr" << endl;
    }
};

int main() {
    Grandson grandson;
    int propertyValue = grandson.transferProperty();
    grandson.receiveProperty(propertyValue);

    return 0;
}

