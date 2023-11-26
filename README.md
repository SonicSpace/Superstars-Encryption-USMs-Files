# Encryption USM Files for Sonic Superstars 
[![Version](https://img.shields.io/badge/Sonic%20Modding-e2a754)](https://gamebanana.com/games/18552) [![Version](https://img.shields.io/badge/Python-Guide-blue)]()

This guide will lead you through the process of encrypting USM files.
By Caio Natsune ✅

📅 Submitted at November 25, 2023

![a1e51d9109110d7f-1920x1080 (1)](https://github.com/SonicSpace/Encryption-USMs-Files/assets/88670125/bcf5fd0e-0495-418d-aac9-d26464bea23d)

# Introduction And Credit

Sonic Superstars uses Criware's middleware called Sofdec2 which creates video containers that end with the file extension 'USM'. These files have unfortunately been encrypted for the PC version of Sonic Superstars and were previously not modifiable.

Thanks to [Donmai-me](https://github.com/donmai-me), the situation has changed now: Donmai created an additional Python script for us that works in combination with his work-in-progress Python library called [WannaCri](https://github.com/donmai-me/WannaCRI). This would not be possible without Donmai, so huge thanks to him!

# Installing Python

WannaCRI is based on Python 3.12.0 or Latest Version, so in order to use it we need to install said version which can be downloaded here:

• [![Version](https://img.shields.io/badge/Python%203.12.0%20(Windows%20x64%20executable%20installer)-007100)](https://www.python.org/downloads/)

While installing Python, make sure to tick the option that says __'Add Python 3.8 to PATH'__.

# Installing WannaCRI

Open **Command Prompt (CMD)** and type the following to install WannaCRI:

• `pip install WannaCRI`

WannaCRI needs 'ffmpeg-python as well' And 'python-json-logger' to function correctly. 'ffmpeg-python gets' automatically installed with WannaCRI, but you need to install 'python-json-logger' manually. To do so, open **Command Prompt (CMD)** once again and type the following:

• `pip install python-json-logger`

You have now successfully installed WannaCRI.

# Encrypting USM files

As already mentioned in the introduction section of this guide, Donmai wrote a Python script that isolates the encryption function of WannaCRI. I prepared the script for usage with Sonic Superstars USM files and wrote a batch file for it which can be downloaded below:

• [![Version](https://img.shields.io/badge/Sonic%20Superstars%20USM%20Encryption.zip-blue](https://github.com/SonicSpace/Encryption-USMs-Files/releases/download/SSUSME/Sonic.Superstars.USM.Encryption.zip)

Once extracted, you should be greeted by two files, **'Encrypt USM.bat'** and **'WannaCRI_Encryption.py'**. In order to encrypt an USM file, drag and drop it into the batch file. You are going to be prompted with the question "Do you want to make a copy of the original file? [Y/N]" which you can answer with either 'Y(es)' or 'N(o)'. If you enter Y(es), the batch file will create a copy of the inserted USM file and adds '\*\_Original' to it's name - If you enter N(o), the batch file will skip to the encryption section. The Python script will encrypt the file now which may take some time depending on the file size. Once that's done, the originally inserted USM file is encrypted and can be used with Sonic Superstars.

[![Version](https://img.shields.io/pypi/v/wannacri.svg)](https://pypi.org/project/WannaCRI)

# WannaCRI

A (WIP) Python library for parsing, extracting, and generating Criware's various audio and video file formats.
If you're interested in reading more about USM, you can read my write-up about it [here](https://listed.to/@donmai/24921/criware-s-usm-format-part-1)

# Support

This currently supports the following formats with more planned:

✅: Implemented and tested ❓: Should work but not tested ❌: Not implemented

x/y: Extract support / Create support

## USM

### Video

| Codec | Not-encrypted | Encrypted |
| ----- | ------------- | --------- |
| VP9   | ✅ / ✅       | ✅ / ✅   |
| H.264 | ✅ / ✅       | ✅ / ✅   |
| Prime | ✅ / ✅       | ✅ / ✅   |

### Audio

| Codec   | Not-encrypted | Encrypted |
| ------- | ------------- | --------- |
| ADX     | ✅ / ✅       | ✅ / ✅   |
| CRI HCA | ✅ / ✅       | ✅ / ✅   |

# Licence

This is an open-sourced application licensed under the MIT License
