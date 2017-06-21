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



#include "CategoryResource.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

CategoryResource::CategoryResource()
{
    m_Active = false;
    m_ActiveIsSet = false;
    m_Additional_propertiesIsSet = false;
    m_Id = U("");
    m_IdIsSet = false;
    m_Name = U("");
    m_Template = U("");
    m_TemplateIsSet = false;
    
}

CategoryResource::~CategoryResource()
{
}

void CategoryResource::validate()
{
    // TODO: implement validation
}

web::json::value CategoryResource::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_ActiveIsSet)
    {
        val[U("active")] = ModelBase::toJson(m_Active);
    }
    if(m_Additional_propertiesIsSet)
    {
        val[U("additional_properties")] = ModelBase::toJson(m_Additional_properties);
    }
    if(m_IdIsSet)
    {
        val[U("id")] = ModelBase::toJson(m_Id);
    }
    val[U("name")] = ModelBase::toJson(m_Name);
    if(m_TemplateIsSet)
    {
        val[U("template")] = ModelBase::toJson(m_Template);
    }
    

    return val;
}

void CategoryResource::fromJson(web::json::value& val)
{
    if(val.has_field(U("active")))
    {
        setActive(ModelBase::boolFromJson(val[U("active")]));
    }
    if(val.has_field(U("additional_properties")))
    {
        if(!val[U("additional_properties")].is_null())
        {
            std::map<utility::string_t, std::shared_ptr<Property>> newItem(std::map<utility::string_t, Property>());
            newItem->fromJson(val[U("additional_properties")]);
            setAdditionalProperties( newItem );
        }
        
    }
    if(val.has_field(U("id")))
    {
        setId(ModelBase::stringFromJson(val[U("id")]));
        
    }
    setName(ModelBase::stringFromJson(val[U("name")]));
    if(val.has_field(U("template")))
    {
        setTemplate(ModelBase::stringFromJson(val[U("template")]));
        
    }
    
}

void CategoryResource::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_ActiveIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("active"), m_Active));
    }
    if(m_Additional_propertiesIsSet)
    {
        if (m_Additional_properties.get())
        {
            m_Additional_properties->toMultipart(multipart, U("additional_properties."));
        }
        
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("id"), m_Id));
        
    }
    multipart->add(ModelBase::toHttpContent(namePrefix + U("name"), m_Name));
    if(m_TemplateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("template"), m_Template));
        
    }
    
}

void CategoryResource::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("active")))
    {
        setActive(ModelBase::boolFromHttpContent(multipart->getContent(U("active"))));
    }
    if(multipart->hasContent(U("additional_properties")))
    {
        if(multipart->hasContent(U("additional_properties")))
        {
            std::map<utility::string_t, std::shared_ptr<Property>> newItem(std::map<utility::string_t, Property>());
            newItem->fromMultiPart(multipart, U("additional_properties."));
            setAdditionalProperties( newItem );
        }
        
    }
    if(multipart->hasContent(U("id")))
    {
        setId(ModelBase::stringFromHttpContent(multipart->getContent(U("id"))));
        
    }
    setName(ModelBase::stringFromHttpContent(multipart->getContent(U("name"))));
    if(multipart->hasContent(U("template")))
    {
        setTemplate(ModelBase::stringFromHttpContent(multipart->getContent(U("template"))));
        
    }
    
}


bool CategoryResource::getActive() const
{
    return m_Active;
}
void CategoryResource::setActive(bool value)
{
    m_Active = value;
    m_ActiveIsSet = true;
}
bool CategoryResource::activeIsSet() const
{
    return m_ActiveIsSet;
}
void CategoryResource::unsetActive()
{
    m_ActiveIsSet = false;
}
std::map<utility::string_t, std::shared_ptr<Property>>& CategoryResource::getAdditionalProperties()
{
    return m_Additional_properties;
}
bool CategoryResource::additional_propertiesIsSet() const
{
    return m_Additional_propertiesIsSet;
}
void CategoryResource::unsetAdditional_properties()
{
    m_Additional_propertiesIsSet = false;
}
utility::string_t CategoryResource::getId() const
{
    return m_Id;
}
void CategoryResource::setId(utility::string_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}
bool CategoryResource::idIsSet() const
{
    return m_IdIsSet;
}
void CategoryResource::unsetId()
{
    m_IdIsSet = false;
}
utility::string_t CategoryResource::getName() const
{
    return m_Name;
}
void CategoryResource::setName(utility::string_t value)
{
    m_Name = value;
    
}
utility::string_t CategoryResource::getTemplate() const
{
    return m_Template;
}
void CategoryResource::setTemplate(utility::string_t value)
{
    m_Template = value;
    m_TemplateIsSet = true;
}
bool CategoryResource::templateIsSet() const
{
    return m_TemplateIsSet;
}
void CategoryResource::unsetTemplate()
{
    m_TemplateIsSet = false;
}

}
}
}
}

