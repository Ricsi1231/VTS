25/11/25 22:57:12

Version:  V9.00P/03/None
Build ID: V9.0055       1/31/2017

1A05B-2500-H552
1A05B-2500-H521
1A05B-2500-R796
1A05B-2500-R650
1A05B-2500-R641
1A05B-2500-FVRC
1A05B-2500-H721
Z

 ***At the beginning of Auto Update.***

Img.Backup Yes     * must have one ' ' then 'yes' or 'no'
! Next what devices should be backed up:
! Each line needs the word "BackupDevice", then space then 
! the device name with ":"
BackupDevice FR:
BackupDevice FRA:
!BackupDevice RD:
!BackupDevice FR1:
! Next is whether saving the backup (all and image) after 
! auto update or not. Select 'YES' or 'NO' after 
! "AfterBackup" and one space. YES: save, NO: not save.
! When MC: does not have enough capacity, backup is not
! saved even if "AfterBackup YES".
AfterBackup NO
!
! Restore I/O status,  must have one ' ' then 'yes' or 'no'
SetUpIOstat Yes

 ***At Controlled Start.***

F Number: F00000    
VERSION : HandlingTool         
$VERSION: V9.0055       1/31/2017
DATE:     25-NOV-25 22:59 

MEMORY USAGE::

MEMORY DETAIL (MAIN):
Pools        TOTAL     AVAILABLE      LARGEST
TPP          700.0KB     690.3KB     690.3KB
PERM        2040.0KB     932.3KB     932.1KB
SYSTEM          .0KB       0.0KB       0.0KB
SHADOW      6698.3KB    5828.1KB      32.0KB
PAGE      341758.8KB  275393.6KB  275393.6KB
TEMP      256939.2KB  239345.6KB  227012.7KB
FROM      258095.0KB  215202.0KB

HARDWARE
FROM     256MB
DRAM    1000MB
SRAM       2MB

MEMORY DETAIL (MAIN - TASKS):
TASK        TOTAL     AVAILABLE     LARGEST   REALLOC
   1      126.8KB        95.1KB      47.7KB      1
   2       62.8KB        45.8KB      45.8KB      0
   3       62.8KB        45.6KB      42.9KB      0
   4      146.8KB        53.6KB      47.8KB      1
  33       62.8KB        61.6KB      61.6KB      0
  34       62.8KB        29.0KB      29.0KB      0
  36      254.8KB       118.4KB     118.0KB      0
  37       62.8KB        61.5KB      61.5KB      0
  38      830.5KB        60.3KB      58.4KB     12
  39      190.8KB       156.3KB      49.2KB      2
  40       62.8KB        61.9KB      61.9KB      0
  41       62.8KB        61.8KB      61.8KB      0
  42      126.8KB        59.3KB      31.0KB      1
  47       62.8KB        61.9KB      61.9KB      0
  51       62.8KB        61.1KB      61.1KB      0
  52     1694.2KB       536.7KB      80.0KB     25
  71       62.8KB        61.7KB      54.7KB      0
  72       62.8KB        61.9KB      61.9KB      0
  73      126.8KB        54.4KB      30.9KB      1
  75       62.8KB        61.9KB      61.9KB      0
  76      126.8KB        68.3KB      68.1KB      0
  77       62.8KB        27.6KB      27.6KB      0
  78       62.8KB        61.8KB      61.8KB      0
  99       62.8KB        61.9KB      61.9KB      0
 101       62.8KB        59.6KB      59.5KB      0
 102       94.8KB        93.9KB      93.9KB      0
 103       94.8KB        93.9KB      93.9KB      0
 104       94.8KB        93.9KB      93.9KB      0
 105       94.8KB        93.9KB      93.9KB      0
 106       94.8KB        93.9KB      93.9KB      0
 107       94.8KB        93.9KB      93.9KB      0
 108       94.8KB        19.7KB      19.7KB      0
 109      158.8KB        55.6KB      44.6KB      1
 112     4110.8KB        54.3KB      31.9KB      3
 136       62.8KB        53.6KB      53.6KB      0
 150       62.8KB        52.1KB      52.1KB      0
 153       62.8KB        60.9KB      60.9KB      0
 159     1798.8KB      1101.8KB    1096.9KB      0
 166       62.8KB        28.9KB      28.9KB      0
 170     1054.5KB       672.5KB      95.6KB     13
 171       62.8KB        56.7KB      56.7KB      0
 174       62.8KB        61.3KB      61.3KB      0
 177       62.8KB        50.6KB      50.6KB      0
 182       62.8KB        51.4KB      51.4KB      0
 186       62.8KB        49.5KB      49.5KB      0
 187      254.8KB       113.3KB      31.0KB      3
 188       62.8KB        62.8KB      62.8KB      0
 189       62.8KB        62.8KB      62.8KB      0
 190       62.8KB        62.8KB      62.8KB      0
 191       62.8KB        62.8KB      62.8KB      0
 192       62.8KB        61.9KB      61.9KB      0
 193       62.8KB        62.8KB      62.8KB      0
 198       62.8KB        61.8KB      61.8KB      0
 199       62.8KB        62.8KB      62.8KB      0
 209       62.8KB        61.9KB      61.9KB      0
 214       62.8KB        61.9KB      61.9KB      0
 231       62.8KB        28.2KB      28.1KB      0
 232       62.8KB        61.9KB      61.9KB      0
 239       62.8KB        61.6KB      61.6KB      0
 240       62.8KB        60.8KB      60.8KB      0
 256       62.8KB        62.8KB      62.8KB      0
 257       62.8KB        62.8KB      62.8KB      0
 258       62.8KB        62.8KB      62.8KB      0
 259       62.8KB        62.8KB      62.8KB      0
 260       62.8KB        62.8KB      62.8KB      0
 261       62.8KB        62.8KB      62.8KB      0
 262       62.8KB        62.8KB      62.8KB      0
 263       62.8KB        62.8KB      62.8KB      0
 264       62.8KB        62.8KB      62.8KB      0
 265       62.8KB        62.8KB      62.8KB      0
 297       62.8KB        44.3KB      44.3KB      0
 298       62.8KB        61.4KB      61.4KB      0
 301       62.8KB        61.9KB      61.9KB      0
 302       62.8KB        61.9KB      61.9KB      0
 317       62.8KB        61.9KB      61.9KB      0
 322     1102.5KB      1064.4KB      80.0KB     16

860 memconfig skipped for virtual.


 ***At Cold Start.***

ERRALL.LS      Robot Name ROBOT 25-NOV-25 22:59:32  

1" 25-NOV-25 22:59:30 " SYST-042 DEADMAN defeated                         " " SERVO                         00110110" act"
2" 25-NOV-25 22:59:30 " R E S E T                                         " "                               00000000"    "
3" 25-NOV-25 22:59:26 " SYST-026 System normal power up                   " " WARN                          00000000"    "
4" 25-NOV-25 22:59:12 " OPTN-017 No UPDATES on this media                 " " WARN                          00000000"    "
5" 25-NOV-25 22:59:12 " SYST-290 Cycle power to use new DCS parameter     " " STOP.G                        00100110"    "
6" 25-NOV-25 22:59:12 " TPIF-218 MED:\00\TEMP\SENDSYSV.TP failed to load  " MEMO-006 Protection error occurred                " WARN                          00000000"    "
7" 25-NOV-25 22:59:12 " TPIF-218 MED:\00\TEMP\SENDEVNT.TP failed to load  " MEMO-006 Protection error occurred                " WARN                          00000000"    "
8" 25-NOV-25 22:59:12 " TPIF-218 MED:\00\TEMP\SENDDATA.TP failed to load  " MEMO-006 Protection error occurred                " WARN                          00000000"    "
9" 25-NOV-25 22:59:12 " TPIF-218 MED:\00\TEMP\REQMENU.TP failed to load   " MEMO-006 Protection error occurred                " WARN                          00000000"    "
10" 25-NOV-25 22:59:12 " TPIF-218 MED:\00\TEMP\GETDATA.TP failed to load   " MEMO-006 Protection error occurred                " WARN                          00000000"    "
11" 25-NOV-25 22:59:08 " SYST-040 Operation mode AUTO Selected             " " SERVO                         00110110"    "
12" 25-NOV-25 22:59:06 " VARS-005 $PGTRACEDT PC array length ignored       " VARS-023 Array len creation mismatch              " WARN                          00000000"    "
13" 25-NOV-25 22:59:06 " VARS-005 $PGTRACECTL PC array length ignored      " VARS-023 Array len creation mismatch              " WARN                          00000000"    "
14" 25-NOV-25 22:59:06 " VARS-005 $DB_RECORD PC array length ignored       " VARS-023 Array len creation mismatch              " WARN                          00000000"    "
15" 25-NOV-25 22:59:04 " VARS-005 $PGTRACEDT PC array length ignored       " VARS-023 Array len creation mismatch              " WARN                          00000000"    "
16" 25-NOV-25 22:59:04 " VARS-005 $PGTRACECTL PC array length ignored      " VARS-023 Array len creation mismatch              " WARN                          00000000"    "
17" 25-NOV-25 22:59:04 " VARS-005 $DB_RECORD PC array length ignored       " VARS-023 Array len creation mismatch              " WARN                          00000000"    "
18" 25-NOV-25 22:59:00 " OPTN-017 No UPDATES on this media                 " " WARN                          00000000"    "
19" 25-NOV-25 22:58:34 " OPTN-018 No CUSTO additions on this media         " " WARN                          00000000"    "
20" 25-NOV-25 22:58:34 " OPTN-018 No Language additions on this media      " " WARN                          00000000"    "

 ***At Cold Start.***

F Number: F00000    
VERSION : HandlingTool         
$VERSION: V9.0055       1/31/2017
DATE:     25-NOV-25 22:59 

MEMORY USAGE::

MEMORY DETAIL (MAIN):
Pools        TOTAL     AVAILABLE      LARGEST
TPP          700.0KB     690.3KB     690.3KB
PERM        2040.0KB     797.7KB     720.0KB
SYSTEM          .0KB       0.0KB       0.0KB
SHADOW      6698.3KB    5790.4KB      32.0KB
PAGE      341758.8KB  271493.8KB  271493.8KB
TEMP      256939.2KB  235963.6KB  216700.8KB
FROM      258095.0KB  215150.5KB

HARDWARE
FROM     256MB
DRAM    1000MB
SRAM       2MB

MEMORY DETAIL (MAIN - TASKS):
TASK        TOTAL     AVAILABLE     LARGEST   REALLOC
   1      126.8KB       107.0KB     107.0KB      0
   2       62.8KB        43.1KB      43.1KB      0
   3       62.8KB        35.1KB      35.1KB      0
   4      146.8KB       119.5KB     119.3KB      0
   5       62.8KB        50.4KB      50.4KB      0
   6       62.8KB        50.4KB      50.4KB      0
   7       62.8KB        50.4KB      50.4KB      0
  33       62.8KB        61.6KB      61.6KB      0
  34       62.8KB        29.0KB      29.0KB      0
  35      998.8KB       476.8KB     476.8KB      0
  36      318.8KB        47.4KB      46.7KB      0
  37       62.8KB        61.9KB      61.9KB      0
  38      894.8KB       148.5KB     148.5KB      0
  39      190.8KB       155.3KB      62.0KB      2
  40       62.8KB        61.9KB      61.9KB      0
  41       62.8KB        61.7KB      61.7KB      0
  42      126.8KB        26.3KB      26.2KB      0
  47      134.8KB       133.9KB     133.9KB      0
  51       62.8KB        61.0KB      61.0KB      0
  52     1246.4KB      1037.7KB      79.2KB     18
  54       62.8KB        49.6KB      49.6KB      0
  55       62.8KB        55.5KB      55.4KB      0
  63     1282.8KB        62.9KB      62.7KB      0
  71       62.8KB        61.8KB      61.7KB      0
  72     1598.8KB      1597.9KB    1597.9KB      0
  73      130.8KB         8.6KB       5.3KB      1
  74       62.8KB        61.2KB      61.2KB      0
  75       62.8KB        61.9KB      61.9KB      0
  76      126.8KB        68.4KB      68.4KB      0
  77       62.8KB        27.6KB      27.6KB      0
  78       62.8KB        61.8KB      61.8KB      0
  97       62.8KB        58.5KB      58.5KB      0
  99       62.8KB        61.9KB      61.9KB      0
 100       62.8KB        58.7KB      58.6KB      0
 101       62.8KB        54.2KB      54.2KB      0
 102       94.8KB        93.9KB      93.9KB      0
 103       94.8KB        93.9KB      93.9KB      0
 104       94.8KB        93.9KB      93.9KB      0
 105       94.8KB        93.9KB      93.9KB      0
 106       94.8KB        93.9KB      93.9KB      0
 107       94.8KB        93.9KB      93.9KB      0
 108       94.8KB        19.7KB      19.7KB      0
 109      566.8KB       468.4KB     468.4KB      0
 111       62.8KB        61.9KB      61.9KB      0
 112     4110.8KB        53.9KB      53.9KB      0
 113       62.8KB        61.9KB      61.9KB      0
 114       62.8KB        61.9KB      61.9KB      0
 115       62.8KB        61.8KB      61.8KB      0
 119       62.8KB        37.8KB      37.8KB      0
 125       62.8KB        61.9KB      61.9KB      0
 136       62.8KB        52.9KB      52.9KB      0
 150       62.8KB        52.1KB      52.1KB      0
 153       62.8KB        60.9KB      60.9KB      0
 159     1798.8KB      1101.1KB    1100.8KB      0
 166       62.8KB        28.9KB      28.9KB      0
 170      126.8KB        50.9KB      19.1KB      1
 171      346.8KB       340.7KB     340.7KB      0
 174       62.8KB        61.3KB      61.3KB      0
 177       62.8KB        50.6KB      50.6KB      0
 182      126.8KB       115.4KB     115.4KB      0
 184       62.8KB        61.5KB      61.5KB      0
 185       62.8KB        61.9KB      61.9KB      0
 186       62.8KB        49.5KB      49.5KB      0
 187      254.8KB       113.3KB      31.0KB      3
 188       62.8KB        62.8KB      62.8KB      0
 189       62.8KB        62.8KB      62.8KB      0
 190       62.8KB        62.8KB      62.8KB      0
 191       62.8KB        62.8KB      62.8KB      0
 192       62.8KB        61.9KB      61.9KB      0
 193       62.8KB        62.8KB      62.8KB      0
 198       62.8KB        61.8KB      61.8KB      0
 199       62.8KB        62.8KB      62.8KB      0
 207       62.8KB        59.9KB      59.9KB      0
 209       62.8KB        61.9KB      61.9KB      0
 211       62.8KB        61.7KB      61.7KB      0
 214       62.8KB        61.9KB      61.9KB      0
 217       62.8KB        55.3KB      55.3KB      0
 231       62.8KB        28.2KB      28.1KB      0
 232       62.8KB        61.9KB      61.9KB      0
 234       62.8KB        52.2KB      52.2KB      0
 239       62.8KB        61.6KB      61.6KB      0
 240       62.8KB        60.8KB      60.8KB      0
 256       62.8KB        62.8KB      62.8KB      0
 257       62.8KB        62.8KB      62.8KB      0
 258       62.8KB        62.8KB      62.8KB      0
 259       62.8KB        62.8KB      62.8KB      0
 260       62.8KB        62.8KB      62.8KB      0
 261       62.8KB        62.8KB      62.8KB      0
 262       62.8KB        62.8KB      62.8KB      0
 263       62.8KB        62.8KB      62.8KB      0
 264       62.8KB        62.8KB      62.8KB      0
 265       62.8KB        62.8KB      62.8KB      0
 297       62.8KB        44.3KB      44.3KB      0
 298       62.8KB        61.4KB      61.4KB      0
 301       62.8KB        61.9KB      61.9KB      0
 302       62.8KB        61.9KB      61.9KB      0
 317       62.8KB        61.9KB      61.9KB      0
 322      254.8KB       212.0KB      64.0KB      3

860 memconfig skipped for virtual.

** Update Complete 25-NOV-25 22:59 

25/11/25 22:59:52

Version:  V9.00P/03/None
Build ID: V9.0055       1/31/2017

1A05B-2500-H552
1A05B-2500-H521
1A05B-2500-R796
1A05B-2500-R650
1A05B-2500-R641
1A05B-2500-FVRC
1A05B-2500-H721
Z
