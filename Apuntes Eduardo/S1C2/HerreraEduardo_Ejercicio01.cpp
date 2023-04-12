#include <iostream>

class Triangle {
    private:
        float a, b, c;
    public:
        
        Triangle() {
            a = 1;
            b = 1;
            c = 1;
        }
    
        Triangle(float a_param, float b_param, float c_param) {
            a = a_param;
            b = b_param;
            c = c_param;
        }

        float get_a() {
            return a;
        }

        void set_a(float a_param) {
            a = a_param;
        }

        float get_b() {
            return b;
        }

        void set_b(float b_param) {
            b = b_param;
        }
        
        float get_c() {
            return c;
        }

        void set_c(float c_param) {
            c = c_param;
        }

        float perimeter() {
            return a + b + c;
        }
};  

int main() {
    
    // input
    
    float a_param, b_param, c_param;
    std::cin >> a_param >> b_param >> c_param;
    Triangle triangulito(a_param, b_param, c_param); 






















    // output

    std::cout << triangulito.get_a() << " " << triangulito.get_b() << " " << triangulito.get_c() << "\n" ;
    std::cout << "El perimetro es " << triangulito.perimeter() << "\n";

    return 0;
}
