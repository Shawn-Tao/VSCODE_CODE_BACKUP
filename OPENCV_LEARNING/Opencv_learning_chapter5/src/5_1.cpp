#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/opencv.hpp>
#include <chrono>

using namespace std;

int main(int argc, char* argv[]) {
  cout<<"Fine";
  cv::Mat mat_5_1(100,100,CV_8UC3);
  cout<<"Fine";
  mat_5_1.zeros(mat_5_1.cols,mat_5_1.rows,CV_8UC3);
  //cout<<mat_5_1;
  cv::circle(mat_5_1,cv::Point(49,49),20,cv::Scalar(151,97,255),2);
  cv::imshow("circle",mat_5_1);
  cv::waitKey(0);
  return 0;
}