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



#include "ArgumentResource.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

ArgumentResource::ArgumentResource()
{
    m_Name = U("");
    m_NameIsSet = false;
    m_Type = U("");
    m_TypeIsSet = false;
}

ArgumentResource::~ArgumentResource()
{
}

void ArgumentResource::validate()
{
    // TODO: implement validation
}

web::json::value ArgumentResource::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_NameIsSet)
    {
        val[U("name")] = ModelBase::toJson(m_Name);
    }
    if(m_TypeIsSet)
    {
        val[U("type")] = ModelBase::toJson(m_Type);
    }

    return val;
}

void ArgumentResource::fromJson(web::json::value& val)
{
    if(val.has_field(U("name")))
    {
        setName(ModelBase::stringFromJson(val[U("name")]));
    }
    if(val.has_field(U("type")))
    {
        setType(ModelBase::stringFromJson(val[U("type")]));
    }
}

void ArgumentResource::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("name"), m_Name));
        
    }
    if(m_TypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("type"), m_Type));
        
    }
}

void ArgumentResource::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("name")))
    {
        setName(ModelBase::stringFromHttpContent(multipart->getContent(U("name"))));
    }
    if(multipart->hasContent(U("type")))
    {
        setType(ModelBase::stringFromHttpContent(multipart->getContent(U("type"))));
    }
}

utility::string_t ArgumentResource::getName() const
{
    return m_Name;
}


void ArgumentResource::setName(utility::string_t value)
{
    m_Name = value;
    m_NameIsSet = true;
}
bool ArgumentResource::nameIsSet() const
{
    return m_NameIsSet;
}

void ArgumentResource::unsetName()
{
    m_NameIsSet = false;
}

utility::string_t ArgumentResource::getType() const
{
    return m_Type;
}


void ArgumentResource::setType(utility::string_t value)
{
    m_Type = value;
    m_TypeIsSet = true;
}
bool ArgumentResource::typeIsSet() const
{
    return m_TypeIsSet;
}

void ArgumentResource::unsetType()
{
    m_TypeIsSet = false;
}

}
}
}
}

