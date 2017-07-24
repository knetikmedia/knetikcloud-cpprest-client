/**
 * Knetik Platform API Documentation latest 
 * This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://knetikcloud.com.
 *
 * OpenAPI spec version: latest 
 * Contact: support@knetik.com
 *
 * NOTE: This class is auto generated by the swagger code generator 2.2.3.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */



#include "PollResource.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

PollResource::PollResource()
{
    m_Active = false;
    m_Additional_propertiesIsSet = false;
    m_Created_date = 0L;
    m_Created_dateIsSet = false;
    m_Id = U("");
    m_IdIsSet = false;
    m_TagsIsSet = false;
    m_Template = U("");
    m_TemplateIsSet = false;
    m_Text = U("");
    m_Type = U("");
    m_Updated_date = 0L;
    m_Updated_dateIsSet = false;
}

PollResource::~PollResource()
{
}

void PollResource::validate()
{
    // TODO: implement validation
}

web::json::value PollResource::toJson() const
{
    web::json::value val = web::json::value::object();

    val[U("active")] = ModelBase::toJson(m_Active);
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
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Answers )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        val[U("answers")] = web::json::value::array(jsonArray);
    }
    val[U("category")] = ModelBase::toJson(m_Category);
    if(m_Created_dateIsSet)
    {
        val[U("created_date")] = ModelBase::toJson(m_Created_date);
    }
    if(m_IdIsSet)
    {
        val[U("id")] = ModelBase::toJson(m_Id);
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Tags )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        if(jsonArray.size() > 0)
        {
            val[U("tags")] = web::json::value::array(jsonArray);
        }
    }
    if(m_TemplateIsSet)
    {
        val[U("template")] = ModelBase::toJson(m_Template);
    }
    val[U("text")] = ModelBase::toJson(m_Text);
    val[U("type")] = ModelBase::toJson(m_Type);
    if(m_Updated_dateIsSet)
    {
        val[U("updated_date")] = ModelBase::toJson(m_Updated_date);
    }

    return val;
}

void PollResource::fromJson(web::json::value& val)
{
    setActive(ModelBase::boolFromJson(val[U("active")]));
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
    {
        m_Answers.clear();
        std::vector<web::json::value> jsonArray;
        for( auto& item : val[U("answers")].as_array() )
        {
            if(item.is_null())
            {
                m_Answers.push_back( std::shared_ptr<PollAnswerResource>(nullptr) );
            }
            else
            {
                std::shared_ptr<PollAnswerResource> newItem(new PollAnswerResource());
                newItem->fromJson(item);
                m_Answers.push_back( newItem );
            }
        }
    }
    std::shared_ptr<NestedCategory> newCategory(new NestedCategory());
    newCategory->fromJson(val[U("category")]);
    setCategory( newCategory );
    if(val.has_field(U("created_date")))
    {
        setCreatedDate(ModelBase::int64_tFromJson(val[U("created_date")]));
    }
    if(val.has_field(U("id")))
    {
        setId(ModelBase::stringFromJson(val[U("id")]));
    }
    {
        m_Tags.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(U("tags")))
        {
        for( auto& item : val[U("tags")].as_array() )
        {
            m_Tags.push_back(ModelBase::stringFromJson(item));
        }
        }
    }
    if(val.has_field(U("template")))
    {
        setTemplate(ModelBase::stringFromJson(val[U("template")]));
    }
    setText(ModelBase::stringFromJson(val[U("text")]));
    setType(ModelBase::stringFromJson(val[U("type")]));
    if(val.has_field(U("updated_date")))
    {
        setUpdatedDate(ModelBase::int64_tFromJson(val[U("updated_date")]));
    }
}

void PollResource::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + U("active"), m_Active));
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
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Answers )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        multipart->add(ModelBase::toHttpContent(namePrefix + U("answers"), web::json::value::array(jsonArray), U("application/json")));
            }
    m_Category->toMultipart(multipart, U("category."));
    if(m_Created_dateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("created_date"), m_Created_date));
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("id"), m_Id));
        
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Tags )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + U("tags"), web::json::value::array(jsonArray), U("application/json")));
        }
    }
    if(m_TemplateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("template"), m_Template));
        
    }
    multipart->add(ModelBase::toHttpContent(namePrefix + U("text"), m_Text));
    multipart->add(ModelBase::toHttpContent(namePrefix + U("type"), m_Type));
    if(m_Updated_dateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("updated_date"), m_Updated_date));
    }
}

void PollResource::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    setActive(ModelBase::boolFromHttpContent(multipart->getContent(U("active"))));
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
    {
        m_Answers.clear();

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(U("answers"))));
        for( auto& item : jsonArray.as_array() )
        {
            if(item.is_null())
            {
                m_Answers.push_back( std::shared_ptr<PollAnswerResource>(nullptr) );
            }
            else
            {
                std::shared_ptr<PollAnswerResource> newItem(new PollAnswerResource());
                newItem->fromJson(item);
                m_Answers.push_back( newItem );
            }
        }
    }
    std::shared_ptr<NestedCategory> newCategory(new NestedCategory());
    newCategory->fromMultiPart(multipart, U("category."));
    setCategory( newCategory );
    if(multipart->hasContent(U("created_date")))
    {
        setCreatedDate(ModelBase::int64_tFromHttpContent(multipart->getContent(U("created_date"))));
    }
    if(multipart->hasContent(U("id")))
    {
        setId(ModelBase::stringFromHttpContent(multipart->getContent(U("id"))));
    }
    {
        m_Tags.clear();
        if(multipart->hasContent(U("tags")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(U("tags"))));
        for( auto& item : jsonArray.as_array() )
        {
            m_Tags.push_back(ModelBase::stringFromJson(item));
        }
        }
    }
    if(multipart->hasContent(U("template")))
    {
        setTemplate(ModelBase::stringFromHttpContent(multipart->getContent(U("template"))));
    }
    setText(ModelBase::stringFromHttpContent(multipart->getContent(U("text"))));
    setType(ModelBase::stringFromHttpContent(multipart->getContent(U("type"))));
    if(multipart->hasContent(U("updated_date")))
    {
        setUpdatedDate(ModelBase::int64_tFromHttpContent(multipart->getContent(U("updated_date"))));
    }
}

bool PollResource::getActive() const
{
    return m_Active;
}


void PollResource::setActive(bool value)
{
    m_Active = value;
    
}
std::map<utility::string_t, std::shared_ptr<Property>>& PollResource::getAdditionalProperties()
{
    return m_Additional_properties;
}

void PollResource::setAdditionalProperties(std::map<utility::string_t, std::shared_ptr<Property>> value)
{
    m_Additional_properties = value;
    m_Additional_propertiesIsSet = true;
}
bool PollResource::additionalPropertiesIsSet() const
{
    return m_Additional_propertiesIsSet;
}

void PollResource::unsetAdditional_properties()
{
    m_Additional_propertiesIsSet = false;
}

std::vector<std::shared_ptr<PollAnswerResource>>& PollResource::getAnswers()
{
    return m_Answers;
}

void PollResource::setAnswers(std::vector<std::shared_ptr<PollAnswerResource>> value)
{
    m_Answers = value;
    
}
std::shared_ptr<NestedCategory> PollResource::getCategory() const
{
    return m_Category;
}


void PollResource::setCategory(std::shared_ptr<NestedCategory> value)
{
    m_Category = value;
    
}
int64_t PollResource::getCreatedDate() const
{
    return m_Created_date;
}


void PollResource::setCreatedDate(int64_t value)
{
    m_Created_date = value;
    m_Created_dateIsSet = true;
}
bool PollResource::createdDateIsSet() const
{
    return m_Created_dateIsSet;
}

void PollResource::unsetCreated_date()
{
    m_Created_dateIsSet = false;
}

utility::string_t PollResource::getId() const
{
    return m_Id;
}


void PollResource::setId(utility::string_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}
bool PollResource::idIsSet() const
{
    return m_IdIsSet;
}

void PollResource::unsetId()
{
    m_IdIsSet = false;
}

std::vector<utility::string_t>& PollResource::getTags()
{
    return m_Tags;
}

void PollResource::setTags(std::vector<utility::string_t> value)
{
    m_Tags = value;
    m_TagsIsSet = true;
}
bool PollResource::tagsIsSet() const
{
    return m_TagsIsSet;
}

void PollResource::unsetTags()
{
    m_TagsIsSet = false;
}

utility::string_t PollResource::getTemplate() const
{
    return m_Template;
}


void PollResource::setTemplate(utility::string_t value)
{
    m_Template = value;
    m_TemplateIsSet = true;
}
bool PollResource::templateIsSet() const
{
    return m_TemplateIsSet;
}

void PollResource::unsetTemplate()
{
    m_TemplateIsSet = false;
}

utility::string_t PollResource::getText() const
{
    return m_Text;
}


void PollResource::setText(utility::string_t value)
{
    m_Text = value;
    
}
utility::string_t PollResource::getType() const
{
    return m_Type;
}


void PollResource::setType(utility::string_t value)
{
    m_Type = value;
    
}
int64_t PollResource::getUpdatedDate() const
{
    return m_Updated_date;
}


void PollResource::setUpdatedDate(int64_t value)
{
    m_Updated_date = value;
    m_Updated_dateIsSet = true;
}
bool PollResource::updatedDateIsSet() const
{
    return m_Updated_dateIsSet;
}

void PollResource::unsetUpdated_date()
{
    m_Updated_dateIsSet = false;
}

}
}
}
}

