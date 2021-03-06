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



#include "DeltaResource.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

DeltaResource::DeltaResource()
{
    m_Category_id = U("");
    m_Category_idIsSet = false;
    m_Media_type = U("");
    m_Media_typeIsSet = false;
    m_Question_id = U("");
    m_Question_idIsSet = false;
    m_State = U("");
    m_StateIsSet = false;
    m_TagsIsSet = false;
    m_Updated_date = 0L;
    m_Updated_dateIsSet = false;
}

DeltaResource::~DeltaResource()
{
}

void DeltaResource::validate()
{
    // TODO: implement validation
}

web::json::value DeltaResource::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Category_idIsSet)
    {
        val[U("category_id")] = ModelBase::toJson(m_Category_id);
    }
    if(m_Media_typeIsSet)
    {
        val[U("media_type")] = ModelBase::toJson(m_Media_type);
    }
    if(m_Question_idIsSet)
    {
        val[U("question_id")] = ModelBase::toJson(m_Question_id);
    }
    if(m_StateIsSet)
    {
        val[U("state")] = ModelBase::toJson(m_State);
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
    if(m_Updated_dateIsSet)
    {
        val[U("updated_date")] = ModelBase::toJson(m_Updated_date);
    }

    return val;
}

void DeltaResource::fromJson(web::json::value& val)
{
    if(val.has_field(U("category_id")))
    {
        setCategoryId(ModelBase::stringFromJson(val[U("category_id")]));
    }
    if(val.has_field(U("media_type")))
    {
        setMediaType(ModelBase::stringFromJson(val[U("media_type")]));
    }
    if(val.has_field(U("question_id")))
    {
        setQuestionId(ModelBase::stringFromJson(val[U("question_id")]));
    }
    if(val.has_field(U("state")))
    {
        setState(ModelBase::stringFromJson(val[U("state")]));
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
    if(val.has_field(U("updated_date")))
    {
        setUpdatedDate(ModelBase::int64_tFromJson(val[U("updated_date")]));
    }
}

void DeltaResource::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_Category_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("category_id"), m_Category_id));
        
    }
    if(m_Media_typeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("media_type"), m_Media_type));
        
    }
    if(m_Question_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("question_id"), m_Question_id));
        
    }
    if(m_StateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("state"), m_State));
        
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
    if(m_Updated_dateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("updated_date"), m_Updated_date));
    }
}

void DeltaResource::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("category_id")))
    {
        setCategoryId(ModelBase::stringFromHttpContent(multipart->getContent(U("category_id"))));
    }
    if(multipart->hasContent(U("media_type")))
    {
        setMediaType(ModelBase::stringFromHttpContent(multipart->getContent(U("media_type"))));
    }
    if(multipart->hasContent(U("question_id")))
    {
        setQuestionId(ModelBase::stringFromHttpContent(multipart->getContent(U("question_id"))));
    }
    if(multipart->hasContent(U("state")))
    {
        setState(ModelBase::stringFromHttpContent(multipart->getContent(U("state"))));
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
    if(multipart->hasContent(U("updated_date")))
    {
        setUpdatedDate(ModelBase::int64_tFromHttpContent(multipart->getContent(U("updated_date"))));
    }
}

utility::string_t DeltaResource::getCategoryId() const
{
    return m_Category_id;
}


void DeltaResource::setCategoryId(utility::string_t value)
{
    m_Category_id = value;
    m_Category_idIsSet = true;
}
bool DeltaResource::categoryIdIsSet() const
{
    return m_Category_idIsSet;
}

void DeltaResource::unsetCategory_id()
{
    m_Category_idIsSet = false;
}

utility::string_t DeltaResource::getMediaType() const
{
    return m_Media_type;
}


void DeltaResource::setMediaType(utility::string_t value)
{
    m_Media_type = value;
    m_Media_typeIsSet = true;
}
bool DeltaResource::mediaTypeIsSet() const
{
    return m_Media_typeIsSet;
}

void DeltaResource::unsetMedia_type()
{
    m_Media_typeIsSet = false;
}

utility::string_t DeltaResource::getQuestionId() const
{
    return m_Question_id;
}


void DeltaResource::setQuestionId(utility::string_t value)
{
    m_Question_id = value;
    m_Question_idIsSet = true;
}
bool DeltaResource::questionIdIsSet() const
{
    return m_Question_idIsSet;
}

void DeltaResource::unsetQuestion_id()
{
    m_Question_idIsSet = false;
}

utility::string_t DeltaResource::getState() const
{
    return m_State;
}


void DeltaResource::setState(utility::string_t value)
{
    m_State = value;
    m_StateIsSet = true;
}
bool DeltaResource::stateIsSet() const
{
    return m_StateIsSet;
}

void DeltaResource::unsetState()
{
    m_StateIsSet = false;
}

std::vector<utility::string_t>& DeltaResource::getTags()
{
    return m_Tags;
}

void DeltaResource::setTags(std::vector<utility::string_t> value)
{
    m_Tags = value;
    m_TagsIsSet = true;
}
bool DeltaResource::tagsIsSet() const
{
    return m_TagsIsSet;
}

void DeltaResource::unsetTags()
{
    m_TagsIsSet = false;
}

int64_t DeltaResource::getUpdatedDate() const
{
    return m_Updated_date;
}


void DeltaResource::setUpdatedDate(int64_t value)
{
    m_Updated_date = value;
    m_Updated_dateIsSet = true;
}
bool DeltaResource::updatedDateIsSet() const
{
    return m_Updated_dateIsSet;
}

void DeltaResource::unsetUpdated_date()
{
    m_Updated_dateIsSet = false;
}

}
}
}
}

