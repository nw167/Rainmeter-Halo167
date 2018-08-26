;|---------------------------------------------|
;|                                             |
;| |- META                                     |
;|                                             |
;|---------------------------------------------|

    [Rainmeter]
        Update=5000
        BackgroundMode=2
        SolidColor=0,0,0,1

	[Metadata]
		Name=Launcher Icon
		Author=nw167
		Version=1.0
		License=GNU
		Information=Customizable launcher icon

    @include=#@#config.inc

;|---------------------------------------------|
;|                                             |
;| |- INFERFACE                                |
;|                                             |
;|---------------------------------------------|

    [Background]
        Meter=Image
        ImageName=#@#Images/LauncherIcon/IconBG.png
        LeftMouseUpAction=#App_Location#
        MouseOverAction=[!SetOption RoundLine LineColor 255,255,255,5] [!SetOption Label FontColor 255,255,255,200] [!Update] [!Redraw]
        MouseLeaveAction=[!SetOption RoundLine LineColor 255,255,255,0] [!SetOption Label FontColor 255,255,255,0] [!Update] [!Redraw]

    [RoundLine]
        Meter=Roundline
        X=34
        Y=34
        StartAngle=(Rad(270))
        RotationAngle=(Rad(360))
        LineLength=35
        LineStart=25
        LineColor=0,0,0,0
        Solid=1
        AntiAlias=1

    [Icon]
        Meter=Image
        ImageName=img.png
        X=20
        Y=21

    [Label]
        Meter=String
        X=34
        Y=25R
        H=30
        Text=#App_Name#
        FontFamily=#FontName#
        FontColor=255,255,255,0
        FontWeight=700
        FontSize=7
        StringAlign=Center
