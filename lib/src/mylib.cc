#include "mylib.h"

void mylib::myfunction(cv::InputOutputArray myparam) {
	myparam.getMat() = cv::Scalar::all(0);
}
