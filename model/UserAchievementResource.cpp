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



#include "UserAchievementResource.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

UserAchievementResource::UserAchievementResource()
{
    m_Achieved = false;
    m_AchievedIsSet = false;
    m_Achievement_name = U("");
    m_Created_date = 0;
    m_Created_dateIsSet = false;
    m_Earned_date = 0;
    m_Earned_dateIsSet = false;
    m_Updated_date = 0;
    m_Updated_dateIsSet = false;
    
}

UserAchievementResource::~UserAchievementResource()
{
}

void UserAchievementResource::validate()
{
    // TODO: implement validation
}

web::json::value UserAchievementResource::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_AchievedIsSet)
    {
        val[U("achieved")] = ModelBase::toJson(m_Achieved);
    }
    val[U("achievement_name")] = ModelBase::toJson(m_Achievement_name);
    if(m_Created_dateIsSet)
    {
        val[U("created_date")] = ModelBase::toJson(m_Created_date);
    }
    if(m_Earned_dateIsSet)
    {
        val[U("earned_date")] = ModelBase::toJson(m_Earned_date);
    }
    if(m_Updated_dateIsSet)
    {
        val[U("updated_date")] = ModelBase::toJson(m_Updated_date);
    }
    

    return val;
}

void UserAchievementResource::fromJson(web::json::value& val)
{
    if(val.has_field(U("achieved")))
    {
        setAchieved(ModelBase::boolFromJson(val[U("achieved")]));
    }
    setAchievementName(ModelBase::stringFromJson(val[U("achievement_name")]));
    if(val.has_field(U("created_date")))
    {
        setCreatedDate(ModelBase::int64_tFromJson(val[U("created_date")]));
    }
    if(val.has_field(U("earned_date")))
    {
        setEarnedDate(ModelBase::int64_tFromJson(val[U("earned_date")]));
    }
    if(val.has_field(U("updated_date")))
    {
        setUpdatedDate(ModelBase::int64_tFromJson(val[U("updated_date")]));
    }
    
}

void UserAchievementResource::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_AchievedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("achieved"), m_Achieved));
    }
    multipart->add(ModelBase::toHttpContent(namePrefix + U("achievement_name"), m_Achievement_name));
    if(m_Created_dateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("created_date"), m_Created_date));
    }
    if(m_Earned_dateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("earned_date"), m_Earned_date));
    }
    if(m_Updated_dateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("updated_date"), m_Updated_date));
    }
    
}

void UserAchievementResource::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("achieved")))
    {
        setAchieved(ModelBase::boolFromHttpContent(multipart->getContent(U("achieved"))));
    }
    setAchievementName(ModelBase::stringFromHttpContent(multipart->getContent(U("achievement_name"))));
    if(multipart->hasContent(U("created_date")))
    {
        setCreatedDate(ModelBase::int64_tFromHttpContent(multipart->getContent(U("created_date"))));
    }
    if(multipart->hasContent(U("earned_date")))
    {
        setEarnedDate(ModelBase::int64_tFromHttpContent(multipart->getContent(U("earned_date"))));
    }
    if(multipart->hasContent(U("updated_date")))
    {
        setUpdatedDate(ModelBase::int64_tFromHttpContent(multipart->getContent(U("updated_date"))));
    }
    
}


bool UserAchievementResource::getAchieved() const
{
    return m_Achieved;
}
void UserAchievementResource::setAchieved(bool value)
{
    m_Achieved = value;
    m_AchievedIsSet = true;
}
bool UserAchievementResource::achievedIsSet() const
{
    return m_AchievedIsSet;
}
void UserAchievementResource::unsetAchieved()
{
    m_AchievedIsSet = false;
}
utility::string_t UserAchievementResource::getAchievementName() const
{
    return m_Achievement_name;
}
void UserAchievementResource::setAchievementName(utility::string_t value)
{
    m_Achievement_name = value;
    
}
int64_t UserAchievementResource::getCreatedDate() const
{
    return m_Created_date;
}
void UserAchievementResource::setCreatedDate(int64_t value)
{
    m_Created_date = value;
    m_Created_dateIsSet = true;
}
bool UserAchievementResource::created_dateIsSet() const
{
    return m_Created_dateIsSet;
}
void UserAchievementResource::unsetCreated_date()
{
    m_Created_dateIsSet = false;
}
int64_t UserAchievementResource::getEarnedDate() const
{
    return m_Earned_date;
}
void UserAchievementResource::setEarnedDate(int64_t value)
{
    m_Earned_date = value;
    m_Earned_dateIsSet = true;
}
bool UserAchievementResource::earned_dateIsSet() const
{
    return m_Earned_dateIsSet;
}
void UserAchievementResource::unsetEarned_date()
{
    m_Earned_dateIsSet = false;
}
int64_t UserAchievementResource::getUpdatedDate() const
{
    return m_Updated_date;
}
void UserAchievementResource::setUpdatedDate(int64_t value)
{
    m_Updated_date = value;
    m_Updated_dateIsSet = true;
}
bool UserAchievementResource::updated_dateIsSet() const
{
    return m_Updated_dateIsSet;
}
void UserAchievementResource::unsetUpdated_date()
{
    m_Updated_dateIsSet = false;
}

}
}
}
}

