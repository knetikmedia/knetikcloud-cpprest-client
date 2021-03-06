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



#include "BareChallengeActivityResource.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

BareChallengeActivityResource::BareChallengeActivityResource()
{
    m_Activity_id = 0L;
    m_Challenge_id = 0L;
    m_Id = 0L;
    m_IdIsSet = false;
}

BareChallengeActivityResource::~BareChallengeActivityResource()
{
}

void BareChallengeActivityResource::validate()
{
    // TODO: implement validation
}

web::json::value BareChallengeActivityResource::toJson() const
{
    web::json::value val = web::json::value::object();

    val[U("activity_id")] = ModelBase::toJson(m_Activity_id);
    val[U("challenge_id")] = ModelBase::toJson(m_Challenge_id);
    if(m_IdIsSet)
    {
        val[U("id")] = ModelBase::toJson(m_Id);
    }

    return val;
}

void BareChallengeActivityResource::fromJson(web::json::value& val)
{
    setActivityId(ModelBase::int64_tFromJson(val[U("activity_id")]));
    setChallengeId(ModelBase::int64_tFromJson(val[U("challenge_id")]));
    if(val.has_field(U("id")))
    {
        setId(ModelBase::int64_tFromJson(val[U("id")]));
    }
}

void BareChallengeActivityResource::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + U("activity_id"), m_Activity_id));
    multipart->add(ModelBase::toHttpContent(namePrefix + U("challenge_id"), m_Challenge_id));
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("id"), m_Id));
    }
}

void BareChallengeActivityResource::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    setActivityId(ModelBase::int64_tFromHttpContent(multipart->getContent(U("activity_id"))));
    setChallengeId(ModelBase::int64_tFromHttpContent(multipart->getContent(U("challenge_id"))));
    if(multipart->hasContent(U("id")))
    {
        setId(ModelBase::int64_tFromHttpContent(multipart->getContent(U("id"))));
    }
}

int64_t BareChallengeActivityResource::getActivityId() const
{
    return m_Activity_id;
}


void BareChallengeActivityResource::setActivityId(int64_t value)
{
    m_Activity_id = value;
    
}
int64_t BareChallengeActivityResource::getChallengeId() const
{
    return m_Challenge_id;
}


void BareChallengeActivityResource::setChallengeId(int64_t value)
{
    m_Challenge_id = value;
    
}
int64_t BareChallengeActivityResource::getId() const
{
    return m_Id;
}


void BareChallengeActivityResource::setId(int64_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}
bool BareChallengeActivityResource::idIsSet() const
{
    return m_IdIsSet;
}

void BareChallengeActivityResource::unsetId()
{
    m_IdIsSet = false;
}

}
}
}
}

