;|---------------------------------------------|
;|                                             |
;| |- META                                     |
;|                                             |
;|---------------------------------------------|

    [Rainmeter]
        LeftMouseUpAction=["#DriveLetter#\"]

	[Metadata]
		Name=Drive Capacity Panel
		Author=nw167
		Version=1.0
		License=GNU
		Information=Drive panel to display usage/capacity

    @include=#@#config.inc

;|---------------------------------------------|
;|                                             |
;| |- MEASURES                                 |
;|                                             |
;|---------------------------------------------|

  ;| DISK USEAGE                          ---|

    [MeasureTotalDisk]
        Measure=FreeDiskSpace
        Drive=#DriveLetter#
        Total=1
        UpdateDivider=120

    [MeasureUsedDisk]
        Measure=FreeDiskSpace
        Drive=#DriveLetter#
        InvertMeasure=1
        UpdateDivider=120

    [MeasureDiskPercentage]
        Measure=Calc
        Formula=((MeasureUsedDisk/MeasureTotalDisk)*100)

;|---------------------------------------------|
;|                                             |
;| |- INTERFACE                                |
;|                                             |
;|---------------------------------------------|

  ;| DRIVE LABEL/NAME                     ---|

    [DiskLetter]
        Meter=String
        X=25
        Y=28
        Text=#DriveLetter#
        FontFace=#FontName#
        FontSize=11
        FontColor=255,255,255,200
        FontWeight=700
        AntiAlias=1

    [DiskName]
        Meter=String
        X=60
        Y=28
        Text=#DriveName#
        FontFace=#FontName#
        FontSize=11
        FontColor=255,255,255,200
        FontWeight=700
        AntiAlias=1

  ;| DRIVE DIAL                           ---|

    [CircleMeterBG]
        Meter=Image
        ImageName=#@#Images/Drives/DriveMeterCircle.png
        X=310
        Y=13

    [CircleMeter_Used]
        Meter=Roundline
        MeasureName=MeasureUsedDisk
        X=313
        Y=16
        H=45
        W=45
        StartAngle=(Rad(270))
        RotationAngle=(Rad(360))
        LineLength=23
        LineStart=21
        LineColor=#Theme_Color_Primary#
        Solid=1
        AntiAlias=1

    [DiskPercentageLabel]
        Meter=String
        MeasureName=MeasureDiskPercentage
        StringAlign=Center
        FontFace=#FontName#
        FontColor=#Theme_Color_Primary#
        FontSize=6
        StringAlign=Center
        X=335
        Y=32
        Text=%1%
        AntiAlias=1
        NumOfDecimals=0
        AutoScale=1

  ;| LABELS                               ---|

    [DiskLabel_Used]
        Meter=String
        MeasureName=MeasureUsedDisk
        StringAlign=Right
        FontFace=#FontName#
        FontColor=255,255,255,200
        FontSize=7
        X=280
        Y=25
        Text="USED: %1B"
        AntiAlias=1
        NumOfDecimals=0
        AutoScale=1

    [DiskLabel_Total]
        Meter=String
        MeasureName=MeasureTotalDisk
        StringAlign=Right
        FontFace=#FontName#
        FontColor=255,255,255,200
        FontSize=7
        X=280
        Y=40
        Text="TOTAL: %1B"
        AntiAlias=1
        NumOfDecimals=0
        AutoScale=1