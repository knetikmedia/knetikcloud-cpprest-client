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
 * Permission.h
 *
 * 
 */

#ifndef Permission_H_
#define Permission_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  Permission
    : public ModelBase
{
public:
    Permission();
    virtual ~Permission();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Permission members

    /// <summary>
    /// 
    /// </summary>
    int64_t getCreatedDate() const;
    void setCreatedDate(int64_t value);
    bool created_dateIsSet() const;
    void unsetCreated_date();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getDescription() const;
    void setDescription(utility::string_t value);
    bool descriptionIsSet() const;
    void unsetDescription();
    /// <summary>
    /// 
    /// </summary>
    int32_t getId() const;
    void setId(int32_t value);
    bool idIsSet() const;
    void unsetId();
    /// <summary>
    /// 
    /// </summary>
    bool getLocked() const;
    void setLocked(bool value);
    bool lockedIsSet() const;
    void unsetLocked();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getName() const;
    void setName(utility::string_t value);
    bool nameIsSet() const;
    void unsetName();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getParent() const;
    void setParent(utility::string_t value);
    bool parentIsSet() const;
    void unsetParent();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getPermission() const;
    void setPermission(utility::string_t value);
    bool permissionIsSet() const;
    void unsetPermission();
    /// <summary>
    /// 
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
int32_t m_Id;
    bool m_IdIsSet;
bool m_Locked;
    bool m_LockedIsSet;
utility::string_t m_Name;
    bool m_NameIsSet;
utility::string_t m_Parent;
    bool m_ParentIsSet;
utility::string_t m_Permission;
    bool m_PermissionIsSet;
int64_t m_Updated_date;
    bool m_Updated_dateIsSet;
};

}
}
}
}

#endif /* Permission_H_ */