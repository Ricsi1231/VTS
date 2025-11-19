PROCESSOR 16f84
#include "p16f84.inc"
__CONFIG _XT_OSC & _WDT_OFF & _PWRTE_ON & _CP_OFF

cblock 0x0C
	DelayL
	DelayM
	DelayH
	Pointer
	DataTable
endc

org 0h
	bsf STATUS,RP0
	clrf TRISA
	clrf TRISB
	bcf STATUS,RP0

Loop1
 	clrf Pointer
Loop2
 	 movf Pointer,W
	 call DataTable
	 movwf PORTB
	 call Delay600
	 incf Pointer
	 movlw d'10'
	 subwf Pointer,W
	 btfss STATUS,Z
	 goto Loop2
	 goto Loop1

Delay600 
	 clrf DelayL
	 clrf DelayM
	 movlw 3h
	 movwf DelayH
	Wait1
	 decfsz DelayL
	 goto Wait1
	 decfsz DelayM
	 goto Wait1
	 decfsz DelayH
	 goto Wait1
	 return
	 end

DataTable 
 addwf PCL
 retlw b'00111111‘       ; 0
 retlw b'00000110'       ; 1
 retlw b'01011011'       ; 2    
 retlw b'01001111'       ; 3   
 retlw b'01100110'       ; 4   
 retlw b'01101101'       ; 5   
 retlw b'01111101'       ; 6   
 retlw b'00000111'       ; 7   
 retlw b'01111111'       ; 8   
 retlw b'01101111'       ; 9   
end