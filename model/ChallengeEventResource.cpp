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



#include "ChallengeEventResource.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

ChallengeEventResource::ChallengeEventResource()
{
    m_Challenge_id = 0;
    m_Challenge_idIsSet = false;
    m_End_date = 0;
    m_End_dateIsSet = false;
    m_Id = 0;
    m_IdIsSet = false;
    m_Reward_status = U("");
    m_Reward_statusIsSet = false;
    m_Start_date = 0;
    m_Start_dateIsSet = false;
    
}

ChallengeEventResource::~ChallengeEventResource()
{
}

void ChallengeEventResource::validate()
{
    // TODO: implement validation
}

web::json::value ChallengeEventResource::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Challenge_idIsSet)
    {
        val[U("challenge_id")] = ModelBase::toJson(m_Challenge_id);
    }
    if(m_End_dateIsSet)
    {
        val[U("end_date")] = ModelBase::toJson(m_End_date);
    }
    if(m_IdIsSet)
    {
        val[U("id")] = ModelBase::toJson(m_Id);
    }
    if(m_Reward_statusIsSet)
    {
        val[U("reward_status")] = ModelBase::toJson(m_Reward_status);
    }
    if(m_Start_dateIsSet)
    {
        val[U("start_date")] = ModelBase::toJson(m_Start_date);
    }
    

    return val;
}

void ChallengeEventResource::fromJson(web::json::value& val)
{
    if(val.has_field(U("challenge_id")))
    {
        setChallengeId(ModelBase::int64_tFromJson(val[U("challenge_id")]));
    }
    if(val.has_field(U("end_date")))
    {
        setEndDate(ModelBase::int64_tFromJson(val[U("end_date")]));
    }
    if(val.has_field(U("id")))
    {
        setId(ModelBase::int64_tFromJson(val[U("id")]));
    }
    if(val.has_field(U("reward_status")))
    {
        setRewardStatus(ModelBase::stringFromJson(val[U("reward_status")]));
        
    }
    if(val.has_field(U("start_date")))
    {
        setStartDate(ModelBase::int64_tFromJson(val[U("start_date")]));
    }
    
}

void ChallengeEventResource::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_Challenge_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("challenge_id"), m_Challenge_id));
    }
    if(m_End_dateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("end_date"), m_End_date));
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("id"), m_Id));
    }
    if(m_Reward_statusIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("reward_status"), m_Reward_status));
        
    }
    if(m_Start_dateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("start_date"), m_Start_date));
    }
    
}

void ChallengeEventResource::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("challenge_id")))
    {
        setChallengeId(ModelBase::int64_tFromHttpContent(multipart->getContent(U("challenge_id"))));
    }
    if(multipart->hasContent(U("end_date")))
    {
        setEndDate(ModelBase::int64_tFromHttpContent(multipart->getContent(U("end_date"))));
    }
    if(multipart->hasContent(U("id")))
    {
        setId(ModelBase::int64_tFromHttpContent(multipart->getContent(U("id"))));
    }
    if(multipart->hasContent(U("reward_status")))
    {
        setRewardStatus(ModelBase::stringFromHttpContent(multipart->getContent(U("reward_status"))));
        
    }
    if(multipart->hasContent(U("start_date")))
    {
        setStartDate(ModelBase::int64_tFromHttpContent(multipart->getContent(U("start_date"))));
    }
    
}


int64_t ChallengeEventResource::getChallengeId() const
{
    return m_Challenge_id;
}
void ChallengeEventResource::setChallengeId(int64_t value)
{
    m_Challenge_id = value;
    m_Challenge_idIsSet = true;
}
bool ChallengeEventResource::challenge_idIsSet() const
{
    return m_Challenge_idIsSet;
}
void ChallengeEventResource::unsetChallenge_id()
{
    m_Challenge_idIsSet = false;
}
int64_t ChallengeEventResource::getEndDate() const
{
    return m_End_date;
}
void ChallengeEventResource::setEndDate(int64_t value)
{
    m_End_date = value;
    m_End_dateIsSet = true;
}
bool ChallengeEventResource::end_dateIsSet() const
{
    return m_End_dateIsSet;
}
void ChallengeEventResource::unsetEnd_date()
{
    m_End_dateIsSet = false;
}
int64_t ChallengeEventResource::getId() const
{
    return m_Id;
}
void ChallengeEventResource::setId(int64_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}
bool ChallengeEventResource::idIsSet() const
{
    return m_IdIsSet;
}
void ChallengeEventResource::unsetId()
{
    m_IdIsSet = false;
}
utility::string_t ChallengeEventResource::getRewardStatus() const
{
    return m_Reward_status;
}
void ChallengeEventResource::setRewardStatus(utility::string_t value)
{
    m_Reward_status = value;
    m_Reward_statusIsSet = true;
}
bool ChallengeEventResource::reward_statusIsSet() const
{
    return m_Reward_statusIsSet;
}
void ChallengeEventResource::unsetReward_status()
{
    m_Reward_statusIsSet = false;
}
int64_t ChallengeEventResource::getStartDate() const
{
    return m_Start_date;
}
void ChallengeEventResource::setStartDate(int64_t value)
{
    m_Start_date = value;
    m_Start_dateIsSet = true;
}
bool ChallengeEventResource::start_dateIsSet() const
{
    return m_Start_dateIsSet;
}
void ChallengeEventResource::unsetStart_date()
{
    m_Start_dateIsSet = false;
}

}
}
}
}

