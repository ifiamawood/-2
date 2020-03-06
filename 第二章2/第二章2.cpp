// �ڶ���2.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<opencv.hpp>

using namespace std;

int main()
{
	VideoCapture cap;
	cap.open(0);
	if (!cap.isOpened())
	{
		std::cout << "���ܴ���Ƶ�ļ�" << std::endl;
		return-1;
	}
	double fps = cap.get(CV_CAP_PROP_FPS);
	std::cout << "fps" << fps << std::endl;
	while (1)
	{
		cv::Mat frame;
		bool rSucess = cap.read(frame);
		if (!rSucess)
		{
			std::cout << "���ܴ���Ƶ�ļ��ж�ȡ��Ƶ" << std::endl;
			break;
		}
		else
		{
			cv::imshow("frame", frame);
		}
		waitKey(0);
	}
    return 0;
}

