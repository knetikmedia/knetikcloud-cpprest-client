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



#include "BooleanResource.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

BooleanResource::BooleanResource()
{
    m_Value = false;
    m_ValueIsSet = false;
}

BooleanResource::~BooleanResource()
{
}

void BooleanResource::validate()
{
    // TODO: implement validation
}

web::json::value BooleanResource::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_ValueIsSet)
    {
        val[U("value")] = ModelBase::toJson(m_Value);
    }

    return val;
}

void BooleanResource::fromJson(web::json::value& val)
{
    if(val.has_field(U("value")))
    {
        setValue(ModelBase::boolFromJson(val[U("value")]));
    }
}

void BooleanResource::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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

void BooleanResource::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("value")))
    {
        setValue(ModelBase::boolFromHttpContent(multipart->getContent(U("value"))));
    }
}

bool BooleanResource::getValue() const
{
    return m_Value;
}


void BooleanResource::setValue(bool value)
{
    m_Value = value;
    m_ValueIsSet = true;
}
bool BooleanResource::valueIsSet() const
{
    return m_ValueIsSet;
}

void BooleanResource::unsetValue()
{
    m_ValueIsSet = false;
}

}
}
}
}

