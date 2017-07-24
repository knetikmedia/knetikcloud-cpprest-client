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



#include "IntegerProperty.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

IntegerProperty::IntegerProperty()
{
    m_Value = 0;
    m_ValueIsSet = false;
}

IntegerProperty::~IntegerProperty()
{
}

void IntegerProperty::validate()
{
    // TODO: implement validation
}

web::json::value IntegerProperty::toJson() const
{
    web::json::value val = this->Property::toJson();

    if(m_ValueIsSet)
    {
        val[U("value")] = ModelBase::toJson(m_Value);
    }

    return val;
}

void IntegerProperty::fromJson(web::json::value& val)
{
    this->Property::fromJson(val);

    if(val.has_field(U("value")))
    {
        setValue(ModelBase::int32_tFromJson(val[U("value")]));
    }
}

void IntegerProperty::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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

void IntegerProperty::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    setType(ModelBase::stringFromHttpContent(multipart->getContent(U("type"))));
    if(multipart->hasContent(U("value")))
    {
        setValue(ModelBase::int32_tFromHttpContent(multipart->getContent(U("value"))));
    }
}

int32_t IntegerProperty::getValue() const
{
    return m_Value;
}


void IntegerProperty::setValue(int32_t value)
{
    m_Value = value;
    m_ValueIsSet = true;
}
bool IntegerProperty::valueIsSet() const
{
    return m_ValueIsSet;
}

void IntegerProperty::unsetValue()
{
    m_ValueIsSet = false;
}

}
}
}
}

