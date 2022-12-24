#include "macros.h"
#include <opencv2/rgbd.hpp>

#ifndef __FF_RGBD_CONSTANTS_H__
#define __FF_RGBD_CONSTANTS_H__

class RgbdConstants {
public:
  static void Init(v8::Local<v8::Object> module);
};

#endif