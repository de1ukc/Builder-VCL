object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 504
  ClientWidth = 796
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Tasks: TLabel
    Left = 8
    Top = 19
    Width = 27
    Height = 13
    Caption = 'Tasks'
  end
  object Name: TLabel
    Left = 8
    Top = 59
    Width = 27
    Height = 13
    Caption = 'Name'
  end
  object Label1: TLabel
    Left = 8
    Top = 96
    Width = 34
    Height = 13
    Caption = 'Project'
  end
  object Label2: TLabel
    Left = 8
    Top = 133
    Width = 22
    Height = 13
    Caption = 'Task'
  end
  object Label3: TLabel
    Left = 8
    Top = 171
    Width = 24
    Height = 13
    Caption = 'Start'
  end
  object Label4: TLabel
    Left = 8
    Top = 206
    Width = 27
    Height = 13
    Caption = 'Finish'
  end
  object Label5: TLabel
    Left = 123
    Top = 272
    Width = 62
    Height = 13
    Caption = 'Working time'
  end
  object Label6: TLabel
    Left = 8
    Top = 310
    Width = 24
    Height = 13
    Caption = 'From'
  end
  object Label7: TLabel
    Left = 168
    Top = 312
    Width = 12
    Height = 13
    Caption = 'To'
  end
  object Label8: TLabel
    Left = 75
    Top = 360
    Width = 175
    Height = 13
    Caption = 'Whose data do you want  to delete?'
  end
  object Memo1: TMemo
    Left = 312
    Top = 16
    Width = 193
    Height = 286
    TabOrder = 0
  end
  object Button1: TButton
    Left = 336
    Top = 334
    Width = 75
    Height = 25
    Caption = 'Open'
    TabOrder = 1
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 417
    Top = 334
    Width = 75
    Height = 25
    Caption = 'Save'
    TabOrder = 2
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 498
    Top = 334
    Width = 75
    Height = 25
    Caption = 'Delete'
    TabOrder = 3
    OnClick = Button3Click
  end
  object ComboBox1: TComboBox
    Left = 88
    Top = 16
    Width = 145
    Height = 21
    TabOrder = 4
  end
  object Edit1: TEdit
    Left = 88
    Top = 56
    Width = 145
    Height = 21
    TabOrder = 5
  end
  object Edit2: TEdit
    Left = 88
    Top = 93
    Width = 145
    Height = 21
    TabOrder = 6
  end
  object Edit3: TEdit
    Left = 88
    Top = 130
    Width = 145
    Height = 21
    TabOrder = 7
  end
  object Edit4: TEdit
    Left = 88
    Top = 168
    Width = 145
    Height = 21
    TabOrder = 8
  end
  object Edit5: TEdit
    Left = 88
    Top = 203
    Width = 145
    Height = 21
    TabOrder = 9
  end
  object Edit6: TEdit
    Left = 48
    Top = 307
    Width = 81
    Height = 21
    TabOrder = 10
  end
  object Edit7: TEdit
    Left = 200
    Top = 307
    Width = 81
    Height = 21
    TabOrder = 11
  end
  object Button4: TButton
    Left = 579
    Top = 334
    Width = 75
    Height = 25
    Caption = 'Add'
    TabOrder = 12
    OnClick = Button4Click
  end
  object Edit8: TEdit
    Left = 104
    Top = 387
    Width = 121
    Height = 21
    TabOrder = 13
  end
  object Memo2: TMemo
    Left = 520
    Top = 16
    Width = 185
    Height = 286
    TabOrder = 14
  end
  object FileOpenDialog1: TFileOpenDialog
    FavoriteLinks = <>
    FileTypes = <>
    Options = []
    Left = 616
    Top = 432
  end
  object FileSaveDialog1: TFileSaveDialog
    FavoriteLinks = <>
    FileTypes = <>
    Options = []
    Left = 704
    Top = 432
  end
end
