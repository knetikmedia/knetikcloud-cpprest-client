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



#include "AchievementProgressUpdateRequest.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

AchievementProgressUpdateRequest::AchievementProgressUpdateRequest()
{
    m_Increment_value = false;
    m_Increment_valueIsSet = false;
    m_Progress_value = 0;
    m_Progress_valueIsSet = false;
    
}

AchievementProgressUpdateRequest::~AchievementProgressUpdateRequest()
{
}

void AchievementProgressUpdateRequest::validate()
{
    // TODO: implement validation
}

web::json::value AchievementProgressUpdateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Increment_valueIsSet)
    {
        val[U("increment_value")] = ModelBase::toJson(m_Increment_value);
    }
    if(m_Progress_valueIsSet)
    {
        val[U("progress_value")] = ModelBase::toJson(m_Progress_value);
    }
    

    return val;
}

void AchievementProgressUpdateRequest::fromJson(web::json::value& val)
{
    if(val.has_field(U("increment_value")))
    {
        setIncrementValue(ModelBase::boolFromJson(val[U("increment_value")]));
    }
    if(val.has_field(U("progress_value")))
    {
        setProgressValue(ModelBase::int32_tFromJson(val[U("progress_value")]));
    }
    
}

void AchievementProgressUpdateRequest::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_Increment_valueIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("increment_value"), m_Increment_value));
    }
    if(m_Progress_valueIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("progress_value"), m_Progress_value));
    }
    
}

void AchievementProgressUpdateRequest::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("increment_value")))
    {
        setIncrementValue(ModelBase::boolFromHttpContent(multipart->getContent(U("increment_value"))));
    }
    if(multipart->hasContent(U("progress_value")))
    {
        setProgressValue(ModelBase::int32_tFromHttpContent(multipart->getContent(U("progress_value"))));
    }
    
}


bool AchievementProgressUpdateRequest::getIncrementValue() const
{
    return m_Increment_value;
}
void AchievementProgressUpdateRequest::setIncrementValue(bool value)
{
    m_Increment_value = value;
    m_Increment_valueIsSet = true;
}
bool AchievementProgressUpdateRequest::increment_valueIsSet() const
{
    return m_Increment_valueIsSet;
}
void AchievementProgressUpdateRequest::unsetIncrement_value()
{
    m_Increment_valueIsSet = false;
}
int32_t AchievementProgressUpdateRequest::getProgressValue() const
{
    return m_Progress_value;
}
void AchievementProgressUpdateRequest::setProgressValue(int32_t value)
{
    m_Progress_value = value;
    m_Progress_valueIsSet = true;
}
bool AchievementProgressUpdateRequest::progress_valueIsSet() const
{
    return m_Progress_valueIsSet;
}
void AchievementProgressUpdateRequest::unsetProgress_value()
{
    m_Progress_valueIsSet = false;
}

}
}
}
}

