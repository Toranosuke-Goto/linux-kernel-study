#include <linux/init.h>
 #include <linux/module.h>

 MODULE_AUTHOR (Tora Goto);
 MODULE_DESCRIPTION (linux-kernel-study :P1 Goodnight_lkm: Good, night, my first LKM); 
 MODULE_LICENSE("GPL");
 MODULE_VERSION("0.1");

static int__init Goodnight_lkm_init(void) 
{
  printk(KERN_INFO "Good,night\n");
  return 0;  /*sucess*/
}

static exit__init Goodnight_lkm_exit(void)
{
  printk(KERN_INFO "module unload\n");
  return 0; ?*sucess*/
}
module__init(Goodnight_lkm_init);
module__exit(Goodnight_lkm_exit);
