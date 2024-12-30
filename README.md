# lsrd.dll-replacement
Stub DLL that implements a single function to get the 1999 Halo toolbeta.exe to run

## Important Notes
This is a visual studio project to generate a DLL with an exported function of ordinal "101".  
I did not reverse engineer the tool executable to see what the actual use of this exported function is.  
My best guess is that it's from an old Autodesk or 3DS Max tool called "lightscape", and is used for rendering lightmaps.  
So I guess don't try to use the lightmap command incase it breaks? /shrug

## How do I use this?
1. Download the latest release from the [Releases Page.](https://github.com/Kleadron/lsrd.dll-replacement/releases)
2. Drop the `LSRD.DLL` file into the same location as `toolbeta.exe`
3. Run `toolbeta.exe` in command prompt. If it displays all commands, you've done this correctly.
![image](https://github.com/user-attachments/assets/3649e505-bede-4b40-8bb2-c95ea117223f)

