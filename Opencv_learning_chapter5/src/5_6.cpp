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
    Mat mat_5_6 = imread(argv[1],IMREAD_COLOR);
    namedWindow("5_6_Source", WINDOW_AUTOSIZE);
	imshow("5_6_Source", mat_5_6);
    //分割图像
    Mat *mat_5_6_split = new Mat[3];
    split(mat_5_6,mat_5_6_split);
    namedWindow("5_6_g", WINDOW_AUTOSIZE);
	imshow("5_6_g", mat_5_6_split[1]);
    //克隆
    Mat mat_5_6_g_clone1 = mat_5_6_split[1].clone();
    Mat mat_5_6_g_clone2 = mat_5_6_split[1].clone();
    namedWindow("5_6_clone_1", WINDOW_AUTOSIZE);
	imshow("5_6_clone_1", mat_5_6_g_clone1);
    namedWindow("5_6_clone_2", WINDOW_AUTOSIZE);
	imshow("5_6_clone_2", mat_5_6_g_clone2);
    //求最大最小值
    double *max_of_g = new double(),*min_of_g = new double();
    minMaxIdx(mat_5_6_split[1],min_of_g,max_of_g);
    cout<<"最小值为:"<<*min_of_g<<", "<<"最大值为:"<<*max_of_g<<endl;
    //赋值
    mat_5_6_g_clone1.setTo((unsigned char)((*max_of_g+*min_of_g)/2.0));
    mat_5_6_g_clone2.setTo((unsigned char)(0));
    //cout<<"clone1 赋值为:"<<mat_5_6_g_clone1.at<uchar>(5,5)<<", "<<"clone1 赋值为:"<<mat_5_6_g_clone2.at<uchar>(5,5)<<endl;
    //比较
    compare(mat_5_6_split[1],mat_5_6_g_clone1,mat_5_6_g_clone2,CMP_GE);
    //显示变换后图像
    subtract(mat_5_6_split[1],(unsigned char)((*max_of_g+*min_of_g)/4.0),mat_5_6_split[1],mat_5_6_g_clone2);
    namedWindow("5_6_clone_after_subtract", WINDOW_AUTOSIZE);
	imshow("5_6_clone_after_subtract", mat_5_6_split[1]);

    waitKey(0);
    return 0;
}