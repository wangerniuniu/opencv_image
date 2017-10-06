// first_cpp.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <ctime>
#include <opencv2/opencv.hpp>
using namespace cv;
int main()
{
	Mat img = imread("1.jpg");
	imshow("载入的图片", img);
	int a = 0;
	waitKey(6000);
	return  0;
}