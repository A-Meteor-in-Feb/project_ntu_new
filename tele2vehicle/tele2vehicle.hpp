

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from tele2vehicle.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef tele2vehicle_1708843959_hpp
#define tele2vehicle_1708843959_hpp

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

class NDDSUSERDllExport control_data {
  public:
    control_data();

    control_data(const std::string& tele,float steering,int32_t gear,float acceleration,float brake,int32_t additional_button1,int32_t additional_button2,int32_t additional_button3);

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    control_data (control_data&&) = default;
    control_data& operator=(control_data&&) = default;
    control_data& operator=(const control_data&) = default;
    control_data(const control_data&) = default;
    #else
    control_data(control_data&& other_) OMG_NOEXCEPT;  
    control_data& operator=(control_data&&  other_) OMG_NOEXCEPT;
    #endif
    #endif 

    std::string& tele() OMG_NOEXCEPT {
        return m_tele_;
    }

    const std::string& tele() const OMG_NOEXCEPT {
        return m_tele_;
    }

    void tele(const std::string& value) {
        m_tele_ = value;
    }

    void tele(std::string&& value) {
        m_tele_ = std::move(value);
    }
    float& steering() OMG_NOEXCEPT {
        return m_steering_;
    }

    const float& steering() const OMG_NOEXCEPT {
        return m_steering_;
    }

    void steering(float value) {
        m_steering_ = value;
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

    float& acceleration() OMG_NOEXCEPT {
        return m_acceleration_;
    }

    const float& acceleration() const OMG_NOEXCEPT {
        return m_acceleration_;
    }

    void acceleration(float value) {
        m_acceleration_ = value;
    }

    float& brake() OMG_NOEXCEPT {
        return m_brake_;
    }

    const float& brake() const OMG_NOEXCEPT {
        return m_brake_;
    }

    void brake(float value) {
        m_brake_ = value;
    }

    int32_t& additional_button1() OMG_NOEXCEPT {
        return m_additional_button1_;
    }

    const int32_t& additional_button1() const OMG_NOEXCEPT {
        return m_additional_button1_;
    }

    void additional_button1(int32_t value) {
        m_additional_button1_ = value;
    }

    int32_t& additional_button2() OMG_NOEXCEPT {
        return m_additional_button2_;
    }

    const int32_t& additional_button2() const OMG_NOEXCEPT {
        return m_additional_button2_;
    }

    void additional_button2(int32_t value) {
        m_additional_button2_ = value;
    }

    int32_t& additional_button3() OMG_NOEXCEPT {
        return m_additional_button3_;
    }

    const int32_t& additional_button3() const OMG_NOEXCEPT {
        return m_additional_button3_;
    }

    void additional_button3(int32_t value) {
        m_additional_button3_ = value;
    }

    bool operator == (const control_data& other_) const;
    bool operator != (const control_data& other_) const;

    void swap(control_data& other_) OMG_NOEXCEPT ;

  private:

    std::string m_tele_;
    float m_steering_;
    int32_t m_gear_;
    float m_acceleration_;
    float m_brake_;
    int32_t m_additional_button1_;
    int32_t m_additional_button2_;
    int32_t m_additional_button3_;

};

inline void swap(control_data& a, control_data& b)  OMG_NOEXCEPT 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const control_data& sample);

namespace rti {
    namespace flat {
        namespace topic {
        }
    }
}
namespace dds {
    namespace topic {

        template<>
        struct topic_type_name< control_data > {
            NDDSUSERDllExport static std::string value() {
                return "control_data";
            }
        };

        template<>
        struct is_topic_type< control_data > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< control_data > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const control_data& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(control_data& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(control_data& sample);

            NDDSUSERDllExport 
            static void allocate_sample(control_data& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {
        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< control_data > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< control_data > {
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

#endif // tele2vehicle_1708843959_hpp

