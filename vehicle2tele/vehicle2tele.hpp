

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from vehicle2tele.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef vehicle2tele_772184108_hpp
#define vehicle2tele_772184108_hpp

#include <iosfwd>

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef RTIUSERDllExport
#define RTIUSERDllExport __declspec(dllexport)
#endif

#include "dds/domain/DomainParticipant.hpp"
#include "dds/topic/TopicTraits.hpp"
#include "dds/core/SafeEnumeration.hpp"
#include "dds/core/String.hpp"
#include "dds/core/array.hpp"
#include "dds/core/vector.hpp"
#include "dds/core/Optional.hpp"
#include "dds/core/xtypes/DynamicType.hpp"
#include "dds/core/xtypes/StructType.hpp"
#include "dds/core/xtypes/UnionType.hpp"
#include "dds/core/xtypes/EnumType.hpp"
#include "dds/core/xtypes/AliasType.hpp"
#include "rti/core/array.hpp"
#include "rti/core/BoundedSequence.hpp"
#include "rti/util/StreamFlagSaver.hpp"
#include "rti/domain/PluginSupport.hpp"
#include "rti/core/LongDouble.hpp"
#include "dds/core/External.hpp"
#include "rti/core/Pointer.hpp"
#include "rti/topic/TopicTraits.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef RTIUSERDllExport
#define RTIUSERDllExport
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

class NDDSUSERDllExport status_data {
  public:
    status_data();

    status_data(const std::string& vin,bool online,bool connected);

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    status_data (status_data&&) = default;
    status_data& operator=(status_data&&) = default;
    status_data& operator=(const status_data&) = default;
    status_data(const status_data&) = default;
    #else
    status_data(status_data&& other_) OMG_NOEXCEPT;  
    status_data& operator=(status_data&&  other_) OMG_NOEXCEPT;
    #endif
    #endif 

    std::string& vin() OMG_NOEXCEPT {
        return m_vin_;
    }

    const std::string& vin() const OMG_NOEXCEPT {
        return m_vin_;
    }

    void vin(const std::string& value) {
        m_vin_ = value;
    }

    void vin(std::string&& value) {
        m_vin_ = std::move(value);
    }
    bool& online() OMG_NOEXCEPT {
        return m_online_;
    }

    const bool& online() const OMG_NOEXCEPT {
        return m_online_;
    }

    void online(bool value) {
        m_online_ = value;
    }

    bool& connected() OMG_NOEXCEPT {
        return m_connected_;
    }

    const bool& connected() const OMG_NOEXCEPT {
        return m_connected_;
    }

    void connected(bool value) {
        m_connected_ = value;
    }

    bool operator == (const status_data& other_) const;
    bool operator != (const status_data& other_) const;

    void swap(status_data& other_) OMG_NOEXCEPT ;

  private:

    std::string m_vin_;
    bool m_online_;
    bool m_connected_;

};

inline void swap(status_data& a, status_data& b)  OMG_NOEXCEPT 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const status_data& sample);

class NDDSUSERDllExport GPSlocation_data {
  public:
    GPSlocation_data();

    GPSlocation_data(const std::string& vin,double latitude,double longitude,double altitude);

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    GPSlocation_data (GPSlocation_data&&) = default;
    GPSlocation_data& operator=(GPSlocation_data&&) = default;
    GPSlocation_data& operator=(const GPSlocation_data&) = default;
    GPSlocation_data(const GPSlocation_data&) = default;
    #else
    GPSlocation_data(GPSlocation_data&& other_) OMG_NOEXCEPT;  
    GPSlocation_data& operator=(GPSlocation_data&&  other_) OMG_NOEXCEPT;
    #endif
    #endif 

    std::string& vin() OMG_NOEXCEPT {
        return m_vin_;
    }

    const std::string& vin() const OMG_NOEXCEPT {
        return m_vin_;
    }

    void vin(const std::string& value) {
        m_vin_ = value;
    }

    void vin(std::string&& value) {
        m_vin_ = std::move(value);
    }
    double& latitude() OMG_NOEXCEPT {
        return m_latitude_;
    }

    const double& latitude() const OMG_NOEXCEPT {
        return m_latitude_;
    }

    void latitude(double value) {
        m_latitude_ = value;
    }

    double& longitude() OMG_NOEXCEPT {
        return m_longitude_;
    }

    const double& longitude() const OMG_NOEXCEPT {
        return m_longitude_;
    }

    void longitude(double value) {
        m_longitude_ = value;
    }

    double& altitude() OMG_NOEXCEPT {
        return m_altitude_;
    }

    const double& altitude() const OMG_NOEXCEPT {
        return m_altitude_;
    }

    void altitude(double value) {
        m_altitude_ = value;
    }

    bool operator == (const GPSlocation_data& other_) const;
    bool operator != (const GPSlocation_data& other_) const;

    void swap(GPSlocation_data& other_) OMG_NOEXCEPT ;

  private:

    std::string m_vin_;
    double m_latitude_;
    double m_longitude_;
    double m_altitude_;

};

inline void swap(GPSlocation_data& a, GPSlocation_data& b)  OMG_NOEXCEPT 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const GPSlocation_data& sample);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
// On Windows, dll-export template instantiations of standard types used by
// other dll-exported types
template class NDDSUSERDllExport std::allocator< double >;
template class NDDSUSERDllExport std::vector< double >;
#endif
class NDDSUSERDllExport IMU_data {
  public:
    IMU_data();

    IMU_data(const std::string& vin,const ::rti::core::bounded_sequence< double, 4L >& quaternion,const ::rti::core::bounded_sequence< double, 3L >& angular_velocity,const ::rti::core::bounded_sequence< double, 3L >& linear_acceleration);

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    IMU_data (IMU_data&&) = default;
    IMU_data& operator=(IMU_data&&) = default;
    IMU_data& operator=(const IMU_data&) = default;
    IMU_data(const IMU_data&) = default;
    #else
    IMU_data(IMU_data&& other_) OMG_NOEXCEPT;  
    IMU_data& operator=(IMU_data&&  other_) OMG_NOEXCEPT;
    #endif
    #endif 

    std::string& vin() OMG_NOEXCEPT {
        return m_vin_;
    }

    const std::string& vin() const OMG_NOEXCEPT {
        return m_vin_;
    }

    void vin(const std::string& value) {
        m_vin_ = value;
    }

    void vin(std::string&& value) {
        m_vin_ = std::move(value);
    }
    ::rti::core::bounded_sequence< double, 4L >& quaternion() OMG_NOEXCEPT {
        return m_quaternion_;
    }

    const ::rti::core::bounded_sequence< double, 4L >& quaternion() const OMG_NOEXCEPT {
        return m_quaternion_;
    }

    void quaternion(const ::rti::core::bounded_sequence< double, 4L >& value) {
        m_quaternion_ = value;
    }

    void quaternion(::rti::core::bounded_sequence< double, 4L >&& value) {
        m_quaternion_ = std::move(value);
    }
    ::rti::core::bounded_sequence< double, 3L >& angular_velocity() OMG_NOEXCEPT {
        return m_angular_velocity_;
    }

    const ::rti::core::bounded_sequence< double, 3L >& angular_velocity() const OMG_NOEXCEPT {
        return m_angular_velocity_;
    }

    void angular_velocity(const ::rti::core::bounded_sequence< double, 3L >& value) {
        m_angular_velocity_ = value;
    }

    void angular_velocity(::rti::core::bounded_sequence< double, 3L >&& value) {
        m_angular_velocity_ = std::move(value);
    }
    ::rti::core::bounded_sequence< double, 3L >& linear_acceleration() OMG_NOEXCEPT {
        return m_linear_acceleration_;
    }

    const ::rti::core::bounded_sequence< double, 3L >& linear_acceleration() const OMG_NOEXCEPT {
        return m_linear_acceleration_;
    }

    void linear_acceleration(const ::rti::core::bounded_sequence< double, 3L >& value) {
        m_linear_acceleration_ = value;
    }

    void linear_acceleration(::rti::core::bounded_sequence< double, 3L >&& value) {
        m_linear_acceleration_ = std::move(value);
    }

    bool operator == (const IMU_data& other_) const;
    bool operator != (const IMU_data& other_) const;

    void swap(IMU_data& other_) OMG_NOEXCEPT ;

  private:

    std::string m_vin_;
    ::rti::core::bounded_sequence< double, 4L > m_quaternion_;
    ::rti::core::bounded_sequence< double, 3L > m_angular_velocity_;
    ::rti::core::bounded_sequence< double, 3L > m_linear_acceleration_;

};

inline void swap(IMU_data& a, IMU_data& b)  OMG_NOEXCEPT 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const IMU_data& sample);

class NDDSUSERDllExport other_properties_data {
  public:
    other_properties_data();

    other_properties_data(const std::string& vin,double steering_position,double speed,int32_t indicators,int32_t gear);

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    other_properties_data (other_properties_data&&) = default;
    other_properties_data& operator=(other_properties_data&&) = default;
    other_properties_data& operator=(const other_properties_data&) = default;
    other_properties_data(const other_properties_data&) = default;
    #else
    other_properties_data(other_properties_data&& other_) OMG_NOEXCEPT;  
    other_properties_data& operator=(other_properties_data&&  other_) OMG_NOEXCEPT;
    #endif
    #endif 

    std::string& vin() OMG_NOEXCEPT {
        return m_vin_;
    }

    const std::string& vin() const OMG_NOEXCEPT {
        return m_vin_;
    }

    void vin(const std::string& value) {
        m_vin_ = value;
    }

    void vin(std::string&& value) {
        m_vin_ = std::move(value);
    }
    double& steering_position() OMG_NOEXCEPT {
        return m_steering_position_;
    }

    const double& steering_position() const OMG_NOEXCEPT {
        return m_steering_position_;
    }

    void steering_position(double value) {
        m_steering_position_ = value;
    }

    double& speed() OMG_NOEXCEPT {
        return m_speed_;
    }

    const double& speed() const OMG_NOEXCEPT {
        return m_speed_;
    }

    void speed(double value) {
        m_speed_ = value;
    }

    int32_t& indicators() OMG_NOEXCEPT {
        return m_indicators_;
    }

    const int32_t& indicators() const OMG_NOEXCEPT {
        return m_indicators_;
    }

    void indicators(int32_t value) {
        m_indicators_ = value;
    }

    int32_t& gear() OMG_NOEXCEPT {
        return m_gear_;
    }

    const int32_t& gear() const OMG_NOEXCEPT {
        return m_gear_;
    }

    void gear(int32_t value) {
        m_gear_ = value;
    }

    bool operator == (const other_properties_data& other_) const;
    bool operator != (const other_properties_data& other_) const;

    void swap(other_properties_data& other_) OMG_NOEXCEPT ;

  private:

    std::string m_vin_;
    double m_steering_position_;
    double m_speed_;
    int32_t m_indicators_;
    int32_t m_gear_;

};

inline void swap(other_properties_data& a, other_properties_data& b)  OMG_NOEXCEPT 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const other_properties_data& sample);

namespace rti {
    namespace flat {
        namespace topic {
        }
    }
}
namespace dds {
    namespace topic {

        template<>
        struct topic_type_name< status_data > {
            NDDSUSERDllExport static std::string value() {
                return "status_data";
            }
        };

        template<>
        struct is_topic_type< status_data > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< status_data > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const status_data& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(status_data& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(status_data& sample);

            NDDSUSERDllExport 
            static void allocate_sample(status_data& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< GPSlocation_data > {
            NDDSUSERDllExport static std::string value() {
                return "GPSlocation_data";
            }
        };

        template<>
        struct is_topic_type< GPSlocation_data > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< GPSlocation_data > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const GPSlocation_data& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(GPSlocation_data& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(GPSlocation_data& sample);

            NDDSUSERDllExport 
            static void allocate_sample(GPSlocation_data& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< IMU_data > {
            NDDSUSERDllExport static std::string value() {
                return "IMU_data";
            }
        };

        template<>
        struct is_topic_type< IMU_data > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< IMU_data > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const IMU_data& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(IMU_data& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(IMU_data& sample);

            NDDSUSERDllExport 
            static void allocate_sample(IMU_data& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< other_properties_data > {
            NDDSUSERDllExport static std::string value() {
                return "other_properties_data";
            }
        };

        template<>
        struct is_topic_type< other_properties_data > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< other_properties_data > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const other_properties_data& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(other_properties_data& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(other_properties_data& sample);

            NDDSUSERDllExport 
            static void allocate_sample(other_properties_data& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {
        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< status_data > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< status_data > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< GPSlocation_data > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< GPSlocation_data > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< IMU_data > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< IMU_data > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< other_properties_data > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< other_properties_data > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

    }
}

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif // vehicle2tele_772184108_hpp

