# Webcam Streaming with Snapshot Capture (C++ with OpenCV, Qt Optional)

## 📌 Description
This C++ application captures and displays a live webcam feed using **OpenCV**. It allows users to take snapshots and save them as image files. The application is designed to be efficient and ensures smooth processing without freezing.

## 🔹 Features
- **Live Webcam Streaming**: Continuously captures and displays the webcam feed.
- **Snapshot Capture**: Allows users to take a snapshot and save it as an image file.
- **Auto-generated Filenames**: Snapshots are saved with a timestamp-based filename.
- **Efficient Processing**: Ensures the application remains responsive.
- **Keyboard Support**: Can be operated using keyboard inputs if no GUI framework is used.

## 🛠️ Requirements
- **C++**
- **OpenCV** (for video capture and image processing)
- **CMake (Optional)** (for project compilation)

## 📂 How to Run
### 1️⃣ Install OpenCV (if not installed)
Ensure OpenCV is installed on your system:
```sh
sudo apt-get install libopencv-dev  # Linux
brew install opencv                 # macOS
choco install opencv                # Windows (using Chocolatey)
