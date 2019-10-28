#include <opencv2/opencv.hpp> //Include file for every supported OpenCV function

using namespace cv;
using namespace std;

int main(int argc, char **argv)
{
    // 打印Mat
    cv::Mat m(10, 10, CV_8UC3, cv::Scalar(150, 150, 150));
    cv::namedWindow("m", cv::WINDOW_AUTOSIZE);
    cv::moveWindow("m", 0, 0);
    cv::imshow("m", m);
    std::cout << m << std::endl;

    int sz[3] = {2, 2, 2};
    Mat L(3, sz, CV_8UC(1), Scalar::all(0));

    //单位阵
    Mat E = Mat::eye(40, 40, CV_64F);
    cout << "E = " << endl
         << " " << E << endl
         << endl;
    Mat O = Mat::ones(2, 2, CV_32F);
    cout << "O = " << endl
         << " " << O << endl
         << endl;
    Mat Z = Mat::zeros(3, 3, CV_8UC1);
    cout << "Z = " << endl
         << " " << Z << endl
         << endl;
    cv::namedWindow("L", cv::WINDOW_AUTOSIZE);
    cv::moveWindow("L", 50, 50);
    cv::imshow("L", E);

    Mat C = (Mat_<double>(3, 3) << 0, -1.1, 0, -1, 5, -1, 0, -1, 0);
    cout << "C = " << endl
         << " " << C << endl
         << endl;

    Mat R = Mat(3, 2, CV_8UC3);
    randu(R, Scalar::all(0), Scalar::all(255));
    cout << "R = " << endl
         << " " << R << endl
         << endl;

    cv::waitKey(0);
    cv::destroyAllWindows();
    return 0;
}

//https://docs.opencv.org/master/d6/d6d/tutorial_mat_the_basic_image_container.html