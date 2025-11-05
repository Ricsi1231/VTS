PROCESSOR 16f84
#include "p16f84.inc"
__CONFIG _XT_OSC & _WDT_OFF & _PWRTE_ON & _CP_OFF

cblock 0x0C
	delayL
	delayM
	delayH
endc

org 0x00
	goto Main
org 0x04
	goto Main

Main
	bsf STATUS, RP0
	clrf TRISB
	bcf STATUS, RP0
Loop1
	clrf PORTB
	call Delay600
	Loop2
		incf PORTB
		call Delay600
		movlw d'16'
		subwf PORTB, W
		btfss STATUS, Z
		goto Loop2
	goto Loop1

Delay600
	clrf delayL
	clrf delayM
	movlw d'3'
	movwf delayH
	Label
		decfsz delayL
		goto Label
		decfsz delayM
		goto Label
		decfsz delayH
		goto Label
	return
end