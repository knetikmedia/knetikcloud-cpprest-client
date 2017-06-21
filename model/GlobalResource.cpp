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



#include "GlobalResource.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

GlobalResource::GlobalResource()
{
    m_Global_def_id = U("");
    m_Global_def_idIsSet = false;
    m_ScopesIsSet = false;
    m_Type = U("");
    m_TypeIsSet = false;
    
}

GlobalResource::~GlobalResource()
{
}

void GlobalResource::validate()
{
    // TODO: implement validation
}

web::json::value GlobalResource::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Global_def_idIsSet)
    {
        val[U("global_def_id")] = ModelBase::toJson(m_Global_def_id);
    }
    if(m_ScopesIsSet)
    {
        val[U("scopes")] = ModelBase::toJson(m_Scopes);
    }
    if(m_TypeIsSet)
    {
        val[U("type")] = ModelBase::toJson(m_Type);
    }
    

    return val;
}

void GlobalResource::fromJson(web::json::value& val)
{
    if(val.has_field(U("global_def_id")))
    {
        setGlobalDefId(ModelBase::stringFromJson(val[U("global_def_id")]));
        
    }
    if(val.has_field(U("scopes")))
    {
        if(!val[U("scopes")].is_null())
        {
            std::map<utility::string_t, std::shared_ptr<ExpressionResource>> newItem(std::map<utility::string_t, ExpressionResource>());
            newItem->fromJson(val[U("scopes")]);
            setScopes( newItem );
        }
        
    }
    if(val.has_field(U("type")))
    {
        setType(ModelBase::stringFromJson(val[U("type")]));
        
    }
    
}

void GlobalResource::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_Global_def_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("global_def_id"), m_Global_def_id));
        
    }
    if(m_ScopesIsSet)
    {
        if (m_Scopes.get())
        {
            m_Scopes->toMultipart(multipart, U("scopes."));
        }
        
    }
    if(m_TypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("type"), m_Type));
        
    }
    
}

void GlobalResource::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("global_def_id")))
    {
        setGlobalDefId(ModelBase::stringFromHttpContent(multipart->getContent(U("global_def_id"))));
        
    }
    if(multipart->hasContent(U("scopes")))
    {
        if(multipart->hasContent(U("scopes")))
        {
            std::map<utility::string_t, std::shared_ptr<ExpressionResource>> newItem(std::map<utility::string_t, ExpressionResource>());
            newItem->fromMultiPart(multipart, U("scopes."));
            setScopes( newItem );
        }
        
    }
    if(multipart->hasContent(U("type")))
    {
        setType(ModelBase::stringFromHttpContent(multipart->getContent(U("type"))));
        
    }
    
}


utility::string_t GlobalResource::getGlobalDefId() const
{
    return m_Global_def_id;
}
void GlobalResource::setGlobalDefId(utility::string_t value)
{
    m_Global_def_id = value;
    m_Global_def_idIsSet = true;
}
bool GlobalResource::global_def_idIsSet() const
{
    return m_Global_def_idIsSet;
}
void GlobalResource::unsetGlobal_def_id()
{
    m_Global_def_idIsSet = false;
}
std::map<utility::string_t, std::shared_ptr<ExpressionResource>>& GlobalResource::getScopes()
{
    return m_Scopes;
}
bool GlobalResource::scopesIsSet() const
{
    return m_ScopesIsSet;
}
void GlobalResource::unsetScopes()
{
    m_ScopesIsSet = false;
}
utility::string_t GlobalResource::getType() const
{
    return m_Type;
}
void GlobalResource::setType(utility::string_t value)
{
    m_Type = value;
    m_TypeIsSet = true;
}
bool GlobalResource::typeIsSet() const
{
    return m_TypeIsSet;
}
void GlobalResource::unsetType()
{
    m_TypeIsSet = false;
}

}
}
}
}

