

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from tele2vehicle.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef tele2vehiclePlugin_1708843959_h
#define tele2vehiclePlugin_1708843959_h

#include "tele2vehicle.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

extern "C"{

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct control_data
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct control_data)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * control_data must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct control_data.
    */
    typedef  class control_data control_dataKeyHolder;

    #define control_dataPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define control_dataPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define control_dataPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define control_dataPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define control_dataPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define control_dataPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define control_dataPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern control_data*
    control_dataPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern control_data*
    control_dataPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern control_data*
    control_dataPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    control_dataPluginSupport_copy_data(
        control_data *out,
        const control_data *in);

    NDDSUSERDllExport extern void 
    control_dataPluginSupport_destroy_data_w_params(
        control_data *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    control_dataPluginSupport_destroy_data_ex(
        control_data *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    control_dataPluginSupport_destroy_data(
        control_data *sample);

    NDDSUSERDllExport extern void 
    control_dataPluginSupport_print_data(
        const control_data *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern control_data*
    control_dataPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern control_data*
    control_dataPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    control_dataPluginSupport_destroy_key_ex(
        control_dataKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    control_dataPluginSupport_destroy_key(
        control_dataKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    control_dataPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    control_dataPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    control_dataPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    control_dataPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    control_dataPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        control_data *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    control_dataPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        control_data *out,
        const control_data *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    control_dataPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const control_data *sample); 

    NDDSUSERDllExport extern RTIBool
    control_dataPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const control_data *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    control_dataPlugin_deserialize_from_cdr_buffer(
        control_data *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    control_dataPlugin_data_to_string(
        const control_data *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    control_dataPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    control_dataPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    control_dataPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    control_dataPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    control_dataPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        control_data ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    control_dataPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        control_dataKeyHolder *key, 
        const control_data *instance);

    NDDSUSERDllExport extern RTIBool 
    control_dataPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        control_data *instance, 
        const control_dataKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    control_dataPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * control_dataPlugin_get_programs(void);

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    control_dataPlugin_new(void);

    NDDSUSERDllExport extern void
    control_dataPlugin_delete(struct PRESTypePlugin *);

}

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* tele2vehiclePlugin_1708843959_h */

