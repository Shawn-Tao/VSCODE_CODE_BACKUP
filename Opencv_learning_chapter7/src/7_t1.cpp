#include <opencv2/opencv.hpp>
#include <iostream>
#include <chrono>
#include <algorithm>

using namespace std;
using namespace cv;

int main(int argc, char *argv[])
{
    //chrono::time_point<chrono::system_clock> now = chrono::system_clock::now();
    chrono::system_clock::time_point now = chrono::system_clock::now();
    time_t seed = chrono::system_clock::to_time_t(now);
    cout << seed;
    RNG rng(seed);
    Mat my_mat = Mat::zeros(500,500,CV_8UC3);
    Mat my_mat2 = Mat::zeros(100,100,CV_8UC3);
    rng.fill(my_mat,RNG::UNIFORM,0,255);
    cout<<my_mat.at<Vec3b>(1,1);
    namedWindow("differrnt_color",WINDOW_AUTOSIZE);
    imshow("differrnt_color",my_mat);
    waitKey(0);
    return 0;
}
