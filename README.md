# Encryption Of USM Files

## This guide will lead you through the process of encrypting (custom) USM files.

# Introduction And Credit

### Sonic Superstars uses Criware's middleware called Sofdec2 which creates video containers that end with the file extension 'USM'. These files have unfortunately been encrypted for the PC version of Sonic Superstars and were previously not modifiable. Thanks to DonmaiDonmai (https://github.com/donmai-me), the situation has changed now: Donmai created an additional Python script for us that works in combination with his work-in-progress Python library called WannaCri. (https://github.com/donmai-me/WannaCRI). This would not be possible without Donmai, so huge thanks to him!

# Installing Python

### WannaCRI is based on Python 3.12.0, so in order to use it we need to install said version which can be downloaded here:

`pip install WannaCRI

## WannaCRI needs **ffmpeg-python as well **python-json-logger to function correctly. **ffmpeg-python gets automatically installed with WannaCRI, but you need to install**python-json-logger manually. To do so, open Command Prompt (CMD) once again and type the following:

`pip install python-json-logger

\*\*You have now successfully installed WannaCRI.

# Encrypting USM files

## As already mentioned in the introduction section of this guide, Donmai wrote a Python script that isolates the encryption function of WannaCRI. I prepared the script for usage with Sonic Superstars USM files and wrote a batch file for it which can be downloaded below:

## Once extracted, you should be greeted by two files, 'Encrypt USM.bat' and 'WannaCRI_Encryption.py'. In order to encrypt an USM file, drag and drop it into the batch file. You are going to be prompted with the question "Do you want to make a copy of the original file? [Y/N]" which you can answer with either 'Y(es)' or 'N(o)'. If you enter Y(es), the batch file will create a copy of the inserted USM file and adds '\*\_Original' to it's name - If you enter N(o), the batch file will skip to the encryption section. The Python script will encrypt the file now which may take some time depending on the file size. Once that's done, the originally inserted USM file is encrypted and can be used with Sonic Superstars.
