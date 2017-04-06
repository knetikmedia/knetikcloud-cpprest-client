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
 * TokenDetailsResource.h
 *
 * 
 */

#ifndef TokenDetailsResource_H_
#define TokenDetailsResource_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>
#include <vector>

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  TokenDetailsResource
    : public ModelBase
{
public:
    TokenDetailsResource();
    virtual ~TokenDetailsResource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// TokenDetailsResource members

    /// <summary>
    /// 
    /// </summary>
    std::vector<utility::string_t>& getRoles();
    bool rolesIsSet() const;
    void unsetRoles();
    /// <summary>
    /// 
    /// </summary>
    int32_t getUserId() const;
    void setUserId(int32_t value);
    bool user_idIsSet() const;
    void unsetUser_id();

protected:
    std::vector<utility::string_t> m_Roles;
    bool m_RolesIsSet;
int32_t m_User_id;
    bool m_User_idIsSet;
};

}
}
}
}

#endif /* TokenDetailsResource_H_ */
