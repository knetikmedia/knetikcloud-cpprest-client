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



#include "PropertyDefinitionResource.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

PropertyDefinitionResource::PropertyDefinitionResource()
{
    m_Name = U("");
    m_Required = false;
    m_Type = U("");
    
}

PropertyDefinitionResource::~PropertyDefinitionResource()
{
}

void PropertyDefinitionResource::validate()
{
    // TODO: implement validation
}

web::json::value PropertyDefinitionResource::toJson() const
{
    web::json::value val = web::json::value::object();

    val[U("name")] = ModelBase::toJson(m_Name);
    val[U("required")] = ModelBase::toJson(m_Required);
    val[U("type")] = ModelBase::toJson(m_Type);
    

    return val;
}

void PropertyDefinitionResource::fromJson(web::json::value& val)
{
    setName(ModelBase::stringFromJson(val[U("name")]));
    setRequired(ModelBase::boolFromJson(val[U("required")]));
    setType(ModelBase::stringFromJson(val[U("type")]));
    
}

void PropertyDefinitionResource::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + U("name"), m_Name));
    multipart->add(ModelBase::toHttpContent(namePrefix + U("required"), m_Required));
    multipart->add(ModelBase::toHttpContent(namePrefix + U("type"), m_Type));
    
}

void PropertyDefinitionResource::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    setName(ModelBase::stringFromHttpContent(multipart->getContent(U("name"))));
    setRequired(ModelBase::boolFromHttpContent(multipart->getContent(U("required"))));
    setType(ModelBase::stringFromHttpContent(multipart->getContent(U("type"))));
    
}


utility::string_t PropertyDefinitionResource::getName() const
{
    return m_Name;
}
void PropertyDefinitionResource::setName(utility::string_t value)
{
    m_Name = value;
    
}
bool PropertyDefinitionResource::getRequired() const
{
    return m_Required;
}
void PropertyDefinitionResource::setRequired(bool value)
{
    m_Required = value;
    
}
utility::string_t PropertyDefinitionResource::getType() const
{
    return m_Type;
}
void PropertyDefinitionResource::setType(utility::string_t value)
{
    m_Type = value;
    
}

}
}
}
}
