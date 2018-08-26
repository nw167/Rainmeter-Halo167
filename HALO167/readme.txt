Instructions here refer to the values that can be found in the config.inc file in the @Resources directory.
Most of these values will need to be changed for the skins to work, others are just preference.


;|---------------------------------------------|
;|                                             |
;|  CONTENTS                                   |
;|                                             |
;|---------------------------------------------|
;|                                             |
;| |- 1. HWINFO                                |
;| |- 2. FOLDER VIEWER                         |
;| |- 3. LAUNCHER ICONS                        |
;|                                             |
;|---------------------------------------------|


;|---------------------------------------------|
;|                                             |
;|   [1] HWINFO                                |
;|                                             |
;|---------------------------------------------|

    HWInfo is required for this to work. https://www.hwinfo.com/

    You will need update the HWiNFO IDs included in this skin to match the IDs for your system.  To do this:
    1 - ensure HWiNFO is running, with sensors and shared memory active
    2 - run the included "HWiNFOSharedMemoryViewer.exe" file (@Resources/Tools)
    3 - find the sensor reading you need (CPU Usage for example) and make note of the sensor id, sensor instance and entry id
    4 - edit the config.inc file in the @Resources folder to replace the provided IDs with the IDs for your system

    Min/Max values (eg "CPU_Freq_Min"/"CPU_Freq_Max") can be changed to better reflect your system and achieve the desired scale.


;|---------------------------------------------|
;|                                             |
;|   [2] FOLDER VIEWER                         |
;|                                             |
;|---------------------------------------------|

    Directory will need to be updated in the config file for the links to work


;|---------------------------------------------|
;|                                             |
;|   [3] LAUNCHER ICONS                        |
;|                                             |
;|---------------------------------------------|

    To create your own icon -
    1 - Copy one of the existing icon folders (LauncherIcons/Icons/???) and rename it.
    2 - Replace the image (img.png) with the one you want to use. Must be resized to 28x28px and use the same filename. Transparent background recommended.
    3 - Open Icon.ini, change the name and location.
    4 - Save and load skin.