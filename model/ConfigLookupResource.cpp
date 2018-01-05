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



#include "ConfigLookupResource.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

ConfigLookupResource::ConfigLookupResource()
{
    m_Definition = U("");
    m_DefinitionIsSet = false;
    m_Lookup_keyIsSet = false;
    m_Required_key_type = U("");
    m_Required_key_typeIsSet = false;
    m_Type = U("");
    m_TypeIsSet = false;
    m_Value_type = U("");
    m_Value_typeIsSet = false;
}

ConfigLookupResource::~ConfigLookupResource()
{
}

void ConfigLookupResource::validate()
{
    // TODO: implement validation
}

web::json::value ConfigLookupResource::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_DefinitionIsSet)
    {
        val[U("definition")] = ModelBase::toJson(m_Definition);
    }
    if(m_Lookup_keyIsSet)
    {
        val[U("lookup_key")] = ModelBase::toJson(m_Lookup_key);
    }
    if(m_Required_key_typeIsSet)
    {
        val[U("required_key_type")] = ModelBase::toJson(m_Required_key_type);
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

void ConfigLookupResource::fromJson(web::json::value& val)
{
    if(val.has_field(U("definition")))
    {
        setDefinition(ModelBase::stringFromJson(val[U("definition")]));
    }
    if(val.has_field(U("lookup_key")))
    {
        if(!val[U("lookup_key")].is_null())
        {
            std::shared_ptr<ExpressionResource> newItem(new ExpressionResource());
            newItem->fromJson(val[U("lookup_key")]);
            setLookupKey( newItem );
        }
    }
    if(val.has_field(U("required_key_type")))
    {
        setRequiredKeyType(ModelBase::stringFromJson(val[U("required_key_type")]));
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

void ConfigLookupResource::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_DefinitionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("definition"), m_Definition));
        
    }
    if(m_Lookup_keyIsSet)
    {
        if (m_Lookup_key.get())
        {
            m_Lookup_key->toMultipart(multipart, U("lookup_key."));
        }
        
    }
    if(m_Required_key_typeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("required_key_type"), m_Required_key_type));
        
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

void ConfigLookupResource::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("definition")))
    {
        setDefinition(ModelBase::stringFromHttpContent(multipart->getContent(U("definition"))));
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
    if(multipart->hasContent(U("required_key_type")))
    {
        setRequiredKeyType(ModelBase::stringFromHttpContent(multipart->getContent(U("required_key_type"))));
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

utility::string_t ConfigLookupResource::getDefinition() const
{
    return m_Definition;
}


void ConfigLookupResource::setDefinition(utility::string_t value)
{
    m_Definition = value;
    m_DefinitionIsSet = true;
}
bool ConfigLookupResource::definitionIsSet() const
{
    return m_DefinitionIsSet;
}

void ConfigLookupResource::unsetDefinition()
{
    m_DefinitionIsSet = false;
}

std::shared_ptr<ExpressionResource> ConfigLookupResource::getLookupKey() const
{
    return m_Lookup_key;
}


void ConfigLookupResource::setLookupKey(std::shared_ptr<ExpressionResource> value)
{
    m_Lookup_key = value;
    m_Lookup_keyIsSet = true;
}
bool ConfigLookupResource::lookupKeyIsSet() const
{
    return m_Lookup_keyIsSet;
}

void ConfigLookupResource::unsetLookup_key()
{
    m_Lookup_keyIsSet = false;
}

utility::string_t ConfigLookupResource::getRequiredKeyType() const
{
    return m_Required_key_type;
}


void ConfigLookupResource::setRequiredKeyType(utility::string_t value)
{
    m_Required_key_type = value;
    m_Required_key_typeIsSet = true;
}
bool ConfigLookupResource::requiredKeyTypeIsSet() const
{
    return m_Required_key_typeIsSet;
}

void ConfigLookupResource::unsetRequired_key_type()
{
    m_Required_key_typeIsSet = false;
}

utility::string_t ConfigLookupResource::getType() const
{
    return m_Type;
}


void ConfigLookupResource::setType(utility::string_t value)
{
    m_Type = value;
    m_TypeIsSet = true;
}
bool ConfigLookupResource::typeIsSet() const
{
    return m_TypeIsSet;
}

void ConfigLookupResource::unsetType()
{
    m_TypeIsSet = false;
}

utility::string_t ConfigLookupResource::getValueType() const
{
    return m_Value_type;
}


void ConfigLookupResource::setValueType(utility::string_t value)
{
    m_Value_type = value;
    m_Value_typeIsSet = true;
}
bool ConfigLookupResource::valueTypeIsSet() const
{
    return m_Value_typeIsSet;
}

void ConfigLookupResource::unsetValue_type()
{
    m_Value_typeIsSet = false;
}

}
}
}
}
