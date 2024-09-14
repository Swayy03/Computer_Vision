
#include<opencv2/imgcodecs.hpp>
#include<opencv2/highgui.hpp>
#include<opencv2/imgproc.hpp>
#include<opencv2/objdetect.hpp>
#include<iostream>

using namespace std;
using namespace cv;


int main() {
	string path = "C:\\Users\\samso\\Downloads\\lena.png";
	Mat img = imread(path, IMREAD_GRAYSCALE);

	imshow("Window", img);
	waitKey(0);

	return 0;

}
