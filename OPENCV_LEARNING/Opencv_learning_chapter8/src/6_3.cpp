#include <opencv2/opencv.hpp>
#include <iostream>
#include <string>
#include <chrono>
#include <algorithm>

using namespace std;
using namespace cv;

int main(int argc, char *argv[])
{
    cv::VideoCapture cap(argv[1]);
    namedWindow("zengzixi", WINDOW_AUTOSIZE);
    //cap.open("VID_");
    double fps = cap.get(CAP_PROP_FPS);
    Mat frame;
    while (1)
    {
        cap >> frame;
        //Mat font_area = frame.colRange(0, 50).rowRange(0, 50);
        
        putText(frame, "FPS" + to_string(fps), Point(0, 49), FONT_HERSHEY_COMPLEX, 1, Scalar(151, 97, 255), 1, 4, false);
        if (frame.empty())
            break;
        imshow("zengzixi", frame);
        if (waitKey(33) >= 0)
            break;
    }

    return 0;
}
