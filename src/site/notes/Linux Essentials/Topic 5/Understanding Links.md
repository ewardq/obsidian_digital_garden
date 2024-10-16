---
{"dg-publish":true,"permalink":"/linux-essentials/topic-5/understanding-links/","noteIcon":"1"}
---

---
We have already said that on Linux everything is treated as a file. But there is a special kind of file, called a **link**, and there are two types of links on a Linux system:

___Symbolic links___ Also called soft links, they point to the path of another file. If you delete the file the link points to (called target) the link will still exist, but it “stops working”, as it now points to “nothing”. 

___Hard links___ Think of a hard link as a second name for the original file. They are not duplicates, but instead are an additional entry in the file system pointing to the same place (inode) on the disk


<div class="transclusion internal-embed is-loaded"><a class="markdown-embed-link" href="/linux-essentials/topic-5/inode/" aria-label="Open link"><svg xmlns="http://www.w3.org/2000/svg" width="24" height="24" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" class="svg-icon lucide-link"><path d="M10 13a5 5 0 0 0 7.54.54l3-3a5 5 0 0 0-7.07-7.07l-1.72 1.71"></path><path d="M14 11a5 5 0 0 0-7.54-.54l-3 3a5 5 0 0 0 7.07 7.07l1.71-1.71"></path></svg></a><div class="markdown-embed">





---
### Inode

An _inode_ is a data structure that stores attributes for an object (like a file or directory) on a filesystem. Among those attributes are the filename,permissions, ownership and on which blocks of the disk the data for the object is stored. Think of it as an entry on an index, hence the name, which comes from “index node”.


</div></div>
