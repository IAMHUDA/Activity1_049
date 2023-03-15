#include <iostream>
using namespace std;

double rerata(double a,double b){
    return (a+b)/2;
}
string status(double r){
    if (r >= 60){
        return "lulus";
    }else {
        return "gagal";
    }
}
string status2(double r,double n){
    if (r >= 60 && n >= 70 ){
        return "lulus";
    }else {
        return "gagal";
    }
}
string status3(double r,double n){
    if (r >= 60 || n >= 70 ){
        return "lulus";
    }else {
        return "gagal";
    }
}

int main (){
    double nilaiMath,nilaiBindo;

    cout << "nilai matematika =";
    cin >> nilaiMath;
    cout << "nilai bahasa indonesia =";
    cin >> nilaiBindo;


    cout << "nilai rata rata nya="<< rerata(nilaiMath, nilaiBindo);
    cout << "\nstatus kelulusan = " << status(rerata(nilaiMath,nilaiBindo));
    cout << "\nstatus kelulusan = " << status2(rerata(nilaiMath,nilaiBindo),nilaiMath);
    cout << "\nstatus kelulusan = " << status3(rerata(nilaiMath,nilaiBindo),nilaiMath);
}