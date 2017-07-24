/**
 * Knetik Platform API Documentation latest 
 * This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://knetikcloud.com.
 *
 * OpenAPI spec version: latest 
 * Contact: support@knetik.com
 *
 * NOTE: This class is auto generated by the swagger code generator 2.2.3.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */



#include "DateProperty.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

DateProperty::DateProperty()
{
    m_Value = 0L;
    m_ValueIsSet = false;
}

DateProperty::~DateProperty()
{
}

void DateProperty::validate()
{
    // TODO: implement validation
}

web::json::value DateProperty::toJson() const
{
    web::json::value val = this->Property::toJson();

    if(m_ValueIsSet)
    {
        val[U("value")] = ModelBase::toJson(m_Value);
    }

    return val;
}

void DateProperty::fromJson(web::json::value& val)
{
    this->Property::fromJson(val);

    if(val.has_field(U("value")))
    {
        setValue(ModelBase::int64_tFromJson(val[U("value")]));
    }
}

void DateProperty::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + U("type"), m_Type));
    if(m_ValueIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("value"), m_Value));
    }
}

void DateProperty::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    setType(ModelBase::stringFromHttpContent(multipart->getContent(U("type"))));
    if(multipart->hasContent(U("value")))
    {
        setValue(ModelBase::int64_tFromHttpContent(multipart->getContent(U("value"))));
    }
}

int64_t DateProperty::getValue() const
{
    return m_Value;
}


void DateProperty::setValue(int64_t value)
{
    m_Value = value;
    m_ValueIsSet = true;
}
bool DateProperty::valueIsSet() const
{
    return m_ValueIsSet;
}

void DateProperty::unsetValue()
{
    m_ValueIsSet = false;
}

}
}
}
}

