//
//  Values are 32 bit values layed out as follows:
//
//   3 3 2 2 2 2 2 2 2 2 2 2 1 1 1 1 1 1 1 1 1 1
//   1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0
//  +---+-+-+-----------------------+-------------------------------+
//  |Sev|C|R|     Facility          |               Code            |
//  +---+-+-+-----------------------+-------------------------------+
//
//  where
//
//      Sev - is the severity code
//
//          00 - Success
//          01 - Informational
//          10 - Warning
//          11 - Error
//
//      C - is the Customer code flag
//
//      R - is a reserved bit
//
//      Facility - is the facility code
//
//      Code - is the facility's status code
//
//
// Define the facility codes
//


//
// Define the severity codes
//


//
// MessageId: CRLF_ID
//
// MessageText:
//
//  
//
#define CRLF_ID                          ((ULONG)0x00000000L)

//
// MessageId: DOUBLE_CRLF_ID
//
// MessageText:
//
//  
//  
//
#define DOUBLE_CRLF_ID                   ((ULONG)0x00000001L)

//
// MessageId: PRODUCTNAME_ID
//
// MessageText:
//
//  Microsoft(R) Exchange Server Database Utilities
//
#define PRODUCTNAME_ID                   ((ULONG)0x00000002L)

//
// MessageId: NTPRODUCTNAME_ID
//
// MessageText:
//
//  Microsoft(R) Windows(R) Database Utilities
//
#define NTPRODUCTNAME_ID                 ((ULONG)0x00000003L)

//
// MessageId: VERSION_ID
//
// MessageText:
//
//  Version %1
//
#define VERSION_ID                       ((ULONG)0x00000004L)

//
// MessageId: COPYRIGHT_ID
//
// MessageText:
//
//  Copyright (C) Microsoft Corporation. All Rights Reserved.
//  
//
#define COPYRIGHT_ID                     ((ULONG)0x00000005L)

//
// MessageId: STATUSBAR_PADDING_ID
//
// MessageText:
//
//            %0
//
#define STATUSBAR_PADDING_ID             ((ULONG)0x00000006L)

//
// MessageId: STATUSBAR_TITLE_CONVERT_ID
//
// MessageText:
//
//           Conversion Status  ( %%%% complete )
//  
//
#define STATUSBAR_TITLE_CONVERT_ID       ((ULONG)0x00000007L)

//
// MessageId: STATUSBAR_AXIS_HEADINGS_ID
//
// MessageText:
//
//  0    10   20   30   40   50   60   70   80   90   100
//
#define STATUSBAR_AXIS_HEADINGS_ID       ((ULONG)0x00000008L)

//
// MessageId: STATUSBAR_AXIS_ID
//
// MessageText:
//
//  |----|----|----|----|----|----|----|----|----|----|
//
#define STATUSBAR_AXIS_ID                ((ULONG)0x00000009L)

//
// MessageId: STATUSBAR_SINGLE_INCREMENT_ID
//
// MessageText:
//
//  %.%0
//
#define STATUSBAR_SINGLE_INCREMENT_ID    ((ULONG)0x0000000AL)

