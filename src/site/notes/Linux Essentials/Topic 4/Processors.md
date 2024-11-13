---
{"dg-publish":true,"permalink":"/linux-essentials/topic-4/processors/","dgPassFrontmatter":true}
---

---
In computers, the **Central Processing Unit (CPU) processes electrical signals; treated as having one of the binary values 1 or 0.**  

CPU architecture is a reference to the instructions that the processor supports. Although Intel and AMD make processors supporting the same instructions it is meaningful to differentiate by vendor because of vendor specific packaging, performance, and power consumption differences.

Software distributions commonly use these designations to specify the minimum set of instructions they require to operate:

| CPU Architecture | Description                                                                                                                                                                                                                                 |
| ---------------- | ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| `i386`           | References the 32-bit instruction set associated with the Intel 80386                                                                                                                                                                       |
| `x86`            | Typically references the 32-bit instruction sets associated with successors to the 80386 such as 80486, 80586, and Pentium                                                                                                                  |
| `x64` / `x86-64` | References processors that support both the 32-bit and 64-bit instructions of the x86 family.                                                                                                                                               |
| `AMD`            | A reference to x86 support by AMD processors.                                                                                                                                                                                               |
| `AMD64`          | A reference to x64 support by AMD processors.                                                                                                                                                                                               |
| `ARM`            | References a **Reduced Instruction Set Computer (RISC)** CPU that is not based on the x86 instruction set. Commonly used by embedded, mobile, tablet, and battery operated devices. A version of Linux for ARM is used by the Raspberry Pi. |

The file `/proc/cpuinfo` contains detailed information about a system's processor.

A more general result can be obtained with the command [[Linux Essentials/Topic 4/lscpu\|lscpu]].


<div class="transclusion internal-embed is-loaded"><a class="markdown-embed-link" href="/linux-essentials/topic-4/lscpu/" aria-label="Open link"><svg xmlns="http://www.w3.org/2000/svg" width="24" height="24" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" class="svg-icon lucide-link"><path d="M10 13a5 5 0 0 0 7.54.54l3-3a5 5 0 0 0-7.07-7.07l-1.72 1.71"></path><path d="M14 11a5 5 0 0 0-7.54-.54l-3 3a5 5 0 0 0 7.07 7.07l1.71-1.71"></path></svg></a><div class="markdown-embed">




---
___Display information about the CPU architecture.___

![Pasted image 20240930101229.png](/img/user/Linux%20Essentials/Topic%204/Topic4%20reference%20images/Pasted%20image%2020240930101229.png)

**lscpu** gathers CPU architecture information from sysfs and /proc/cpuinfo. The command output can be optimized for parsing or for easy readability by humans.  
The information includes, for example, the number of CPUs, threads, cores, sockets, and Non-Uniform Memory Access (NUMA) nodes. There is also information about the CPU caches and cache sharing, family, model, bogoMIPS, byte order, and stepping.

</div></div>


#Need_Citation