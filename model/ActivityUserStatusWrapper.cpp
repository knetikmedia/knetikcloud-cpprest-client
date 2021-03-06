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



#include "ActivityUserStatusWrapper.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

ActivityUserStatusWrapper::ActivityUserStatusWrapper()
{
    m_Value = U("");
    m_ValueIsSet = false;
}

ActivityUserStatusWrapper::~ActivityUserStatusWrapper()
{
}

void ActivityUserStatusWrapper::validate()
{
    // TODO: implement validation
}

web::json::value ActivityUserStatusWrapper::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_ValueIsSet)
    {
        val[U("value")] = ModelBase::toJson(m_Value);
    }

    return val;
}

void ActivityUserStatusWrapper::fromJson(web::json::value& val)
{
    if(val.has_field(U("value")))
    {
        setValue(ModelBase::stringFromJson(val[U("value")]));
    }
}

void ActivityUserStatusWrapper::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_ValueIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("value"), m_Value));
        
    }
}

void ActivityUserStatusWrapper::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("value")))
    {
        setValue(ModelBase::stringFromHttpContent(multipart->getContent(U("value"))));
    }
}

utility::string_t ActivityUserStatusWrapper::getValue() const
{
    return m_Value;
}


void ActivityUserStatusWrapper::setValue(utility::string_t value)
{
    m_Value = value;
    m_ValueIsSet = true;
}
bool ActivityUserStatusWrapper::valueIsSet() const
{
    return m_ValueIsSet;
}

void ActivityUserStatusWrapper::unsetValue()
{
    m_ValueIsSet = false;
}

}
}
}
}

