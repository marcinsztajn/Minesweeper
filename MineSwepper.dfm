object Form1: TForm1
  Left = 0
  Top = 0
  AutoSize = True
  Caption = 'MineSwepper'
  ClientHeight = 337
  ClientWidth = 324
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Image1: TImage
    Left = 1
    Top = 40
    Width = 323
    Height = 297
    AutoSize = True
    OnMouseDown = Image1MouseDown
    OnMouseMove = Image1MouseMove
    OnMouseUp = Image1MouseUp
  end
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 324
    Height = 42
    TabOrder = 0
    object Label1: TLabel
      Left = 1
      Top = 1
      Width = 30
      Height = 40
      Align = alLeft
      Caption = '000'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -19
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      ExplicitHeight = 23
    end
    object Label2: TLabel
      Left = 293
      Top = 1
      Width = 30
      Height = 40
      Align = alRight
      Caption = '000'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -19
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      ExplicitHeight = 23
    end
    object Image2: TImage
      Left = 144
      Top = 1
      Width = 40
      Height = 40
      Center = True
      OnClick = Image2Click
    end
  end
  object MediaPlayer1: TMediaPlayer
    Left = 40
    Top = 64
    Width = 253
    Height = 33
    ColoredButtons = [btPlay]
    DoubleBuffered = True
    Visible = False
    ParentDoubleBuffered = False
    TabOrder = 1
  end
  object Timer1: TTimer
    Enabled = False
    OnTimer = Timer1Timer
    Left = 272
    Top = 288
  end
  object MainMenu1: TMainMenu
    Left = 272
    Top = 240
    object Game1: TMenuItem
      Caption = '&Game'
      object New1: TMenuItem
        Caption = 'New'
        ShortCut = 113
        OnClick = New1Click
      end
      object N1: TMenuItem
        Caption = '-'
      end
      object Beginner1: TMenuItem
        AutoCheck = True
        Caption = 'Beginner'
        Checked = True
        GroupIndex = 1
        OnClick = Beginner1Click
      end
      object Intermediate1: TMenuItem
        AutoCheck = True
        Caption = 'Intermediate'
        GroupIndex = 1
        OnClick = Intermediate1Click
      end
      object Expert1: TMenuItem
        AutoCheck = True
        Caption = 'Expert'
        GroupIndex = 1
        OnClick = Expert1Click
      end
      object Custom1: TMenuItem
        AutoCheck = True
        Caption = 'Custom...'
        GroupIndex = 1
        OnClick = Custom1Click
      end
      object N2: TMenuItem
        Caption = '-'
        GroupIndex = 1
      end
      object Marks1: TMenuItem
        AutoCheck = True
        Caption = 'Marks (?)'
        GroupIndex = 1
      end
      object Color1: TMenuItem
        AutoCheck = True
        Caption = 'Color'
        GroupIndex = 1
        OnClick = Color1Click
      end
      object Sound1: TMenuItem
        AutoCheck = True
        Caption = 'Sound'
        GroupIndex = 1
      end
      object N3: TMenuItem
        Caption = '-'
        GroupIndex = 1
      end
      object Besttimes1: TMenuItem
        Caption = 'Best times'
        GroupIndex = 1
        OnClick = Besttimes1Click
      end
      object N4: TMenuItem
        Caption = '-'
        GroupIndex = 1
      end
      object Exit1: TMenuItem
        Caption = 'Exit'
        GroupIndex = 1
        OnClick = Exit1Click
      end
    end
    object Help1: TMenuItem
      Caption = '&Help'
      object Contents1: TMenuItem
        Caption = 'Contents'
        ShortCut = 113
      end
      object Searchforhelpon1: TMenuItem
        Caption = 'Search for help on...'
      end
      object Usinghelp1: TMenuItem
        Caption = 'Using help'
      end
      object N5: TMenuItem
        Caption = '-'
      end
      object Aboutmineswepper1: TMenuItem
        Caption = 'About Mineswepper...'
        OnClick = Aboutmineswepper1Click
      end
    end
  end
end
