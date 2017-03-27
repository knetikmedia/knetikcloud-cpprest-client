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



#include "Permission.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

Permission::Permission()
{
    m_Created_date = 0;
    m_Created_dateIsSet = false;
    m_Description = U("");
    m_DescriptionIsSet = false;
    m_Id = 0;
    m_IdIsSet = false;
    m_Locked = false;
    m_LockedIsSet = false;
    m_Name = U("");
    m_NameIsSet = false;
    m_Parent = U("");
    m_ParentIsSet = false;
    m_Permission = U("");
    m_PermissionIsSet = false;
    m_Updated_date = 0;
    m_Updated_dateIsSet = false;
    
}

Permission::~Permission()
{
}

void Permission::validate()
{
    // TODO: implement validation
}

web::json::value Permission::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Created_dateIsSet)
    {
        val[U("created_date")] = ModelBase::toJson(m_Created_date);
    }
    if(m_DescriptionIsSet)
    {
        val[U("description")] = ModelBase::toJson(m_Description);
    }
    if(m_IdIsSet)
    {
        val[U("id")] = ModelBase::toJson(m_Id);
    }
    if(m_LockedIsSet)
    {
        val[U("locked")] = ModelBase::toJson(m_Locked);
    }
    if(m_NameIsSet)
    {
        val[U("name")] = ModelBase::toJson(m_Name);
    }
    if(m_ParentIsSet)
    {
        val[U("parent")] = ModelBase::toJson(m_Parent);
    }
    if(m_PermissionIsSet)
    {
        val[U("permission")] = ModelBase::toJson(m_Permission);
    }
    if(m_Updated_dateIsSet)
    {
        val[U("updated_date")] = ModelBase::toJson(m_Updated_date);
    }
    

    return val;
}

void Permission::fromJson(web::json::value& val)
{
    if(val.has_field(U("created_date")))
    {
        setCreatedDate(ModelBase::int64_tFromJson(val[U("created_date")]));
    }
    if(val.has_field(U("description")))
    {
        setDescription(ModelBase::stringFromJson(val[U("description")]));
        
    }
    if(val.has_field(U("id")))
    {
        setId(ModelBase::int32_tFromJson(val[U("id")]));
    }
    if(val.has_field(U("locked")))
    {
        setLocked(ModelBase::boolFromJson(val[U("locked")]));
    }
    if(val.has_field(U("name")))
    {
        setName(ModelBase::stringFromJson(val[U("name")]));
        
    }
    if(val.has_field(U("parent")))
    {
        setParent(ModelBase::stringFromJson(val[U("parent")]));
        
    }
    if(val.has_field(U("permission")))
    {
        setPermission(ModelBase::stringFromJson(val[U("permission")]));
        
    }
    if(val.has_field(U("updated_date")))
    {
        setUpdatedDate(ModelBase::int64_tFromJson(val[U("updated_date")]));
    }
    
}

void Permission::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_Created_dateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("created_date"), m_Created_date));
    }
    if(m_DescriptionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("description"), m_Description));
        
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("id"), m_Id));
    }
    if(m_LockedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("locked"), m_Locked));
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("name"), m_Name));
        
    }
    if(m_ParentIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("parent"), m_Parent));
        
    }
    if(m_PermissionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("permission"), m_Permission));
        
    }
    if(m_Updated_dateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("updated_date"), m_Updated_date));
    }
    
}

void Permission::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("created_date")))
    {
        setCreatedDate(ModelBase::int64_tFromHttpContent(multipart->getContent(U("created_date"))));
    }
    if(multipart->hasContent(U("description")))
    {
        setDescription(ModelBase::stringFromHttpContent(multipart->getContent(U("description"))));
        
    }
    if(multipart->hasContent(U("id")))
    {
        setId(ModelBase::int32_tFromHttpContent(multipart->getContent(U("id"))));
    }
    if(multipart->hasContent(U("locked")))
    {
        setLocked(ModelBase::boolFromHttpContent(multipart->getContent(U("locked"))));
    }
    if(multipart->hasContent(U("name")))
    {
        setName(ModelBase::stringFromHttpContent(multipart->getContent(U("name"))));
        
    }
    if(multipart->hasContent(U("parent")))
    {
        setParent(ModelBase::stringFromHttpContent(multipart->getContent(U("parent"))));
        
    }
    if(multipart->hasContent(U("permission")))
    {
        setPermission(ModelBase::stringFromHttpContent(multipart->getContent(U("permission"))));
        
    }
    if(multipart->hasContent(U("updated_date")))
    {
        setUpdatedDate(ModelBase::int64_tFromHttpContent(multipart->getContent(U("updated_date"))));
    }
    
}


int64_t Permission::getCreatedDate() const
{
    return m_Created_date;
}
void Permission::setCreatedDate(int64_t value)
{
    m_Created_date = value;
    m_Created_dateIsSet = true;
}
bool Permission::created_dateIsSet() const
{
    return m_Created_dateIsSet;
}
void Permission::unsetCreated_date()
{
    m_Created_dateIsSet = false;
}
utility::string_t Permission::getDescription() const
{
    return m_Description;
}
void Permission::setDescription(utility::string_t value)
{
    m_Description = value;
    m_DescriptionIsSet = true;
}
bool Permission::descriptionIsSet() const
{
    return m_DescriptionIsSet;
}
void Permission::unsetDescription()
{
    m_DescriptionIsSet = false;
}
int32_t Permission::getId() const
{
    return m_Id;
}
void Permission::setId(int32_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}
bool Permission::idIsSet() const
{
    return m_IdIsSet;
}
void Permission::unsetId()
{
    m_IdIsSet = false;
}
bool Permission::getLocked() const
{
    return m_Locked;
}
void Permission::setLocked(bool value)
{
    m_Locked = value;
    m_LockedIsSet = true;
}
bool Permission::lockedIsSet() const
{
    return m_LockedIsSet;
}
void Permission::unsetLocked()
{
    m_LockedIsSet = false;
}
utility::string_t Permission::getName() const
{
    return m_Name;
}
void Permission::setName(utility::string_t value)
{
    m_Name = value;
    m_NameIsSet = true;
}
bool Permission::nameIsSet() const
{
    return m_NameIsSet;
}
void Permission::unsetName()
{
    m_NameIsSet = false;
}
utility::string_t Permission::getParent() const
{
    return m_Parent;
}
void Permission::setParent(utility::string_t value)
{
    m_Parent = value;
    m_ParentIsSet = true;
}
bool Permission::parentIsSet() const
{
    return m_ParentIsSet;
}
void Permission::unsetParent()
{
    m_ParentIsSet = false;
}
utility::string_t Permission::getPermission() const
{
    return m_Permission;
}
void Permission::setPermission(utility::string_t value)
{
    m_Permission = value;
    m_PermissionIsSet = true;
}
bool Permission::permissionIsSet() const
{
    return m_PermissionIsSet;
}
void Permission::unsetPermission()
{
    m_PermissionIsSet = false;
}
int64_t Permission::getUpdatedDate() const
{
    return m_Updated_date;
}
void Permission::setUpdatedDate(int64_t value)
{
    m_Updated_date = value;
    m_Updated_dateIsSet = true;
}
bool Permission::updated_dateIsSet() const
{
    return m_Updated_dateIsSet;
}
void Permission::unsetUpdated_date()
{
    m_Updated_dateIsSet = false;
}

}
}
}
}

