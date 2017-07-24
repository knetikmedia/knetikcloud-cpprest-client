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
 * OAuth2Resource.h
 *
 * 
 */

#ifndef OAuth2Resource_H_
#define OAuth2Resource_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  OAuth2Resource
    : public ModelBase
{
public:
    OAuth2Resource();
    virtual ~OAuth2Resource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// OAuth2Resource members

    /// <summary>
    /// The access token issued by the authorization server
    /// </summary>
    utility::string_t getAccessToken() const;
    bool accessTokenIsSet() const;
    void unsetAccess_token();
    void setAccessToken(utility::string_t value);
    /// <summary>
    /// The lifetime in seconds of the access token
    /// </summary>
    utility::string_t getExpiresIn() const;
    bool expiresInIsSet() const;
    void unsetExpires_in();
    void setExpiresIn(utility::string_t value);
    /// <summary>
    /// The scope of the access token. Currently these values can be ignored, as security defaults to roles and permissions
    /// </summary>
    utility::string_t getScope() const;
    bool scopeIsSet() const;
    void unsetScope();
    void setScope(utility::string_t value);
    /// <summary>
    /// The type of the token issued
    /// </summary>
    utility::string_t getTokenType() const;
    bool tokenTypeIsSet() const;
    void unsetToken_type();
    void setTokenType(utility::string_t value);

protected:
    utility::string_t m_Access_token;
    bool m_Access_tokenIsSet;
    utility::string_t m_Expires_in;
    bool m_Expires_inIsSet;
    utility::string_t m_Scope;
    bool m_ScopeIsSet;
    utility::string_t m_Token_type;
    bool m_Token_typeIsSet;
};

}
}
}
}

#endif /* OAuth2Resource_H_ */
