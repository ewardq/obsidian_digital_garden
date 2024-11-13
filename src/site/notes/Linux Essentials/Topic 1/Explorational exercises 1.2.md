---
{"dg-publish":true,"permalink":"/linux-essentials/topic-1/explorational-exercises-1-2/","dgPassFrontmatter":true}
---

---
> [!NOTE] 
> This section is a self-evaluation tool that I use to discover my knowledge gaps.
Text in <font color="#3399F">blue</font> signals complementary information added after the self evaluation.

##### 1. You know that configuration files are kept even if the associated package is removed from the system. How could you automatically remove the package named cups and its configuration files from a DEB based system? 
```bash
sudo apt-get purge cups
```

##### 2. Suppose you have many TIFF image files and want to convert them to JPEG. Which software package could be used to convert those files directly at the command line? 
- Convert
- Magrify
<font color="#3399F">! ImageMagik</font>

##### 3. Which software package do you need to install in order to be able to open Microsoft Word documents sent to you by a Windows user? 
- Writer
- LibreOffice
- OpenOffice

##### 4. Every year, linuxquestions.org promotes a survey about the most popular Linux applications. Visit https://www.linuxquestions.org/questions/2018-linuxquestions-org-members-choice awards-128/ and find out which desktop applications are most popular among experienced Linux users

| Automation app of the year: | Backup app of the year: |
| --------------------------- | ----------------------- |
| Autokey                     | Timeshift               |
| Gnome-Schedule              | Clonezilla              |
| Texpander                   | rdiff-backup            |
| Actiona                     | Back in time            |

<font color="#3399F">! Media player of the year: VLC</font>