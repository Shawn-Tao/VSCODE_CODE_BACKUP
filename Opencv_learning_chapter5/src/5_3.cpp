#include <opencv2/opencv.hpp>
#include <iostream>
#include <chrono>
#include <algorithm>

using namespace std;
using namespace cv;

int main(int argc, char *argv[])
{
    Mat mat_5_3 = Mat::zeros(100, 100, CV_8UC3);
    //使用ptr模板函数
    // for (int r = 0; r < mat_5_3.rows; r++)
    // {
    //     Vec3b *ptr = mat_5_3.ptr<Vec3b>(r);
    //     for (int c = 0; c < mat_5_3.cols; c++)
    //     {
    //         ptr[c] = {0,255,0};
    //     }
    // }
    //使用at模板函数
    for(int i = 4;i<20;i++){
        for(int j =19;j<40;j++){
            mat_5_3.at<Vec3b>(i,j) = {0,255,0};
        }
    }
    imshow("5_3", mat_5_3);
    waitKey(0);
    return 0;
}