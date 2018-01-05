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
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Additional_properties )
        {
            web::json::value tmp = web::json::value::object();
            tmp[U("key")] = ModelBase::toJson(item.first);
            tmp[U("value")] = ModelBase::toJson(item.second);
            jsonArray.push_back(tmp);
        }
        if(jsonArray.size() > 0)
        {
            val[U("additional_properties")] = web::json::value::array(jsonArray);
        }
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
    {
        m_Additional_properties.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(U("additional_properties")))
        {
        for( auto& item : val[U("additional_properties")].as_array() )
        {  
            utility::string_t key;
            if(item.has_field(U("key")))
            {
                key = ModelBase::stringFromJson(item[U("key")]);
            }
            if(item.is_null())
            {
                m_Additional_properties.insert(std::pair<utility::string_t,std::shared_ptr<Property>>( key, std::shared_ptr<Property>(nullptr) ));
            }
            else
            {
                std::shared_ptr<Property> newItem(new Property());
                newItem->fromJson(item[U("value")]);
                m_Additional_properties.insert(std::pair<utility::string_t,std::shared_ptr<Property>>( key, newItem ));
            }
        }
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
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Additional_properties )
        {
            web::json::value tmp = web::json::value::object();
            tmp[U("key")] = ModelBase::toJson(item.first);
            tmp[U("value")] = ModelBase::toJson(item.second);
            jsonArray.push_back(tmp);
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + U("additional_properties"), web::json::value::array(jsonArray), U("application/json")));
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
    {
        m_Additional_properties.clear();
        if(multipart->hasContent(U("additional_properties")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(U("additional_properties"))));
        for( auto& item : jsonArray.as_array() )
        {
            utility::string_t key;
            if(item.has_field(U("key")))
            {
                key = ModelBase::stringFromJson(item[U("key")]);
            }
            if(item.is_null())
            {
                m_Additional_properties.insert(std::pair<utility::string_t,std::shared_ptr<Property>>( key, std::shared_ptr<Property>(nullptr) ));
            }
            else
            {
                std::shared_ptr<Property> newItem(new Property());
                newItem->fromJson(item[U("value")]);
                m_Additional_properties.insert(std::pair<utility::string_t,std::shared_ptr<Property>>( key, newItem ));
            }
        }
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

void CategoryResource::setAdditionalProperties(std::map<utility::string_t, std::shared_ptr<Property>> value)
{
    m_Additional_properties = value;
    m_Additional_propertiesIsSet = true;
}
bool CategoryResource::additionalPropertiesIsSet() const
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
