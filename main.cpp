class Book {
private:
    int id;
    string title;
    double price;
    double discountPercent;

public:
    // Constructor المعدل
    Book(int i, string t, double p, double d) {
        id = i;
        title = t;
        setPrice(p); // بنادي الـ Setter عشان نتأكد من السعر حتى وأنت بتنشئ الكائن
        discountPercent = d;
    }

    // --- الـ Setters والـ Getters ---

    // Setter للسعر (بيحمي البيانات من القيم السالبة)
    void setPrice(double p) {
        if (p >= 0) {
            price = p;
        } else {
            cout << "Warning: Price cannot be negative! Setting price to 0." << endl;
            price = 0;
        }
    }

    // Getter للسعر (عشان نقدر نقرأ السعر في أي وقت)
    double getPrice() {
        return price;
    }

    // دالة حساب السعر النهائي
    double calcFinalPrice() {
        return price - (price * discountPercent / 100);
    }

    void display() {
        cout << "Book: " << title << " (ID: " << id << ")" << endl;
        cout << "Original Price: " << price << endl;
        cout << "Final Price after " << discountPercent << "% discount: " << calcFinalPrice() << endl;
    }
};
