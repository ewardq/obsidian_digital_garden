---
{"dg-publish":true,"permalink":"/linux-essentials/topic-4/memory/","noteIcon":"1"}
---

---
___System memory holds the data and program code of currently running applications.___

Physical system memory is usually packaged on individual circuit board modules that plug into the motherboard.

![RAM-Diagram.png](/img/user/Linux%20Essentials/Topic%204/Topic4%20reference%20images/RAM-Diagram.png)

There are several ways to obtain information about system memory. As a user, the total amount of memory available and in use are typically the values of interest. One source of information would be to run the command [[Linux Essentials/Topic 4/free\|free]] with the parameter `-m`.


<div class="transclusion internal-embed is-loaded"><a class="markdown-embed-link" href="/linux-essentials/topic-4/free/" aria-label="Open link"><svg xmlns="http://www.w3.org/2000/svg" width="24" height="24" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" class="svg-icon lucide-link"><path d="M10 13a5 5 0 0 0 7.54.54l3-3a5 5 0 0 0-7.07-7.07l-1.72 1.71"></path><path d="M14 11a5 5 0 0 0-7.54-.54l-3 3a5 5 0 0 0 7.07 7.07l1.71-1.71"></path></svg></a><div class="markdown-embed">




---
___Display amount of free and used memory in the system.___

![Pasted image 20240818165503.png](/img/user/Linux%20Essentials/Topic%204/Topic4%20reference%20images/Pasted%20image%2020240818165503.png)

 **free** displays the total amount of free and used physical and swap memory in the system, as well as the buffers and caches used by the kernel. The information is gathered by parsing _/proc/meminfo_.

</div></div>
