#include <iostream>
#include <opencv2/highgui.hpp>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;
int main(int argc, char** argv){
    Mat img;
    img = imread("C:/Users/samso/Downloads/lenna_(test_image).png");
    if(!img.data){
        cout<<"No image found \n";
        return -1;
    }
    Mat gray;
    cvtColor(img, gray, COLOR_BGR2GRAY);
    
    namedWindow("Display color Image", WINDOW_AUTOSIZE);
    imshow("Display color Image", img);

    namedWindow("Display gray Image", WINDOW_AUTOSIZE);
    imshow("Display gray Image", gray);

    waitKey(0);

    return 0;
}