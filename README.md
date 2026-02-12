# Linux Kernel Study

Hands-on study of Linux kernel internals and low-level system programming using an AWS EC2 environment.

---

## Environment

- Ubuntu on AWS EC2
- Custom Linux kernel build
- Loadable Kernel Modules (LKM)
- Remote SSH development
- C language

---

## What I am doing

- Building and configuring Linux kernel on AWS
- Developing and testing kernel modules
- Studying printk and kernel logging
- Practicing low-level debugging
- Understanding system internals

---

## Build & Run Example

```bash
make
sudo insmod module.ko
dmesg | tail

