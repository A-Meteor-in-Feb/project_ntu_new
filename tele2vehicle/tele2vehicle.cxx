

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from tele2vehicle.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "tele2vehicle.hpp"
#include "tele2vehiclePlugin.hpp"

#include <rti/util/ostream_operators.hpp>

// ---- control_data: 

control_data::control_data() :
    m_tele_ ("") ,
    m_steering_ (0.0f) ,
    m_gear_ (0) ,
    m_acceleration_ (0.0f) ,
    m_brake_ (0.0f) ,
    m_additional_button1_ (0) ,
    m_additional_button2_ (0) ,
    m_additional_button3_ (0)  {
}   

control_data::control_data (const std::string& tele,float steering,int32_t gear,float acceleration,float brake,int32_t additional_button1,int32_t additional_button2,int32_t additional_button3):
    m_tele_( tele ),
    m_steering_( steering ),
    m_gear_( gear ),
    m_acceleration_( acceleration ),
    m_brake_( brake ),
    m_additional_button1_( additional_button1 ),
    m_additional_button2_( additional_button2 ),
    m_additional_button3_( additional_button3 ) {
}

#ifdef RTI_CXX11_RVALUE_REFERENCES
#ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
control_data::control_data(control_data&& other_) OMG_NOEXCEPT  :m_tele_ (std::move(other_.m_tele_))
,
m_steering_ (std::move(other_.m_steering_))
,
m_gear_ (std::move(other_.m_gear_))
,
m_acceleration_ (std::move(other_.m_acceleration_))
,
m_brake_ (std::move(other_.m_brake_))
,
m_additional_button1_ (std::move(other_.m_additional_button1_))
,
m_additional_button2_ (std::move(other_.m_additional_button2_))
,
m_additional_button3_ (std::move(other_.m_additional_button3_))
{
} 

control_data& control_data::operator=(control_data&&  other_) OMG_NOEXCEPT {
    control_data tmp(std::move(other_));
    swap(tmp); 
    return *this;
}
#endif
#endif   

void control_data::swap(control_data& other_)  OMG_NOEXCEPT 
{
    using std::swap;
    swap(m_tele_, other_.m_tele_);
    swap(m_steering_, other_.m_steering_);
    swap(m_gear_, other_.m_gear_);
    swap(m_acceleration_, other_.m_acceleration_);
    swap(m_brake_, other_.m_brake_);
    swap(m_additional_button1_, other_.m_additional_button1_);
    swap(m_additional_button2_, other_.m_additional_button2_);
    swap(m_additional_button3_, other_.m_additional_button3_);
}  

bool control_data::operator == (const control_data& other_) const {
    if (m_tele_ != other_.m_tele_) {
        return false;
    }
    if (m_steering_ != other_.m_steering_) {
        return false;
    }
    if (m_gear_ != other_.m_gear_) {
        return false;
    }
    if (m_acceleration_ != other_.m_acceleration_) {
        return false;
    }
    if (m_brake_ != other_.m_brake_) {
        return false;
    }
    if (m_additional_button1_ != other_.m_additional_button1_) {
        return false;
    }
    if (m_additional_button2_ != other_.m_additional_button2_) {
        return false;
    }
    if (m_additional_button3_ != other_.m_additional_button3_) {
        return false;
    }
    return true;
}
bool control_data::operator != (const control_data& other_) const {
    return !this->operator ==(other_);
}

std::ostream& operator << (std::ostream& o,const control_data& sample)
{
    ::rti::util::StreamFlagSaver flag_saver (o);
    o <<"[";
    o << "tele: " << sample.tele()<<", ";
    o << "steering: " << std::setprecision(9) <<sample.steering()<<", ";
    o << "gear: " << sample.gear()<<", ";
    o << "acceleration: " << std::setprecision(9) <<sample.acceleration()<<", ";
    o << "brake: " << std::setprecision(9) <<sample.brake()<<", ";
    o << "additional_button1: " << sample.additional_button1()<<", ";
    o << "additional_button2: " << sample.additional_button2()<<", ";
    o << "additional_button3: " << sample.additional_button3() ;
    o <<"]";
    return o;
}

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< control_data > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode control_data_g_tc_tele_string;

                static DDS_TypeCode_Member control_data_g_tc_members[8]=
                {

                    {
                        (char *)"tele",/* Member name */
                        {
                            0,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_KEY_MEMBER , /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"steering",/* Member name */
                        {
                            1,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"gear",/* Member name */
                        {
                            2,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"acceleration",/* Member name */
                        {
                            3,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"brake",/* Member name */
                        {
                            4,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"additional_button1",/* Member name */
                        {
                            5,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"additional_button2",/* Member name */
                        {
                            6,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"additional_button3",/* Member name */
                        {
                            7,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode control_data_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"control_data", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        8, /* Number of members */
                        control_data_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for control_data*/

                if (is_initialized) {
                    return &control_data_g_tc;
                }

                control_data_g_tc_tele_string = initialize_string_typecode((255L));

                control_data_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                control_data_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&control_data_g_tc_tele_string;
                control_data_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
                control_data_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
                control_data_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
                control_data_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
                control_data_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
                control_data_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
                control_data_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

                /* Initialize the values for member annotations. */
                control_data_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                control_data_g_tc_members[0]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                control_data_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_FLOAT;
                control_data_g_tc_members[1]._annotations._defaultValue._u.float_value = 0.0f;
                control_data_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_FLOAT;
                control_data_g_tc_members[1]._annotations._minValue._u.float_value = RTIXCdrFloat_MIN;
                control_data_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_FLOAT;
                control_data_g_tc_members[1]._annotations._maxValue._u.float_value = RTIXCdrFloat_MAX;

                control_data_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                control_data_g_tc_members[2]._annotations._defaultValue._u.long_value = 0;
                control_data_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                control_data_g_tc_members[2]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                control_data_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                control_data_g_tc_members[2]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

                control_data_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_FLOAT;
                control_data_g_tc_members[3]._annotations._defaultValue._u.float_value = 0.0f;
                control_data_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_FLOAT;
                control_data_g_tc_members[3]._annotations._minValue._u.float_value = RTIXCdrFloat_MIN;
                control_data_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_FLOAT;
                control_data_g_tc_members[3]._annotations._maxValue._u.float_value = RTIXCdrFloat_MAX;

                control_data_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_FLOAT;
                control_data_g_tc_members[4]._annotations._defaultValue._u.float_value = 0.0f;
                control_data_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_FLOAT;
                control_data_g_tc_members[4]._annotations._minValue._u.float_value = RTIXCdrFloat_MIN;
                control_data_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_FLOAT;
                control_data_g_tc_members[4]._annotations._maxValue._u.float_value = RTIXCdrFloat_MAX;

                control_data_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                control_data_g_tc_members[5]._annotations._defaultValue._u.long_value = 0;
                control_data_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                control_data_g_tc_members[5]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                control_data_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                control_data_g_tc_members[5]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

                control_data_g_tc_members[6]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                control_data_g_tc_members[6]._annotations._defaultValue._u.long_value = 0;
                control_data_g_tc_members[6]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                control_data_g_tc_members[6]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                control_data_g_tc_members[6]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                control_data_g_tc_members[6]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

                control_data_g_tc_members[7]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                control_data_g_tc_members[7]._annotations._defaultValue._u.long_value = 0;
                control_data_g_tc_members[7]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                control_data_g_tc_members[7]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                control_data_g_tc_members[7]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                control_data_g_tc_members[7]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

                control_data_g_tc._data._sampleAccessInfo = sample_access_info();
                control_data_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &control_data_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                control_data *sample;

                static RTIXCdrMemberAccessInfo control_data_g_memberAccessInfos[8] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo control_data_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &control_data_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    control_data);
                if (sample == NULL) {
                    return NULL;
                }

                control_data_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->tele() - (char *)sample);

                control_data_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->steering() - (char *)sample);

                control_data_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->gear() - (char *)sample);

                control_data_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->acceleration() - (char *)sample);

                control_data_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->brake() - (char *)sample);

                control_data_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->additional_button1() - (char *)sample);

                control_data_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->additional_button2() - (char *)sample);

                control_data_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->additional_button3() - (char *)sample);

                control_data_g_sampleAccessInfo.memberAccessInfos = 
                control_data_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(control_data);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        control_data_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        control_data_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                control_data_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                control_data_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< control_data >;

                control_data_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &control_data_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin control_data_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &control_data_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< control_data >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< control_data >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< control_data >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                control_dataPlugin_new,
                control_dataPlugin_delete);
        }

        std::vector<char>& topic_type_support< control_data >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const control_data& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = control_dataPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = control_dataPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< control_data >::from_cdr_buffer(control_data& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = control_dataPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create control_data from cdr buffer");
        }

        void topic_type_support< control_data >::reset_sample(control_data& sample) 
        {
            sample.tele("");
            sample.steering(0.0f);
            sample.gear(0);
            sample.acceleration(0.0f);
            sample.brake(0.0f);
            sample.additional_button1(0);
            sample.additional_button2(0);
            sample.additional_button3(0);
        }

        void topic_type_support< control_data >::allocate_sample(control_data& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.tele(),  -1, 255L);
        }

    }
}  

