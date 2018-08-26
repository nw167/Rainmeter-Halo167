[Rainmeter]

[Variables]

;|---------------------------------------------|
;|                                             |
;|  CONTENTS                                   |
;|                                             |
;|---------------------------------------------|
;|                                             |
;| |- 1 GENERAL SETTINGS                       |
;| |- - 1.1 THEME COLOUR                       |
;| |- - 1.2 TYPOGRAPHY                         |
;|                                             |
;| |- 2 SKIN: HWINFO                           |
;| |- - 2.1 CPU PANEL                          |
;| |- - 2.2 GPU PANEL                          |
;| |- - 2.3 RAM PANEL                          |
;|                                             |
;| |- 3 SKIN: FOLDER VIEWER                    |
;| |- - 3.1 USER DIRECTORY                     |
;|                                             |
;|---------------------------------------------|


;|---------------------------------------------|
;|                                             |
;|   [1] GENERAL SETTINGS                      |
;|                                             |
;|---------------------------------------------|

  ;| [1.1] PRIMARY THEME ACCENT COLOUR     ---|

     Theme_Color_Primary=25,222,218

  ;| [1.2] TYPOGRAPHY                           ---|
  
     FontName=Raleway Light


;|---------------------------------------------|
;|                                             |
;|   [2] SKIN: HWINFO                          |
;|                                             |
;|---------------------------------------------|

  ;| [2.1] CPU PANEL                      ---|
  ;| Use your own values - check readme   ---|

    ;| CPU Name                           ---|
       CPU_Panel_Label=CPU

    ;| CPU Load                           ---|
       CPU_Load_Sensor_ID=0xf0000300
       CPU_Load_Sensor_Instance=0x0
       CPU_Load_Entry_ID=0x700000d
       CPU_Load_Min=0
       CPU_Load_Max=100

    ;| CPU Frequency                      ---|
       CPU_Freq_Sensor_ID=0xf0000300
       CPU_Freq_Sensor_Instance=0x0
       CPU_Freq_Entry_ID=0x6000000
       CPU_Freq_Min=2.5
       CPU_Freq_Max=4.5

    ;| CPU Temperature                    ---|
       CPU_Temp_Sensor_ID=0xf0000501
       CPU_Temp_Sensor_Instance=0x0
       CPU_Temp_Entry_ID=0x1000000
       CPU_Temp_Min=30
       CPU_Temp_Max=90
    
  ;| [2.2] GPU PANEL                      ---|
  ;| Use your own values - check readme   ---|

    ;| GPU Name                           ---|
       GPU_Panel_Label=GPU

	;| GPU Load                           ---|
       GPU_Load_Sensor_ID=0xe0002000
	   GPU_Load_Sensor_Instance=0x0
	   GPU_Load_Entry_ID=0x7000000
       GPU_Load_Min=0
       GPU_Load_Max=100
	
    ;| GPU Frequency                      ---|
       GPU_Freq_Sensor_ID=0xe0002000
	   GPU_Freq_Sensor_Instance=0x0
	   GPU_Freq_Entry_ID=0x6000000
       GPU_Freq_Min=0
       GPU_Freq_Max=2.3
	
    ;| GPU Memory                         ---|
       GPU_Mem_Sensor_ID=0xe0002000
	   GPU_Mem_Sensor_Instance=0x0
	   GPU_Mem_Entry_ID=0x7000008
       GPU_Mem_Min=0
       GPU_Mem_Max=100
	
    ;| GPU Temperature                    ---|
       GPU_Temp_Sensor_ID=0xe0002000
	   GPU_Temp_Sensor_Instance=0x0
	   GPU_Temp_Entry_ID=0x1000003
       GPU_Temp_Min=30
       GPU_Temp_Max=90

  ;| [2.3] RAM PANEL                      ---|
  ;| Use your own values - check readme   ---|

    ;| RAM Name                           ---|
       RAM_Panel_Label=RAM

	;| RAM Used                           ---|
       RAM_Used_Sensor_ID=0xf0000301
	   RAM_Used_Sensor_Instance=0x0
	   RAM_Used_Entry_ID=0x8000003
       RAM_Used_Min=0
       RAM_Used_Max=8


;|---------------------------------------------|
;|                                             |
;|   [3] SKIN: FOLDER VIEWER                   |
;|                                             |
;|---------------------------------------------|

  ;| [3.1] USER DIRECTORY                 ---|
     UserDirectory=C:\Users\YourName