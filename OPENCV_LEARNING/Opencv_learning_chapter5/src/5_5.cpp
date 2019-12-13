#include <opencv2/opencv.hpp>
#include <iostream>
#include <chrono>
#include <algorithm>

using namespace std;
using namespace cv;

int main(int argc, char *argv[])
{
    if(argv[1] == nullptr){
        cout<<"请输入原始图片"<<endl;
        return 0;
    }
    //读取并显示原始图像
    Mat mat_5_5 = imread(argv[1],IMREAD_COLOR);
    namedWindow("5_5_Source", WINDOW_AUTOSIZE);
	imshow("5_5_Source", mat_5_5);
    //获取ROI
    Rect rect1(5,10,20,30);
    Rect rect2(50,60,20,30);
    Mat roi1 = mat_5_5(rect1);
    Mat roi2 = mat_5_5(rect2);
    //取反
    bitwise_not(roi1,roi1);
    bitwise_not(roi2,roi2);
    //显示变换后图像
    namedWindow("5_5", WINDOW_AUTOSIZE);
	imshow("5_5", mat_5_5);

    waitKey(0);
    return 0;
}