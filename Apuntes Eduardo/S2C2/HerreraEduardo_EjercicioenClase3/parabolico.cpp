// Your First C++ Program

#include <iostream>
#include <vector>
#include <fstream>
#define g 9.8

using namespace std;

class Particle{
    private:
        double x;
        double y;
        double vx;
        double vy;
        double t;
        double dt;
    public:
        Particle(double x_p, double y_p, double vx_p, double vy_p, double dt_p){
            x = x_p;
            y = y_p;
            vx = vx_p;
            vy = vy_p;
            dt = dt_p;
            t = 0;
        }
        std::vector<double> move(){
            x = x + vx*dt;
            y = y + vy*dt - g*t*dt;
            t = t + dt;
            std::vector<double> v;
            v.push_back(x);
            v.push_back(y);
            return v;
        }
};
    
    
int main() {
    std::cout << "Hello World!";
    float dt = 0.01;
    Particle A(0., 2., 10., 10., 0.01);
    float t_total = 2.18;
    cout << t_total;
    int N = t_total/dt;
    cout << N;
    
    double pos_x[N];
    double pos_y[N];
    
    for(int i = 0; i <N; i++){
        std::vector<double> vec_temp;
        vec_temp = A.move();
        pos_x[i] = vec_temp[0];
        pos_y[i] = vec_temp[1];
        
    }
    for(int i = 0; i <N; i++){
        cout << pos_x[i] << " ";
        cout << pos_y[i] << " ";
    }
    
    std::ofstream myfile;
    myfile.open ("x_values.csv");
    myfile << "x,y\n";
    for(int i = 0; i <N; i++){
        myfile << pos_x[i] << ",";
        myfile << pos_y[i] << "\n";
    }
    myfile.close();
    
    return 0;
}