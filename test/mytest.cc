#include <opencv2/ts/ts.hpp>
#include "mylib.h"

class MytestClass : public cvtest::BaseTest
{
private:
	cv::Mat mat;
	void run(int) {
		ts->set_failed_test_info(cvtest::TS::OK);

		if (0 != cvtest::check(mat, 1, 1, 0) )
			ts->set_failed_test_info(cvtest::TS::FAIL_INVALID_TEST_DATA);
		mylib::myfunction(mat);

		if (0 != cvtest::check(mat, 0, 0, 0) )
			ts->set_failed_test_info(cvtest::TS::FAIL_INVALID_OUTPUT);

	}

public:
	MytestClass() : mat(cv::Scalar::all(1)) {}
	// virtual ~MytestClass : public cvtest::BaseTest();
};

TEST(MyTestSuite, ATestThatPasses) {
	MytestClass myTestClass;
	myTestClass.safe_run();
}

TEST(MyTestSuite, ATestThatFails) {
	bool mybool = false;
	ASSERT_TRUE(mybool);
}
