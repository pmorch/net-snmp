/* This file was generated by mib2c and is intended for use as a mib module
  for the ucd-snmp snmpd agent. */


#ifndef _MIBGROUP_SNMPNOTIFYTABLE_H
#define _MIBGROUP_SNMPNOTIFYTABLE_H


/* we may use header_complex from the header_complex module */


config_require(header_complex)
config_require(target)
config_add_mib(SNMP-NOTIFICATION-MIB)


/* our storage structure(s) */
struct snmpNotifyTable_data {

    char   *snmpNotifyName;
    size_t  snmpNotifyNameLen;
    char   *snmpNotifyTag;
    size_t  snmpNotifyTagLen;
    long    snmpNotifyType;
    long    snmpNotifyStorageType;
    long    snmpNotifyRowStatus;

};




/* enum definitions from the covered mib sections */






#define SNMPNOTIFYTYPE_TRAP                      1
#define SNMPNOTIFYTYPE_INFORM                    2




/* function prototypes */


void   init_snmpNotifyTable(void);
FindVarMethod var_snmpNotifyTable;
void parse_snmpNotifyTable(char *, char *);


WriteMethod write_snmpNotifyTag;
WriteMethod write_snmpNotifyType;
WriteMethod write_snmpNotifyStorageType;
WriteMethod write_snmpNotifyRowStatus;

WriteMethod write_snmpNotifyRowStatus;



#endif /* _MIBGROUP_SNMPNOTIFYTABLE_H */
