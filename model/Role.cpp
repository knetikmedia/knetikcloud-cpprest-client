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



#include "Role.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

Role::Role()
{
    m_Client_count = 0;
    m_Client_countIsSet = false;
    m_Created_date = 0;
    m_Created_dateIsSet = false;
    m_Id = 0;
    m_IdIsSet = false;
    m_Locked = false;
    m_LockedIsSet = false;
    m_Name = U("");
    m_NameIsSet = false;
    m_Role = U("");
    m_RoleIsSet = false;
    m_Role_permissionIsSet = false;
    m_User_count = 0;
    m_User_countIsSet = false;
    
}

Role::~Role()
{
}

void Role::validate()
{
    // TODO: implement validation
}

web::json::value Role::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Client_countIsSet)
    {
        val[U("client_count")] = ModelBase::toJson(m_Client_count);
    }
    if(m_Created_dateIsSet)
    {
        val[U("created_date")] = ModelBase::toJson(m_Created_date);
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
    if(m_RoleIsSet)
    {
        val[U("role")] = ModelBase::toJson(m_Role);
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Role_permission )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            val[U("role_permission")] = web::json::value::array(jsonArray);
        }
    }
    if(m_User_countIsSet)
    {
        val[U("user_count")] = ModelBase::toJson(m_User_count);
    }
    

    return val;
}

void Role::fromJson(web::json::value& val)
{
    if(val.has_field(U("client_count")))
    {
        setClientCount(ModelBase::int32_tFromJson(val[U("client_count")]));
    }
    if(val.has_field(U("created_date")))
    {
        setCreatedDate(ModelBase::int64_tFromJson(val[U("created_date")]));
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
    if(val.has_field(U("role")))
    {
        setRole(ModelBase::stringFromJson(val[U("role")]));
        
    }
    {
        m_Role_permission.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(U("role_permission")))
        {
        for( auto& item : val[U("role_permission")].as_array() )
        {
            
            if(item.is_null())
            {
                m_Role_permission.push_back( std::shared_ptr<Permission>(nullptr) );
            }
            else
            {
                std::shared_ptr<Permission> newItem(new Permission());
                newItem->fromJson(item);
                m_Role_permission.push_back( newItem );
            }
            
        }
        }
    }
    if(val.has_field(U("user_count")))
    {
        setUserCount(ModelBase::int32_tFromJson(val[U("user_count")]));
    }
    
}

void Role::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_Client_countIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("client_count"), m_Client_count));
    }
    if(m_Created_dateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("created_date"), m_Created_date));
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
    if(m_RoleIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("role"), m_Role));
        
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Role_permission )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + U("role_permission"), web::json::value::array(jsonArray), U("application/json")));
        }
    }
    if(m_User_countIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("user_count"), m_User_count));
    }
    
}

void Role::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("client_count")))
    {
        setClientCount(ModelBase::int32_tFromHttpContent(multipart->getContent(U("client_count"))));
    }
    if(multipart->hasContent(U("created_date")))
    {
        setCreatedDate(ModelBase::int64_tFromHttpContent(multipart->getContent(U("created_date"))));
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
    if(multipart->hasContent(U("role")))
    {
        setRole(ModelBase::stringFromHttpContent(multipart->getContent(U("role"))));
        
    }
    {
        m_Role_permission.clear();
        if(multipart->hasContent(U("role_permission")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(U("role_permission"))));
        for( auto& item : jsonArray.as_array() )
        {
            
            if(item.is_null())
            {
                m_Role_permission.push_back( std::shared_ptr<Permission>(nullptr) );
            }
            else
            {
                std::shared_ptr<Permission> newItem(new Permission());
                newItem->fromJson(item);
                m_Role_permission.push_back( newItem );
            }
            
        }
        }
    }
    if(multipart->hasContent(U("user_count")))
    {
        setUserCount(ModelBase::int32_tFromHttpContent(multipart->getContent(U("user_count"))));
    }
    
}


int32_t Role::getClientCount() const
{
    return m_Client_count;
}
void Role::setClientCount(int32_t value)
{
    m_Client_count = value;
    m_Client_countIsSet = true;
}
bool Role::client_countIsSet() const
{
    return m_Client_countIsSet;
}
void Role::unsetClient_count()
{
    m_Client_countIsSet = false;
}
int64_t Role::getCreatedDate() const
{
    return m_Created_date;
}
void Role::setCreatedDate(int64_t value)
{
    m_Created_date = value;
    m_Created_dateIsSet = true;
}
bool Role::created_dateIsSet() const
{
    return m_Created_dateIsSet;
}
void Role::unsetCreated_date()
{
    m_Created_dateIsSet = false;
}
int32_t Role::getId() const
{
    return m_Id;
}
void Role::setId(int32_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}
bool Role::idIsSet() const
{
    return m_IdIsSet;
}
void Role::unsetId()
{
    m_IdIsSet = false;
}
bool Role::getLocked() const
{
    return m_Locked;
}
void Role::setLocked(bool value)
{
    m_Locked = value;
    m_LockedIsSet = true;
}
bool Role::lockedIsSet() const
{
    return m_LockedIsSet;
}
void Role::unsetLocked()
{
    m_LockedIsSet = false;
}
utility::string_t Role::getName() const
{
    return m_Name;
}
void Role::setName(utility::string_t value)
{
    m_Name = value;
    m_NameIsSet = true;
}
bool Role::nameIsSet() const
{
    return m_NameIsSet;
}
void Role::unsetName()
{
    m_NameIsSet = false;
}
utility::string_t Role::getRole() const
{
    return m_Role;
}
void Role::setRole(utility::string_t value)
{
    m_Role = value;
    m_RoleIsSet = true;
}
bool Role::roleIsSet() const
{
    return m_RoleIsSet;
}
void Role::unsetRole()
{
    m_RoleIsSet = false;
}
std::vector<std::shared_ptr<Permission>>& Role::getRolePermission()
{
    return m_Role_permission;
}
bool Role::role_permissionIsSet() const
{
    return m_Role_permissionIsSet;
}
void Role::unsetRole_permission()
{
    m_Role_permissionIsSet = false;
}
int32_t Role::getUserCount() const
{
    return m_User_count;
}
void Role::setUserCount(int32_t value)
{
    m_User_count = value;
    m_User_countIsSet = true;
}
bool Role::user_countIsSet() const
{
    return m_User_countIsSet;
}
void Role::unsetUser_count()
{
    m_User_countIsSet = false;
}

}
}
}
}
