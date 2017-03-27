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



#include "BreGlobalResource.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

BreGlobalResource::BreGlobalResource()
{
    m_Description = U("");
    m_DescriptionIsSet = false;
    m_Id = U("");
    m_IdIsSet = false;
    m_Key = U("");
    m_Name = U("");
    m_NameIsSet = false;
    m_ScopesIsSet = false;
    m_System_global = false;
    m_System_globalIsSet = false;
    m_Type = U("");
    
}

BreGlobalResource::~BreGlobalResource()
{
}

void BreGlobalResource::validate()
{
    // TODO: implement validation
}

web::json::value BreGlobalResource::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_DescriptionIsSet)
    {
        val[U("description")] = ModelBase::toJson(m_Description);
    }
    if(m_IdIsSet)
    {
        val[U("id")] = ModelBase::toJson(m_Id);
    }
    val[U("key")] = ModelBase::toJson(m_Key);
    if(m_NameIsSet)
    {
        val[U("name")] = ModelBase::toJson(m_Name);
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Scopes )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            val[U("scopes")] = web::json::value::array(jsonArray);
        }
    }
    if(m_System_globalIsSet)
    {
        val[U("system_global")] = ModelBase::toJson(m_System_global);
    }
    val[U("type")] = ModelBase::toJson(m_Type);
    

    return val;
}

void BreGlobalResource::fromJson(web::json::value& val)
{
    if(val.has_field(U("description")))
    {
        setDescription(ModelBase::stringFromJson(val[U("description")]));
        
    }
    if(val.has_field(U("id")))
    {
        setId(ModelBase::stringFromJson(val[U("id")]));
        
    }
    setKey(ModelBase::stringFromJson(val[U("key")]));
    if(val.has_field(U("name")))
    {
        setName(ModelBase::stringFromJson(val[U("name")]));
        
    }
    {
        m_Scopes.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(U("scopes")))
        {
        for( auto& item : val[U("scopes")].as_array() )
        {
            
            if(item.is_null())
            {
                m_Scopes.push_back( std::shared_ptr<BreGlobalScopeDefinition>(nullptr) );
            }
            else
            {
                std::shared_ptr<BreGlobalScopeDefinition> newItem(new BreGlobalScopeDefinition());
                newItem->fromJson(item);
                m_Scopes.push_back( newItem );
            }
            
        }
        }
    }
    if(val.has_field(U("system_global")))
    {
        setSystemGlobal(ModelBase::boolFromJson(val[U("system_global")]));
    }
    setType(ModelBase::stringFromJson(val[U("type")]));
    
}

void BreGlobalResource::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_DescriptionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("description"), m_Description));
        
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("id"), m_Id));
        
    }
    multipart->add(ModelBase::toHttpContent(namePrefix + U("key"), m_Key));
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("name"), m_Name));
        
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Scopes )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + U("scopes"), web::json::value::array(jsonArray), U("application/json")));
        }
    }
    if(m_System_globalIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("system_global"), m_System_global));
    }
    multipart->add(ModelBase::toHttpContent(namePrefix + U("type"), m_Type));
    
}

void BreGlobalResource::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("description")))
    {
        setDescription(ModelBase::stringFromHttpContent(multipart->getContent(U("description"))));
        
    }
    if(multipart->hasContent(U("id")))
    {
        setId(ModelBase::stringFromHttpContent(multipart->getContent(U("id"))));
        
    }
    setKey(ModelBase::stringFromHttpContent(multipart->getContent(U("key"))));
    if(multipart->hasContent(U("name")))
    {
        setName(ModelBase::stringFromHttpContent(multipart->getContent(U("name"))));
        
    }
    {
        m_Scopes.clear();
        if(multipart->hasContent(U("scopes")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(U("scopes"))));
        for( auto& item : jsonArray.as_array() )
        {
            
            if(item.is_null())
            {
                m_Scopes.push_back( std::shared_ptr<BreGlobalScopeDefinition>(nullptr) );
            }
            else
            {
                std::shared_ptr<BreGlobalScopeDefinition> newItem(new BreGlobalScopeDefinition());
                newItem->fromJson(item);
                m_Scopes.push_back( newItem );
            }
            
        }
        }
    }
    if(multipart->hasContent(U("system_global")))
    {
        setSystemGlobal(ModelBase::boolFromHttpContent(multipart->getContent(U("system_global"))));
    }
    setType(ModelBase::stringFromHttpContent(multipart->getContent(U("type"))));
    
}


utility::string_t BreGlobalResource::getDescription() const
{
    return m_Description;
}
void BreGlobalResource::setDescription(utility::string_t value)
{
    m_Description = value;
    m_DescriptionIsSet = true;
}
bool BreGlobalResource::descriptionIsSet() const
{
    return m_DescriptionIsSet;
}
void BreGlobalResource::unsetDescription()
{
    m_DescriptionIsSet = false;
}
utility::string_t BreGlobalResource::getId() const
{
    return m_Id;
}
void BreGlobalResource::setId(utility::string_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}
bool BreGlobalResource::idIsSet() const
{
    return m_IdIsSet;
}
void BreGlobalResource::unsetId()
{
    m_IdIsSet = false;
}
utility::string_t BreGlobalResource::getKey() const
{
    return m_Key;
}
void BreGlobalResource::setKey(utility::string_t value)
{
    m_Key = value;
    
}
utility::string_t BreGlobalResource::getName() const
{
    return m_Name;
}
void BreGlobalResource::setName(utility::string_t value)
{
    m_Name = value;
    m_NameIsSet = true;
}
bool BreGlobalResource::nameIsSet() const
{
    return m_NameIsSet;
}
void BreGlobalResource::unsetName()
{
    m_NameIsSet = false;
}
std::vector<std::shared_ptr<BreGlobalScopeDefinition>>& BreGlobalResource::getScopes()
{
    return m_Scopes;
}
bool BreGlobalResource::scopesIsSet() const
{
    return m_ScopesIsSet;
}
void BreGlobalResource::unsetScopes()
{
    m_ScopesIsSet = false;
}
bool BreGlobalResource::getSystemGlobal() const
{
    return m_System_global;
}
void BreGlobalResource::setSystemGlobal(bool value)
{
    m_System_global = value;
    m_System_globalIsSet = true;
}
bool BreGlobalResource::system_globalIsSet() const
{
    return m_System_globalIsSet;
}
void BreGlobalResource::unsetSystem_global()
{
    m_System_globalIsSet = false;
}
utility::string_t BreGlobalResource::getType() const
{
    return m_Type;
}
void BreGlobalResource::setType(utility::string_t value)
{
    m_Type = value;
    
}

}
}
}
}

