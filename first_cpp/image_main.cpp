// first_cpp.cpp : �������̨Ӧ�ó������ڵ㡣
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
	imshow("�����ͼƬ", img);
	int a = 0;
	waitKey(6000);
	return  0;
}