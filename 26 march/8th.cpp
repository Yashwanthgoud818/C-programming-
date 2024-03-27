#include <iostream>
using namespace std;

class Box {
public:
    int length;

    void setWidth(int w) {
        width = w;
    }

    int getWidth() {
        return width;
    }

    void printDimensions() {
        cout << "Length: " << length << ", Width: " << width << endl;
    }

private:
    int width;
};

int main() {
    Box box;
    cout << "Enter length of the box: ";
    cin >> box.length;
    int width;
    cout << "Enter width of the box: ";
    cin >> width;
    box.setWidth(width);
    cout << "Box dimensions:" << endl;
    box.printDimensions();

    return 0;
}

