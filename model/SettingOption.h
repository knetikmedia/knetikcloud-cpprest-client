/**
 * Knetik Platform API Documentation latest 
 * This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://knetikcloud.com
 *
 * OpenAPI spec version: latest 
 * Contact: support@knetik.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * SettingOption.h
 *
 * 
 */

#ifndef SettingOption_H_
#define SettingOption_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  SettingOption
    : public ModelBase
{
public:
    SettingOption();
    virtual ~SettingOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// SettingOption members

    /// <summary>
    /// The textual name of the option
    /// </summary>
    utility::string_t getName() const;
    void setName(utility::string_t value);
        /// <summary>
    /// The unique ID for the option
    /// </summary>
    utility::string_t getValue() const;
    void setValue(utility::string_t value);
    bool valueIsSet() const;
    void unsetValue();

protected:
    utility::string_t m_Name;
    utility::string_t m_Value;
    bool m_ValueIsSet;
};

}
}
}
}

#endif /* SettingOption_H_ */
