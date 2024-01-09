

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from vehicle2tele.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "vehicle2tele.hpp"
#include "vehicle2telePlugin.hpp"

#include <rti/util/ostream_operators.hpp>

// ---- status_data: 

status_data::status_data() :
    m_vin_ ("") ,
    m_online_ (0) ,
    m_connected_ (0)  {
}   

status_data::status_data (const std::string& vin,bool online,bool connected):
    m_vin_( vin ),
    m_online_( online ),
    m_connected_( connected ) {
}

#ifdef RTI_CXX11_RVALUE_REFERENCES
#ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
status_data::status_data(status_data&& other_) OMG_NOEXCEPT  :m_vin_ (std::move(other_.m_vin_))
,
m_online_ (std::move(other_.m_online_))
,
m_connected_ (std::move(other_.m_connected_))
{
} 

status_data& status_data::operator=(status_data&&  other_) OMG_NOEXCEPT {
    status_data tmp(std::move(other_));
    swap(tmp); 
    return *this;
}
#endif
#endif   

void status_data::swap(status_data& other_)  OMG_NOEXCEPT 
{
    using std::swap;
    swap(m_vin_, other_.m_vin_);
    swap(m_online_, other_.m_online_);
    swap(m_connected_, other_.m_connected_);
}  

bool status_data::operator == (const status_data& other_) const {
    if (m_vin_ != other_.m_vin_) {
        return false;
    }
    if (m_online_ != other_.m_online_) {
        return false;
    }
    if (m_connected_ != other_.m_connected_) {
        return false;
    }
    return true;
}
bool status_data::operator != (const status_data& other_) const {
    return !this->operator ==(other_);
}

std::ostream& operator << (std::ostream& o,const status_data& sample)
{
    ::rti::util::StreamFlagSaver flag_saver (o);
    o <<"[";
    o << "vin: " << sample.vin()<<", ";
    o << "online: " << sample.online()<<", ";
    o << "connected: " << sample.connected() ;
    o <<"]";
    return o;
}

// ---- GPSlocation_data: 

GPSlocation_data::GPSlocation_data() :
    m_vin_ ("") ,
    m_latitude_ (0.0) ,
    m_longitude_ (0.0) ,
    m_altitude_ (0.0)  {
}   

GPSlocation_data::GPSlocation_data (const std::string& vin,double latitude,double longitude,double altitude):
    m_vin_( vin ),
    m_latitude_( latitude ),
    m_longitude_( longitude ),
    m_altitude_( altitude ) {
}

#ifdef RTI_CXX11_RVALUE_REFERENCES
#ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
GPSlocation_data::GPSlocation_data(GPSlocation_data&& other_) OMG_NOEXCEPT  :m_vin_ (std::move(other_.m_vin_))
,
m_latitude_ (std::move(other_.m_latitude_))
,
m_longitude_ (std::move(other_.m_longitude_))
,
m_altitude_ (std::move(other_.m_altitude_))
{
} 

GPSlocation_data& GPSlocation_data::operator=(GPSlocation_data&&  other_) OMG_NOEXCEPT {
    GPSlocation_data tmp(std::move(other_));
    swap(tmp); 
    return *this;
}
#endif
#endif   

void GPSlocation_data::swap(GPSlocation_data& other_)  OMG_NOEXCEPT 
{
    using std::swap;
    swap(m_vin_, other_.m_vin_);
    swap(m_latitude_, other_.m_latitude_);
    swap(m_longitude_, other_.m_longitude_);
    swap(m_altitude_, other_.m_altitude_);
}  

bool GPSlocation_data::operator == (const GPSlocation_data& other_) const {
    if (m_vin_ != other_.m_vin_) {
        return false;
    }
    if (m_latitude_ != other_.m_latitude_) {
        return false;
    }
    if (m_longitude_ != other_.m_longitude_) {
        return false;
    }
    if (m_altitude_ != other_.m_altitude_) {
        return false;
    }
    return true;
}
bool GPSlocation_data::operator != (const GPSlocation_data& other_) const {
    return !this->operator ==(other_);
}

std::ostream& operator << (std::ostream& o,const GPSlocation_data& sample)
{
    ::rti::util::StreamFlagSaver flag_saver (o);
    o <<"[";
    o << "vin: " << sample.vin()<<", ";
    o << "latitude: " << std::setprecision(15) <<sample.latitude()<<", ";
    o << "longitude: " << std::setprecision(15) <<sample.longitude()<<", ";
    o << "altitude: " << std::setprecision(15) <<sample.altitude() ;
    o <<"]";
    return o;
}

// ---- IMU_data: 

IMU_data::IMU_data() :
    m_vin_ ("")  {
}   

IMU_data::IMU_data (const std::string& vin,const ::rti::core::bounded_sequence< double, 4L >& quaternion,const ::rti::core::bounded_sequence< double, 3L >& angular_velocity,const ::rti::core::bounded_sequence< double, 3L >& linear_acceleration):
    m_vin_( vin ),
    m_quaternion_( quaternion ),
    m_angular_velocity_( angular_velocity ),
    m_linear_acceleration_( linear_acceleration ) {
}

#ifdef RTI_CXX11_RVALUE_REFERENCES
#ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
IMU_data::IMU_data(IMU_data&& other_) OMG_NOEXCEPT  :m_vin_ (std::move(other_.m_vin_))
,
m_quaternion_ (std::move(other_.m_quaternion_))
,
m_angular_velocity_ (std::move(other_.m_angular_velocity_))
,
m_linear_acceleration_ (std::move(other_.m_linear_acceleration_))
{
} 

IMU_data& IMU_data::operator=(IMU_data&&  other_) OMG_NOEXCEPT {
    IMU_data tmp(std::move(other_));
    swap(tmp); 
    return *this;
}
#endif
#endif   

void IMU_data::swap(IMU_data& other_)  OMG_NOEXCEPT 
{
    using std::swap;
    swap(m_vin_, other_.m_vin_);
    swap(m_quaternion_, other_.m_quaternion_);
    swap(m_angular_velocity_, other_.m_angular_velocity_);
    swap(m_linear_acceleration_, other_.m_linear_acceleration_);
}  

bool IMU_data::operator == (const IMU_data& other_) const {
    if (m_vin_ != other_.m_vin_) {
        return false;
    }
    if (m_quaternion_ != other_.m_quaternion_) {
        return false;
    }
    if (m_angular_velocity_ != other_.m_angular_velocity_) {
        return false;
    }
    if (m_linear_acceleration_ != other_.m_linear_acceleration_) {
        return false;
    }
    return true;
}
bool IMU_data::operator != (const IMU_data& other_) const {
    return !this->operator ==(other_);
}

std::ostream& operator << (std::ostream& o,const IMU_data& sample)
{
    ::rti::util::StreamFlagSaver flag_saver (o);
    o <<"[";
    o << "vin: " << sample.vin()<<", ";
    o << "quaternion: " << sample.quaternion()<<", ";
    o << "angular_velocity: " << sample.angular_velocity()<<", ";
    o << "linear_acceleration: " << sample.linear_acceleration() ;
    o <<"]";
    return o;
}

// ---- other_properties_data: 

other_properties_data::other_properties_data() :
    m_vin_ ("") ,
    m_steering_position_ (0.0) ,
    m_speed_ (0.0) ,
    m_indicators_ (0) ,
    m_gear_ (0)  {
}   

other_properties_data::other_properties_data (const std::string& vin,double steering_position,double speed,int32_t indicators,int32_t gear):
    m_vin_( vin ),
    m_steering_position_( steering_position ),
    m_speed_( speed ),
    m_indicators_( indicators ),
    m_gear_( gear ) {
}

#ifdef RTI_CXX11_RVALUE_REFERENCES
#ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
other_properties_data::other_properties_data(other_properties_data&& other_) OMG_NOEXCEPT  :m_vin_ (std::move(other_.m_vin_))
,
m_steering_position_ (std::move(other_.m_steering_position_))
,
m_speed_ (std::move(other_.m_speed_))
,
m_indicators_ (std::move(other_.m_indicators_))
,
m_gear_ (std::move(other_.m_gear_))
{
} 

other_properties_data& other_properties_data::operator=(other_properties_data&&  other_) OMG_NOEXCEPT {
    other_properties_data tmp(std::move(other_));
    swap(tmp); 
    return *this;
}
#endif
#endif   

void other_properties_data::swap(other_properties_data& other_)  OMG_NOEXCEPT 
{
    using std::swap;
    swap(m_vin_, other_.m_vin_);
    swap(m_steering_position_, other_.m_steering_position_);
    swap(m_speed_, other_.m_speed_);
    swap(m_indicators_, other_.m_indicators_);
    swap(m_gear_, other_.m_gear_);
}  

bool other_properties_data::operator == (const other_properties_data& other_) const {
    if (m_vin_ != other_.m_vin_) {
        return false;
    }
    if (m_steering_position_ != other_.m_steering_position_) {
        return false;
    }
    if (m_speed_ != other_.m_speed_) {
        return false;
    }
    if (m_indicators_ != other_.m_indicators_) {
        return false;
    }
    if (m_gear_ != other_.m_gear_) {
        return false;
    }
    return true;
}
bool other_properties_data::operator != (const other_properties_data& other_) const {
    return !this->operator ==(other_);
}

std::ostream& operator << (std::ostream& o,const other_properties_data& sample)
{
    ::rti::util::StreamFlagSaver flag_saver (o);
    o <<"[";
    o << "vin: " << sample.vin()<<", ";
    o << "steering_position: " << std::setprecision(15) <<sample.steering_position()<<", ";
    o << "speed: " << std::setprecision(15) <<sample.speed()<<", ";
    o << "indicators: " << sample.indicators()<<", ";
    o << "gear: " << sample.gear() ;
    o <<"]";
    return o;
}

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< status_data > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode status_data_g_tc_vin_string;

                static DDS_TypeCode_Member status_data_g_tc_members[3]=
                {

                    {
                        (char *)"vin",/* Member name */
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
                        (char *)"online",/* Member name */
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
                        (char *)"connected",/* Member name */
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
                    }
                };

                static DDS_TypeCode status_data_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"status_data", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        status_data_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for status_data*/

                if (is_initialized) {
                    return &status_data_g_tc;
                }

                status_data_g_tc_vin_string = initialize_string_typecode((255L));

                status_data_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                status_data_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&status_data_g_tc_vin_string;
                status_data_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                status_data_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();

                /* Initialize the values for member annotations. */
                status_data_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                status_data_g_tc_members[0]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                status_data_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                status_data_g_tc_members[1]._annotations._defaultValue._u.boolean_value = 0;

                status_data_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                status_data_g_tc_members[2]._annotations._defaultValue._u.boolean_value = 0;

                status_data_g_tc._data._sampleAccessInfo = sample_access_info();
                status_data_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &status_data_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                status_data *sample;

                static RTIXCdrMemberAccessInfo status_data_g_memberAccessInfos[3] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo status_data_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &status_data_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    status_data);
                if (sample == NULL) {
                    return NULL;
                }

                status_data_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->vin() - (char *)sample);

                status_data_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->online() - (char *)sample);

                status_data_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->connected() - (char *)sample);

                status_data_g_sampleAccessInfo.memberAccessInfos = 
                status_data_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(status_data);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        status_data_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        status_data_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                status_data_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                status_data_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< status_data >;

                status_data_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &status_data_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin status_data_g_typePlugin = 
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

                return &status_data_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< status_data >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< status_data >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< GPSlocation_data > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode GPSlocation_data_g_tc_vin_string;

                static DDS_TypeCode_Member GPSlocation_data_g_tc_members[4]=
                {

                    {
                        (char *)"vin",/* Member name */
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
                        (char *)"latitude",/* Member name */
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
                        (char *)"longitude",/* Member name */
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
                        (char *)"altitude",/* Member name */
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
                    }
                };

                static DDS_TypeCode GPSlocation_data_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"GPSlocation_data", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        GPSlocation_data_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for GPSlocation_data*/

                if (is_initialized) {
                    return &GPSlocation_data_g_tc;
                }

                GPSlocation_data_g_tc_vin_string = initialize_string_typecode((255L));

                GPSlocation_data_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                GPSlocation_data_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&GPSlocation_data_g_tc_vin_string;
                GPSlocation_data_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
                GPSlocation_data_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
                GPSlocation_data_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

                /* Initialize the values for member annotations. */
                GPSlocation_data_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                GPSlocation_data_g_tc_members[0]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                GPSlocation_data_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                GPSlocation_data_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
                GPSlocation_data_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                GPSlocation_data_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                GPSlocation_data_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                GPSlocation_data_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                GPSlocation_data_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                GPSlocation_data_g_tc_members[2]._annotations._defaultValue._u.double_value = 0.0;
                GPSlocation_data_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                GPSlocation_data_g_tc_members[2]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                GPSlocation_data_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                GPSlocation_data_g_tc_members[2]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                GPSlocation_data_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                GPSlocation_data_g_tc_members[3]._annotations._defaultValue._u.double_value = 0.0;
                GPSlocation_data_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                GPSlocation_data_g_tc_members[3]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                GPSlocation_data_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                GPSlocation_data_g_tc_members[3]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                GPSlocation_data_g_tc._data._sampleAccessInfo = sample_access_info();
                GPSlocation_data_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &GPSlocation_data_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                GPSlocation_data *sample;

                static RTIXCdrMemberAccessInfo GPSlocation_data_g_memberAccessInfos[4] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo GPSlocation_data_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &GPSlocation_data_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    GPSlocation_data);
                if (sample == NULL) {
                    return NULL;
                }

                GPSlocation_data_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->vin() - (char *)sample);

                GPSlocation_data_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->latitude() - (char *)sample);

                GPSlocation_data_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->longitude() - (char *)sample);

                GPSlocation_data_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->altitude() - (char *)sample);

                GPSlocation_data_g_sampleAccessInfo.memberAccessInfos = 
                GPSlocation_data_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(GPSlocation_data);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        GPSlocation_data_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        GPSlocation_data_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                GPSlocation_data_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                GPSlocation_data_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< GPSlocation_data >;

                GPSlocation_data_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &GPSlocation_data_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin GPSlocation_data_g_typePlugin = 
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

                return &GPSlocation_data_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< GPSlocation_data >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< GPSlocation_data >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< IMU_data > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode IMU_data_g_tc_vin_string;
                static DDS_TypeCode IMU_data_g_tc_quaternion_sequence;
                static DDS_TypeCode IMU_data_g_tc_angular_velocity_sequence;
                static DDS_TypeCode IMU_data_g_tc_linear_acceleration_sequence;

                static DDS_TypeCode_Member IMU_data_g_tc_members[4]=
                {

                    {
                        (char *)"vin",/* Member name */
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
                        (char *)"quaternion",/* Member name */
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
                        (char *)"angular_velocity",/* Member name */
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
                        (char *)"linear_acceleration",/* Member name */
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
                    }
                };

                static DDS_TypeCode IMU_data_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"IMU_data", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        IMU_data_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for IMU_data*/

                if (is_initialized) {
                    return &IMU_data_g_tc;
                }

                IMU_data_g_tc_vin_string = initialize_string_typecode((255L));
                IMU_data_g_tc_quaternion_sequence = initialize_sequence_typecode< ::rti::core::bounded_sequence< double, 4L > >((4L));
                IMU_data_g_tc_angular_velocity_sequence = initialize_sequence_typecode< ::rti::core::bounded_sequence< double, 3L > >((3L));
                IMU_data_g_tc_linear_acceleration_sequence = initialize_sequence_typecode< ::rti::core::bounded_sequence< double, 3L > >((3L));

                IMU_data_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                IMU_data_g_tc_quaternion_sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
                IMU_data_g_tc_angular_velocity_sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
                IMU_data_g_tc_linear_acceleration_sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
                IMU_data_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&IMU_data_g_tc_vin_string;
                IMU_data_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)& IMU_data_g_tc_quaternion_sequence;
                IMU_data_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)& IMU_data_g_tc_angular_velocity_sequence;
                IMU_data_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)& IMU_data_g_tc_linear_acceleration_sequence;

                /* Initialize the values for member annotations. */
                IMU_data_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                IMU_data_g_tc_members[0]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                IMU_data_g_tc._data._sampleAccessInfo = sample_access_info();
                IMU_data_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &IMU_data_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                IMU_data *sample;

                static RTIXCdrMemberAccessInfo IMU_data_g_memberAccessInfos[4] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo IMU_data_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &IMU_data_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    IMU_data);
                if (sample == NULL) {
                    return NULL;
                }

                IMU_data_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->vin() - (char *)sample);

                IMU_data_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->quaternion() - (char *)sample);

                IMU_data_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->angular_velocity() - (char *)sample);

                IMU_data_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->linear_acceleration() - (char *)sample);

                IMU_data_g_sampleAccessInfo.memberAccessInfos = 
                IMU_data_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(IMU_data);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        IMU_data_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        IMU_data_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                IMU_data_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                IMU_data_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< IMU_data >;

                IMU_data_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &IMU_data_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin IMU_data_g_typePlugin = 
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

                return &IMU_data_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< IMU_data >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< IMU_data >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< other_properties_data > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode other_properties_data_g_tc_vin_string;

                static DDS_TypeCode_Member other_properties_data_g_tc_members[5]=
                {

                    {
                        (char *)"vin",/* Member name */
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
                        (char *)"steering_position",/* Member name */
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
                        (char *)"speed",/* Member name */
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
                        (char *)"indicators",/* Member name */
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
                        (char *)"gear",/* Member name */
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
                    }
                };

                static DDS_TypeCode other_properties_data_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"other_properties_data", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        5, /* Number of members */
                        other_properties_data_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for other_properties_data*/

                if (is_initialized) {
                    return &other_properties_data_g_tc;
                }

                other_properties_data_g_tc_vin_string = initialize_string_typecode((255L));

                other_properties_data_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                other_properties_data_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&other_properties_data_g_tc_vin_string;
                other_properties_data_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
                other_properties_data_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
                other_properties_data_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
                other_properties_data_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

                /* Initialize the values for member annotations. */
                other_properties_data_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                other_properties_data_g_tc_members[0]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                other_properties_data_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                other_properties_data_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
                other_properties_data_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                other_properties_data_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                other_properties_data_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                other_properties_data_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                other_properties_data_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                other_properties_data_g_tc_members[2]._annotations._defaultValue._u.double_value = 0.0;
                other_properties_data_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                other_properties_data_g_tc_members[2]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                other_properties_data_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                other_properties_data_g_tc_members[2]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                other_properties_data_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                other_properties_data_g_tc_members[3]._annotations._defaultValue._u.long_value = 0;
                other_properties_data_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                other_properties_data_g_tc_members[3]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                other_properties_data_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                other_properties_data_g_tc_members[3]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

                other_properties_data_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                other_properties_data_g_tc_members[4]._annotations._defaultValue._u.long_value = 0;
                other_properties_data_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                other_properties_data_g_tc_members[4]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                other_properties_data_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                other_properties_data_g_tc_members[4]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

                other_properties_data_g_tc._data._sampleAccessInfo = sample_access_info();
                other_properties_data_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &other_properties_data_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                other_properties_data *sample;

                static RTIXCdrMemberAccessInfo other_properties_data_g_memberAccessInfos[5] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo other_properties_data_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &other_properties_data_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    other_properties_data);
                if (sample == NULL) {
                    return NULL;
                }

                other_properties_data_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->vin() - (char *)sample);

                other_properties_data_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->steering_position() - (char *)sample);

                other_properties_data_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->speed() - (char *)sample);

                other_properties_data_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->indicators() - (char *)sample);

                other_properties_data_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->gear() - (char *)sample);

                other_properties_data_g_sampleAccessInfo.memberAccessInfos = 
                other_properties_data_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(other_properties_data);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        other_properties_data_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        other_properties_data_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                other_properties_data_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                other_properties_data_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< other_properties_data >;

                other_properties_data_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &other_properties_data_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin other_properties_data_g_typePlugin = 
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

                return &other_properties_data_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< other_properties_data >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< other_properties_data >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< status_data >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                status_dataPlugin_new,
                status_dataPlugin_delete);
        }

        std::vector<char>& topic_type_support< status_data >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const status_data& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = status_dataPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = status_dataPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< status_data >::from_cdr_buffer(status_data& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = status_dataPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create status_data from cdr buffer");
        }

        void topic_type_support< status_data >::reset_sample(status_data& sample) 
        {
            sample.vin("");
            sample.online(0);
            sample.connected(0);
        }

        void topic_type_support< status_data >::allocate_sample(status_data& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.vin(),  -1, 255L);
        }

        void topic_type_support< GPSlocation_data >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                GPSlocation_dataPlugin_new,
                GPSlocation_dataPlugin_delete);
        }

        std::vector<char>& topic_type_support< GPSlocation_data >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const GPSlocation_data& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = GPSlocation_dataPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = GPSlocation_dataPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< GPSlocation_data >::from_cdr_buffer(GPSlocation_data& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = GPSlocation_dataPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create GPSlocation_data from cdr buffer");
        }

        void topic_type_support< GPSlocation_data >::reset_sample(GPSlocation_data& sample) 
        {
            sample.vin("");
            sample.latitude(0.0);
            sample.longitude(0.0);
            sample.altitude(0.0);
        }

        void topic_type_support< GPSlocation_data >::allocate_sample(GPSlocation_data& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.vin(),  -1, 255L);
        }

        void topic_type_support< IMU_data >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                IMU_dataPlugin_new,
                IMU_dataPlugin_delete);
        }

        std::vector<char>& topic_type_support< IMU_data >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const IMU_data& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = IMU_dataPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = IMU_dataPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< IMU_data >::from_cdr_buffer(IMU_data& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = IMU_dataPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create IMU_data from cdr buffer");
        }

        void topic_type_support< IMU_data >::reset_sample(IMU_data& sample) 
        {
            sample.vin("");
            ::rti::topic::reset_sample(sample.quaternion());
            ::rti::topic::reset_sample(sample.angular_velocity());
            ::rti::topic::reset_sample(sample.linear_acceleration());
        }

        void topic_type_support< IMU_data >::allocate_sample(IMU_data& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.vin(),  -1, 255L);
            ::rti::topic::allocate_sample(sample.quaternion(),  4L, -1);
            ::rti::topic::allocate_sample(sample.angular_velocity(),  3L, -1);
            ::rti::topic::allocate_sample(sample.linear_acceleration(),  3L, -1);
        }

        void topic_type_support< other_properties_data >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                other_properties_dataPlugin_new,
                other_properties_dataPlugin_delete);
        }

        std::vector<char>& topic_type_support< other_properties_data >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const other_properties_data& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = other_properties_dataPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = other_properties_dataPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< other_properties_data >::from_cdr_buffer(other_properties_data& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = other_properties_dataPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create other_properties_data from cdr buffer");
        }

        void topic_type_support< other_properties_data >::reset_sample(other_properties_data& sample) 
        {
            sample.vin("");
            sample.steering_position(0.0);
            sample.speed(0.0);
            sample.indicators(0);
            sample.gear(0);
        }

        void topic_type_support< other_properties_data >::allocate_sample(other_properties_data& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.vin(),  -1, 255L);
        }

    }
}  

