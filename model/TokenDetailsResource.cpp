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



#include "TokenDetailsResource.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

TokenDetailsResource::TokenDetailsResource()
{
    m_RolesIsSet = false;
    m_User_id = 0;
    m_User_idIsSet = false;
    
}

TokenDetailsResource::~TokenDetailsResource()
{
}

void TokenDetailsResource::validate()
{
    // TODO: implement validation
}

web::json::value TokenDetailsResource::toJson() const
{
    web::json::value val = web::json::value::object();

    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Roles )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            val[U("roles")] = web::json::value::array(jsonArray);
        }
    }
    if(m_User_idIsSet)
    {
        val[U("user_id")] = ModelBase::toJson(m_User_id);
    }
    

    return val;
}

void TokenDetailsResource::fromJson(web::json::value& val)
{
    {
        m_Roles.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(U("roles")))
        {
        for( auto& item : val[U("roles")].as_array() )
        {
            m_Roles.push_back(ModelBase::stringFromJson(item));
            
        }
        }
    }
    if(val.has_field(U("user_id")))
    {
        setUserId(ModelBase::int32_tFromJson(val[U("user_id")]));
    }
    
}

void TokenDetailsResource::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Roles )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + U("roles"), web::json::value::array(jsonArray), U("application/json")));
        }
    }
    if(m_User_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("user_id"), m_User_id));
    }
    
}

void TokenDetailsResource::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    {
        m_Roles.clear();
        if(multipart->hasContent(U("roles")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(U("roles"))));
        for( auto& item : jsonArray.as_array() )
        {
            m_Roles.push_back(ModelBase::stringFromJson(item));
            
        }
        }
    }
    if(multipart->hasContent(U("user_id")))
    {
        setUserId(ModelBase::int32_tFromHttpContent(multipart->getContent(U("user_id"))));
    }
    
}


std::vector<utility::string_t>& TokenDetailsResource::getRoles()
{
    return m_Roles;
}
bool TokenDetailsResource::rolesIsSet() const
{
    return m_RolesIsSet;
}
void TokenDetailsResource::unsetRoles()
{
    m_RolesIsSet = false;
}
int32_t TokenDetailsResource::getUserId() const
{
    return m_User_id;
}
void TokenDetailsResource::setUserId(int32_t value)
{
    m_User_id = value;
    m_User_idIsSet = true;
}
bool TokenDetailsResource::user_idIsSet() const
{
    return m_User_idIsSet;
}
void TokenDetailsResource::unsetUser_id()
{
    m_User_idIsSet = false;
}

}
}
}
}

