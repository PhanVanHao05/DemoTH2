include<iostream>
using namespace std;
<<<<<<< HEAD
bool isPrime(int number) {
    if (number < 2) {
        return false;
    }

    for (int i = 2; i <= number / 2; i++) {
        if (number % i == 0) {
            return false;
        }
    }

    return true;
}

void findPrimes(int start, int end) {
    cout << "Cac so nguyen to trong khoang tu " << start << " den " << end << " la:\n";

    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
}
int main() {
    int start, end;

    cout << "Nhap vao khoang bat dau: ";
    cin >> start;

    cout << "Nhap vao khoang ket thuc: ";
    cin >> end;

    findPrimes(start, end);

    return 0;
=======
int main()
{
cout << "The end of the fucking world";
>>>>>>> feature_1
}