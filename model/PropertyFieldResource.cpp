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



#include "PropertyFieldResource.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

PropertyFieldResource::PropertyFieldResource()
{
    m_Description = U("");
    m_DescriptionIsSet = false;
    m_Inner_type = U("");
    m_Inner_typeIsSet = false;
    m_Inner_type_fieldsIsSet = false;
    m_Name = U("");
    m_NameIsSet = false;
    m_Required = false;
    m_RequiredIsSet = false;
    m_Type = U("");
    m_TypeIsSet = false;
    m_Valid_valuesIsSet = false;
}

PropertyFieldResource::~PropertyFieldResource()
{
}

void PropertyFieldResource::validate()
{
    // TODO: implement validation
}

web::json::value PropertyFieldResource::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_DescriptionIsSet)
    {
        val[U("description")] = ModelBase::toJson(m_Description);
    }
    if(m_Inner_typeIsSet)
    {
        val[U("inner_type")] = ModelBase::toJson(m_Inner_type);
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Inner_type_fields )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        if(jsonArray.size() > 0)
        {
            val[U("inner_type_fields")] = web::json::value::array(jsonArray);
        }
    }
    if(m_NameIsSet)
    {
        val[U("name")] = ModelBase::toJson(m_Name);
    }
    if(m_RequiredIsSet)
    {
        val[U("required")] = ModelBase::toJson(m_Required);
    }
    if(m_TypeIsSet)
    {
        val[U("type")] = ModelBase::toJson(m_Type);
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Valid_values )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        if(jsonArray.size() > 0)
        {
            val[U("valid_values")] = web::json::value::array(jsonArray);
        }
    }

    return val;
}

void PropertyFieldResource::fromJson(web::json::value& val)
{
    if(val.has_field(U("description")))
    {
        setDescription(ModelBase::stringFromJson(val[U("description")]));
    }
    if(val.has_field(U("inner_type")))
    {
        setInnerType(ModelBase::stringFromJson(val[U("inner_type")]));
    }
    {
        m_Inner_type_fields.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(U("inner_type_fields")))
        {
        for( auto& item : val[U("inner_type_fields")].as_array() )
        {
            if(item.is_null())
            {
                m_Inner_type_fields.push_back( std::shared_ptr<PropertyFieldResource>(nullptr) );
            }
            else
            {
                std::shared_ptr<PropertyFieldResource> newItem(new PropertyFieldResource());
                newItem->fromJson(item);
                m_Inner_type_fields.push_back( newItem );
            }
        }
        }
    }
    if(val.has_field(U("name")))
    {
        setName(ModelBase::stringFromJson(val[U("name")]));
    }
    if(val.has_field(U("required")))
    {
        setRequired(ModelBase::boolFromJson(val[U("required")]));
    }
    if(val.has_field(U("type")))
    {
        setType(ModelBase::stringFromJson(val[U("type")]));
    }
    {
        m_Valid_values.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(U("valid_values")))
        {
        for( auto& item : val[U("valid_values")].as_array() )
        {
            m_Valid_values.push_back(ModelBase::stringFromJson(item));
        }
        }
    }
}

void PropertyFieldResource::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_Inner_typeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("inner_type"), m_Inner_type));
        
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Inner_type_fields )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + U("inner_type_fields"), web::json::value::array(jsonArray), U("application/json")));
        }
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("name"), m_Name));
        
    }
    if(m_RequiredIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("required"), m_Required));
    }
    if(m_TypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("type"), m_Type));
        
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Valid_values )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + U("valid_values"), web::json::value::array(jsonArray), U("application/json")));
        }
    }
}

void PropertyFieldResource::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(U("inner_type")))
    {
        setInnerType(ModelBase::stringFromHttpContent(multipart->getContent(U("inner_type"))));
    }
    {
        m_Inner_type_fields.clear();
        if(multipart->hasContent(U("inner_type_fields")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(U("inner_type_fields"))));
        for( auto& item : jsonArray.as_array() )
        {
            if(item.is_null())
            {
                m_Inner_type_fields.push_back( std::shared_ptr<PropertyFieldResource>(nullptr) );
            }
            else
            {
                std::shared_ptr<PropertyFieldResource> newItem(new PropertyFieldResource());
                newItem->fromJson(item);
                m_Inner_type_fields.push_back( newItem );
            }
        }
        }
    }
    if(multipart->hasContent(U("name")))
    {
        setName(ModelBase::stringFromHttpContent(multipart->getContent(U("name"))));
    }
    if(multipart->hasContent(U("required")))
    {
        setRequired(ModelBase::boolFromHttpContent(multipart->getContent(U("required"))));
    }
    if(multipart->hasContent(U("type")))
    {
        setType(ModelBase::stringFromHttpContent(multipart->getContent(U("type"))));
    }
    {
        m_Valid_values.clear();
        if(multipart->hasContent(U("valid_values")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(U("valid_values"))));
        for( auto& item : jsonArray.as_array() )
        {
            m_Valid_values.push_back(ModelBase::stringFromJson(item));
        }
        }
    }
}

utility::string_t PropertyFieldResource::getDescription() const
{
    return m_Description;
}


void PropertyFieldResource::setDescription(utility::string_t value)
{
    m_Description = value;
    m_DescriptionIsSet = true;
}
bool PropertyFieldResource::descriptionIsSet() const
{
    return m_DescriptionIsSet;
}

void PropertyFieldResource::unsetDescription()
{
    m_DescriptionIsSet = false;
}

utility::string_t PropertyFieldResource::getInnerType() const
{
    return m_Inner_type;
}


void PropertyFieldResource::setInnerType(utility::string_t value)
{
    m_Inner_type = value;
    m_Inner_typeIsSet = true;
}
bool PropertyFieldResource::innerTypeIsSet() const
{
    return m_Inner_typeIsSet;
}

void PropertyFieldResource::unsetInner_type()
{
    m_Inner_typeIsSet = false;
}

std::vector<std::shared_ptr<PropertyFieldResource>>& PropertyFieldResource::getInnerTypeFields()
{
    return m_Inner_type_fields;
}

void PropertyFieldResource::setInnerTypeFields(std::vector<std::shared_ptr<PropertyFieldResource>> value)
{
    m_Inner_type_fields = value;
    m_Inner_type_fieldsIsSet = true;
}
bool PropertyFieldResource::innerTypeFieldsIsSet() const
{
    return m_Inner_type_fieldsIsSet;
}

void PropertyFieldResource::unsetInner_type_fields()
{
    m_Inner_type_fieldsIsSet = false;
}

utility::string_t PropertyFieldResource::getName() const
{
    return m_Name;
}


void PropertyFieldResource::setName(utility::string_t value)
{
    m_Name = value;
    m_NameIsSet = true;
}
bool PropertyFieldResource::nameIsSet() const
{
    return m_NameIsSet;
}

void PropertyFieldResource::unsetName()
{
    m_NameIsSet = false;
}

bool PropertyFieldResource::getRequired() const
{
    return m_Required;
}


void PropertyFieldResource::setRequired(bool value)
{
    m_Required = value;
    m_RequiredIsSet = true;
}
bool PropertyFieldResource::requiredIsSet() const
{
    return m_RequiredIsSet;
}

void PropertyFieldResource::unsetRequired()
{
    m_RequiredIsSet = false;
}

utility::string_t PropertyFieldResource::getType() const
{
    return m_Type;
}


void PropertyFieldResource::setType(utility::string_t value)
{
    m_Type = value;
    m_TypeIsSet = true;
}
bool PropertyFieldResource::typeIsSet() const
{
    return m_TypeIsSet;
}

void PropertyFieldResource::unsetType()
{
    m_TypeIsSet = false;
}

std::vector<utility::string_t>& PropertyFieldResource::getValidValues()
{
    return m_Valid_values;
}

void PropertyFieldResource::setValidValues(std::vector<utility::string_t> value)
{
    m_Valid_values = value;
    m_Valid_valuesIsSet = true;
}
bool PropertyFieldResource::validValuesIsSet() const
{
    return m_Valid_valuesIsSet;
}

void PropertyFieldResource::unsetValid_values()
{
    m_Valid_valuesIsSet = false;
}

}
}
}
}
