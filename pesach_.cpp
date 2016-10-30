#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    for (int i = 1; i < 14; i++) {
        cout << i << " מי יודע?" << endl << i << " אני יודע" << endl;
        switch (i) {
            case 13: cout << "שלושה עשר מדיא" << endl;
            case 12: cout << "שניים עשר שבטיא" << endl;
            case 11: cout << "אחד עשר כוכביא" << endl;
            case 10: cout << "עשרה דבריא" << endl;
            case 9: cout << "תשעה ירחי לידה" << endl;
            case 8: cout << "שמונה ימי מילה" << endl;
            case 7: cout << "שבעה ימי שבתא" << endl;
            case 6: cout << "שישה סדרי משנה" << endl;
            case 5: cout << "חמישה חומשי תורה" << endl;
            case 4: cout << "ארבע אימהות" << endl;
            case 3: cout << "שלושה אבות" << endl;
            case 2: cout << "שני לוחות הברית" << endl;
            case 1: cout << "אחד אלוהינו שבשמים ובארץ" << endl << endl;
        }
    }
    return 0;
}
