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
 * UserBaseResource.h
 *
 * 
 */

#ifndef UserBaseResource_H_
#define UserBaseResource_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  UserBaseResource
    : public ModelBase
{
public:
    UserBaseResource();
    virtual ~UserBaseResource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// UserBaseResource members

    /// <summary>
    /// The url of the user&#39;s avatar image
    /// </summary>
    utility::string_t getAvatarUrl() const;
    bool avatarUrlIsSet() const;
    void unsetAvatar_url();
    void setAvatarUrl(utility::string_t value);
    /// <summary>
    /// The chosen display name of the user, defaults to username if not present
    /// </summary>
    utility::string_t getDisplayName() const;
    bool displayNameIsSet() const;
    void unsetDisplay_name();
    void setDisplayName(utility::string_t value);
    /// <summary>
    /// The user&#39;s email address (private). May be required and/or unique depending on system configuration (both on by default). Must match standard email requirements if provided (RFC 2822)
    /// </summary>
    utility::string_t getEmail() const;
        void setEmail(utility::string_t value);
    /// <summary>
    /// The user&#39;s full name (private)
    /// </summary>
    utility::string_t getFullname() const;
    bool fullnameIsSet() const;
    void unsetFullname();
    void setFullname(utility::string_t value);
    /// <summary>
    /// The id of the user
    /// </summary>
    int32_t getId() const;
    bool idIsSet() const;
    void unsetId();
    void setId(int32_t value);
    /// <summary>
    /// The date the user last interacted with the API (private)
    /// </summary>
    int64_t getLastActivity() const;
    bool lastActivityIsSet() const;
    void unsetLast_activity();
    void setLastActivity(int64_t value);
    /// <summary>
    /// The date the user&#39;s info was last updated as a unix timestamp
    /// </summary>
    int64_t getLastUpdated() const;
    bool lastUpdatedIsSet() const;
    void unsetLast_updated();
    void setLastUpdated(int64_t value);
    /// <summary>
    /// The user&#39;s date of registration as a unix timestamp
    /// </summary>
    int64_t getMemberSince() const;
    bool memberSinceIsSet() const;
    void unsetMember_since();
    void setMemberSince(int64_t value);
    /// <summary>
    /// The login username for the user (private). May be set to match email if system does not require usernames separately.
    /// </summary>
    utility::string_t getUsername() const;
        void setUsername(utility::string_t value);

protected:
    utility::string_t m_Avatar_url;
    bool m_Avatar_urlIsSet;
    utility::string_t m_Display_name;
    bool m_Display_nameIsSet;
    utility::string_t m_Email;
        utility::string_t m_Fullname;
    bool m_FullnameIsSet;
    int32_t m_Id;
    bool m_IdIsSet;
    int64_t m_Last_activity;
    bool m_Last_activityIsSet;
    int64_t m_Last_updated;
    bool m_Last_updatedIsSet;
    int64_t m_Member_since;
    bool m_Member_sinceIsSet;
    utility::string_t m_Username;
    };

}
}
}
}

#endif /* UserBaseResource_H_ */
