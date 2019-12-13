#include<iostream>
#include<algorithm>
using namespace std;
#include<opencv2/core.hpp>
#include<opencv2/opencv.hpp>
//#include <opencv2/highgui/highgui.hpp>
#include <ctime>

int main(int argc, char* argv[]){
    cv::Matx33d matrix33;
    cv::Point3d point3d;
    cv::Size2d size2d(100.5,200.5);
    cv::Point2d* point2d = new cv::Point2d(size2d);
    cv::Scalar scalar(1,2,3,4);
    cv::Complexd complex_in_cv(1,5);
    std::complex<double> complex_in_stl(2,10);
    cv::TermCriteria termcriteria(cv::TermCriteria::COUNT,1000,0.001);
    cv::Range range(0,100);
    cv::Ptr<cv::Matx33d> p(new cv::Matx33d(1,2,3,4,5,6,7,8,9));
    cout<<endl;
    cout<<*p;
    cout<<endl;

    cv::RNG rng((unsigned)time(NULL));

    //negative float number
    float n_float = -121.3523;
    cout<<"The value of number is:"<<n_float<<endl;

    cout<<"The absilute value of number is:"<<cv::abs(n_float)<<endl;

    cout<<"The approximate value of number is:"<<cvRound(n_float)<<endl;
    cout<<"The Ceil value of number is:"<<cvCeil(n_float)<<endl;
    cout<<"The Floor value of number is:"<<cvFloor(n_float)<<endl;

    //random number
    cout<<"Create Random Numbers as follow"<<endl;
    for (int i = 0; i < 100; i++)
    {
        float random_f_n = rng.uniform(0.00,100.00);
        cout<<random_f_n<<" ";
    }
    cout<<endl;

    //Float Point
    cv::Point2f pointf(10.7,20.25);
    cout<<"value of pointf:"<<pointf<<endl;
    cv::Point point(pointf);
    cout<<"convert pointf to point"<<point<<endl;
    cv::Matx<float,3,3> mat33(1,1,1,1,1,1,1,1,1);
    cout<<"Before convert value of mat33 is:"<<mat33<<endl;
    cv::Vec3f vec3(5.5,5.5,2.5);
    cv::Matx<float,3,1> m(vec3[0],vec3[1],vec3[2]);
    cout<<"Before convert value of m is:"<<m<<endl;
    cv::Matx<float,3,1> mat_c = mat33 * m;
    cout<<"Multipling conclude is"<<mat_c<<endl;
    return 0;
}
