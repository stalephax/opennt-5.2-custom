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
// MessageId: PLAIN_TEXT_ID
//
// MessageText:
//
//  %1 (%2) %3%4
//
#define PLAIN_TEXT_ID                    ((MessageId)0x00000000L)

///////////////////////////////////////////////////////////
//Categories messages
///////////////////////////////////////////////////////////
//
// MessageId: GENERAL_CATEGORY
//
// MessageText:
//
//  General
//
#define GENERAL_CATEGORY                 ((MessageId)0x00000001L)

//
// MessageId: BUFFER_MANAGER_CATEGORY
//
// MessageText:
//
//  Database Page Cache
//
#define BUFFER_MANAGER_CATEGORY          ((MessageId)0x00000002L)

//
// MessageId: LOGGING_RECOVERY_CATEGORY
//
// MessageText:
//
//  Logging/Recovery
//
#define LOGGING_RECOVERY_CATEGORY        ((MessageId)0x00000003L)

//
// MessageId: SPACE_MANAGER_CATEGORY
//
// MessageText:
//
//  Space Management
//
#define SPACE_MANAGER_CATEGORY           ((MessageId)0x00000004L)

//
// MessageId: DATA_DEFINITION_CATEGORY
//
// MessageText:
//
//  Table/Column/Index Definition
//
#define DATA_DEFINITION_CATEGORY         ((MessageId)0x00000005L)

//
// MessageId: DATA_MANIPULATION_CATEGORY
//
// MessageText:
//
//  Record Manipulation
//
#define DATA_MANIPULATION_CATEGORY       ((MessageId)0x00000006L)

//
// MessageId: PERFORMANCE_CATEGORY
//
// MessageText:
//
//  Performance
//
#define PERFORMANCE_CATEGORY             ((MessageId)0x00000007L)

//
// MessageId: REPAIR_CATEGORY
//
// MessageText:
//
//  Database Repair
//
#define REPAIR_CATEGORY                  ((MessageId)0x00000008L)

//
// MessageId: CONVERSION_CATEGORY
//
// MessageText:
//
//  Database Conversion
//
#define CONVERSION_CATEGORY              ((MessageId)0x00000009L)

//
// MessageId: ONLINE_DEFRAG_CATEGORY
//
// MessageText:
//
//  Online Defragmentation
//
#define ONLINE_DEFRAG_CATEGORY           ((MessageId)0x0000000AL)

//
// MessageId: SYSTEM_PARAMETER_CATEGORY
//
// MessageText:
//
//  System Parameter Settings
//
#define SYSTEM_PARAMETER_CATEGORY        ((MessageId)0x0000000BL)

//
// MessageId: DATABASE_CORRUPTION_CATEGORY
//
// MessageText:
//
//  Database Corruption
//
#define DATABASE_CORRUPTION_CATEGORY     ((MessageId)0x0000000CL)

//
// MessageId: DATABASE_ZEROING_CATEGORY
//
// MessageText:
//
//  Database Zeroing
//
#define DATABASE_ZEROING_CATEGORY        ((MessageId)0x0000000DL)

//
// MessageId: TRANSACTION_MANAGER_CATEGORY
//
// MessageText:
//
//  Transaction Manager
//
#define TRANSACTION_MANAGER_CATEGORY     ((MessageId)0x0000000EL)

//
//localization not required for the following categories
//
//
// MessageId: RFS2_CATEGORY
//
// MessageText:
//
//  Resource Failure Simulation
//
#define RFS2_CATEGORY                    ((MessageId)0x0000000FL)

//
// MessageId: OS_SNAPSHOT_BACKUP
//
// MessageText:
//
//  ShadowCopy
//
#define OS_SNAPSHOT_BACKUP               ((MessageId)0x00000010L)

//
// MessageId: MAC_CATEGORY
//
// MessageText:
//
//  <EOL>
//
#define MAC_CATEGORY                     ((MessageId)0x00000011L)

///////////////////////////////////////////////////////////
//Non-Categories messages
///////////////////////////////////////////////////////////
//
// MessageId: START_ID
//
// MessageText:
//
//  %1 (%2) %3The database engine %4.%5.%6.%7 started.
//
#define START_ID                         ((MessageId)0x00000064L)

//
// MessageId: STOP_ID
//
// MessageText:
//
//  %1 (%2) %3The database engine stopped.
//
#define STOP_ID                          ((MessageId)0x00000065L)

//
// MessageId: START_INSTANCE_ID
//
// MessageText:
//
//  %1 (%2) %3The database engine started a new instance (%4).
//
#define START_INSTANCE_ID                ((MessageId)0x00000066L)

//
// MessageId: STOP_INSTANCE_ID
//
// MessageText:
//
//  %1 (%2) %3The database engine stopped the instance (%4).
//
#define STOP_INSTANCE_ID                 ((MessageId)0x00000067L)

//
// MessageId: STOP_INSTANCE_ID_WITH_ERROR
//
// MessageText:
//
//  %1 (%2) %3The database engine stopped the instance (%4) with error (%5).
//
#define STOP_INSTANCE_ID_WITH_ERROR      ((MessageId)0x00000068L)

//
// MessageId: START_FULL_BACKUP_ID
//
// MessageText:
//
//  %1 (%2) %3The database engine is starting a full backup.
//
#define START_FULL_BACKUP_ID             ((MessageId)0x000000C8L)

//
// MessageId: START_INCREMENTAL_BACKUP_ID
//
// MessageText:
//
//  %1 (%2) %3The database engine is starting an incremental backup.
//
#define START_INCREMENTAL_BACKUP_ID      ((MessageId)0x000000C9L)

//
// MessageId: STOP_BACKUP_ID
//
// MessageText:
//
//  %1 (%2) %3The database engine has completed the backup procedure successfully.
//
#define STOP_BACKUP_ID                   ((MessageId)0x000000CAL)

//
// MessageId: STOP_BACKUP_ERROR_ID
//
// MessageText:
//
//  %1 (%2) %3The database engine has stopped the backup with error %4.
//
#define STOP_BACKUP_ERROR_ID             ((MessageId)0x000000CBL)

//
// MessageId: START_RESTORE_ID
//
// MessageText:
//
//  %1 (%2) %3The database engine is restoring from backup. Restore will begin replaying logfiles in folder %4 and continue rolling forward logfiles in folder %5.
//
#define START_RESTORE_ID                 ((MessageId)0x000000CCL)

//
// MessageId: STOP_RESTORE_ID
//
// MessageText:
//
//  %1 (%2) %3The database engine has stopped restoring.
//
#define STOP_RESTORE_ID                  ((MessageId)0x000000CDL)

//
// MessageId: DATABASE_MISS_FULL_BACKUP_ERROR_ID
//
// MessageText:
//
//  %1 (%2) %3Database %4 cannot be incrementally backed-up. You must first perform a full backup before performing an incremental backup.
//
#define DATABASE_MISS_FULL_BACKUP_ERROR_ID ((MessageId)0x000000CEL)

//
// MessageId: STOP_BACKUP_ERROR_ABORT_BY_CALLER
//
// MessageText:
//
//  %1 (%2) %3The database engine has stopped backup because it was halted by the client or the connection with the client failed.
//
#define STOP_BACKUP_ERROR_ABORT_BY_CALLER ((MessageId)0x000000CFL)

//
// MessageId: START_FULL_BACKUP_INSTANCE_ID
//
// MessageText:
//
//  %1 (%2) %3A full backup is starting.
//
#define START_FULL_BACKUP_INSTANCE_ID    ((MessageId)0x000000D2L)

//
// MessageId: START_INCREMENTAL_BACKUP_INSTANCE_ID
//
// MessageText:
//
//  %1 (%2) %3An incremental backup is starting.
//
#define START_INCREMENTAL_BACKUP_INSTANCE_ID ((MessageId)0x000000D3L)

//
// MessageId: START_SNAPSHOT_BACKUP_INSTANCE_ID
//
// MessageText:
//
//  %1 (%2) %3A snapshot backup is starting.
//
#define START_SNAPSHOT_BACKUP_INSTANCE_ID ((MessageId)0x000000D4L)

//
// MessageId: STOP_BACKUP_INSTANCE_ID
//
// MessageText:
//
//  %1 (%2) %3The backup procedure has been successfully completed.
//
#define STOP_BACKUP_INSTANCE_ID          ((MessageId)0x000000D5L)

//
// MessageId: STOP_BACKUP_ERROR_INSTANCE_ID
//
// MessageText:
//
//  %1 (%2) %3The backup has stopped with error %4.
//
#define STOP_BACKUP_ERROR_INSTANCE_ID    ((MessageId)0x000000D6L)

//
// MessageId: STOP_BACKUP_ERROR_ABORT_BY_CALLER_INSTANCE_ID
//
// MessageText:
//
//  %1 (%2) %3The backup has been stopped because it was halted by the client or the connection with the client failed.
//
#define STOP_BACKUP_ERROR_ABORT_BY_CALLER_INSTANCE_ID ((MessageId)0x000000D7L)

//
// MessageId: DB_LOCATION_CHANGE_DETECTED
//
// MessageText:
//
//  %1 (%2) %3A database location change was detected from %4 to %5.
//
#define DB_LOCATION_CHANGE_DETECTED      ((MessageId)0x000000D8L)

//
// MessageId: BACKUP_ERROR_FOR_ONE_DATABASE
//
// MessageText:
//
//  %1 (%2) %3Error (%4) during backup of a database (file %5). The database will be unable to restore.
//
#define BACKUP_ERROR_FOR_ONE_DATABASE    ((MessageId)0x000000D9L)

//
// MessageId: BACKUP_ERROR_READ_FILE
//
// MessageText:
//
//  %1 (%2) %3Error (%4) during backup of file %5.
//
#define BACKUP_ERROR_READ_FILE           ((MessageId)0x000000DAL)

//
// MessageId: BACKUP_ERROR_INFO_UPDATE
//
// MessageText:
//
//  %1 (%2) %3Error (%4) occured during database headers update with the backup information.
//
#define BACKUP_ERROR_INFO_UPDATE         ((MessageId)0x000000DBL)

//
// MessageId: BACKUP_FILE_START
//
// MessageText:
//
//  %1 (%2) %3Beginning the backup of the file %4 (size %5).
//
#define BACKUP_FILE_START                ((MessageId)0x000000DCL)

//
// MessageId: BACKUP_FILE_STOP_OK
//
// MessageText:
//
//  %1 (%2) %3Ending the backup of the file %4.
//
#define BACKUP_FILE_STOP_OK              ((MessageId)0x000000DDL)

//
// MessageId: BACKUP_FILE_STOP_BEFORE_END
//
// MessageText:
//
//  %1 (%2) %3Ending the backup of the file %4. Not all data in the file has been read (read %5 bytes out of %6 bytes).
//
#define BACKUP_FILE_STOP_BEFORE_END      ((MessageId)0x000000DEL)

//
// MessageId: BACKUP_LOG_FILES_START
//
// MessageText:
//
//  %1 (%2) %3Starting the backup of log files (range %4 - %5). 
//
#define BACKUP_LOG_FILES_START           ((MessageId)0x000000DFL)

//
// MessageId: BACKUP_TRUNCATE_LOG_FILES
//
// MessageText:
//
//  %1 (%2) %3Deleting log files %4 to %5. 
//
#define BACKUP_TRUNCATE_LOG_FILES        ((MessageId)0x000000E0L)

//
// MessageId: BACKUP_NO_TRUNCATE_LOG_FILES
//
// MessageText:
//
//  %1 (%2) %3No log files can be truncated. 
//
#define BACKUP_NO_TRUNCATE_LOG_FILES     ((MessageId)0x000000E1L)

//
// MessageId: STOP_BACKUP_ERROR_ABORT_BY_SERVER_INSTANCE_ID
//
// MessageText:
//
//  %1 (%2) %3The backup has been stopped prematurely (possibly because the instance is terminating).
//
#define STOP_BACKUP_ERROR_ABORT_BY_SERVER_INSTANCE_ID ((MessageId)0x000000E2L)

//
// MessageId: START_REDO_ID
//
// MessageText:
//
//  %1 (%2) %3The database engine is initiating recovery steps.
//
#define START_REDO_ID                    ((MessageId)0x0000012CL)

//
// MessageId: STATUS_REDO_ID
//
// MessageText:
//
//  %1 (%2) %3The database engine has begun replaying logfile %4.
//
#define STATUS_REDO_ID                   ((MessageId)0x0000012DL)

//
// MessageId: STOP_REDO_ID
//
// MessageText:
//
//  %1 (%2) %3The database engine has successfully completed recovery steps.
//
#define STOP_REDO_ID                     ((MessageId)0x0000012EL)

//
// MessageId: ERROR_ID
//
// MessageText:
//
//  %1 (%2) %3Database engine error %4 occurred.
//
#define ERROR_ID                         ((MessageId)0x0000012FL)

//
// MessageId: S_O_READ_PAGE_TIME_ERROR_ID
//
// MessageText:
//
//  %1 (%2) %3Synchronous overlapped read page time error %4 occurred. If this error persists, please restore the database from a previous backup.
//
#define S_O_READ_PAGE_TIME_ERROR_ID      ((MessageId)0x00000190L)

//
// MessageId: S_O_WRITE_PAGE_ISSUE_ERROR_ID
//
// MessageText:
//
//  %1 (%2) %3Synchronous overlapped write page issue error %4 occurred.
//
#define S_O_WRITE_PAGE_ISSUE_ERROR_ID    ((MessageId)0x00000191L)

//
// MessageId: S_O_WRITE_PAGE_ERROR_ID
//
// MessageText:
//
//  %1 (%2) %3Synchronous overlapped write page error %4 occurred.
//
#define S_O_WRITE_PAGE_ERROR_ID          ((MessageId)0x00000192L)

//
// MessageId: S_O_PATCH_FILE_WRITE_PAGE_ERROR_ID
//
// MessageText:
//
//  %1 (%2) %3Synchronous overlapped patch file write page error %4 occurred.
//
#define S_O_PATCH_FILE_WRITE_PAGE_ERROR_ID ((MessageId)0x00000193L)

//
// MessageId: S_READ_PAGE_TIME_ERROR_ID
//
// MessageText:
//
//  %1 (%2) %3Synchronous read page checksum error %4 occurred. If this error persists, please restore the database from a previous backup.
//
#define S_READ_PAGE_TIME_ERROR_ID        ((MessageId)0x00000194L)

//
// MessageId: PRE_READ_PAGE_TIME_ERROR_ID
//
// MessageText:
//
//  %1 (%2) %3Pre-read page checksum error %4 occurred. If this error persists, please restore the database from a previous backup.
//
#define PRE_READ_PAGE_TIME_ERROR_ID      ((MessageId)0x00000195L)

//
// MessageId: A_DIRECT_READ_PAGE_CORRUPTTED_ERROR_ID
//
// MessageText:
//
//  %1 (%2) %3Direct read found corrupted page %4 with error %5. If this error persists, please restore the database from a previous backup.
//
#define A_DIRECT_READ_PAGE_CORRUPTTED_ERROR_ID ((MessageId)0x00000196L)

//
// MessageId: BFIO_TERM_ID
//
// MessageText:
//
//  %1 (%2) %3Buffer I/O thread termination error %4 occurred.
//
#define BFIO_TERM_ID                     ((MessageId)0x00000197L)

//
// MessageId: LOG_WRITE_ERROR_ID
//
// MessageText:
//
//  %1 (%2) %3Unable to write to logfile %4. Error %5.
//
#define LOG_WRITE_ERROR_ID               ((MessageId)0x00000198L)

//
// MessageId: LOG_HEADER_WRITE_ERROR_ID
//
// MessageText:
//
//  %1 (%2) %3Unable to write to the header of logfile %4. Error %5.
//
#define LOG_HEADER_WRITE_ERROR_ID        ((MessageId)0x00000199L)

//
// MessageId: LOG_READ_ERROR_ID
//
// MessageText:
//
//  %1 (%2) %3Unable to read logfile %4. Error %5.
//
#define LOG_READ_ERROR_ID                ((MessageId)0x0000019AL)

//
// MessageId: LOG_BAD_VERSION_ERROR_ID
//
// MessageText:
//
//  %1 (%2) %3The log version stamp of logfile %4 does not match the database engine version stamp. The logfiles may be the wrong version for the database.
//
#define LOG_BAD_VERSION_ERROR_ID         ((MessageId)0x0000019BL)

//
// MessageId: LOG_HEADER_READ_ERROR_ID
//
// MessageText:
//
//  %1 (%2) %3Unable to read the header of logfile %4. Error %5.
//
#define LOG_HEADER_READ_ERROR_ID         ((MessageId)0x0000019CL)

//
// MessageId: NEW_LOG_ERROR_ID
//
// MessageText:
//
//  %1 (%2) %3Unable to create a new logfile because the database cannot write to the log drive. The drive may be read-only, out of disk space, misconfigured, or corrupted. Error %4.
//
#define NEW_LOG_ERROR_ID                 ((MessageId)0x0000019DL)

//
// MessageId: LOG_FLUSH_WRITE_0_ERROR_ID
//
// MessageText:
//
//  %1 (%2) %3Unable to write to section 0 while flushing logfile %4. Error %5.
//
#define LOG_FLUSH_WRITE_0_ERROR_ID       ((MessageId)0x0000019EL)

//
// MessageId: LOG_FLUSH_WRITE_1_ERROR_ID
//
// MessageText:
//
//  %1 (%2) %3Unable to write to section 1 while flushing logfile %4. Error %5.
//
#define LOG_FLUSH_WRITE_1_ERROR_ID       ((MessageId)0x0000019FL)

//
// MessageId: LOG_FLUSH_WRITE_2_ERROR_ID
//
// MessageText:
//
//  %1 (%2) %3Unable to write to section 2 while flushing logfile %4. Error %5.
//
#define LOG_FLUSH_WRITE_2_ERROR_ID       ((MessageId)0x000001A0L)

//
// MessageId: LOG_FLUSH_WRITE_3_ERROR_ID
//
// MessageText:
//
//  %1 (%2) %3Unable to write to section 3 while flushing logfile %4. Error %5.
//
#define LOG_FLUSH_WRITE_3_ERROR_ID       ((MessageId)0x000001A1L)

//
// MessageId: LOG_FLUSH_OPEN_NEW_FILE_ERROR_ID
//
// MessageText:
//
//  %1 (%2) %3Error %5 occurred while opening a newly-created logfile %4.
//
#define LOG_FLUSH_OPEN_NEW_FILE_ERROR_ID ((MessageId)0x000001A2L)

//
// MessageId: RESTORE_DATABASE_READ_PAGE_ERROR_ID
//
// MessageText:
//
//  %1 (%2) %3Unable to read page %5 of database %4. Error %6.
//
#define RESTORE_DATABASE_READ_PAGE_ERROR_ID ((MessageId)0x000001A3L)

//
// MessageId: RESTORE_DATABASE_READ_HEADER_WARNING_ID
//
// MessageText:
//
//  %1 (%2) %3Unable to read the header of database %4. Error %5. The database may have been moved and therefore may no longer be located where the logs expect it to be.
//
#define RESTORE_DATABASE_READ_HEADER_WARNING_ID ((MessageId)0x000001A4L)

//
// MessageId: RESTORE_DATABASE_PARTIALLY_ERROR_ID
//
// MessageText:
//
//  %1 (%2) %3The database %4 created at %5 was not recovered. The recovered database was created at %5.
//
#define RESTORE_DATABASE_PARTIALLY_ERROR_ID ((MessageId)0x000001A5L)

//
// MessageId: RESTORE_DATABASE_MISSED_ERROR_ID
//
// MessageText:
//
//  %1 (%2) %3The database %4 created at %5 was not recovered.
//
#define RESTORE_DATABASE_MISSED_ERROR_ID ((MessageId)0x000001A6L)

//
// MessageId: BAD_PAGE
//
// MessageText:
//
//  %1 (%2) %3The database engine found a bad page.
//
#define BAD_PAGE                         ((MessageId)0x000001A7L)

//
// MessageId: DISK_FULL_ERROR_ID
//
// MessageText:
//
//  %1 (%2) %3The database disk is full. Deleting logfiles to recover disk space may make the database unstartable if the database file(s) are Inconsistent. Numbered logfiles may be moved, but not deleted, if and only if the database file(s) are Consistent. Do not move %4.
//
#define DISK_FULL_ERROR_ID               ((MessageId)0x000001A8L)

//
// MessageId: LOG_DATABASE_MISMATCH_ERROR_ID
//
// MessageText:
//
//  %1 (%2) %3The database signature does not match the log signature for database %4.
//
#define LOG_DATABASE_MISMATCH_ERROR_ID   ((MessageId)0x000001A9L)

//
// MessageId: FILE_NOT_FOUND_ERROR_ID
//
// MessageText:
//
//  %1 (%2) %3The database engine could not find the file or folder called %4.
//
#define FILE_NOT_FOUND_ERROR_ID          ((MessageId)0x000001AAL)

//
// MessageId: FILE_ACCESS_DENIED_ERROR_ID
//
// MessageText:
//
//  %1 (%2) %3The database engine could not access the file called %4.
//
#define FILE_ACCESS_DENIED_ERROR_ID      ((MessageId)0x000001ABL)

//
// MessageId: LOW_LOG_DISK_SPACE
//
// MessageText:
//
//  %1 (%2) %3The database engine is rejecting update operations due to low free disk space on the log disk.
//
#define LOW_LOG_DISK_SPACE               ((MessageId)0x000001ACL)

//
// MessageId: LOG_DISK_FULL
//
// MessageText:
//
//  %1 (%2) %3The database engine log disk is full. Deleting logfiles to recover disk space may make your database unstartable if the database file(s) are Inconsistent. Numbered logfiles may be moved, but not deleted, if and only if the database file(s) are Consistent. Do not move %4.
//
#define LOG_DISK_FULL                    ((MessageId)0x000001ADL)

//
// MessageId: DATABASE_PATCH_FILE_MISMATCH_ERROR_ID
//
// MessageText:
//
//  %1 (%2) %3Database %4 and its patch file do not match.
//
#define DATABASE_PATCH_FILE_MISMATCH_ERROR_ID ((MessageId)0x000001AEL)

//
// MessageId: STARTING_RESTORE_LOG_TOO_HIGH_ERROR_ID
//
// MessageText:
//
//  %1 (%2) %3The starting restored logfile %4 is too high. It should start from logfile %5.
//
#define STARTING_RESTORE_LOG_TOO_HIGH_ERROR_ID ((MessageId)0x000001AFL)

//
// MessageId: ENDING_RESTORE_LOG_TOO_LOW_ERROR_ID
//
// MessageText:
//
//  %1 (%2) %3The ending restored logfile %4 is too low. It should end at logfile %5.
//
#define ENDING_RESTORE_LOG_TOO_LOW_ERROR_ID ((MessageId)0x000001B0L)

//
// MessageId: RESTORE_LOG_FILE_HAS_BAD_SIGNATURE_ERROR_ID
//
// MessageText:
//
//  %1 (%2) %3The restored logfile %4 does not have the correct log signature.
//
#define RESTORE_LOG_FILE_HAS_BAD_SIGNATURE_ERROR_ID ((MessageId)0x000001B1L)

//
// MessageId: RESTORE_LOG_FILE_NOT_CONTIGUOUS_ERROR_ID
//
// MessageText:
//
//  %1 (%2) %3The timestamp for restored logfile %4 does not match the timestamp recorded in the logfile previous to it.
//
#define RESTORE_LOG_FILE_NOT_CONTIGUOUS_ERROR_ID ((MessageId)0x000001B2L)

//
// MessageId: RESTORE_LOG_FILE_MISSING_ERROR_ID
//
// MessageText:
//
//  %1 (%2) %3The restored logfile %4 is missing.
//
#define RESTORE_LOG_FILE_MISSING_ERROR_ID ((MessageId)0x000001B3L)

//
// MessageId: EXISTING_LOG_FILE_HAS_BAD_SIGNATURE_ERROR_ID
//
// MessageText:
//
//  %1 (%2) %3The signature of logfile %4 does not match other logfiles. Recovery cannot succeed unless all signatures match. Logfiles %5 to %6 have been deleted.
//
#define EXISTING_LOG_FILE_HAS_BAD_SIGNATURE_ERROR_ID ((MessageId)0x000001B4L)

//
// MessageId: EXISTING_LOG_FILE_NOT_CONTIGUOUS_ERROR_ID
//
// MessageText:
//
//  %1 (%2) %3There is a gap in sequence number between logfile %4 and the logfiles previous to it. Logfiles %5 to 0x%6 have been deleted so that recovery can complete.
//
#define EXISTING_LOG_FILE_NOT_CONTIGUOUS_ERROR_ID ((MessageId)0x000001B5L)

//
// MessageId: BAD_BACKUP_DATABASE_SIZE
//
// MessageText:
//
//  %1 (%2) %3The backup database %4 must be a multiple of 4 KB.
//
#define BAD_BACKUP_DATABASE_SIZE         ((MessageId)0x000001B6L)

//
// MessageId: SHADOW_PAGE_WRITE_FAIL_ID
//
// MessageText:
//
//  %1 (%2) %3Unable to write a shadowed header for file %4. Error %5.
//
#define SHADOW_PAGE_WRITE_FAIL_ID        ((MessageId)0x000001B7L)

//
// MessageId: LOG_FILE_CORRUPTED_ID
//
// MessageText:
//
//  %1 (%2) %3The logfile %4 is damaged and cannot be used. If this logfile is required for recovery, a good copy of the logfile will be needed for recovery to complete successfully.
//
#define LOG_FILE_CORRUPTED_ID            ((MessageId)0x000001B8L)

//
// MessageId: DB_FILE_SYS_ERROR_ID
//
// MessageText:
//
//  %1 (%2) %3File system error %5 during IO on database %4. If this error persists, the database file may be damaged and may need to be restored from a previous backup.
//
#define DB_FILE_SYS_ERROR_ID             ((MessageId)0x000001B9L)

//
// MessageId: DB_IO_SIZE_ERROR_ID
//
// MessageText:
//
//  %1 (%2) %3IO size mismatch on database %4, IO size %5 expected while returned size is %6.
//
#define DB_IO_SIZE_ERROR_ID              ((MessageId)0x000001BAL)

//
// MessageId: LOG_FILE_SYS_ERROR_ID
//
// MessageText:
//
//  %1 (%2) %3File system error %5 during IO on logfile %4.
//
#define LOG_FILE_SYS_ERROR_ID            ((MessageId)0x000001BBL)

//
// MessageId: LOG_IO_SIZE_ERROR_ID
//
// MessageText:
//
//  %1 (%2) %3IO size mismatch on logfile %4, IO size %5 expected while returned size is %6.
//
#define LOG_IO_SIZE_ERROR_ID             ((MessageId)0x000001BCL)

//
// MessageId: SPACE_MAX_DB_SIZE_REACHED_ID
//
// MessageText:
//
//  %1 (%2) %3The database %4 has reached its maximum size of %5 MB. If the database cannot be restarted, an offline defragmentation may be performed to reduce its size.
//
#define SPACE_MAX_DB_SIZE_REACHED_ID     ((MessageId)0x000001BDL)

//
// MessageId: REDO_END_ABRUPTLY_ERROR_ID
//
// MessageText:
//
//  %1 (%2) %3Database recovery stopped abruptly while redoing logfile %4 (%5,%6). The logs after this point may not be recognizable and will not be processed.
//
#define REDO_END_ABRUPTLY_ERROR_ID       ((MessageId)0x000001BEL)

//
// MessageId: BAD_PAGE_LINKS_ID
//
// MessageText:
//
//  %1 (%2) %3A bad page link (error %4) has been detected in a B-Tree (ObjectId: %5, PgnoRoot: %6) of database %7 (%8 => %9, %10).
//
#define BAD_PAGE_LINKS_ID                ((MessageId)0x000001BFL)

//
// MessageId: CORRUPT_LONG_VALUE_ID
//
// MessageText:
//
//  %1 (%2) %3Data inconsistency detected in table %4 of database %5 (%6,%7).
//
#define CORRUPT_LONG_VALUE_ID            ((MessageId)0x000001C0L)

//
// MessageId: CORRUPT_SLV_SPACE_ID
//
// MessageText:
//
//  %1 (%2) %3Streaming data allocation inconsistency detected (%4,%5).
//
#define CORRUPT_SLV_SPACE_ID             ((MessageId)0x000001C1L)

//
// MessageId: CURRENT_LOG_FILE_MISSING_ERROR_ID
//
// MessageText:
//
//  %1 (%2) %3A gap in the logfile sequence was detected. Logfile %4 is missing.  Other logfiles past this one may also be required. This message may appear again if the missing logfiles are not restored.
//
#define CURRENT_LOG_FILE_MISSING_ERROR_ID ((MessageId)0x000001C2L)

//
// MessageId: LOG_FLUSH_WRITE_4_ERROR_ID
//
// MessageText:
//
//  %1 (%2) %3Unable to write to section 4 while flushing logfile %4. Error %5.
//
#define LOG_FLUSH_WRITE_4_ERROR_ID       ((MessageId)0x000001C3L)

//
// MessageId: REDO_MISSING_LOW_LOG_ERROR_ID
//
// MessageText:
//
//  %1 (%2) %3Database %4 requires logfiles %5-%6 in order to recover successfully. Recovery could only locate logfiles starting at %7.
//
#define REDO_MISSING_LOW_LOG_ERROR_ID    ((MessageId)0x000001C4L)

//
// MessageId: REDO_MISSING_HIGH_LOG_ERROR_ID
//
// MessageText:
//
//  %1 (%2) %3Database %4 requires logfiles %5-%6 in order to recover successfully. Recovery could only locate logfiles up to %7.
//
#define REDO_MISSING_HIGH_LOG_ERROR_ID   ((MessageId)0x000001C5L)

//
// MessageId: RESTORE_DATABASE_FAIL_ID
//
// MessageText:
//
//  %1 (%2) %3Database recovery/restore failed with unexpected error %4.
//
#define RESTORE_DATABASE_FAIL_ID         ((MessageId)0x000001C6L)

//
// MessageId: LOG_OPEN_FILE_ERROR_ID
//
// MessageText:
//
//  %1 (%2) %3Error %5 occurred while opening logfile %4.
//
#define LOG_OPEN_FILE_ERROR_ID           ((MessageId)0x000001C7L)

//
// MessageId: PRIMARY_PAGE_READ_FAIL_ID
//
// MessageText:
//
//  %1 (%2) %3The primary header page of file %4 was damaged. The shadow header page was used instead.
//
#define PRIMARY_PAGE_READ_FAIL_ID        ((MessageId)0x000001C8L)

//
// MessageId: EXISTING_LOG_FILE_HAS_BAD_SIGNATURE_ERROR_ID_2
//
// MessageText:
//
//  %1 (%2) %3The log signature of the existing logfile %4 doesn't match the logfiles from the backup set. Logfile replay cannot succeed unless all signatures match.
//
#define EXISTING_LOG_FILE_HAS_BAD_SIGNATURE_ERROR_ID_2 ((MessageId)0x000001C9L)

//
// MessageId: EXISTING_LOG_FILE_NOT_CONTIGUOUS_ERROR_ID_2
//
// MessageText:
//
//  %1 (%2) %3The logfiles %4 and %5 are not in a valid sequence. Logfile replay cannot succeed if there are gaps in the sequence of available logfiles.
//
#define EXISTING_LOG_FILE_NOT_CONTIGUOUS_ERROR_ID_2 ((MessageId)0x000001CAL)

//
// MessageId: BACKUP_LOG_FILE_MISSING_ERROR_ID
//
// MessageText:
//
//  %1 (%2) %3The file %4 is missing and could not be backed-up.
//
#define BACKUP_LOG_FILE_MISSING_ERROR_ID ((MessageId)0x000001CBL)

//
// MessageId: LOG_TORN_WRITE_DURING_HARD_RESTORE_ID
//
// MessageText:
//
//  %1 (%2) %3A torn-write was detected while restoring from backup in logfile %4 of the backup set. The failing checksum record is located at position %5. This logfile has been damaged and is unusable.
//
#define LOG_TORN_WRITE_DURING_HARD_RESTORE_ID ((MessageId)0x000001CCL)

//
// MessageId: LOG_TORN_WRITE_DURING_HARD_RECOVERY_ID
//
// MessageText:
//
//  %1 (%2) %3A torn-write was detected during hard recovery in logfile %4. The failing checksum record is located at position %5. This logfile has been damaged and is unusable.
//
#define LOG_TORN_WRITE_DURING_HARD_RECOVERY_ID ((MessageId)0x000001CDL)

//
// MessageId: LOG_TORN_WRITE_DURING_SOFT_RECOVERY_ID
//
// MessageText:
//
//  %1 (%2) %3A torn-write was detected during soft recovery in logfile %4. The failing checksum record is located at position %5. The logfile damage will be repaired and recovery will continue to proceed.
//
#define LOG_TORN_WRITE_DURING_SOFT_RECOVERY_ID ((MessageId)0x000001CEL)

//
// MessageId: LOG_CORRUPTION_DURING_HARD_RESTORE_ID
//
// MessageText:
//
//  %1 (%2) %3Corruption was detected while restoring from backup logfile %4. The failing checksum record is located at position %5. Data not matching the log-file fill pattern first appeared in sector %6. This logfile has been damaged and is unusable.
//
#define LOG_CORRUPTION_DURING_HARD_RESTORE_ID ((MessageId)0x000001CFL)

//
// MessageId: LOG_CORRUPTION_DURING_HARD_RECOVERY_ID
//
// MessageText:
//
//  %1 (%2) %3Corruption was detected during hard recovery in logfile %4. The failing checksum record is located at position %5. Data not matching the log-file fill pattern first appeared in sector %6. This logfile has been damaged and is unusable.
//
#define LOG_CORRUPTION_DURING_HARD_RECOVERY_ID ((MessageId)0x000001D0L)

//
// MessageId: LOG_CORRUPTION_DURING_SOFT_RECOVERY_ID
//
// MessageText:
//
//  %1 (%2) %3Corruption was detected during soft recovery in logfile %4. The failing checksum record is located at position %5. Data not matching the log-file fill pattern first appeared in sector %6. This logfile has been damaged and is unusable.
//
#define LOG_CORRUPTION_DURING_SOFT_RECOVERY_ID ((MessageId)0x000001D1L)

//
// MessageId: LOG_USING_SHADOW_SECTOR_ID
//
// MessageText:
//
//  %1 (%2) %3An invalid checksum record in logfile %4 was patched using its shadow sector copy.
//
#define LOG_USING_SHADOW_SECTOR_ID       ((MessageId)0x000001D2L)

//
// MessageId: INDEX_CORRUPTED_ID
//
// MessageText:
//
//  %1 (%2) %3Index %4 of table %5 is corrupted (%6).
//
#define INDEX_CORRUPTED_ID               ((MessageId)0x000001D3L)

//
// MessageId: LOG_FLUSH_WRITE_5_ERROR_ID
//
// MessageText:
//
//  %1 (%2) %3Unable to write to section 5 while flushing logfile %4. Error %5.
//
#define LOG_FLUSH_WRITE_5_ERROR_ID       ((MessageId)0x000001D4L)

//
// MessageId: DB_PARTIALLY_ATTACHED_ID
//
// MessageText:
//
//  %1 (%2) %3Database %4 is partially attached. Attachment stage: %5. Error: %6.
//
#define DB_PARTIALLY_ATTACHED_ID         ((MessageId)0x000001D6L)

//
// MessageId: UNDO_FAILED_ID
//
// MessageText:
//
//  %1 (%2) %3Unable to rollback operation #%4 on database %5. Error: %6. All future database updates will be rejected.
//
#define UNDO_FAILED_ID                   ((MessageId)0x000001D7L)

//
// MessageId: SHADOW_PAGE_READ_FAIL_ID
//
// MessageText:
//
//  %1 (%2) %3The shadow header page of file %4 was damaged. The primary header page was used instead.
//
#define SHADOW_PAGE_READ_FAIL_ID         ((MessageId)0x000001D8L)

//
// MessageId: DB_PARTIALLY_DETACHED_ID
//
// MessageText:
//
//  %1 (%2) %3Database %4 was partially detached.  Error %5 encountered updating database headers.
//
#define DB_PARTIALLY_DETACHED_ID         ((MessageId)0x000001D9L)

//
// MessageId: DATABASE_PAGE_CHECKSUM_MISMATCH_ID
//
// MessageText:
//
//  %1 (%2) %3The database page read from the file "%4" at offset %5 for %6 bytes failed verification due to a page checksum mismatch.  The expected checksum was %8 and the actual checksum was %9.  The read operation will fail with error %7.  If this condition persists then please restore the database from a previous backup.  This problem is likely due to faulty hardware. Please contact your hardware vendor for further assistance diagnosing the problem.
//
#define DATABASE_PAGE_CHECKSUM_MISMATCH_ID ((MessageId)0x000001DAL)

//
// MessageId: DATABASE_PAGE_NUMBER_MISMATCH_ID
//
// MessageText:
//
//  %1 (%2) %3The database page read from the file "%4" at offset %5 for %6 bytes failed verification due to a page number mismatch.  The expected page number was %8 and the actual page number was %9.  The read operation will fail with error %7.  If this condition persists then please restore the database from a previous backup. This problem is likely due to faulty hardware. Please contact your hardware vendor for further assistance diagnosing the problem.
//
#define DATABASE_PAGE_NUMBER_MISMATCH_ID ((MessageId)0x000001DBL)

//
// MessageId: DATABASE_PAGE_DATA_MISSING_ID
//
// MessageText:
//
//  %1 (%2) %3The database page read from the file "%4" at offset %5 for %6 bytes failed verification because it contains no page data.  The read operation will fail with error %7.  If this condition persists then please restore the database from a previous backup. This problem is likely due to faulty hardware. Please contact your hardware vendor for further assistance diagnosing the problem.
//
#define DATABASE_PAGE_DATA_MISSING_ID    ((MessageId)0x000001DCL)

//
// MessageId: LOG_RANGE_CHECKSUM_MISMATCH_ID
//
// MessageText:
//
//  %1 (%2) %3The log range read from the file "%4" at offset %5 for %6 bytes failed verification due to a range checksum mismatch.  The read operation will fail with error %7.  If this condition persists then please restore the logfile from a previous backup.
//
#define LOG_RANGE_CHECKSUM_MISMATCH_ID   ((MessageId)0x000001DDL)

//
// MessageId: SLV_PAGE_CHECKSUM_MISMATCH_ID
//
// MessageText:
//
//  %1 (%2) %3The streaming page read from the file "%4" at offset %5 for %6 bytes failed verification due to a page checksum mismatch.  The expected checksum was %8 and the actual checksum was %9.  The read operation will fail with error %7.  If this condition persists then please restore the database from a previous backup.
//
#define SLV_PAGE_CHECKSUM_MISMATCH_ID    ((MessageId)0x000001DEL)

//
// MessageId: PATCH_PAGE_CHECKSUM_MISMATCH_ID
//
// MessageText:
//
//  %1 (%2) %3The patch page read from the file "%4" at offset %5 for %6 bytes failed verification due to a page checksum mismatch.  The expected checksum was %8 and the actual checksum was %9.  The read operation will fail with error %7.  If this condition persists then please restore using an earlier backup set.
//
#define PATCH_PAGE_CHECKSUM_MISMATCH_ID  ((MessageId)0x000001DFL)

//
// MessageId: PATCH_PAGE_NUMBER_MISMATCH_ID
//
// MessageText:
//
//  %1 (%2) %3The patch page read from the file "%4" at offset %5 for %6 bytes failed verification due to a page number mismatch.  The expected page number was %8 and the actual page number was %9.  The read operation will fail with error %7.  If this condition persists then please restore using an earlier backup set.
//
#define PATCH_PAGE_NUMBER_MISMATCH_ID    ((MessageId)0x000001E0L)

//
// MessageId: OSFILE_READ_ERROR_ID
//
// MessageText:
//
//  %1 (%2) %3An attempt to read from the file "%4" at offset %5 for %6 bytes failed after %10 seconds with system error %8: "%9".  The read operation will fail with error %7.  If this error persists then the file may be damaged and may need to be restored from a previous backup.
//
#define OSFILE_READ_ERROR_ID             ((MessageId)0x000001E1L)

//
// MessageId: OSFILE_WRITE_ERROR_ID
//
// MessageText:
//
//  %1 (%2) %3An attempt to write to the file "%4" at offset %5 for %6 bytes failed after %10 seconds with system error %8: "%9".  The write operation will fail with error %7.  If this error persists then the file may be damaged and may need to be restored from a previous backup.
//
#define OSFILE_WRITE_ERROR_ID            ((MessageId)0x000001E2L)

//
// MessageId: OSFS_CREATE_FOLDER_ERROR_ID
//
// MessageText:
//
//  %1 (%2) %3An attempt to create the folder "%4" failed with system error %6: "%7".  The create folder operation will fail with error %5.
//
#define OSFS_CREATE_FOLDER_ERROR_ID      ((MessageId)0x000001E3L)

//
// MessageId: OSFS_REMOVE_FOLDER_ERROR_ID
//
// MessageText:
//
//  %1 (%2) %3An attempt to remove the folder "%4" failed with system error %6: "%7".  The remove folder operation will fail with error %5.
//
#define OSFS_REMOVE_FOLDER_ERROR_ID      ((MessageId)0x000001E4L)

//
// MessageId: OSFS_DELETE_FILE_ERROR_ID
//
// MessageText:
//
//  %1 (%2) %3An attempt to delete the file "%4" failed with system error %6: "%7".  The delete file operation will fail with error %5.
//
#define OSFS_DELETE_FILE_ERROR_ID        ((MessageId)0x000001E5L)

//
// MessageId: OSFS_MOVE_FILE_ERROR_ID
//
// MessageText:
//
//  %1 (%2) %3An attempt to move the file "%4" to "%5" failed with system error %7: "%8".  The move file operation will fail with error %6.
//
#define OSFS_MOVE_FILE_ERROR_ID          ((MessageId)0x000001E6L)

//
// MessageId: OSFS_COPY_FILE_ERROR_ID
//
// MessageText:
//
//  %1 (%2) %3An attempt to copy the file "%4" to "%5" failed with system error %7: "%8".  The copy file operation will fail with error %6.
//
#define OSFS_COPY_FILE_ERROR_ID          ((MessageId)0x000001E7L)

//
// MessageId: OSFS_CREATE_FILE_ERROR_ID
//
// MessageText:
//
//  %1 (%2) %3An attempt to create the file "%4" failed with system error %6: "%7".  The create file operation will fail with error %5.
//
#define OSFS_CREATE_FILE_ERROR_ID        ((MessageId)0x000001E8L)

//
// MessageId: OSFS_OPEN_FILE_RO_ERROR_ID
//
// MessageText:
//
//  %1 (%2) %3An attempt to open the file "%4" for read only access failed with system error %6: "%7".  The open file operation will fail with error %5.
//
#define OSFS_OPEN_FILE_RO_ERROR_ID       ((MessageId)0x000001E9L)

//
// MessageId: OSFS_OPEN_FILE_RW_ERROR_ID
//
// MessageText:
//
//  %1 (%2) %3An attempt to open the file "%4" for read / write access failed with system error %6: "%7".  The open file operation will fail with error %5.
//
#define OSFS_OPEN_FILE_RW_ERROR_ID       ((MessageId)0x000001EAL)

//
// MessageId: OSFS_SECTOR_SIZE_ERROR_ID
//
// MessageText:
//
//  %1 (%2) %3An attempt to determine the minimum I/O block size for the volume "%4" containing "%5" failed with system error %7: "%8".  The operation will fail with error %6.
//
#define OSFS_SECTOR_SIZE_ERROR_ID        ((MessageId)0x000001EBL)

//
// MessageId: LOG_DOWN_ID
//
// MessageText:
//
//  %1 (%2) %3The logfile sequence in "%4" has been halted due to a fatal error.  No further updates are possible for the databases that use this logfile sequence.  Please correct the problem and restart or restore from backup.
//
#define LOG_DOWN_ID                      ((MessageId)0x000001ECL)

//
// MessageId: TRANSIENT_READ_ERROR_DETECTED_ID
//
// MessageText:
//
//  %1 (%2) %3A read operation on the file "%4" at offset %5 for %6 bytes failed %7 times over an interval of %8 seconds before finally succeeding.  More specific information on these failures was reported previously.  Transient failures such as these can be a precursor to a catastrophic failure in the storage subsystem containing this file.
//
#define TRANSIENT_READ_ERROR_DETECTED_ID ((MessageId)0x000001EDL)

//
// MessageId: ATTACHED_DB_MISMATCH_END_OF_RECOVERY_ID
//
// MessageText:
//
//  %1 (%2) %3Database recovery failed with error %4 because it encountered references to a database, '%5', which is no longer present. The database was not brought to a consistent state before it was removed (or possibly moved or renamed). The database engine will not permit recovery to complete for this instance until the missing database is re-instated. If the database is truly no longer available and no longer required, please contact PSS for further instructions regarding the steps required in order to allow recovery to proceed without this database.
//
#define ATTACHED_DB_MISMATCH_END_OF_RECOVERY_ID ((MessageId)0x000001EEL)

//
// MessageId: ATTACHED_DB_MISMATCH_DURING_RECOVERY_ID
//
// MessageText:
//
//  %1 (%2) %3Database recovery on '%5' failed with error %4. The database is not in the state expected at the first reference of this database in the log files. It is likely that a file copy of this database was restored, but not all log files since the file copy was made are currently available. Please contact PSS for further assistance.
//
#define ATTACHED_DB_MISMATCH_DURING_RECOVERY_ID ((MessageId)0x000001EFL)

//
// MessageId: REDO_HIGH_LOG_MISMATCH_ERROR_ID
//
// MessageText:
//
//  %1 (%2) %3Database %4 requires logfile %5 created at %6 in order to recover successfully. Recovery found the logfile created at %7.
//
#define REDO_HIGH_LOG_MISMATCH_ERROR_ID  ((MessageId)0x000001F0L)

//
// MessageId: DATABASE_HEADER_ERROR_ID
//
// MessageText:
//
//  %1 (%2) %3From information provided by the headers of %4, the file is not a database file. The headers of the file may be corrupted.
//
#define DATABASE_HEADER_ERROR_ID         ((MessageId)0x000001F1L)

//
// MessageId: DELETE_LOG_FILE_TOO_NEW_ID
//
// MessageText:
//
//  %1 (%2) %3There is a gap log in sequence numbers, last used log file has generation %4. Logfiles %5 to %6 have been deleted so that recovery can complete.
//
#define DELETE_LOG_FILE_TOO_NEW_ID       ((MessageId)0x000001F2L)

//
// MessageId: DELETE_LAST_LOG_FILE_TOO_OLD_ID
//
// MessageText:
//
//  %1 (%2) %3There is a gap log in sequence numbers, last used log file has generation %4. Logfile %5 (generation %6) have been deleted so that recovery can complete.
//
#define DELETE_LAST_LOG_FILE_TOO_OLD_ID  ((MessageId)0x000001F3L)

//
// MessageId: REPAIR_BAD_PAGE_ID
//
// MessageText:
//
//  %1 (%2) %3The database engine lost one page of bad data. It is highly recommended that an application-level integrity check of the database be run to ensure application-level data integrity.
//
#define REPAIR_BAD_PAGE_ID               ((MessageId)0x000001F4L)

//
// MessageId: REPAIR_PAGE_LINK_ID
//
// MessageText:
//
//  %1 (%2) %3The database engine repaired one page link.
//
#define REPAIR_PAGE_LINK_ID              ((MessageId)0x000001F5L)

//
// MessageId: REPAIR_BAD_COLUMN_ID
//
// MessageText:
//
//  %1 (%2) %3The database engine lost one or more bad columns of data in one record. It is highly recommended that an application-level integrity check of the database be run to ensure application-level data integrity.
//
#define REPAIR_BAD_COLUMN_ID             ((MessageId)0x000001F6L)

//
// MessageId: REPAIR_BAD_RECORD_ID
//
// MessageText:
//
//  %1 (%2) %3The database engine lost one bad data record. It is highly recommended that an application-level integrity check of the database be run to ensure application-level data integrity.
//
#define REPAIR_BAD_RECORD_ID             ((MessageId)0x000001F7L)

//
// MessageId: REPAIR_BAD_TABLE
//
// MessageText:
//
//  %1 (%2) %3The database engine lost one table called %4. It is highly recommended that an application-level integrity check of the database be run to ensure application-level data integrity.
//
#define REPAIR_BAD_TABLE                 ((MessageId)0x000001F8L)

//
// MessageId: OSFS_OPEN_COMPRESSED_FILE_RW_ERROR_ID
//
// MessageText:
//
//  %1 (%2) %3An attempt to open the compressed file "%4" for read / write access failed because it could not be converted to a normal file.  The open file operation will fail with error %5.  To prevent this error in the future you can manually decompress the file and change the compression state of the containing folder to uncompressed.  Writing to this file when it is compressed is not supported.
//
#define OSFS_OPEN_COMPRESSED_FILE_RW_ERROR_ID ((MessageId)0x000001F9L)

//
// MessageId: OSFS_DISK_SPACE_ERROR_ID
//
// MessageText:
//
//  %1 (%2) %3An attempt to determine the amount of free/total space for the volume "%4" containing "%5" failed with system error %7: "%8".  The operation will fail with error %6.
//
#define OSFS_DISK_SPACE_ERROR_ID         ((MessageId)0x000001FAL)

//
// MessageId: OSFILE_READ_TOO_LONG_ID
//
// MessageText:
//
//  %1 (%2) %3A request to read from the file "%4" at offset %5 for %6 bytes succeeded, but took an abnormally long time (%7 seconds) to be serviced by the OS. This problem is likely due to faulty hardware. Please contact your hardware vendor for further assistance diagnosing the problem.
//
#define OSFILE_READ_TOO_LONG_ID          ((MessageId)0x000001FBL)

//
// MessageId: OSFILE_WRITE_TOO_LONG_ID
//
// MessageText:
//
//  %1 (%2) %3A request to write to the file "%4" at offset %5 for %6 bytes succeeded, but took an abnormally long time (%7 seconds) to be serviced by the OS. This problem is likely due to faulty hardware. Please contact your hardware vendor for further assistance diagnosing the problem.
//
#define OSFILE_WRITE_TOO_LONG_ID         ((MessageId)0x000001FCL)

//
// MessageId: OSFILE_READ_TOO_LONG_AGAIN_ID
//
// MessageText:
//
//  %1 (%2) %3A request to read from the file "%4" at offset %5 for %6 bytes succeeded, but took an abnormally long time (%7 seconds) to be serviced by the OS. In addition, %8 other I/O requests to this file have also taken an abnormally long time to be serviced since the last message regarding this problem was posted %9 seconds ago. This problem is likely due to faulty hardware. Please contact your hardware vendor for further assistance diagnosing the problem.
//
#define OSFILE_READ_TOO_LONG_AGAIN_ID    ((MessageId)0x000001FDL)

//
// MessageId: OSFILE_WRITE_TOO_LONG_AGAIN_ID
//
// MessageText:
//
//  %1 (%2) %3A request to write to the file "%4" at offset %5 for %6 bytes succeeded, but took an abnormally long time (%7 seconds) to be serviced by the OS. In addition, %8 other I/O requests to this file have also taken an abnormally long time to be serviced since the last message regarding this problem was posted %9 seconds ago. This problem is likely due to faulty hardware. Please contact your hardware vendor for further assistance diagnosing the problem.
//
#define OSFILE_WRITE_TOO_LONG_AGAIN_ID   ((MessageId)0x000001FEL)

//
// MessageId: CONVERT_DUPLICATE_KEY
//
// MessageText:
//
//  %1 (%2) %3The database engine encountered an unexpected duplicate key on the table %4. One record has been dropped.
//
#define CONVERT_DUPLICATE_KEY            ((MessageId)0x00000258L)

//
// MessageId: FUNCTION_NOT_FOUND_ERROR_ID
//
// MessageText:
//
//  %1 (%2) %3The database engine could not find the entrypoint %4 in the file %5.
//
#define FUNCTION_NOT_FOUND_ERROR_ID      ((MessageId)0x00000259L)

//
// MessageId: MANY_LOST_COMPACTION_ID
//
// MessageText:
//
//  %1 (%2) %3Database '%4': Background clean-up skipped pages. The database may benefit from widening the online maintenance window during off-peak hours. If this message persists, offline defragmentation may be run to remove all skipped pages from the database.
//
#define MANY_LOST_COMPACTION_ID          ((MessageId)0x0000025AL)

//
// MessageId: SPACE_LOST_ON_FREE_ID
//
// MessageText:
//
//  %1 (%2) %3Database '%4': The database engine lost unused pages %5-%6 while attempting space reclamation on a B-Tree (ObjectId %7). The space may not be reclaimed again until offline defragmentation is performed.
//
#define SPACE_LOST_ON_FREE_ID            ((MessageId)0x0000025BL)

//
// MessageId: LANGUAGE_NOT_SUPPORTED_ID
//
// MessageText:
//
//  %1 (%2) %3Locale ID %4 (%5 %6) is either invalid or not installed on this machine.
//
#define LANGUAGE_NOT_SUPPORTED_ID        ((MessageId)0x0000025CL)

//
// MessageId: CONVERT_COLUMN_TO_TAGGED_ID
//
// MessageText:
//
//  %1 (%2) %3Column '%4' of Table '%5' was converted to a Tagged column.
//
#define CONVERT_COLUMN_TO_TAGGED_ID      ((MessageId)0x0000025DL)

//
// MessageId: CONVERT_COLUMN_TO_NONTAGGED_ID
//
// MessageText:
//
//  %1 (%2) %3Column '%4' of Table '%5' was converted to a non-Tagged column.
//
#define CONVERT_COLUMN_TO_NONTAGGED_ID   ((MessageId)0x0000025EL)

//
// MessageId: CONVERT_COLUMN_BINARY_TO_LONGBINARY_ID
//
// MessageText:
//
//  %1 (%2) %3Column '%4' of Table '%5' was converted from Binary to LongBinary.
//
#define CONVERT_COLUMN_BINARY_TO_LONGBINARY_ID ((MessageId)0x0000025FL)

//
// MessageId: CONVERT_COLUMN_TEXT_TO_LONGTEXT_ID
//
// MessageText:
//
//  %1 (%2) %3Column '%4' of Table '%5' was converted from Text to LongText.
//
#define CONVERT_COLUMN_TEXT_TO_LONGTEXT_ID ((MessageId)0x00000260L)

//
// MessageId: START_INDEX_CLEANUP_KNOWN_VERSION_ID
//
// MessageText:
//
//  %1 (%2) %3The database engine is initiating index cleanup of database '%4' as a result of a Windows version upgrade from %5.%6.%7 SP%8 to %9.%10.%11 SP%12. This message is informational and does not indicate a problem in the database.
//
#define START_INDEX_CLEANUP_KNOWN_VERSION_ID ((MessageId)0x00000261L)

//
// MessageId: START_INDEX_CLEANUP_UNKNOWN_VERSION_ID
//
// MessageText:
//
//  %1 (%2) %3The database engine is initiating index cleanup of database '%4' as a result of a Windows version upgrade to %5.%6.%7 SP%8. This message is informational and does not indicate a problem in the database.
//
#define START_INDEX_CLEANUP_UNKNOWN_VERSION_ID ((MessageId)0x00000262L)

//
// MessageId: DO_SECONDARY_INDEX_CLEANUP_ID
//
// MessageText:
//
//  %1 (%2) %3Database '%4': The secondary index '%5' of table '%6' will be rebuilt as a precautionary measure after the Windows version upgrade of this system. This message is informational and does not indicate a problem in the database.
//
#define DO_SECONDARY_INDEX_CLEANUP_ID    ((MessageId)0x00000263L)

//
// MessageId: STOP_INDEX_CLEANUP_ID
//
// MessageText:
//
//  %1 (%2) %3The database engine has successfully completed index cleanup on database '%4'.
//
#define STOP_INDEX_CLEANUP_ID            ((MessageId)0x00000264L)

//
// MessageId: PRIMARY_INDEX_CORRUPT_ERROR_ID
//
// MessageText:
//
//  %1 (%2) %3Database '%4': The primary index '%5' of table '%6' may be corrupt. If there is no later event showing the index being rebuilt, then please defragment the database to rebuild the index.
//
#define PRIMARY_INDEX_CORRUPT_ERROR_ID   ((MessageId)0x00000265L)

//
// MessageId: SECONDARY_INDEX_CORRUPT_ERROR_ID
//
// MessageText:
//
//  %1 (%2) %3Database '%4': The secondary index '%5' of table '%6' may be corrupt. If there is no later event showing the index being rebuilt, then please defragment the database to rebuild the index.
//
#define SECONDARY_INDEX_CORRUPT_ERROR_ID ((MessageId)0x00000266L)

//
// MessageId: START_FORMAT_UPGRADE_ID
//
// MessageText:
//
//  %1 (%2) %3The database engine is converting the database '%4' from format %5 to format %6.
//
#define START_FORMAT_UPGRADE_ID          ((MessageId)0x00000267L)

//
// MessageId: STOP_FORMAT_UPGRADE_ID
//
// MessageText:
//
//  %1 (%2) %3The database engine has successfully converted the database '%4' from format %5 to format %6.
//
#define STOP_FORMAT_UPGRADE_ID           ((MessageId)0x00000268L)

//
// MessageId: CONVERT_INCOMPLETE_ERROR_ID
//
// MessageText:
//
//  %1 (%2) %3Attempted to use database '%4', but conversion did not complete successfully on this database. Please restore from backup and re-run database conversion.
//
#define CONVERT_INCOMPLETE_ERROR_ID      ((MessageId)0x00000269L)

//
// MessageId: BUILD_SPACE_CACHE_ID
//
// MessageText:
//
//  %1 (%2) %3Database '%4': The database engine has built an in-memory cache of %5 space tree nodes on a B-Tree (ObjectId: %6, PgnoRoot: %7) to optimize space requests for that B-Tree. The space cache was built in %8 milliseconds. This message is informational and does not indicate a problem in the database.
//
#define BUILD_SPACE_CACHE_ID             ((MessageId)0x0000026AL)

//
// MessageId: ATTACH_TO_BACKUP_SET_DATABASE_ERROR_ID
//
// MessageText:
//
//  %1 (%2) %3Attempted to attach database '%4' but it is a database restored from a backup set on which hard recovery was not started or did not complete successfully.
//
#define ATTACH_TO_BACKUP_SET_DATABASE_ERROR_ID ((MessageId)0x0000026BL)

//
// MessageId: RECORD_FORMAT_CONVERSION_FAILED_ID
//
// MessageText:
//
//  %1 (%2) %3Unable to convert record format for record %4:%5:%6.
//
#define RECORD_FORMAT_CONVERSION_FAILED_ID ((MessageId)0x0000026CL)

//
// MessageId: OUT_OF_OBJID
//
// MessageText:
//
//  %1 (%2) %3Database '%4': Out of B-Tree IDs (ObjectIDs). Freed/unused B-Tree IDs may be reclaimed by performing an offline defragmentation of the database.
//
#define OUT_OF_OBJID                     ((MessageId)0x0000026DL)

//
// MessageId: ALMOST_OUT_OF_OBJID
//
// MessageText:
//
//  %1 (%2) %3Database '%4': Available B-Tree IDs (ObjectIDs) have almost been completely consumed. Freed/unused B-Tree IDs may be reclaimed by performing an offline defragmentation of the database.
//
#define ALMOST_OUT_OF_OBJID              ((MessageId)0x0000026EL)

//
// MessageId: VERSION_STORE_REACHED_MAXIMUM_ID
//
// MessageText:
//
//  %1 (%2) %3The version store for this instance (%4) has reached its maximum size of %5Mb. It is likely that a long-running transaction is preventing cleanup of the version store and causing it to build up in size. Updates will be rejected until the long-running transaction has been completely committed or rolled back.
//  %nPossible long-running transaction:
//  %n%tSessionId: %6
//  %n%tSession-context: %7
//  %n%tSession-context ThreadId: %8
//  %n%tCleanup: %9
//
#define VERSION_STORE_REACHED_MAXIMUM_ID ((MessageId)0x0000026FL)

//
// MessageId: VERSION_STORE_OUT_OF_MEMORY_ID
//
// MessageText:
//
//  %1 (%2) %3The version store for this instance (%4) cannot grow because it is receiving Out-Of-Memory errors from the OS. It is likely that a long-running transaction is preventing cleanup of the version store and causing it to build up in size. Updates will be rejected until the long-running transaction has been completely committed or rolled back.
//  %nCurrent version store size for this instance: %5Mb
//  %nMaximum version store size for this instance: %6Mb
//  %nGlobal memory pre-reserved for all version stores: %7Mb
//  %nPossible long-running transaction:
//  %n%tSessionId: %8
//  %n%tSession-context: %9
//  %n%tSession-context ThreadId: %10
//  %n%tCleanup: %11
//
#define VERSION_STORE_OUT_OF_MEMORY_ID   ((MessageId)0x00000270L)

//
// MessageId: INVALID_LCMAPFLAGS_ID
//
// MessageText:
//
//  %1 (%2) %3The database engine does not support the LCMapString() flags %4.
//
#define INVALID_LCMAPFLAGS_ID            ((MessageId)0x00000271L)

//
// MessageId: DO_MSU_CLEANUP_ID
//
// MessageText:
//
//  %1 (%2) %3The database engine updated %4 index entries in database %5 because of a change in the NLS version. This message is informational and does not indicate a problem in the database.
//
#define DO_MSU_CLEANUP_ID                ((MessageId)0x00000272L)

//
// MessageId: MSU_CLEANUP_FAIL_RO_ID
//
// MessageText:
//
//  %1 (%2) %3The database engine was unable to updated index entries in database %5 because the database is read-only.
//
#define MSU_CLEANUP_FAIL_RO_ID           ((MessageId)0x00000273L)

//
// MessageId: OLD_BEGIN_FULL_PASS_ID
//
// MessageText:
//
//  %1 (%2) %3Online defragmentation is beginning a full pass on database '%4'.
//
#define OLD_BEGIN_FULL_PASS_ID           ((MessageId)0x000002BCL)

//
// MessageId: OLD_COMPLETE_FULL_PASS_ID
//
// MessageText:
//
//  %1 (%2) %3Online defragmentation has completed a full pass on database '%4'.
//
#define OLD_COMPLETE_FULL_PASS_ID        ((MessageId)0x000002BDL)

//
// MessageId: OLD_RESUME_PASS_ID
//
// MessageText:
//
//  %1 (%2) %3Online defragmentation is resuming its pass on database '%4'.
//
#define OLD_RESUME_PASS_ID               ((MessageId)0x000002BEL)

//
// MessageId: OLD_COMPLETE_RESUMED_PASS_ID
//
// MessageText:
//
//  %1 (%2) %3Online defragmentation has completed the resumed pass on database '%4'.
//
#define OLD_COMPLETE_RESUMED_PASS_ID     ((MessageId)0x000002BFL)

//
// MessageId: OLD_INTERRUPTED_PASS_ID
//
// MessageText:
//
//  %1 (%2) %3Online defragmentation of database '%4' was interrupted and terminated. The next time online defragmentation is started on this database, it will resume from the point of interruption.
//
#define OLD_INTERRUPTED_PASS_ID          ((MessageId)0x000002C0L)

//
// MessageId: OLD_ERROR_ID
//
// MessageText:
//
//  %1 (%2) %3Online defragmentation of database '%4' terminated prematurely after encountering unexpected error %5. The next time online defragmentation is started on this database, it will resume from the point of interruption.
//
#define OLD_ERROR_ID                     ((MessageId)0x000002C1L)

//
// MessageId: DATABASE_ZEROING_STARTED_ID
//
// MessageText:
//
//  %1 (%2) %3Online zeroing of database %4 started
//
#define DATABASE_ZEROING_STARTED_ID      ((MessageId)0x000002C2L)

//
// MessageId: DATABASE_ZEROING_STOPPED_ID
//
// MessageText:
//
//  %1 (%2) %3Online zeroing of database %4 finished after %5 seconds with err %6%n
//  %7 pages%n
//  %8 blank pages%n
//  %9 pages unchanged since last zero%n
//  %10 unused pages zeroed%n
//  %11 used pages seen%n
//  %12 deleted records zeroed%n
//  %13 unreferenced data chunks zeroed
//
#define DATABASE_ZEROING_STOPPED_ID      ((MessageId)0x000002C3L)

//
// MessageId: OLDSLV_BEGIN_FULL_PASS_ID
//
// MessageText:
//
//  %1 (%2) %3Online defragmentation is beginning a full pass on streaming file '%4'.
//
#define OLDSLV_BEGIN_FULL_PASS_ID        ((MessageId)0x000002C4L)

//
// MessageId: OLDSLV_COMPLETE_FULL_PASS_ID
//
// MessageText:
//
//  %1 (%2) %3Online defragmentation has completed a full pass on streaming file '%4'.
//
#define OLDSLV_COMPLETE_FULL_PASS_ID     ((MessageId)0x000002C5L)

//
// MessageId: OLDSLV_SHRANK_DATABASE_ID
//
// MessageText:
//
//  %1 (%2) %3Online defragmentation of streaming file '%4' has shrunk the file by %5 bytes.
//
#define OLDSLV_SHRANK_DATABASE_ID        ((MessageId)0x000002C6L)

//
// MessageId: OLDSLV_ERROR_ID
//
// MessageText:
//
//  %1 (%2) %3Online defragmentation of streaming file '%4' terminated prematurely after encountering unexpected error %5.
//
#define OLDSLV_ERROR_ID                  ((MessageId)0x000002C7L)

//
// MessageId: DATABASE_SLV_ZEROING_STARTED_ID
//
// MessageText:
//
//  %1 (%2) %3Online zeroing of streaming file '%4' started.
//
#define DATABASE_SLV_ZEROING_STARTED_ID  ((MessageId)0x000002C8L)

//
// MessageId: DATABASE_SLV_ZEROING_STOPPED_ID
//
// MessageText:
//
//  %1 (%2) %3Online zeroing of streaming file '%4' finished after %5 seconds with err %6%n
//  %7 pages%n
//  %8 unused pages zeroed%n
//
#define DATABASE_SLV_ZEROING_STOPPED_ID  ((MessageId)0x000002C9L)

//
// MessageId: OLDSLV_STOP_ID
//
// MessageText:
//
//  %1 (%2) %3Online defragmentation has successfully been stopped on streaming file '%4'.
//
#define OLDSLV_STOP_ID                   ((MessageId)0x000002CAL)

//
// MessageId: SYS_PARAM_CACHEMIN_CSESS_ERROR_ID
//
// MessageText:
//
//  %1 (%2) %3System parameter minimum cache size (%4) is less than 4 times the number of sessions (%5).
//
#define SYS_PARAM_CACHEMIN_CSESS_ERROR_ID ((MessageId)0x00000320L)

//
// MessageId: SYS_PARAM_CACHEMAX_CACHEMIN_ERROR_ID
//
// MessageText:
//
//  %1 (%2) %3System parameter maximum cache size (%4) is less than minimum cache size (%5).
//
#define SYS_PARAM_CACHEMAX_CACHEMIN_ERROR_ID ((MessageId)0x00000321L)

//
// MessageId: SYS_PARAM_CACHEMAX_STOPFLUSH_ERROR_ID
//
// MessageText:
//
//  %1 (%2) %3System parameter maximum cache size (%4) is less than stop clean flush threshold (%5).
//
#define SYS_PARAM_CACHEMAX_STOPFLUSH_ERROR_ID ((MessageId)0x00000322L)

//
// MessageId: SYS_PARAM_STOPFLUSH_STARTFLUSH_ERROR_ID
//
// MessageText:
//
//  %1 (%2) %3System parameter stop clean flush threshold (%4) is less than start clean flush threshold (%5).
//
#define SYS_PARAM_STOPFLUSH_STARTFLUSH_ERROR_ID ((MessageId)0x00000323L)

//
// MessageId: SYS_PARAM_LOGBUFFER_FILE_ERROR_ID
//
// MessageText:
//
//  %1 (%2) %3System parameter log buffer size (%4 sectors) is greater than the maximum size of %5 k bytes (logfile size minus reserved space).
//
#define SYS_PARAM_LOGBUFFER_FILE_ERROR_ID ((MessageId)0x00000324L)

//
// MessageId: SYS_PARAM_MAXPAGES_PREFER_ID
//
// MessageText:
//
//  %1 (%2) %3System parameter max version pages (%4) is less than preferred version pages (%5).
//
#define SYS_PARAM_MAXPAGES_PREFER_ID     ((MessageId)0x00000325L)

//
// MessageId: SYS_PARAM_VERPREFERREDPAGE_ID
//
// MessageText:
//
//  %1 (%2) %3System parameter preferred version pages was changed from %4 to %5 due to physical memory limitation.
//
#define SYS_PARAM_VERPREFERREDPAGE_ID    ((MessageId)0x00000326L)

//
// MessageId: SYS_PARAM_CFCB_PREFER_ID
//
// MessageText:
//
//  %1 (%2) %3System parameter max open tables (%4) is less than preferred opentables (%5). Please check registry settings.
//
#define SYS_PARAM_CFCB_PREFER_ID         ((MessageId)0x00000327L)

//
// MessageId: SYS_PARAM_VERPREFERREDPAGETOOBIG_ID
//
// MessageText:
//
//  %1 (%2) %3System parameter preferred version pages (%4) is greater than max version pages (%5). Preferred version pages was changed from %6 to %7.
//
#define SYS_PARAM_VERPREFERREDPAGETOOBIG_ID ((MessageId)0x00000328L)

//
// MessageId: LOG_COMMIT0_FAIL_ID
//
// MessageText:
//
//  %1 (%2) %3The database engine failed with error %4 while trying to log the commit of a transaction. To ensure database consistency, the process was terminated. Simply restart the process to force database recovery and return the database to a consistent state.
//
#define LOG_COMMIT0_FAIL_ID              ((MessageId)0x00000384L)

//
// MessageId: INTERNAL_TRACE_ID
//
// MessageText:
//
//  %1 (%2) %3Internal trace: %4 (%5)
//
#define INTERNAL_TRACE_ID                ((MessageId)0x00000385L)

//
// MessageId: SESSION_SHARING_VIOLATION_ID
//
// MessageText:
//
//  %1 (%2) %3The database engine detected multiple threads illegally using the same database session to perform database operations.
//  %n%tSessionId: %4
//  %n%tSession-context: %5
//  %n%tSession-context ThreadId: %6
//  %n%tCurrent ThreadId: %7
//
#define SESSION_SHARING_VIOLATION_ID     ((MessageId)0x00000386L)

//
// MessageId: SESSION_WRITE_CONFLICT_ID
//
// MessageText:
//
//  %1 (%2) %3The database engine detected two different cursors of the same session illegally trying to update the same record at the same time.
//  %n%tSessionId: %4
//  %n%tThreadId: %5
//  %n%tDatabase: %6
//  %n%tTable: %7
//  %n%tCurrent cursor: %8
//  %n%tCursor owning original update: %9
//  %n%tBookmark size (prefix/suffix): %10
//
#define SESSION_WRITE_CONFLICT_ID        ((MessageId)0x00000387L)

//
// MessageId: OS_SNAPSHOT_FREEZE_START_ID
//
// MessageText:
//
//  %1 (%2) %3Shadow copy %4 freeze started.
//
#define OS_SNAPSHOT_FREEZE_START_ID      ((MessageId)0x000007D1L)

//
// MessageId: OS_SNAPSHOT_FREEZE_START_ERROR_ID
//
// MessageText:
//
//  %1 (%2) %3Shadow copy %4 freeze starting error %5.
//
#define OS_SNAPSHOT_FREEZE_START_ERROR_ID ((MessageId)0x000007D2L)

//
// MessageId: OS_SNAPSHOT_FREEZE_STOP_ID
//
// MessageText:
//
//  %1 (%2) %3Shadow copy %4 freeze stopped.
//
#define OS_SNAPSHOT_FREEZE_STOP_ID       ((MessageId)0x000007D3L)

//
// MessageId: OS_SNAPSHOT_TIME_OUT_ID
//
// MessageText:
//
//  %1 (%2) %3Shadow copy %4 time-out (%5 ms).
//
#define OS_SNAPSHOT_TIME_OUT_ID          ((MessageId)0x000007D4L)

//
//	Localization not required below this point
//
//
// MessageId: RFS2_INIT_ID
//
// MessageText:
//
//  %1 (%2) %3Resource failure simulation was activated with the following settings:
//  \t\t%4:\t%5
//  \t\t%6:\t%7
//  \t\t%8:\t%9
//  \t\t%10:\t%11
//
#define RFS2_INIT_ID                     ((MessageId)0x000003E8L)

//
// MessageId: RFS2_PERMITTED_ID
//
// MessageText:
//
//  %1 (%2) %3Resource failure simulation %4 is permitted.
//
#define RFS2_PERMITTED_ID                ((MessageId)0x000003E9L)

//
// MessageId: RFS2_DENIED_ID
//
// MessageText:
//
//  %1 (%2) %3Resource Failure Simulation %4 is denied.
//
#define RFS2_DENIED_ID                   ((MessageId)0x000003EAL)

//
// MessageId: RFS2_JET_CALL_ID
//
// MessageText:
//
//  %1 (%2) %3JET call %4 returned error %5. %6 (%7)
//
#define RFS2_JET_CALL_ID                 ((MessageId)0x000003EBL)

//
// MessageId: RFS2_JET_ERROR_ID
//
// MessageText:
//
//  %1 (%2) %3JET inline error %4 jumps to label %5. %6 (%7)
//
#define RFS2_JET_ERROR_ID                ((MessageId)0x000003ECL)

//
// MessageId: OS_SNAPSHOT_TRACE_ID
//
// MessageText:
//
//  %1 (%2) %3Snapshot function %4() = %5.
//
#define OS_SNAPSHOT_TRACE_ID             ((MessageId)0x000007D0L)

