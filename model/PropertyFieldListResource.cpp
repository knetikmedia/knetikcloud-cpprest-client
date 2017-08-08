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



#include "PropertyFieldListResource.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

PropertyFieldListResource::PropertyFieldListResource()
{
    m_Property_definition_fieldsIsSet = false;
    m_Property_fieldsIsSet = false;
    m_Property_type = U("");
    m_Property_typeIsSet = false;
}

PropertyFieldListResource::~PropertyFieldListResource()
{
}

void PropertyFieldListResource::validate()
{
    // TODO: implement validation
}

web::json::value PropertyFieldListResource::toJson() const
{
    web::json::value val = web::json::value::object();

    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Property_definition_fields )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        if(jsonArray.size() > 0)
        {
            val[U("property_definition_fields")] = web::json::value::array(jsonArray);
        }
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Property_fields )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        if(jsonArray.size() > 0)
        {
            val[U("property_fields")] = web::json::value::array(jsonArray);
        }
    }
    if(m_Property_typeIsSet)
    {
        val[U("property_type")] = ModelBase::toJson(m_Property_type);
    }

    return val;
}

void PropertyFieldListResource::fromJson(web::json::value& val)
{
    {
        m_Property_definition_fields.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(U("property_definition_fields")))
        {
        for( auto& item : val[U("property_definition_fields")].as_array() )
        {
            if(item.is_null())
            {
                m_Property_definition_fields.push_back( std::shared_ptr<PropertyFieldResource>(nullptr) );
            }
            else
            {
                std::shared_ptr<PropertyFieldResource> newItem(new PropertyFieldResource());
                newItem->fromJson(item);
                m_Property_definition_fields.push_back( newItem );
            }
        }
        }
    }
    {
        m_Property_fields.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(U("property_fields")))
        {
        for( auto& item : val[U("property_fields")].as_array() )
        {
            if(item.is_null())
            {
                m_Property_fields.push_back( std::shared_ptr<PropertyFieldResource>(nullptr) );
            }
            else
            {
                std::shared_ptr<PropertyFieldResource> newItem(new PropertyFieldResource());
                newItem->fromJson(item);
                m_Property_fields.push_back( newItem );
            }
        }
        }
    }
    if(val.has_field(U("property_type")))
    {
        setPropertyType(ModelBase::stringFromJson(val[U("property_type")]));
    }
}

void PropertyFieldListResource::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Property_definition_fields )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + U("property_definition_fields"), web::json::value::array(jsonArray), U("application/json")));
        }
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Property_fields )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + U("property_fields"), web::json::value::array(jsonArray), U("application/json")));
        }
    }
    if(m_Property_typeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("property_type"), m_Property_type));
        
    }
}

void PropertyFieldListResource::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    {
        m_Property_definition_fields.clear();
        if(multipart->hasContent(U("property_definition_fields")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(U("property_definition_fields"))));
        for( auto& item : jsonArray.as_array() )
        {
            if(item.is_null())
            {
                m_Property_definition_fields.push_back( std::shared_ptr<PropertyFieldResource>(nullptr) );
            }
            else
            {
                std::shared_ptr<PropertyFieldResource> newItem(new PropertyFieldResource());
                newItem->fromJson(item);
                m_Property_definition_fields.push_back( newItem );
            }
        }
        }
    }
    {
        m_Property_fields.clear();
        if(multipart->hasContent(U("property_fields")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(U("property_fields"))));
        for( auto& item : jsonArray.as_array() )
        {
            if(item.is_null())
            {
                m_Property_fields.push_back( std::shared_ptr<PropertyFieldResource>(nullptr) );
            }
            else
            {
                std::shared_ptr<PropertyFieldResource> newItem(new PropertyFieldResource());
                newItem->fromJson(item);
                m_Property_fields.push_back( newItem );
            }
        }
        }
    }
    if(multipart->hasContent(U("property_type")))
    {
        setPropertyType(ModelBase::stringFromHttpContent(multipart->getContent(U("property_type"))));
    }
}

std::vector<std::shared_ptr<PropertyFieldResource>>& PropertyFieldListResource::getPropertyDefinitionFields()
{
    return m_Property_definition_fields;
}

void PropertyFieldListResource::setPropertyDefinitionFields(std::vector<std::shared_ptr<PropertyFieldResource>> value)
{
    m_Property_definition_fields = value;
    m_Property_definition_fieldsIsSet = true;
}
bool PropertyFieldListResource::propertyDefinitionFieldsIsSet() const
{
    return m_Property_definition_fieldsIsSet;
}

void PropertyFieldListResource::unsetProperty_definition_fields()
{
    m_Property_definition_fieldsIsSet = false;
}

std::vector<std::shared_ptr<PropertyFieldResource>>& PropertyFieldListResource::getPropertyFields()
{
    return m_Property_fields;
}

void PropertyFieldListResource::setPropertyFields(std::vector<std::shared_ptr<PropertyFieldResource>> value)
{
    m_Property_fields = value;
    m_Property_fieldsIsSet = true;
}
bool PropertyFieldListResource::propertyFieldsIsSet() const
{
    return m_Property_fieldsIsSet;
}

void PropertyFieldListResource::unsetProperty_fields()
{
    m_Property_fieldsIsSet = false;
}

utility::string_t PropertyFieldListResource::getPropertyType() const
{
    return m_Property_type;
}


void PropertyFieldListResource::setPropertyType(utility::string_t value)
{
    m_Property_type = value;
    m_Property_typeIsSet = true;
}
bool PropertyFieldListResource::propertyTypeIsSet() const
{
    return m_Property_typeIsSet;
}

void PropertyFieldListResource::unsetProperty_type()
{
    m_Property_typeIsSet = false;
}

}
}
}
}

