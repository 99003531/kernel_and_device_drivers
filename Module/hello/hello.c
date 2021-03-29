#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
int __init init_module(void)
{
  printk("Hello world...welcome\n");
  return 0;
}
void __exit cleanup_module(void)
{
  printk("bye,leaving the world\n");
}
MODULE_LICENSE("GPL");
MODULE_AUTHOR("your name");
MODULE_DESCRIPTION("A SIMPLE MODULE");
