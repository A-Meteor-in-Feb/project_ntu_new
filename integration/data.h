

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from data.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef data_1787947317_h
#define data_1787947317_h

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
extern "C" {

    extern const char *status_dataTYPENAME;

}

struct status_dataSeq;
#ifndef NDDS_STANDALONE_TYPE
class status_dataTypeSupport;
class status_dataDataWriter;
class status_dataDataReader;
#endif
class status_data 
{
  public:
    typedef struct status_dataSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef status_dataTypeSupport TypeSupport;
    typedef status_dataDataWriter DataWriter;
    typedef status_dataDataReader DataReader;
    #endif

    DDS_Char *   vin ;
    DDS_Boolean   online ;
    DDS_Boolean   connected ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * status_data_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *status_data_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *status_data_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *status_data_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(status_dataSeq, status_data);

NDDSUSERDllExport
RTIBool status_data_initialize(
    status_data* self);

NDDSUSERDllExport
RTIBool status_data_initialize_ex(
    status_data* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool status_data_initialize_w_params(
    status_data* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool status_data_finalize_w_return(
    status_data* self);

NDDSUSERDllExport
void status_data_finalize(
    status_data* self);

NDDSUSERDllExport
void status_data_finalize_ex(
    status_data* self,RTIBool deletePointers);

NDDSUSERDllExport
void status_data_finalize_w_params(
    status_data* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void status_data_finalize_optional_members(
    status_data* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool status_data_copy(
    status_data* dst,
    const status_data* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *GPSlocation_dataTYPENAME;

}

struct GPSlocation_dataSeq;
#ifndef NDDS_STANDALONE_TYPE
class GPSlocation_dataTypeSupport;
class GPSlocation_dataDataWriter;
class GPSlocation_dataDataReader;
#endif
class GPSlocation_data 
{
  public:
    typedef struct GPSlocation_dataSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef GPSlocation_dataTypeSupport TypeSupport;
    typedef GPSlocation_dataDataWriter DataWriter;
    typedef GPSlocation_dataDataReader DataReader;
    #endif

    DDS_Char *   vin ;
    DDS_Double   latitude ;
    DDS_Double   longitude ;
    DDS_Double   altitude ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * GPSlocation_data_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *GPSlocation_data_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *GPSlocation_data_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *GPSlocation_data_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(GPSlocation_dataSeq, GPSlocation_data);

NDDSUSERDllExport
RTIBool GPSlocation_data_initialize(
    GPSlocation_data* self);

NDDSUSERDllExport
RTIBool GPSlocation_data_initialize_ex(
    GPSlocation_data* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool GPSlocation_data_initialize_w_params(
    GPSlocation_data* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool GPSlocation_data_finalize_w_return(
    GPSlocation_data* self);

NDDSUSERDllExport
void GPSlocation_data_finalize(
    GPSlocation_data* self);

NDDSUSERDllExport
void GPSlocation_data_finalize_ex(
    GPSlocation_data* self,RTIBool deletePointers);

NDDSUSERDllExport
void GPSlocation_data_finalize_w_params(
    GPSlocation_data* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void GPSlocation_data_finalize_optional_members(
    GPSlocation_data* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool GPSlocation_data_copy(
    GPSlocation_data* dst,
    const GPSlocation_data* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *IMU_dataTYPENAME;

}

struct IMU_dataSeq;
#ifndef NDDS_STANDALONE_TYPE
class IMU_dataTypeSupport;
class IMU_dataDataWriter;
class IMU_dataDataReader;
#endif
class IMU_data 
{
  public:
    typedef struct IMU_dataSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef IMU_dataTypeSupport TypeSupport;
    typedef IMU_dataDataWriter DataWriter;
    typedef IMU_dataDataReader DataReader;
    #endif

    DDS_Char *   vin ;
    DDS_DoubleSeq  quaternion ;
    DDS_DoubleSeq  angular_velocity ;
    DDS_DoubleSeq  linear_acceleration ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * IMU_data_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *IMU_data_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *IMU_data_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *IMU_data_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(IMU_dataSeq, IMU_data);

NDDSUSERDllExport
RTIBool IMU_data_initialize(
    IMU_data* self);

NDDSUSERDllExport
RTIBool IMU_data_initialize_ex(
    IMU_data* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool IMU_data_initialize_w_params(
    IMU_data* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool IMU_data_finalize_w_return(
    IMU_data* self);

NDDSUSERDllExport
void IMU_data_finalize(
    IMU_data* self);

NDDSUSERDllExport
void IMU_data_finalize_ex(
    IMU_data* self,RTIBool deletePointers);

NDDSUSERDllExport
void IMU_data_finalize_w_params(
    IMU_data* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void IMU_data_finalize_optional_members(
    IMU_data* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool IMU_data_copy(
    IMU_data* dst,
    const IMU_data* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *other_properties_dataTYPENAME;

}

struct other_properties_dataSeq;
#ifndef NDDS_STANDALONE_TYPE
class other_properties_dataTypeSupport;
class other_properties_dataDataWriter;
class other_properties_dataDataReader;
#endif
class other_properties_data 
{
  public:
    typedef struct other_properties_dataSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef other_properties_dataTypeSupport TypeSupport;
    typedef other_properties_dataDataWriter DataWriter;
    typedef other_properties_dataDataReader DataReader;
    #endif

    DDS_Char *   vin ;
    DDS_Double   steering_position ;
    DDS_Double   speed ;
    DDS_Long   indicators ;
    DDS_Long   gear ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * other_properties_data_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *other_properties_data_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *other_properties_data_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *other_properties_data_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(other_properties_dataSeq, other_properties_data);

NDDSUSERDllExport
RTIBool other_properties_data_initialize(
    other_properties_data* self);

NDDSUSERDllExport
RTIBool other_properties_data_initialize_ex(
    other_properties_data* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool other_properties_data_initialize_w_params(
    other_properties_data* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool other_properties_data_finalize_w_return(
    other_properties_data* self);

NDDSUSERDllExport
void other_properties_data_finalize(
    other_properties_data* self);

NDDSUSERDllExport
void other_properties_data_finalize_ex(
    other_properties_data* self,RTIBool deletePointers);

NDDSUSERDllExport
void other_properties_data_finalize_w_params(
    other_properties_data* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void other_properties_data_finalize_optional_members(
    other_properties_data* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool other_properties_data_copy(
    other_properties_data* dst,
    const other_properties_data* src);

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

        template <>
        struct type_code<status_data> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<GPSlocation_data> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<IMU_data> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<other_properties_data> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* data */

