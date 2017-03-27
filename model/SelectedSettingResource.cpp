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



#include "SelectedSettingResource.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

SelectedSettingResource::SelectedSettingResource()
{
    m_Key = U("");
    m_Key_name = U("");
    m_Value = U("");
    m_Value_name = U("");
    
}

SelectedSettingResource::~SelectedSettingResource()
{
}

void SelectedSettingResource::validate()
{
    // TODO: implement validation
}

web::json::value SelectedSettingResource::toJson() const
{
    web::json::value val = web::json::value::object();

    val[U("key")] = ModelBase::toJson(m_Key);
    val[U("key_name")] = ModelBase::toJson(m_Key_name);
    val[U("value")] = ModelBase::toJson(m_Value);
    val[U("value_name")] = ModelBase::toJson(m_Value_name);
    

    return val;
}

void SelectedSettingResource::fromJson(web::json::value& val)
{
    setKey(ModelBase::stringFromJson(val[U("key")]));
    setKeyName(ModelBase::stringFromJson(val[U("key_name")]));
    setValue(ModelBase::stringFromJson(val[U("value")]));
    setValueName(ModelBase::stringFromJson(val[U("value_name")]));
    
}

void SelectedSettingResource::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + U("key"), m_Key));
    multipart->add(ModelBase::toHttpContent(namePrefix + U("key_name"), m_Key_name));
    multipart->add(ModelBase::toHttpContent(namePrefix + U("value"), m_Value));
    multipart->add(ModelBase::toHttpContent(namePrefix + U("value_name"), m_Value_name));
    
}

void SelectedSettingResource::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    setKey(ModelBase::stringFromHttpContent(multipart->getContent(U("key"))));
    setKeyName(ModelBase::stringFromHttpContent(multipart->getContent(U("key_name"))));
    setValue(ModelBase::stringFromHttpContent(multipart->getContent(U("value"))));
    setValueName(ModelBase::stringFromHttpContent(multipart->getContent(U("value_name"))));
    
}


utility::string_t SelectedSettingResource::getKey() const
{
    return m_Key;
}
void SelectedSettingResource::setKey(utility::string_t value)
{
    m_Key = value;
    
}
utility::string_t SelectedSettingResource::getKeyName() const
{
    return m_Key_name;
}
void SelectedSettingResource::setKeyName(utility::string_t value)
{
    m_Key_name = value;
    
}
utility::string_t SelectedSettingResource::getValue() const
{
    return m_Value;
}
void SelectedSettingResource::setValue(utility::string_t value)
{
    m_Value = value;
    
}
utility::string_t SelectedSettingResource::getValueName() const
{
    return m_Value_name;
}
void SelectedSettingResource::setValueName(utility::string_t value)
{
    m_Value_name = value;
    
}

}
}
}
}
