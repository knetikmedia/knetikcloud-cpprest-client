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



#include "LookupTypeResource.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

LookupTypeResource::LookupTypeResource()
{
    m_Description = U("");
    m_Key_type = U("");
    m_Name = U("");
    m_Value_type = U("");
    
}

LookupTypeResource::~LookupTypeResource()
{
}

void LookupTypeResource::validate()
{
    // TODO: implement validation
}

web::json::value LookupTypeResource::toJson() const
{
    web::json::value val = web::json::value::object();

    val[U("description")] = ModelBase::toJson(m_Description);
    val[U("key_type")] = ModelBase::toJson(m_Key_type);
    val[U("name")] = ModelBase::toJson(m_Name);
    val[U("value_type")] = ModelBase::toJson(m_Value_type);
    

    return val;
}

void LookupTypeResource::fromJson(web::json::value& val)
{
    setDescription(ModelBase::stringFromJson(val[U("description")]));
    setKeyType(ModelBase::stringFromJson(val[U("key_type")]));
    setName(ModelBase::stringFromJson(val[U("name")]));
    setValueType(ModelBase::stringFromJson(val[U("value_type")]));
    
}

void LookupTypeResource::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + U("description"), m_Description));
    multipart->add(ModelBase::toHttpContent(namePrefix + U("key_type"), m_Key_type));
    multipart->add(ModelBase::toHttpContent(namePrefix + U("name"), m_Name));
    multipart->add(ModelBase::toHttpContent(namePrefix + U("value_type"), m_Value_type));
    
}

void LookupTypeResource::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    setDescription(ModelBase::stringFromHttpContent(multipart->getContent(U("description"))));
    setKeyType(ModelBase::stringFromHttpContent(multipart->getContent(U("key_type"))));
    setName(ModelBase::stringFromHttpContent(multipart->getContent(U("name"))));
    setValueType(ModelBase::stringFromHttpContent(multipart->getContent(U("value_type"))));
    
}


utility::string_t LookupTypeResource::getDescription() const
{
    return m_Description;
}
void LookupTypeResource::setDescription(utility::string_t value)
{
    m_Description = value;
    
}
utility::string_t LookupTypeResource::getKeyType() const
{
    return m_Key_type;
}
void LookupTypeResource::setKeyType(utility::string_t value)
{
    m_Key_type = value;
    
}
utility::string_t LookupTypeResource::getName() const
{
    return m_Name;
}
void LookupTypeResource::setName(utility::string_t value)
{
    m_Name = value;
    
}
utility::string_t LookupTypeResource::getValueType() const
{
    return m_Value_type;
}
void LookupTypeResource::setValueType(utility::string_t value)
{
    m_Value_type = value;
    
}

}
}
}
}
