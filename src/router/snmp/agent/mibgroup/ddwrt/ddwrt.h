/*
 * Note: this file originally auto-generated by mib2c using
 *  : mib2c.iterate.conf 17695 2009-07-21 12:22:18Z dts12 $
 */
#ifndef DDWRT_H
#define DDWRT_H

/* function declarations */
void init_ddwrt(void);
void initialize_table_ddxrWlStatTable(void);
Netsnmp_Node_Handler ddxrWlStatTable_handler;
Netsnmp_First_Data_Point  ddxrWlStatTable_get_first_data_point;
Netsnmp_Next_Data_Point   ddxrWlStatTable_get_next_data_point;
void initialize_table_ddWlRtabTable(void);
Netsnmp_Node_Handler ddWlRtabTable_handler;
Netsnmp_First_Data_Point  ddWlRtabTable_get_first_data_point;
Netsnmp_Next_Data_Point   ddWlRtabTable_get_next_data_point;



/* column number definitions for table ddxrWlStatTable */
       #define COLUMN_DDXRWLSTATINDEXMAJOR		1
       #define COLUMN_DDXRWLSTATINDEXMINOR		2
       #define COLUMN_DDXRWLSTATMAJORINTERFACE		3
       #define COLUMN_DDXRWLSTATMINORINTERFACE		4
       #define COLUMN_DDXRWLSTATIFACENAME		5
       #define COLUMN_DDXRWLSTATTXPOWER		6
       #define COLUMN_DDXRWLSTATANTENNAGAIN		7
       #define COLUMN_DDXRWLSTATBSSID		8
       #define COLUMN_DDXRWLSTATFREQ		9
       #define COLUMN_DDXRWLSTATSSID		10
       #define COLUMN_DDXRWLSTATSCANLIST		11
       #define COLUMN_DDXRWLSTATNETMODE		12
       #define COLUMN_DDXRWLSTATMODE		13
       #define COLUMN_DDXRWLSTATCARDTYPE		14
       #define COLUMN_DDXRWLSTATMINRATE		15
       #define COLUMN_DDXRWLSTATMAXRATE		16
       #define COLUMN_DDXRWLSTATFASTFRAMING		17
       #define COLUMN_DDXRWLSTATCONFIGACK		18
       #define COLUMN_DDXRWLSTATACK		19
       #define COLUMN_DDXRWLSTATTXANTENNA		20
       #define COLUMN_DDXRWLSTATRXANTENNA		21
       #define COLUMN_DDXRWLSTATOUTDOORBAND		22
       #define COLUMN_DDXRWLSTAT80211NWIDECHANNEL		23
       #define COLUMN_DDXRWLSTATCHANNELBW		24
       #define COLUMN_DDXRWLSTATSSIDBROADCASAT		25
       #define COLUMN_DDXRWLSTATREGULATORY		26
       #define COLUMN_DDXRWLSTATANTENNANAME		27

/* column number definitions for table ddWlRtabTable */
       #define COLUMN_DDXRWLRTABINDEXADDR		1
       #define COLUMN_DDXRWLRTABINDEXMAJOR		2
       #define COLUMN_DDXRWLRTABINDEXMINOR		3
       #define COLUMN_DDXRWLRTABMAC		4
       #define COLUMN_DDXRWLRTABMAJORINTERFACE		5
       #define COLUMN_DDXRWLRTABMINORINTERFACE		6
       #define COLUMN_DDXRWLRTABBSSID		7
       #define COLUMN_DDXRWLRTABSNR		8
       #define COLUMN_DDXRWLRTABIFACENAME		9
       #define COLUMN_DDXRWLRTABNOISE		10
       #define COLUMN_DDXRWLRTABSIGNAL		11
       #define COLUMN_DDXRWLRTABTXRATE		12
       #define COLUMN_DDXRWLRTABRXRATE		13
       #define COLUMN_DDXRWLRTABTYPE		14
       #define COLUMN_DDXRWLRTABSSID		15
       #define COLUMN_DDXRWLRTABANTENNANAME		16

/* non autogenerated stuff */ 
	#define DDXRWLSTATTABLE_TIMEOUT 7
	#define DDWLRTABTABLE_TIMEOUT  7
	enum WLA_NETMODES { nm_unknown,nm_disabled,nm_mixed,nm_bonly,nm_gonly,nm_aonly,nm_bgmixed,nm_nonly,nm_ngonly,nm_naonly };
	enum WLA_MODES { n_unknown,m_adhoc,m_ap,m_sta,m_wet,m_wdsap,m_wdssta,m_apsta,m_apstawet,m_mesh};

#endif /* DDWRT_H */
