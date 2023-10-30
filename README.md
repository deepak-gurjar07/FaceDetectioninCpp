# Face Detection in Cpp

### Sample
![Alt Input](https://github.com/Abhaykushwah/FaceDetectioninCpp/blob/main/Face%20Recognisation/img/sample%20input.jpg)
### Output
![Alt Output](https://github.com/Abhaykushwah/FaceDetectioninCpp/blob/main/Face%20Recognisation/img/sample%20output.jpg)


# OpenCV Face Detection C++ Project

This C++ project demonstrates how to use the OpenCV library to perform face detection in an image. It imports the following OpenCV headers:

1. `opencv2/objdetect/objdetect.hpp`
2. `opencv2/imgproc/imgproc.hpp`
3. `opencv2/highgui/highgui.hpp`

## Project Description

The provided C++ code performs the following tasks:

1. It loads a pre-trained Haar Cascade Classifier for face detection.

2. It prompts the user to enter the path to an image file for face detection.

3. The code reads the specified image and performs face detection on it.

4. Detected faces are highlighted with red rectangles in the image.

5. The processed image is saved as "output.jpg."

## Prerequisites

To run this project, you need the following prerequisites:

1. **C++ Compiler**: Ensure that you have a C++ compiler (e.g., g++) installed on your system.

2. **OpenCV**: OpenCV must be installed on your system. You can download and install OpenCV from the official website: [OpenCV Downloads](https://opencv.org/releases/).

## Getting Started

To run the provided C++ code:

1. Clone this repository to your local machine using Git:

    ```sh
    git clone https://github.com/yourusername/opencv-face-detection.git
    ```

2. Navigate to the project directory:

    ```sh
    cd opencv-face-detection
    ```

3. Compile the code using your C++ compiler:

    ```sh
    g++ -o main main.cpp `pkg-config --cflags --libs opencv`
    ```

4. Run the compiled executable:

    ```sh
    ./main
    ```

You can modify the code to use your own image path or make any desired improvements to the face detection process.

## License

This project is open source and distributed under the MIT License. You are free to use, modify, and distribute it as per the terms of the license.

Please feel free to reach out if you have any questions or need further assistance with this project.

Happy face detection!
