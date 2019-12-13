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
    Mat mat_6_2 = imread(argv[1],IMREAD_COLOR);
    Mat mat_6_2_gray = mat_6_2.clone();
    Mat mat_crv;

    namedWindow("6_2_Source", WINDOW_AUTOSIZE);
	imshow("6_2_Source", mat_6_2);
    //装环卫3通道灰度图像
    cvtColor(mat_6_2_gray,mat_crv, COLOR_BGR2GRAY);
    cvtColor(mat_crv,mat_6_2_gray, COLOR_GRAY2BGR);
    //显示三通道灰度图像
    namedWindow("6_2_gray", WINDOW_AUTOSIZE);
	imshow("6_2_gray", mat_6_2_gray);
    
    //绘制彩色文字
    Mat font_area = mat_6_2_gray.colRange(0,50).rowRange(0,50);
    putText(mat_6_2_gray
    ,"Hello World!"
    ,Point(0,149)
    ,FONT_HERSHEY_COMPLEX
    ,1
    ,Scalar(151,97,255)
    ,1
    ,4
    ,false);
    //显示绘制文字后图像
    namedWindow("6_2_font", WINDOW_AUTOSIZE);
	imshow("6_2_font", mat_6_2_gray);

    waitKey(0);
    return 0;
}