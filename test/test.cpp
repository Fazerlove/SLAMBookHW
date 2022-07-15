#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/imgcodecs.hpp>

using namespace cv;
using namespace std;

int main(){

    Mat image = imread("../left.png",0);

    if(!image.data){
        cout << "cant load image";
    }
    else{
        cout << "success";
    }
}