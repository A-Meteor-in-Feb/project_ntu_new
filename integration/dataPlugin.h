

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from data.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef dataPlugin_1787947317_h
#define dataPlugin_1787947317_h

#include "data.h"

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

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct status_data
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct status_data)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * status_data must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct status_data.
    */
    typedef  class status_data status_dataKeyHolder;

    #define status_dataPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define status_dataPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define status_dataPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define status_dataPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define status_dataPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define status_dataPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define status_dataPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern status_data*
    status_dataPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern status_data*
    status_dataPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern status_data*
    status_dataPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    status_dataPluginSupport_copy_data(
        status_data *out,
        const status_data *in);

    NDDSUSERDllExport extern void 
    status_dataPluginSupport_destroy_data_w_params(
        status_data *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    status_dataPluginSupport_destroy_data_ex(
        status_data *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    status_dataPluginSupport_destroy_data(
        status_data *sample);

    NDDSUSERDllExport extern void 
    status_dataPluginSupport_print_data(
        const status_data *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern status_data*
    status_dataPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern status_data*
    status_dataPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    status_dataPluginSupport_destroy_key_ex(
        status_dataKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    status_dataPluginSupport_destroy_key(
        status_dataKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    status_dataPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    status_dataPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    status_dataPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    status_dataPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    status_dataPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        status_data *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    status_dataPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        status_data *out,
        const status_data *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    status_dataPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const status_data *sample); 

    NDDSUSERDllExport extern RTIBool
    status_dataPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const status_data *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    status_dataPlugin_deserialize_from_cdr_buffer(
        status_data *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    status_dataPlugin_data_to_string(
        const status_data *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    status_dataPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    status_dataPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    status_dataPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    status_dataPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    status_dataPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        status_data ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    status_dataPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        status_dataKeyHolder *key, 
        const status_data *instance);

    NDDSUSERDllExport extern RTIBool 
    status_dataPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        status_data *instance, 
        const status_dataKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    status_dataPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * status_dataPlugin_get_programs(void);

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    status_dataPlugin_new(void);

    NDDSUSERDllExport extern void
    status_dataPlugin_delete(struct PRESTypePlugin *);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct GPSlocation_data
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct GPSlocation_data)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * GPSlocation_data must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct GPSlocation_data.
    */
    typedef  class GPSlocation_data GPSlocation_dataKeyHolder;

    #define GPSlocation_dataPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define GPSlocation_dataPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define GPSlocation_dataPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define GPSlocation_dataPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define GPSlocation_dataPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define GPSlocation_dataPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define GPSlocation_dataPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern GPSlocation_data*
    GPSlocation_dataPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern GPSlocation_data*
    GPSlocation_dataPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern GPSlocation_data*
    GPSlocation_dataPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    GPSlocation_dataPluginSupport_copy_data(
        GPSlocation_data *out,
        const GPSlocation_data *in);

    NDDSUSERDllExport extern void 
    GPSlocation_dataPluginSupport_destroy_data_w_params(
        GPSlocation_data *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    GPSlocation_dataPluginSupport_destroy_data_ex(
        GPSlocation_data *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    GPSlocation_dataPluginSupport_destroy_data(
        GPSlocation_data *sample);

    NDDSUSERDllExport extern void 
    GPSlocation_dataPluginSupport_print_data(
        const GPSlocation_data *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern GPSlocation_data*
    GPSlocation_dataPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern GPSlocation_data*
    GPSlocation_dataPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    GPSlocation_dataPluginSupport_destroy_key_ex(
        GPSlocation_dataKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    GPSlocation_dataPluginSupport_destroy_key(
        GPSlocation_dataKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    GPSlocation_dataPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    GPSlocation_dataPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    GPSlocation_dataPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    GPSlocation_dataPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    GPSlocation_dataPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        GPSlocation_data *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    GPSlocation_dataPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        GPSlocation_data *out,
        const GPSlocation_data *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    GPSlocation_dataPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const GPSlocation_data *sample); 

    NDDSUSERDllExport extern RTIBool
    GPSlocation_dataPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const GPSlocation_data *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    GPSlocation_dataPlugin_deserialize_from_cdr_buffer(
        GPSlocation_data *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    GPSlocation_dataPlugin_data_to_string(
        const GPSlocation_data *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    GPSlocation_dataPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    GPSlocation_dataPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    GPSlocation_dataPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    GPSlocation_dataPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    GPSlocation_dataPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        GPSlocation_data ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    GPSlocation_dataPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        GPSlocation_dataKeyHolder *key, 
        const GPSlocation_data *instance);

    NDDSUSERDllExport extern RTIBool 
    GPSlocation_dataPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        GPSlocation_data *instance, 
        const GPSlocation_dataKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    GPSlocation_dataPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * GPSlocation_dataPlugin_get_programs(void);

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    GPSlocation_dataPlugin_new(void);

    NDDSUSERDllExport extern void
    GPSlocation_dataPlugin_delete(struct PRESTypePlugin *);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct IMU_data
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct IMU_data)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * IMU_data must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct IMU_data.
    */
    typedef  class IMU_data IMU_dataKeyHolder;

    #define IMU_dataPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define IMU_dataPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define IMU_dataPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define IMU_dataPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define IMU_dataPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define IMU_dataPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define IMU_dataPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern IMU_data*
    IMU_dataPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern IMU_data*
    IMU_dataPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern IMU_data*
    IMU_dataPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    IMU_dataPluginSupport_copy_data(
        IMU_data *out,
        const IMU_data *in);

    NDDSUSERDllExport extern void 
    IMU_dataPluginSupport_destroy_data_w_params(
        IMU_data *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    IMU_dataPluginSupport_destroy_data_ex(
        IMU_data *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    IMU_dataPluginSupport_destroy_data(
        IMU_data *sample);

    NDDSUSERDllExport extern void 
    IMU_dataPluginSupport_print_data(
        const IMU_data *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern IMU_data*
    IMU_dataPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern IMU_data*
    IMU_dataPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    IMU_dataPluginSupport_destroy_key_ex(
        IMU_dataKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    IMU_dataPluginSupport_destroy_key(
        IMU_dataKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    IMU_dataPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    IMU_dataPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    IMU_dataPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    IMU_dataPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    IMU_dataPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        IMU_data *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    IMU_dataPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        IMU_data *out,
        const IMU_data *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    IMU_dataPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const IMU_data *sample); 

    NDDSUSERDllExport extern RTIBool
    IMU_dataPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const IMU_data *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    IMU_dataPlugin_deserialize_from_cdr_buffer(
        IMU_data *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    IMU_dataPlugin_data_to_string(
        const IMU_data *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    IMU_dataPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    IMU_dataPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    IMU_dataPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    IMU_dataPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    IMU_dataPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        IMU_data ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    IMU_dataPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        IMU_dataKeyHolder *key, 
        const IMU_data *instance);

    NDDSUSERDllExport extern RTIBool 
    IMU_dataPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        IMU_data *instance, 
        const IMU_dataKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    IMU_dataPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * IMU_dataPlugin_get_programs(void);

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    IMU_dataPlugin_new(void);

    NDDSUSERDllExport extern void
    IMU_dataPlugin_delete(struct PRESTypePlugin *);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct other_properties_data
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct other_properties_data)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * other_properties_data must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct other_properties_data.
    */
    typedef  class other_properties_data other_properties_dataKeyHolder;

    #define other_properties_dataPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define other_properties_dataPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define other_properties_dataPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define other_properties_dataPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define other_properties_dataPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define other_properties_dataPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define other_properties_dataPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern other_properties_data*
    other_properties_dataPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern other_properties_data*
    other_properties_dataPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern other_properties_data*
    other_properties_dataPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    other_properties_dataPluginSupport_copy_data(
        other_properties_data *out,
        const other_properties_data *in);

    NDDSUSERDllExport extern void 
    other_properties_dataPluginSupport_destroy_data_w_params(
        other_properties_data *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    other_properties_dataPluginSupport_destroy_data_ex(
        other_properties_data *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    other_properties_dataPluginSupport_destroy_data(
        other_properties_data *sample);

    NDDSUSERDllExport extern void 
    other_properties_dataPluginSupport_print_data(
        const other_properties_data *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern other_properties_data*
    other_properties_dataPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern other_properties_data*
    other_properties_dataPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    other_properties_dataPluginSupport_destroy_key_ex(
        other_properties_dataKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    other_properties_dataPluginSupport_destroy_key(
        other_properties_dataKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    other_properties_dataPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    other_properties_dataPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    other_properties_dataPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    other_properties_dataPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    other_properties_dataPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        other_properties_data *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    other_properties_dataPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        other_properties_data *out,
        const other_properties_data *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    other_properties_dataPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const other_properties_data *sample); 

    NDDSUSERDllExport extern RTIBool
    other_properties_dataPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const other_properties_data *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    other_properties_dataPlugin_deserialize_from_cdr_buffer(
        other_properties_data *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    other_properties_dataPlugin_data_to_string(
        const other_properties_data *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    other_properties_dataPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    other_properties_dataPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    other_properties_dataPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    other_properties_dataPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    other_properties_dataPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        other_properties_data ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    other_properties_dataPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        other_properties_dataKeyHolder *key, 
        const other_properties_data *instance);

    NDDSUSERDllExport extern RTIBool 
    other_properties_dataPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        other_properties_data *instance, 
        const other_properties_dataKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    other_properties_dataPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * other_properties_dataPlugin_get_programs(void);

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    other_properties_dataPlugin_new(void);

    NDDSUSERDllExport extern void
    other_properties_dataPlugin_delete(struct PRESTypePlugin *);

}

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* dataPlugin_1787947317_h */

