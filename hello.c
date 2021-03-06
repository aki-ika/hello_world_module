#include <linux/init.h>
#include <linux/module.h>

MODULE_DESCRIPTION("Hello World Module");
MODULE_AUTHOR("aki");
MODULE_LICENSE("GPL");

static int __init hello_init(void)
{
  printk(KERN_ALERT "hello, world\n");
  return 0;
}

static void __exit hello_exit(void)
{
  printk(KERN_ALERT "bye, world\n");
}

module_init(hello_init);
module_exit(hello_exit);

