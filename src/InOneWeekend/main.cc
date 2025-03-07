#include <iostream>
#include <unistd.h>
using namespace std;


int main() {

    const int image_width = 256;
    const int image_height = 256;

    cout << "P3\n" << image_width << ' ' << image_height << "\n255\n";
    for (int j = image_height-1; 0 <= j; --j ) {
        cerr << "\rScanlines remaining: " << j << ' ' << flush;
        sleep(1);
        for (int i= 0;i < image_width; ++i) {
            auto r  = double(i)  / (image_width-1);
            auto g = double(j) / (image_height-1);
            auto b = 0.25;

            int ir = static_cast<int>(255.999 * r);
            int ig = static_cast<int>(255.999 * g);
            int ib = static_cast<int>(255.999 * b);

            cout << ir << ' ' << ig << ' ' << ib << '\n';
        }
    }

    return 0;
}