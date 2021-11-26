#include <iostream>
#include <cmath>

using namespace std;

double deg2rad(double deg){
    return (deg*(M_PI)/180);
}
double rad2deg(double rad){
    return (rad*180/(M_PI));
}
double findXComponent(double l1,double l2,double a1,double a2){
    return (l1*cos(a1)+l2*cos(a2));
}
double findYComponent(double l1,double l2,double a1,double a2){
    return (l1*sin(a1)+l2*sin(a2));
}
double pythagoras(double xcomp, double ycomp){
    return (sqrt(pow(xcomp,2)+pow(ycomp,2)));
}
    
void showResult(double CL ,double CA){
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
    cout << "Length of the resultant vector = "<<CL<<"\n";
    cout << "Direction of the resultant vector (deg) = "<<CA<<"\n";
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";
}
int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
