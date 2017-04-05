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



#include "Behavior.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

Behavior::Behavior()
{
    m_Description = U("");
    m_DescriptionIsSet = false;
    m_Type_hint = U("");
    m_Type_hintIsSet = false;
    
}

Behavior::~Behavior()
{
}

void Behavior::validate()
{
    // TODO: implement validation
}

web::json::value Behavior::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_DescriptionIsSet)
    {
        val[U("description")] = ModelBase::toJson(m_Description);
    }
    if(m_Type_hintIsSet)
    {
        val[U("type_hint")] = ModelBase::toJson(m_Type_hint);
    }
    

    return val;
}

void Behavior::fromJson(web::json::value& val)
{
    if(val.has_field(U("description")))
    {
        setDescription(ModelBase::stringFromJson(val[U("description")]));
        
    }
    if(val.has_field(U("type_hint")))
    {
        setTypeHint(ModelBase::stringFromJson(val[U("type_hint")]));
        
    }
    
}

void Behavior::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_DescriptionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("description"), m_Description));
        
    }
    if(m_Type_hintIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("type_hint"), m_Type_hint));
        
    }
    
}

void Behavior::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("description")))
    {
        setDescription(ModelBase::stringFromHttpContent(multipart->getContent(U("description"))));
        
    }
    if(multipart->hasContent(U("type_hint")))
    {
        setTypeHint(ModelBase::stringFromHttpContent(multipart->getContent(U("type_hint"))));
        
    }
    
}


utility::string_t Behavior::getDescription() const
{
    return m_Description;
}
void Behavior::setDescription(utility::string_t value)
{
    m_Description = value;
    m_DescriptionIsSet = true;
}
bool Behavior::descriptionIsSet() const
{
    return m_DescriptionIsSet;
}
void Behavior::unsetDescription()
{
    m_DescriptionIsSet = false;
}
utility::string_t Behavior::getTypeHint() const
{
    return m_Type_hint;
}
void Behavior::setTypeHint(utility::string_t value)
{
    m_Type_hint = value;
    m_Type_hintIsSet = true;
}
bool Behavior::type_hintIsSet() const
{
    return m_Type_hintIsSet;
}
void Behavior::unsetType_hint()
{
    m_Type_hintIsSet = false;
}

}
}
}
}

