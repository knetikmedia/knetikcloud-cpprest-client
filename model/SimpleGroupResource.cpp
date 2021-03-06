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



#include "SimpleGroupResource.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

SimpleGroupResource::SimpleGroupResource()
{
    m_Name = U("");
    m_Unique_name = U("");
    m_Unique_nameIsSet = false;
}

SimpleGroupResource::~SimpleGroupResource()
{
}

void SimpleGroupResource::validate()
{
    // TODO: implement validation
}

web::json::value SimpleGroupResource::toJson() const
{
    web::json::value val = web::json::value::object();

    val[U("name")] = ModelBase::toJson(m_Name);
    if(m_Unique_nameIsSet)
    {
        val[U("unique_name")] = ModelBase::toJson(m_Unique_name);
    }

    return val;
}

void SimpleGroupResource::fromJson(web::json::value& val)
{
    setName(ModelBase::stringFromJson(val[U("name")]));
    if(val.has_field(U("unique_name")))
    {
        setUniqueName(ModelBase::stringFromJson(val[U("unique_name")]));
    }
}

void SimpleGroupResource::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + U("name"), m_Name));
    if(m_Unique_nameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("unique_name"), m_Unique_name));
        
    }
}

void SimpleGroupResource::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    setName(ModelBase::stringFromHttpContent(multipart->getContent(U("name"))));
    if(multipart->hasContent(U("unique_name")))
    {
        setUniqueName(ModelBase::stringFromHttpContent(multipart->getContent(U("unique_name"))));
    }
}

utility::string_t SimpleGroupResource::getName() const
{
    return m_Name;
}


void SimpleGroupResource::setName(utility::string_t value)
{
    m_Name = value;
    
}
utility::string_t SimpleGroupResource::getUniqueName() const
{
    return m_Unique_name;
}


void SimpleGroupResource::setUniqueName(utility::string_t value)
{
    m_Unique_name = value;
    m_Unique_nameIsSet = true;
}
bool SimpleGroupResource::uniqueNameIsSet() const
{
    return m_Unique_nameIsSet;
}

void SimpleGroupResource::unsetUnique_name()
{
    m_Unique_nameIsSet = false;
}

}
}
}
}

