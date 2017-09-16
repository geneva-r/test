#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/init.h>
static int __init hello_init(void)
{
	printk(KERN_INFO "Hello,qt\n");
	return 0;
}
static void __exit hello_exit(void)
{
	printk(KERN_INFO "Goodbye,qt\n");
}
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("MODULE_TEST");
MODULE_AUTHOR("mgr.");
module_init(hello_init);
module_exit(hello_exit);