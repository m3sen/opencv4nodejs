#include "opencv_modules.h"

#ifdef HAVE_OPENCV_RGBD

#include "opencv2/core.hpp"
#include "macros.h"
#include "rgbd.h"
#include "rgbdBindings.h"
#include "rgbdConstants.h"

NAN_MODULE_INIT(Rgbd::Init) {
    RgbdConstants::Init(target);

    Nan::SetMethod(target, "setWindowProperty", setWindowProperty);
};

NAN_METHOD(Rgbd::setWindowProperty) {
  FF::TryCatch tryCatch("Rgbd::setWindowProperty");
  int prop_id;
  double prop_value;
  if (!info[0]->IsString()) {
    return tryCatch.throwError("expected arg0 to be the window name");
  }
  if (!info[1]->IsNumber()) {
    return tryCatch.throwError("expected arg1 (prop_id) to be a number");
  }
  if (!info[2]->IsNumber()) {
    return tryCatch.throwError("expected arg2 (prop_value) to be a number");
  }
  if (FF::IntConverter::arg(1, &prop_id, info) || FF::DoubleConverter::arg(2, &prop_value, info)) {
    return tryCatch.reThrow();
  }
  //cv::setWindowProperty(FF::StringConverter::unwrapUnchecked(info[0]), prop_id, prop_value);
}
