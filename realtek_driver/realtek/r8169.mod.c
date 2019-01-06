#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x51d22b2b, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x51eafc8e, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x4eae0a3b, __VMLINUX_SYMBOL_STR(ethtool_op_get_ts_info) },
	{ 0x9975e8c8, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0x7f85e474, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x966f779f, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x6783e368, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x27c33efe, __VMLINUX_SYMBOL_STR(csum_ipv6_magic) },
	{ 0x188e61a6, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0x71126db0, __VMLINUX_SYMBOL_STR(skb_pad) },
	{ 0x9fc2164b, __VMLINUX_SYMBOL_STR(skb_checksum_help) },
	{ 0xdfaa33d2, __VMLINUX_SYMBOL_STR(__skb_gso_segment) },
	{ 0x2fc483df, __VMLINUX_SYMBOL_STR(skb_tstamp_tx) },
	{ 0xf3558cb0, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x137d8913, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x71b953bf, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x59b2ef9d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x55f5019b, __VMLINUX_SYMBOL_STR(__kmalloc_node) },
	{ 0x27865142, __VMLINUX_SYMBOL_STR(__pm_runtime_idle) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0xbf7e73ee, __VMLINUX_SYMBOL_STR(x86_dma_fallback_dev) },
	{ 0x2a6e17ea, __VMLINUX_SYMBOL_STR(pci_set_power_state) },
	{ 0x21264d9a, __VMLINUX_SYMBOL_STR(pci_wake_from_d3) },
	{ 0xc2781055, __VMLINUX_SYMBOL_STR(pci_clear_master) },
	{ 0xa8721b97, __VMLINUX_SYMBOL_STR(system_state) },
	{ 0xa71c1dbd, __VMLINUX_SYMBOL_STR(napi_disable) },
	{ 0x558f4da5, __VMLINUX_SYMBOL_STR(netif_device_detach) },
	{ 0xe67afe02, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0x7ab0e426, __VMLINUX_SYMBOL_STR(netif_schedule_queue) },
	{ 0xa00aca2a, __VMLINUX_SYMBOL_STR(dql_completed) },
	{ 0x29772791, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x66893eb3, __VMLINUX_SYMBOL_STR(napi_gro_receive) },
	{ 0xcf2cfb47, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0x7f380cbd, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xf7c769e, __VMLINUX_SYMBOL_STR(__napi_alloc_skb) },
	{ 0xf5507140, __VMLINUX_SYMBOL_STR(napi_complete_done) },
	{ 0x658091c1, __VMLINUX_SYMBOL_STR(netif_device_attach) },
	{ 0x10ce0023, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x1ce28d2b, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x379beee3, __VMLINUX_SYMBOL_STR(pci_bus_write_config_word) },
	{ 0xff71ab, __VMLINUX_SYMBOL_STR(pci_bus_read_config_word) },
	{ 0x6abfe74c, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0xbebaa2ae, __VMLINUX_SYMBOL_STR(pm_schedule_suspend) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x59bc8d0f, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0x512f3bd0, __VMLINUX_SYMBOL_STR(pci_enable_msi_range) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0xfdb3ece, __VMLINUX_SYMBOL_STR(pci_disable_msi) },
	{ 0xdd4b8ec6, __VMLINUX_SYMBOL_STR(netif_napi_del) },
	{ 0x4763daf8, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x6c7f083d, __VMLINUX_SYMBOL_STR(pci_dev_run_wake) },
	{ 0xed4cda5d, __VMLINUX_SYMBOL_STR(device_set_wakeup_enable) },
	{ 0x46a3fcd8, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xf0e02321, __VMLINUX_SYMBOL_STR(netif_napi_add) },
	{ 0xae6cd726, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x70ba65d4, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xee4beff9, __VMLINUX_SYMBOL_STR(pci_release_regions) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0xa974fd6f, __VMLINUX_SYMBOL_STR(dma_set_mask) },
	{ 0x4570f64e, __VMLINUX_SYMBOL_STR(pci_request_regions) },
	{ 0x34921cc4, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xef3feb6c, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0xe80cf408, __VMLINUX_SYMBOL_STR(pci_clear_mwi) },
	{ 0x21dbc9c, __VMLINUX_SYMBOL_STR(pci_set_mwi) },
	{ 0x1cce8c94, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0x91699f82, __VMLINUX_SYMBOL_STR(pci_disable_link_state) },
	{ 0x3823972, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xda339c0d, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xd5f2172f, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x4ea25709, __VMLINUX_SYMBOL_STR(dql_reset) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x8db6887d, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0xcbbe2335, __VMLINUX_SYMBOL_STR(pci_bus_write_config_byte) },
	{ 0x323777, __VMLINUX_SYMBOL_STR(pcie_capability_clear_and_set_word) },
	{ 0xe0e825fc, __VMLINUX_SYMBOL_STR(__dynamic_netdev_dbg) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xfa6768e8, __VMLINUX_SYMBOL_STR(netdev_notice) },
	{ 0xfaf98462, __VMLINUX_SYMBOL_STR(bitrev32) },
	{ 0x393d4de9, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0x5c8236c6, __VMLINUX_SYMBOL_STR(netdev_update_features) },
	{ 0x27a38ea9, __VMLINUX_SYMBOL_STR(__napi_schedule) },
	{ 0xb5f97fca, __VMLINUX_SYMBOL_STR(mii_ethtool_gset) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xdcc03afa, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0x9cdaa83f, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0xde295364, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x9f2211b6, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x9e7d6bd0, __VMLINUX_SYMBOL_STR(__udelay) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mii";

MODULE_ALIAS("pci:v000010ECd00008129sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008136sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008167sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008168sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008169sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00004300sv00001186sd00004B10bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00004300sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00004302sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001259d0000C107sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000016ECd00000116sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001737d00001032sv*sd00000024bc*sc*i*");
MODULE_ALIAS("pci:v00000001d00008168sv*sd00002410bc*sc*i*");

MODULE_INFO(srcversion, "41C16B78B46027C80926FEF");
