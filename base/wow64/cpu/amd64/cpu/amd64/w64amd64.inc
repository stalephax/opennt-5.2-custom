
;
;  Wow64 CPU
;


EaxCpu equ 000B4H
EbxCpu equ 000A8H
EcxCpu equ 000B0H
EdxCpu equ 000ACH
EsiCpu equ 000A4H
EdiCpu equ 000A0H
EbpCpu equ 000B8H
EipCpu equ 000BCH
EspCpu equ 000C8H
SegCsCpu equ 000C0H
SegSsCpu equ 000CCH
EFlagsCpu equ 000C4H
ExReg equ 000D0H
TrFlags equ 002D0H
TR_RESTORE_VOLATILE equ 00001H

;
;  FXSAVE_FORMAT
;


XmmReg0 equ 000A0H
