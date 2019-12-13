#include <opencv2/opencv.hpp>
#include <iostream>
#include <chrono>
#include <algorithm>

using namespace std;
using namespace cv;

int main(int argc, char *argv[])
{
    Mat mat_5_4 = Mat::zeros(210, 210, CV_8UC1);
    //namedWindow("5_4_Source", WINDOW_AUTOSIZE);
	//imshow("5_4_Source", mat_5_4);
    // 获取ROI
    for(int i = 0; i<101; i+=10){
        Rect rect(Point(i,i), Point(mat_5_4.cols-i,mat_5_4.rows-i));
        Mat roi = mat_5_4(rect);
        roi.setTo(2*i);
    }
    namedWindow("5_4", WINDOW_AUTOSIZE);
	imshow("5_4", mat_5_4);
    waitKey(0);
    return 0;
}