#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    int id;
    string title;
    double price;
    double discountPercent;

public:
    // Constructor عشان ندي قيم للكتاب أول ما ننشئه
    Book(int i, string t, double p, double d) {
        id = i;
        title = t;
        price = p;
        discountPercent = d;
    }

    // Method لحساب السعر النهائي
    double calcFinalPrice() {
        return price - (price * discountPercent / 100);
    }

    // دالة لطباعة التفاصيل
    void display() {
        cout << "Book: " << title << " (ID: " << id << ")" << endl;
        cout << "Original Price: " << price << endl;
        cout << "Final Price after " << discountPercent << "% discount: " << calcFinalPrice() << endl;
    }
};

int main() {
    // إنشاء Object من الكلاس
    Book b1(101, "C++ OOP Mastery", 250.0, 15.0);
    
    b1.display();

    return 0;
}