

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from tele2vehicle.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef tele2vehicle_1708843959_h
#define tele2vehicle_1708843959_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

extern "C" {

    extern const char *control_dataTYPENAME;

}

struct control_dataSeq;
#ifndef NDDS_STANDALONE_TYPE
class control_dataTypeSupport;
class control_dataDataWriter;
class control_dataDataReader;
#endif
class control_data 
{
  public:
    typedef struct control_dataSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef control_dataTypeSupport TypeSupport;
    typedef control_dataDataWriter DataWriter;
    typedef control_dataDataReader DataReader;
    #endif

    DDS_Char *   tele ;
    DDS_Float   steering ;
    DDS_Long   gear ;
    DDS_Float   acceleration ;
    DDS_Float   brake ;
    DDS_Long   additional_button1 ;
    DDS_Long   additional_button2 ;
    DDS_Long   additional_button3 ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * control_data_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *control_data_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *control_data_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *control_data_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(control_dataSeq, control_data);

NDDSUSERDllExport
RTIBool control_data_initialize(
    control_data* self);

NDDSUSERDllExport
RTIBool control_data_initialize_ex(
    control_data* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool control_data_initialize_w_params(
    control_data* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool control_data_finalize_w_return(
    control_data* self);

NDDSUSERDllExport
void control_data_finalize(
    control_data* self);

NDDSUSERDllExport
void control_data_finalize_ex(
    control_data* self,RTIBool deletePointers);

NDDSUSERDllExport
void control_data_finalize_w_params(
    control_data* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void control_data_finalize_optional_members(
    control_data* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool control_data_copy(
    control_data* dst,
    const control_data* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#ifndef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace xcdr {
        template <>
        struct type_code<control_data> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* tele2vehicle */

