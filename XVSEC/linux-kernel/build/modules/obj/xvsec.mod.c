#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7646a06a, "module_layout" },
	{ 0xa43791b8, "kernel_write" },
	{ 0x22b90774, "cdev_del" },
	{ 0xcc1ffc6f, "kmalloc_caches" },
	{ 0x6a58ae5e, "pci_write_config_dword" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x2064fa56, "cdev_init" },
	{ 0xf9a482f9, "msleep" },
	{ 0x56fefa92, "pci_write_config_word" },
	{ 0x754d539c, "strlen" },
	{ 0xbae40fd, "pci_read_config_byte" },
	{ 0xf5dae83b, "pci_find_next_ext_capability" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x964bdaed, "device_destroy" },
	{ 0x6085601b, "kobject_set_name" },
	{ 0xe2631930, "filp_close" },
	{ 0x956eefc6, "pci_write_config_byte" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x9aa9669a, "vfs_fsync" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x24428be5, "strncpy_from_user" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0xade18fb3, "kernel_read" },
	{ 0x362586da, "current_task" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xdf69db2e, "pci_read_config_word" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xac172ee, "device_create" },
	{ 0xbcc308bb, "strnlen_user" },
	{ 0xc4952f09, "cdev_add" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x67215d2d, "pci_read_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xca7a3159, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xb65e5a32, "class_destroy" },
	{ 0xb099df7a, "pci_get_device" },
	{ 0xfef8cf74, "vfs_statx" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x2871e975, "__class_create" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xb31f5840, "filp_open" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "3C417B80BE4B264B7831F27");
