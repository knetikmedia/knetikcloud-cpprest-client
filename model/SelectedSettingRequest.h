/**
 * Knetik Platform API Documentation latest 
 * This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://knetikcloud.com.
 *
 * OpenAPI spec version: latest 
 * Contact: support@knetik.com
 *
 * NOTE: This class is auto generated by the swagger code generator 2.3.0-SNAPSHOT.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * SelectedSettingRequest.h
 *
 * 
 */

#ifndef SelectedSettingRequest_H_
#define SelectedSettingRequest_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  SelectedSettingRequest
    : public ModelBase
{
public:
    SelectedSettingRequest();
    virtual ~SelectedSettingRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// SelectedSettingRequest members

    /// <summary>
    /// The unique ID for the setting
    /// </summary>
    utility::string_t getKey() const;
        void setKey(utility::string_t value);
    /// <summary>
    /// The unique ID for the option. Must match one of the options from this setting in the activity, if not part of a challenge
    /// </summary>
    utility::string_t getValue() const;
        void setValue(utility::string_t value);

protected:
    utility::string_t m_Key;
        utility::string_t m_Value;
    };

}
}
}
}

#endif /* SelectedSettingRequest_H_ */