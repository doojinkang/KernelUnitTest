#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>


int unittest_init(void);

static int __init testmodule_init(void)
{
	int ret;

	printk(KERN_INFO "MODULE:testmodule_init 6.0 : unit test kernel\n");

	unittest_init();

	return ret;
}

static void __exit testmodule_exit(void)
{
}

MODULE_LICENSE("GPL v2");
MODULE_DESCRIPTION("My module driver");
MODULE_VERSION("1.40");

module_init(testmodule_init);
module_exit(testmodule_exit);
