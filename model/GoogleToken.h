/**
 * Knetik Platform API Documentation latest 
 * This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://knetikcloud.com.
 *
 * OpenAPI spec version: latest 
 * Contact: support@knetik.com
 *
 * NOTE: This class is auto generated by the swagger code generator 2.2.3.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * GoogleToken.h
 *
 * 
 */

#ifndef GoogleToken_H_
#define GoogleToken_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  GoogleToken
    : public ModelBase
{
public:
    GoogleToken();
    virtual ~GoogleToken();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// GoogleToken members

    /// <summary>
    /// A valid authorization code from google. See google documention for how to obtain one.
    /// </summary>
    utility::string_t getAuthorizationCode() const;
        void setAuthorizationCode(utility::string_t value);

protected:
    utility::string_t m_Authorization_code;
    };

}
}
}
}

#endif /* GoogleToken_H_ */
