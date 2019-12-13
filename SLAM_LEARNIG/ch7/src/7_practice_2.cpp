#include<iostream>
#include<opencv2/opencv.hpp>

#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/features2d/features2d.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/xfeatures2d.hpp>
#include <chrono>

using namespace std;
using namespace cv;

int main(int argc, char **argv) {
  if (argc != 2) {
    cout << "usage: feature_extraction img1" << endl;
    return 1;
  }
  //-- 读取图像
  Mat img = imread(argv[1], IMREAD_COLOR);
  assert(img.data != nullptr );

  //-- 初始化
  std::vector<KeyPoint> ORB_keypoints;
  std::vector<KeyPoint> BRISK_keypoints;
  std::vector<KeyPoint> SIFT_keypoints;
  std::vector<KeyPoint> SURF_keypoints;
  Mat descriptors;
  //特征提取器
  Ptr<FeatureDetector> ORB_detector = ORB::create(1000);
  Ptr<BRISK> BRISK_detector = BRISK::create(54);
  Ptr<Feature2D> SIFT_detector = xfeatures2d::SIFT::create(1000);
  Ptr<Feature2D> SURF_detector = xfeatures2d::SURF::create(1496);
  //计时器
  chrono::steady_clock::time_point t1,t2;
  chrono::duration<double> time_used;
  //绘图容器
  Mat ORB_outimg,SIFT_outimg,SURF_outimg,BRISK_outimg;


  //-- 第一步:提取ORB特征点并画出
  t1 = chrono::steady_clock::now();
  ORB_detector->detect(img, ORB_keypoints);
  t2 = chrono::steady_clock::now();
  time_used = chrono::duration_cast<chrono::duration<double>>(t2 - t1);
  cout << "extract ORB cost = " << time_used.count() << " seconds. " << endl;
  cout << "get point = " <<ORB_keypoints.size()<< " seconds. " << endl;
  drawKeypoints(img, ORB_keypoints, ORB_outimg, Scalar::all(-1), DrawMatchesFlags::DEFAULT);
  imshow("ORB features", ORB_outimg);
  

  //-- 第二步:提取SIFT特征点并画出
  t1 = chrono::steady_clock::now();
  SIFT_detector->detect(img, SIFT_keypoints);
  t2 = chrono::steady_clock::now();
  time_used = chrono::duration_cast<chrono::duration<double>>(t2 - t1);
  cout << "extract SIFT cost = " << time_used.count() << " seconds. " << endl;
  cout << "get point = " <<SIFT_keypoints.size()<< " seconds. " << endl;
  drawKeypoints(img, SIFT_keypoints, SIFT_outimg, Scalar::all(-1), DrawMatchesFlags::DEFAULT);
  imshow("SIFT features", SIFT_outimg);

  //-- 第三步:提取SURF特征点并画出
  t1 = chrono::steady_clock::now();
  SURF_detector->detect(img, SURF_keypoints);
  t2 = chrono::steady_clock::now();
  time_used = chrono::duration_cast<chrono::duration<double>>(t2 - t1);
  cout << "extract SURF cost = " << time_used.count() << " seconds. " << endl;
  cout << "get point = " <<SURF_keypoints.size()<< " seconds. " << endl;
  drawKeypoints(img, SURF_keypoints, SURF_outimg, Scalar::all(-1), DrawMatchesFlags::DEFAULT);
  imshow("SURF features", SURF_outimg);
  

    //-- 第四步:提取BRISK特征点并画出
  t1 = chrono::steady_clock::now();
  BRISK_detector->detect(img, BRISK_keypoints);
  t2 = chrono::steady_clock::now();
  time_used = chrono::duration_cast<chrono::duration<double>>(t2 - t1);
  cout << "extract BRISK cost = " << time_used.count() << " seconds. " << endl;
  cout << "get point = " <<BRISK_keypoints.size()<< " seconds. " << endl;
  drawKeypoints(img, BRISK_keypoints, BRISK_outimg, Scalar::all(-1), DrawMatchesFlags::DEFAULT);
  imshow("BRISK features", BRISK_outimg);
  
  //output特征点
  // imwrite("./ORB_output.png",ORB_outimg);
  // imwrite("./SIFT_output.png",SIFT_outimg);
  // imwrite("./SURF_output.png",SURF_outimg);
  // imwrite("./BRUSK_output.png",BRISK_outimg);

  waitKey(0);

  return 0;
}
