#include <linux/kernel.h>
#include <linux/crc16.h>
#include "unity.h"
#include "unity_fixture.h"


TEST_GROUP(crc);

TEST_SETUP(crc)
{
	UnityPrint("test setup");
	UNITY_OUTPUT_CHAR('\n');
}

TEST_TEAR_DOWN(crc)
{
	UnityPrint("test teardown");
	UNITY_OUTPUT_CHAR('\n');
}


TEST(crc, crc16)
{
	u8 *buffer = "1234";
	size_t len = 4;
	u16 result = crc16(1, buffer, len);
	TEST_ASSERT_EQUAL(1, result);
}

IGNORE_TEST(crc, crc16_ignore)
{
	u8 *buffer = "4";
	size_t len = 1;
	u16 result = crc16(1, buffer, len);
	TEST_ASSERT_EQUAL(1, result);
}

TEST_GROUP_RUNNER(crc)
{
	RUN_TEST_CASE(crc, crc16);
	RUN_TEST_CASE(crc, crc16_ignore);
}

static void RUN_crc(void)
{
	RUN_TEST_GROUP(crc);
}

int unittest_init(void)
{
	int ret;
	ret = UnityMain(0, 0, RUN_crc);
	return 0;
}

