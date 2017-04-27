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
 * PermissionResource.h
 *
 * 
 */

#ifndef PermissionResource_H_
#define PermissionResource_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  PermissionResource
    : public ModelBase
{
public:
    PermissionResource();
    virtual ~PermissionResource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// PermissionResource members

    /// <summary>
    /// The date the permission was added. Unix timestamp in seconds
    /// </summary>
    int64_t getCreatedDate() const;
    void setCreatedDate(int64_t value);
    bool created_dateIsSet() const;
    void unsetCreated_date();
    /// <summary>
    /// The description of the permission
    /// </summary>
    utility::string_t getDescription() const;
    void setDescription(utility::string_t value);
    bool descriptionIsSet() const;
    void unsetDescription();
    /// <summary>
    /// Whether a permission is locked from being deleted
    /// </summary>
    bool getLocked() const;
    void setLocked(bool value);
    bool lockedIsSet() const;
    void unsetLocked();
    /// <summary>
    /// The name of the permission used for display purposes
    /// </summary>
    utility::string_t getName() const;
    void setName(utility::string_t value);
        /// <summary>
    /// The name of the parent of the permission
    /// </summary>
    utility::string_t getParent() const;
    void setParent(utility::string_t value);
    bool parentIsSet() const;
    void unsetParent();
    /// <summary>
    /// The keyword that defines the permission
    /// </summary>
    utility::string_t getPermission() const;
    void setPermission(utility::string_t value);
        /// <summary>
    /// The date the permission was updated. Unix timestamp in seconds
    /// </summary>
    int64_t getUpdatedDate() const;
    void setUpdatedDate(int64_t value);
    bool updated_dateIsSet() const;
    void unsetUpdated_date();

protected:
    int64_t m_Created_date;
    bool m_Created_dateIsSet;
utility::string_t m_Description;
    bool m_DescriptionIsSet;
bool m_Locked;
    bool m_LockedIsSet;
utility::string_t m_Name;
    utility::string_t m_Parent;
    bool m_ParentIsSet;
utility::string_t m_Permission;
    int64_t m_Updated_date;
    bool m_Updated_dateIsSet;
};

}
}
}
}

#endif /* PermissionResource_H_ */
