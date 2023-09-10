//
#include<iostream>
#include<stdlib.h>
#include<opencv2\objdetect\objdetect.hpp>
#include<opencv2\imgproc\imgproc.hpp>
#include<opencv2\highgui\highgui.hpp>

using namespace std;
using namespace cv;

int main() {

	CascadeClassifier faceDetection;
	if (!faceDetection.load("E:\\Programs\\opencv\\sources\\data\\haarcascades\\haarcascade_frontalface_default.xml")) {
		cout << "File is not Loaded Properly" << endl;
		exit(0); // stdlib.h doing this
	}

	char path[100];
	cout << "Enter the path to image for face ditection: ";
	cin.getline(path, 100);

	Mat img = imread(path, IMREAD_UNCHANGED);

	if (img.empty()) {
		cout << "Image not Loaded" << endl;
	}
	else {
		cout << "Image Found" << endl;
		cout << "Processing....." << endl;

		vector<Rect> faces;

		faceDetection.detectMultiScale(img, faces); // detecting here

		for (int i = 0; i < faces.size(); i++) {
			Point pt1(faces[i].x, faces[i].y);
			Point pt2((faces[i].x + faces[i].height), (faces[i].y + faces[i].width));
			rectangle(img, pt1, pt2, Scalar(0, 0, 255), 2, 8, 0);
		}

		imwrite("E:\\gs\\output.jpg", img); // path where the sample input images are

		cout << "Face Detected";
	}

	return 0;
}
