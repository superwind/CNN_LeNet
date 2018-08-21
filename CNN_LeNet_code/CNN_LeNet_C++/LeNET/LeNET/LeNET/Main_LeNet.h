#pragma once

// opencv
#include <opencv2/highgui/highgui.hpp>  
#include <opencv2/imgproc/imgproc.hpp>  
#include <opencv2/core/core.hpp>  
#include <vector>

using namespace cv;
using namespace std;


void set_target_class_one2ten(vector<vector<double>> &target_class, int length);
