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



#include "ListPropertyDefinitionResource.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

ListPropertyDefinitionResource::ListPropertyDefinitionResource()
{
    m_Max_count = 0;
    m_Max_countIsSet = false;
    m_Min_count = 0;
    m_Min_countIsSet = false;
    m_Value_definitionIsSet = false;
}

ListPropertyDefinitionResource::~ListPropertyDefinitionResource()
{
}

void ListPropertyDefinitionResource::validate()
{
    // TODO: implement validation
}

web::json::value ListPropertyDefinitionResource::toJson() const
{
    web::json::value val = this->PropertyDefinitionResource::toJson();

    if(m_Max_countIsSet)
    {
        val[U("max_count")] = ModelBase::toJson(m_Max_count);
    }
    if(m_Min_countIsSet)
    {
        val[U("min_count")] = ModelBase::toJson(m_Min_count);
    }
    if(m_Value_definitionIsSet)
    {
        val[U("value_definition")] = ModelBase::toJson(m_Value_definition);
    }

    return val;
}

void ListPropertyDefinitionResource::fromJson(web::json::value& val)
{
    this->PropertyDefinitionResource::fromJson(val);

    if(val.has_field(U("max_count")))
    {
        setMaxCount(ModelBase::int32_tFromJson(val[U("max_count")]));
    }
    if(val.has_field(U("min_count")))
    {
        setMinCount(ModelBase::int32_tFromJson(val[U("min_count")]));
    }
    if(val.has_field(U("value_definition")))
    {
        if(!val[U("value_definition")].is_null())
        {
            std::shared_ptr<PropertyDefinitionResource> newItem(new PropertyDefinitionResource());
            newItem->fromJson(val[U("value_definition")]);
            setValueDefinition( newItem );
        }
    }
}

void ListPropertyDefinitionResource::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_Max_countIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("max_count"), m_Max_count));
    }
    if(m_Min_countIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("min_count"), m_Min_count));
    }
    if(m_Value_definitionIsSet)
    {
        if (m_Value_definition.get())
        {
            m_Value_definition->toMultipart(multipart, U("value_definition."));
        }
        
    }
}

void ListPropertyDefinitionResource::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(U("max_count")))
    {
        setMaxCount(ModelBase::int32_tFromHttpContent(multipart->getContent(U("max_count"))));
    }
    if(multipart->hasContent(U("min_count")))
    {
        setMinCount(ModelBase::int32_tFromHttpContent(multipart->getContent(U("min_count"))));
    }
    if(multipart->hasContent(U("value_definition")))
    {
        if(multipart->hasContent(U("value_definition")))
        {
            std::shared_ptr<PropertyDefinitionResource> newItem(new PropertyDefinitionResource());
            newItem->fromMultiPart(multipart, U("value_definition."));
            setValueDefinition( newItem );
        }
    }
}

int32_t ListPropertyDefinitionResource::getMaxCount() const
{
    return m_Max_count;
}


void ListPropertyDefinitionResource::setMaxCount(int32_t value)
{
    m_Max_count = value;
    m_Max_countIsSet = true;
}
bool ListPropertyDefinitionResource::maxCountIsSet() const
{
    return m_Max_countIsSet;
}

void ListPropertyDefinitionResource::unsetMax_count()
{
    m_Max_countIsSet = false;
}

int32_t ListPropertyDefinitionResource::getMinCount() const
{
    return m_Min_count;
}


void ListPropertyDefinitionResource::setMinCount(int32_t value)
{
    m_Min_count = value;
    m_Min_countIsSet = true;
}
bool ListPropertyDefinitionResource::minCountIsSet() const
{
    return m_Min_countIsSet;
}

void ListPropertyDefinitionResource::unsetMin_count()
{
    m_Min_countIsSet = false;
}

std::shared_ptr<PropertyDefinitionResource> ListPropertyDefinitionResource::getValueDefinition() const
{
    return m_Value_definition;
}


void ListPropertyDefinitionResource::setValueDefinition(std::shared_ptr<PropertyDefinitionResource> value)
{
    m_Value_definition = value;
    m_Value_definitionIsSet = true;
}
bool ListPropertyDefinitionResource::valueDefinitionIsSet() const
{
    return m_Value_definitionIsSet;
}

void ListPropertyDefinitionResource::unsetValue_definition()
{
    m_Value_definitionIsSet = false;
}

}
}
}
}

