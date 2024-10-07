
---
### Understanding Links

Everithing in Linux is treated as a file. But there is a _special_ kind of file, called a _link_, and there are two types of links on a Linux system:

#### Symbolic links
Also called _soft links_, they point to the path of another file. If you delete the file the link points to (called target) the link will still exist, but it "Stops working", as it now points to "nothing".

#### Hard links
Think of a hard link as a second name for the original file. They are _not duplicates_, but instead are an additional entry in the file system pointing to the same place (inode) on the disk.

![inode]

---
How to create Hard Links
The command to create a hard link on Linux is [[ln]]

> [!Important] Syntax
> ln TARGET LINK_NAME

The `TARGET` must exist already (this is the file the link will point to), and if the target is not on the current directory, or if you want to create the link elseware, you _must specify_ the full path to it. For example:

```bash
$ ln target.txt /home/carol/Documents/hardlink
```

---
How to create Soft Links
The command used to create a symbolic link is also [[ln]], but with the `-s` parameter added. Like so:

> [!Important] Syntax
> ln -s target.txt /home/carol/Documents/softlink

This will create a file named softlink in the directory `/home/carol/Documents/`, pointing to the file target.txt in the current directory.

As with hard links, you can omit the link name to create a link with the same name as the target in the current directory.