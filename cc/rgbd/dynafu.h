#include "NativeNodeUtils.h"
#include <opencv2/rgbd/volume.hpp>
#include "opencv2/core.hpp"
#include "opencv2/core/affine.hpp"
#include "CatchCvExceptionWorker.h"

#ifndef __FF_DYNAFU_H__
#define __FF_DYNAFU_H__

class Dynafu {
public:
  static NAN_MODULE_INIT(Init);

	// static NAN_METHOD(setWindowProperty);
	// static NAN_METHOD(getWindowProperty);
  // static NAN_METHOD(setWindowTitle);
  // static NAN_METHOD(moveWindow);
  // static NAN_METHOD(namedWindow);
  // static NAN_METHOD(resizeWindow);
  // static NAN_METHOD(startWindowThread);
};

#endif
