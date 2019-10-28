#include <opencv2/opencv.hpp> //Include file for every supported OpenCV function

int main(int argc, char **argv)
{
    // cv::Mat img = cv::imread(argv[1], cv::IMREAD_GRAYSCALE);
    cv::Mat img = cv::imread(argv[1], cv::IMREAD_COLOR);
    // cv::Mat img = cv::imread(argv[1], cv::IMREAD_UNCHANGED);

    if (img.empty())
        return -1;
    cv::namedWindow("origin", cv::WINDOW_AUTOSIZE);
    cv::moveWindow("origin", 0, 0);
    cv::imshow("origin", img);

    // 转灰度
    cv::Mat gray_image;
    cv::cvtColor(img, gray_image, cv::COLOR_BGR2GRAY);
    cv::imwrite("./r.jpg", gray_image);
    cv::namedWindow("gray", cv::WINDOW_AUTOSIZE);
    cv::moveWindow("gray", 400, 0);
    cv::imshow("gray", gray_image);

    // 部分图片1
    cv::Mat D(img, cv::Rect(100, 100, 300, 300));
    cv::namedWindow("part1", cv::WINDOW_AUTOSIZE);
    cv::moveWindow("part1", 800, 0);
    cv::imshow("part1", D);

    // 部分图片2
    cv::Mat E = img(cv::Range::all(), cv::Range(250, 350));
    cv::namedWindow("part2", cv::WINDOW_AUTOSIZE);
    cv::moveWindow("part2", 1200, 0);
    cv::imshow("part2", E);

    // 拷贝图片
    cv::Mat img_copy = img.clone();
    cv::namedWindow("img_copy", cv::WINDOW_AUTOSIZE);
    cv::moveWindow("img_copy", 0, 500);
    cv::imshow("img_copy", img_copy);

    cv::waitKey(0);
    cv::destroyAllWindows();
    return 0;
}
