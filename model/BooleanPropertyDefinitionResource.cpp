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



#include "BooleanPropertyDefinitionResource.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

BooleanPropertyDefinitionResource::BooleanPropertyDefinitionResource()
{
    m_Field_listIsSet = false;
    m_Name = U("");
    m_Required = false;
    m_Type = U("");
    
}

BooleanPropertyDefinitionResource::~BooleanPropertyDefinitionResource()
{
}

void BooleanPropertyDefinitionResource::validate()
{
    // TODO: implement validation
}

web::json::value BooleanPropertyDefinitionResource::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Field_listIsSet)
    {
        val[U("field_list")] = ModelBase::toJson(m_Field_list);
    }
    val[U("name")] = ModelBase::toJson(m_Name);
    val[U("required")] = ModelBase::toJson(m_Required);
    val[U("type")] = ModelBase::toJson(m_Type);
    

    return val;
}

void BooleanPropertyDefinitionResource::fromJson(web::json::value& val)
{
    if(val.has_field(U("field_list")))
    {
        if(!val[U("field_list")].is_null())
        {
            std::shared_ptr<PropertyFieldListResource> newItem(new PropertyFieldListResource());
            newItem->fromJson(val[U("field_list")]);
            setFieldList( newItem );
        }
        
    }
    setName(ModelBase::stringFromJson(val[U("name")]));
    setRequired(ModelBase::boolFromJson(val[U("required")]));
    setType(ModelBase::stringFromJson(val[U("type")]));
    
}

void BooleanPropertyDefinitionResource::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_Field_listIsSet)
    {
        if (m_Field_list.get())
        {
            m_Field_list->toMultipart(multipart, U("field_list."));
        }
        
    }
    multipart->add(ModelBase::toHttpContent(namePrefix + U("name"), m_Name));
    multipart->add(ModelBase::toHttpContent(namePrefix + U("required"), m_Required));
    multipart->add(ModelBase::toHttpContent(namePrefix + U("type"), m_Type));
    
}

void BooleanPropertyDefinitionResource::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("field_list")))
    {
        if(multipart->hasContent(U("field_list")))
        {
            std::shared_ptr<PropertyFieldListResource> newItem(new PropertyFieldListResource());
            newItem->fromMultiPart(multipart, U("field_list."));
            setFieldList( newItem );
        }
        
    }
    setName(ModelBase::stringFromHttpContent(multipart->getContent(U("name"))));
    setRequired(ModelBase::boolFromHttpContent(multipart->getContent(U("required"))));
    setType(ModelBase::stringFromHttpContent(multipart->getContent(U("type"))));
    
}


std::shared_ptr<PropertyFieldListResource> BooleanPropertyDefinitionResource::getFieldList() const
{
    return m_Field_list;
}
void BooleanPropertyDefinitionResource::setFieldList(std::shared_ptr<PropertyFieldListResource> value)
{
    m_Field_list = value;
    m_Field_listIsSet = true;
}
bool BooleanPropertyDefinitionResource::field_listIsSet() const
{
    return m_Field_listIsSet;
}
void BooleanPropertyDefinitionResource::unsetField_list()
{
    m_Field_listIsSet = false;
}
utility::string_t BooleanPropertyDefinitionResource::getName() const
{
    return m_Name;
}
void BooleanPropertyDefinitionResource::setName(utility::string_t value)
{
    m_Name = value;
    
}
bool BooleanPropertyDefinitionResource::getRequired() const
{
    return m_Required;
}
void BooleanPropertyDefinitionResource::setRequired(bool value)
{
    m_Required = value;
    
}
utility::string_t BooleanPropertyDefinitionResource::getType() const
{
    return m_Type;
}
void BooleanPropertyDefinitionResource::setType(utility::string_t value)
{
    m_Type = value;
    
}

}
}
}
}

