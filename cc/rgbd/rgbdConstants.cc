#include "opencv_modules.h"

#ifdef HAVE_OPENCV_HIGHGUI

#include "rgbdConstants.h"

using namespace cv;

void RgbdConstants ::Init(v8::Local<v8::Object> target)
{
	//! Flags for cv::namedWindow
	// enum WindowFlags
	//FF_SET_CV_CONSTANT(target, WINDOW_NORMAL);
}

#endif
