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



#include "KeyValuePair«string,string».h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

KeyValuePair«string,string»::KeyValuePair«string,string»()
{
    m_Key = U("");
    m_KeyIsSet = false;
    m_Value = U("");
    m_ValueIsSet = false;
}

KeyValuePair«string,string»::~KeyValuePair«string,string»()
{
}

void KeyValuePair«string,string»::validate()
{
    // TODO: implement validation
}

web::json::value KeyValuePair«string,string»::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_KeyIsSet)
    {
        val[U("key")] = ModelBase::toJson(m_Key);
    }
    if(m_ValueIsSet)
    {
        val[U("value")] = ModelBase::toJson(m_Value);
    }

    return val;
}

void KeyValuePair«string,string»::fromJson(web::json::value& val)
{
    if(val.has_field(U("key")))
    {
        setKey(ModelBase::stringFromJson(val[U("key")]));
    }
    if(val.has_field(U("value")))
    {
        setValue(ModelBase::stringFromJson(val[U("value")]));
    }
}

void KeyValuePair«string,string»::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_KeyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("key"), m_Key));
        
    }
    if(m_ValueIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("value"), m_Value));
        
    }
}

void KeyValuePair«string,string»::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("key")))
    {
        setKey(ModelBase::stringFromHttpContent(multipart->getContent(U("key"))));
    }
    if(multipart->hasContent(U("value")))
    {
        setValue(ModelBase::stringFromHttpContent(multipart->getContent(U("value"))));
    }
}

utility::string_t KeyValuePair«string,string»::getKey() const
{
    return m_Key;
}


void KeyValuePair«string,string»::setKey(utility::string_t value)
{
    m_Key = value;
    m_KeyIsSet = true;
}
bool KeyValuePair«string,string»::keyIsSet() const
{
    return m_KeyIsSet;
}

void KeyValuePair«string,string»::unsetKey()
{
    m_KeyIsSet = false;
}

utility::string_t KeyValuePair«string,string»::getValue() const
{
    return m_Value;
}


void KeyValuePair«string,string»::setValue(utility::string_t value)
{
    m_Value = value;
    m_ValueIsSet = true;
}
bool KeyValuePair«string,string»::valueIsSet() const
{
    return m_ValueIsSet;
}

void KeyValuePair«string,string»::unsetValue()
{
    m_ValueIsSet = false;
}

}
}
}
}

