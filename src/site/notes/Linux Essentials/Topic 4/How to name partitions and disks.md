---
{"dg-publish":true,"permalink":"/linux-essentials/topic-4/how-to-name-partitions-and-disks/","noteIcon":"1"}
---

---
To access storage drives, Linux has a directory for each physical unit and partition. This directories are in `/dev/` and will have a name formed with the following nomenclature:

1. It's _technology:_ **hd** (PATA disks), **sd** (SATA, USB, etc.)
2. The _order in which they are connected to the motherboard:_ **a**, **b**, **c**, ...
3. The _partition number:_ **1**, **2**, **3**, ...

Then, the 
- `/dev/sda` directory refers to a **SATA** disk.
- `/dev/sdb2` directory refers a **second partition** of a **SATA** disk.
- `/dev/hdc1` directory refers o the **first partition** of the **third PATA disk**. 
