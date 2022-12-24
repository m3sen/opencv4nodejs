#include "NativeNodeUtils.h"
#include "linemod.h"
#include "depth.h"
#include "kinfu.h"
#include "dynafu.h"
#include "large_kinfu.h"
#include "detail/pose_graph.h"
#include "colored_kinfu.h"
#include "opencv2/rgbd.hpp"
#include "CatchCvExceptionWorker.h"

#ifndef __FF_RGBD_H__
#define __FF_RGBD_H__

class Rgbd {
public:
  static NAN_MODULE_INIT(Init);

	//static NAN_METHOD(setWindowProperty);
	//static NAN_METHOD(getWindowProperty);
  //static NAN_METHOD(setWindowTitle);
  //static NAN_METHOD(moveWindow);
  //static NAN_METHOD(namedWindow);
  //static NAN_METHOD(resizeWindow);
  //static NAN_METHOD(startWindowThread);
};

#endif
