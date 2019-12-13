#include<opencv2/opencv.hpp>
#include<iostream>
#include<chrono>
#include<algorithm>

using namespace std;
using namespace cv;

int main(int argc, char* argv[]){
    Mat mat_5_2 = Mat::zeros(100,100,CV_8UC3);
    Mat rect1 = mat_5_2.colRange(20, 40).rowRange(5, 20);
    rectangle(rect1,Rect(Point(0,0),Point(rect1.cols,rect1.rows)),Scalar(151,97,255),1);
    imshow("5_2",mat_5_2);
    waitKey(0);
    return 0;
}