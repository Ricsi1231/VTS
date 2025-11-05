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
	movlw b'00000000'
	movwf TRISB
	bcf STATUS, RP0
Loop
	bsf PORTB, 5
	call Delay600
	bcf PORTB, 5
	call Delay600
	goto Loop

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