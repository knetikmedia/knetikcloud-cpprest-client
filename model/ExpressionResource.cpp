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



#include "ExpressionResource.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

ExpressionResource::ExpressionResource()
{
    m_Definition = U("");
    m_DefinitionIsSet = false;
    m_Type = U("");
    m_TypeIsSet = false;
}

ExpressionResource::~ExpressionResource()
{
}

void ExpressionResource::validate()
{
    // TODO: implement validation
}

web::json::value ExpressionResource::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_DefinitionIsSet)
    {
        val[U("definition")] = ModelBase::toJson(m_Definition);
    }
    if(m_TypeIsSet)
    {
        val[U("type")] = ModelBase::toJson(m_Type);
    }

    return val;
}

void ExpressionResource::fromJson(web::json::value& val)
{
    if(val.has_field(U("definition")))
    {
        setDefinition(ModelBase::stringFromJson(val[U("definition")]));
    }
    if(val.has_field(U("type")))
    {
        setType(ModelBase::stringFromJson(val[U("type")]));
    }
}

void ExpressionResource::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_DefinitionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("definition"), m_Definition));
        
    }
    if(m_TypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("type"), m_Type));
        
    }
}

void ExpressionResource::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("definition")))
    {
        setDefinition(ModelBase::stringFromHttpContent(multipart->getContent(U("definition"))));
    }
    if(multipart->hasContent(U("type")))
    {
        setType(ModelBase::stringFromHttpContent(multipart->getContent(U("type"))));
    }
}

utility::string_t ExpressionResource::getDefinition() const
{
    return m_Definition;
}


void ExpressionResource::setDefinition(utility::string_t value)
{
    m_Definition = value;
    m_DefinitionIsSet = true;
}
bool ExpressionResource::definitionIsSet() const
{
    return m_DefinitionIsSet;
}

void ExpressionResource::unsetDefinition()
{
    m_DefinitionIsSet = false;
}

utility::string_t ExpressionResource::getType() const
{
    return m_Type;
}


void ExpressionResource::setType(utility::string_t value)
{
    m_Type = value;
    m_TypeIsSet = true;
}
bool ExpressionResource::typeIsSet() const
{
    return m_TypeIsSet;
}

void ExpressionResource::unsetType()
{
    m_TypeIsSet = false;
}

}
}
}
}

