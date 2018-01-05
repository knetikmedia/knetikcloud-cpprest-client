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



#include "MetricResource.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

MetricResource::MetricResource()
{
    m_Activity_occurence_id = 0L;
    m_TagsIsSet = false;
    m_User_id = 0;
    m_User_idIsSet = false;
    m_Value = 0L;
}

MetricResource::~MetricResource()
{
}

void MetricResource::validate()
{
    // TODO: implement validation
}

web::json::value MetricResource::toJson() const
{
    web::json::value val = web::json::value::object();

    val[U("activity_occurence_id")] = ModelBase::toJson(m_Activity_occurence_id);
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
    if(m_User_idIsSet)
    {
        val[U("user_id")] = ModelBase::toJson(m_User_id);
    }
    val[U("value")] = ModelBase::toJson(m_Value);

    return val;
}

void MetricResource::fromJson(web::json::value& val)
{
    setActivityOccurenceId(ModelBase::int64_tFromJson(val[U("activity_occurence_id")]));
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
    if(val.has_field(U("user_id")))
    {
        setUserId(ModelBase::int32_tFromJson(val[U("user_id")]));
    }
    setValue(ModelBase::int64_tFromJson(val[U("value")]));
}

void MetricResource::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + U("activity_occurence_id"), m_Activity_occurence_id));
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
    if(m_User_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("user_id"), m_User_id));
    }
    multipart->add(ModelBase::toHttpContent(namePrefix + U("value"), m_Value));
}

void MetricResource::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    setActivityOccurenceId(ModelBase::int64_tFromHttpContent(multipart->getContent(U("activity_occurence_id"))));
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
    if(multipart->hasContent(U("user_id")))
    {
        setUserId(ModelBase::int32_tFromHttpContent(multipart->getContent(U("user_id"))));
    }
    setValue(ModelBase::int64_tFromHttpContent(multipart->getContent(U("value"))));
}

int64_t MetricResource::getActivityOccurenceId() const
{
    return m_Activity_occurence_id;
}


void MetricResource::setActivityOccurenceId(int64_t value)
{
    m_Activity_occurence_id = value;
    
}
std::vector<utility::string_t>& MetricResource::getTags()
{
    return m_Tags;
}

void MetricResource::setTags(std::vector<utility::string_t> value)
{
    m_Tags = value;
    m_TagsIsSet = true;
}
bool MetricResource::tagsIsSet() const
{
    return m_TagsIsSet;
}

void MetricResource::unsetTags()
{
    m_TagsIsSet = false;
}

int32_t MetricResource::getUserId() const
{
    return m_User_id;
}


void MetricResource::setUserId(int32_t value)
{
    m_User_id = value;
    m_User_idIsSet = true;
}
bool MetricResource::userIdIsSet() const
{
    return m_User_idIsSet;
}

void MetricResource::unsetUser_id()
{
    m_User_idIsSet = false;
}

int64_t MetricResource::getValue() const
{
    return m_Value;
}


void MetricResource::setValue(int64_t value)
{
    m_Value = value;
    
}
}
}
}
}
