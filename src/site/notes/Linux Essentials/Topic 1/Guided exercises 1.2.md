---
{"dg-publish":true,"permalink":"/linux-essentials/topic-1/guided-exercises-1-2/","dgPassFrontmatter":true}
---

---

> [!NOTE] 
> This section is a self-evaluation tool that I use to discover my knowledge gaps.
Text in <font color="#3399F">blue</font> signals complementary information added after the self evaluation.

##### 1. For each of the following commands, identify whether it is associated with the Debian packaging system or the Red Hat packaging system: 

| Command   | Packet management         | OS      |
| --------- | ------------------------- | ------- |
| `dpkg`    | Debian Package Manager    | Debian  |
| `rpm`     | Red Hat Package Manager   | Red Hat |
| `apt-get` | Advanced Package Manager  | Debian  |
| `yum`     | Yellowdog Update Modified | Red Hat |
| `dnf`     | Dandified YUM             | Red Hat |

<font color="#3399F">! dnf is meant as a replacement of yum for RHEL</font>

##### 2. Which command could be used to install Blender on Ubuntu? After installation, how can the program be executed? 
- To install blender
```bash
sudo apt-get install blender
```
- To open blender
```bash
blender
```

##### 3. Which application from the LibreOffice suite can be used to work with electronic spreadsheets? 
```bash
calc
```

##### 4. Which open-source web browser is used as the basis for the development of Google Chrome? 
```bash
Chromium
```

##### 5. SVG is an open standard for vector graphics. Which is the most popular application for editing SVG files in Linux systems? 
- Draw
<font color="#3399F">! Inkscape</font>

##### 6. For each of the following file formats, write the name of an application able to open and edit the corresponding file: 

| File extension | Program to open                        |
| -------------- | -------------------------------------- |
| png            | Draw, <font color="#3399F">Gimp</font> |
| doc            | Writer                                 |
| xls            | Calc                                   |
| ppt            | Impress                                |
| wav            | <font color="#3399F">Audacity</font>   |

##### 7. Which software package allows file sharing between Linux and Windows machines over the local network?
```bash
Samba
```