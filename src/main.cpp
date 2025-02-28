#include <opencv2/opencv.hpp>
#include <iostream>
#include <ctime>
#include <string>

std::string generateTimestampFilename()
{
    std::time_t now = std::time(nullptr);
    char buf[80];
    std::strftime(buf, sizeof(buf), "snapshot_%Y%m%d_%H%M%S.png", std::localtime(&now));
    return std::string(buf);
}

int main()
{
    cv::VideoCapture cap(0); // Open the default camera
    if (!cap.isOpened())
    {
        std::cerr << "Error: Could not open the camera." << std::endl;
        return -1;
    }

    cv::Mat frame;
    char key;
    std::cout << "Press 's' to take a snapshot, 'q' to quit." << std::endl;

    while (true)
    {
        cap >> frame; // Capture a new frame
        if (frame.empty())
        {
            std::cerr << "Error: Could not capture frame." << std::endl;
            break;
        }

        cv::imshow("Webcam Feed", frame); // Display the frame

        key = cv::waitKey(30); // Wait for 30 ms for a key press
        if (key == 's')
        {
            std::string filename = generateTimestampFilename();
            cv::imwrite(filename, frame); // Save the snapshot
            std::cout << "Snapshot saved as " << filename << std::endl;
        }
        else if (key == 'q')
        {
            break; // Exit the loop
        }
    }

    cap.release();           // Release the camera
    cv::destroyAllWindows(); // Close all OpenCV windows
    return 0;
}
