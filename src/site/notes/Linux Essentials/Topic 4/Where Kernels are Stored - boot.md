---
{"dg-publish":true,"permalink":"/linux-essentials/topic-4/where-kernels-are-stored-boot/","noteIcon":"1"}
---

---
The kernel resides in _/boot_, together with other boot-related files. Most of there include the kernel version, major version, minor revision and patch number.

_initrd.img-version_kernel_: Image that loads in RAM to boot the system.

_vmlinuz-version_kernel_: Here's the compressed system kernel.

_grub_: Configuration directory for the _grub2_ bootloader.

Because it is a critical feature of the operating system, **more than one kernel and its associated files are kept in /boot** in case the default one becomes faulty and we have to fall back on a previous version to — at least — be able to boot the system up and fix it.