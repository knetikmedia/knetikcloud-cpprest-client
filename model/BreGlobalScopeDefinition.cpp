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



#include "BreGlobalScopeDefinition.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

BreGlobalScopeDefinition::BreGlobalScopeDefinition()
{
    m_Name = U("");
    m_Type = U("");
}

BreGlobalScopeDefinition::~BreGlobalScopeDefinition()
{
}

void BreGlobalScopeDefinition::validate()
{
    // TODO: implement validation
}

web::json::value BreGlobalScopeDefinition::toJson() const
{
    web::json::value val = web::json::value::object();

    val[U("name")] = ModelBase::toJson(m_Name);
    val[U("type")] = ModelBase::toJson(m_Type);

    return val;
}

void BreGlobalScopeDefinition::fromJson(web::json::value& val)
{
    setName(ModelBase::stringFromJson(val[U("name")]));
    setType(ModelBase::stringFromJson(val[U("type")]));
}

void BreGlobalScopeDefinition::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + U("name"), m_Name));
    multipart->add(ModelBase::toHttpContent(namePrefix + U("type"), m_Type));
}

void BreGlobalScopeDefinition::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    setName(ModelBase::stringFromHttpContent(multipart->getContent(U("name"))));
    setType(ModelBase::stringFromHttpContent(multipart->getContent(U("type"))));
}

utility::string_t BreGlobalScopeDefinition::getName() const
{
    return m_Name;
}


void BreGlobalScopeDefinition::setName(utility::string_t value)
{
    m_Name = value;
    
}
utility::string_t BreGlobalScopeDefinition::getType() const
{
    return m_Type;
}


void BreGlobalScopeDefinition::setType(utility::string_t value)
{
    m_Type = value;
    
}
}
}
}
}

