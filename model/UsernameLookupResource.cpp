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



#include "UsernameLookupResource.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

UsernameLookupResource::UsernameLookupResource()
{
    m_Lookup_keyIsSet = false;
    m_Type = U("");
    m_TypeIsSet = false;
    m_Value_type = U("");
    m_Value_typeIsSet = false;
    
}

UsernameLookupResource::~UsernameLookupResource()
{
}

void UsernameLookupResource::validate()
{
    // TODO: implement validation
}

web::json::value UsernameLookupResource::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Lookup_keyIsSet)
    {
        val[U("lookup_key")] = ModelBase::toJson(m_Lookup_key);
    }
    if(m_TypeIsSet)
    {
        val[U("type")] = ModelBase::toJson(m_Type);
    }
    if(m_Value_typeIsSet)
    {
        val[U("value_type")] = ModelBase::toJson(m_Value_type);
    }
    

    return val;
}

void UsernameLookupResource::fromJson(web::json::value& val)
{
    if(val.has_field(U("lookup_key")))
    {
        if(!val[U("lookup_key")].is_null())
        {
            std::shared_ptr<ExpressionResource> newItem(new ExpressionResource());
            newItem->fromJson(val[U("lookup_key")]);
            setLookupKey( newItem );
        }
        
    }
    if(val.has_field(U("type")))
    {
        setType(ModelBase::stringFromJson(val[U("type")]));
        
    }
    if(val.has_field(U("value_type")))
    {
        setValueType(ModelBase::stringFromJson(val[U("value_type")]));
        
    }
    
}

void UsernameLookupResource::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_Lookup_keyIsSet)
    {
        if (m_Lookup_key.get())
        {
            m_Lookup_key->toMultipart(multipart, U("lookup_key."));
        }
        
    }
    if(m_TypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("type"), m_Type));
        
    }
    if(m_Value_typeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("value_type"), m_Value_type));
        
    }
    
}

void UsernameLookupResource::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("lookup_key")))
    {
        if(multipart->hasContent(U("lookup_key")))
        {
            std::shared_ptr<ExpressionResource> newItem(new ExpressionResource());
            newItem->fromMultiPart(multipart, U("lookup_key."));
            setLookupKey( newItem );
        }
        
    }
    if(multipart->hasContent(U("type")))
    {
        setType(ModelBase::stringFromHttpContent(multipart->getContent(U("type"))));
        
    }
    if(multipart->hasContent(U("value_type")))
    {
        setValueType(ModelBase::stringFromHttpContent(multipart->getContent(U("value_type"))));
        
    }
    
}


std::shared_ptr<ExpressionResource> UsernameLookupResource::getLookupKey() const
{
    return m_Lookup_key;
}
void UsernameLookupResource::setLookupKey(std::shared_ptr<ExpressionResource> value)
{
    m_Lookup_key = value;
    m_Lookup_keyIsSet = true;
}
bool UsernameLookupResource::lookup_keyIsSet() const
{
    return m_Lookup_keyIsSet;
}
void UsernameLookupResource::unsetLookup_key()
{
    m_Lookup_keyIsSet = false;
}
utility::string_t UsernameLookupResource::getType() const
{
    return m_Type;
}
void UsernameLookupResource::setType(utility::string_t value)
{
    m_Type = value;
    m_TypeIsSet = true;
}
bool UsernameLookupResource::typeIsSet() const
{
    return m_TypeIsSet;
}
void UsernameLookupResource::unsetType()
{
    m_TypeIsSet = false;
}
utility::string_t UsernameLookupResource::getValueType() const
{
    return m_Value_type;
}
void UsernameLookupResource::setValueType(utility::string_t value)
{
    m_Value_type = value;
    m_Value_typeIsSet = true;
}
bool UsernameLookupResource::value_typeIsSet() const
{
    return m_Value_typeIsSet;
}
void UsernameLookupResource::unsetValue_type()
{
    m_Value_typeIsSet = false;
}

}
}
}
}

