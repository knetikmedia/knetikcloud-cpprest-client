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



#include "ChallengeEventParticipantResource.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

ChallengeEventParticipantResource::ChallengeEventParticipantResource()
{
    m_Email = U("");
    m_EmailIsSet = false;
    m_Fullname = U("");
    m_FullnameIsSet = false;
    m_Score = 0L;
    m_ScoreIsSet = false;
    m_User_id = 0;
    m_User_idIsSet = false;
    m_Username = U("");
    m_UsernameIsSet = false;
}

ChallengeEventParticipantResource::~ChallengeEventParticipantResource()
{
}

void ChallengeEventParticipantResource::validate()
{
    // TODO: implement validation
}

web::json::value ChallengeEventParticipantResource::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_EmailIsSet)
    {
        val[U("email")] = ModelBase::toJson(m_Email);
    }
    if(m_FullnameIsSet)
    {
        val[U("fullname")] = ModelBase::toJson(m_Fullname);
    }
    if(m_ScoreIsSet)
    {
        val[U("score")] = ModelBase::toJson(m_Score);
    }
    if(m_User_idIsSet)
    {
        val[U("user_id")] = ModelBase::toJson(m_User_id);
    }
    if(m_UsernameIsSet)
    {
        val[U("username")] = ModelBase::toJson(m_Username);
    }

    return val;
}

void ChallengeEventParticipantResource::fromJson(web::json::value& val)
{
    if(val.has_field(U("email")))
    {
        setEmail(ModelBase::stringFromJson(val[U("email")]));
    }
    if(val.has_field(U("fullname")))
    {
        setFullname(ModelBase::stringFromJson(val[U("fullname")]));
    }
    if(val.has_field(U("score")))
    {
        setScore(ModelBase::int64_tFromJson(val[U("score")]));
    }
    if(val.has_field(U("user_id")))
    {
        setUserId(ModelBase::int32_tFromJson(val[U("user_id")]));
    }
    if(val.has_field(U("username")))
    {
        setUsername(ModelBase::stringFromJson(val[U("username")]));
    }
}

void ChallengeEventParticipantResource::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_EmailIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("email"), m_Email));
        
    }
    if(m_FullnameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("fullname"), m_Fullname));
        
    }
    if(m_ScoreIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("score"), m_Score));
    }
    if(m_User_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("user_id"), m_User_id));
    }
    if(m_UsernameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("username"), m_Username));
        
    }
}

void ChallengeEventParticipantResource::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("email")))
    {
        setEmail(ModelBase::stringFromHttpContent(multipart->getContent(U("email"))));
    }
    if(multipart->hasContent(U("fullname")))
    {
        setFullname(ModelBase::stringFromHttpContent(multipart->getContent(U("fullname"))));
    }
    if(multipart->hasContent(U("score")))
    {
        setScore(ModelBase::int64_tFromHttpContent(multipart->getContent(U("score"))));
    }
    if(multipart->hasContent(U("user_id")))
    {
        setUserId(ModelBase::int32_tFromHttpContent(multipart->getContent(U("user_id"))));
    }
    if(multipart->hasContent(U("username")))
    {
        setUsername(ModelBase::stringFromHttpContent(multipart->getContent(U("username"))));
    }
}

utility::string_t ChallengeEventParticipantResource::getEmail() const
{
    return m_Email;
}


void ChallengeEventParticipantResource::setEmail(utility::string_t value)
{
    m_Email = value;
    m_EmailIsSet = true;
}
bool ChallengeEventParticipantResource::emailIsSet() const
{
    return m_EmailIsSet;
}

void ChallengeEventParticipantResource::unsetEmail()
{
    m_EmailIsSet = false;
}

utility::string_t ChallengeEventParticipantResource::getFullname() const
{
    return m_Fullname;
}


void ChallengeEventParticipantResource::setFullname(utility::string_t value)
{
    m_Fullname = value;
    m_FullnameIsSet = true;
}
bool ChallengeEventParticipantResource::fullnameIsSet() const
{
    return m_FullnameIsSet;
}

void ChallengeEventParticipantResource::unsetFullname()
{
    m_FullnameIsSet = false;
}

int64_t ChallengeEventParticipantResource::getScore() const
{
    return m_Score;
}


void ChallengeEventParticipantResource::setScore(int64_t value)
{
    m_Score = value;
    m_ScoreIsSet = true;
}
bool ChallengeEventParticipantResource::scoreIsSet() const
{
    return m_ScoreIsSet;
}

void ChallengeEventParticipantResource::unsetScore()
{
    m_ScoreIsSet = false;
}

int32_t ChallengeEventParticipantResource::getUserId() const
{
    return m_User_id;
}


void ChallengeEventParticipantResource::setUserId(int32_t value)
{
    m_User_id = value;
    m_User_idIsSet = true;
}
bool ChallengeEventParticipantResource::userIdIsSet() const
{
    return m_User_idIsSet;
}

void ChallengeEventParticipantResource::unsetUser_id()
{
    m_User_idIsSet = false;
}

utility::string_t ChallengeEventParticipantResource::getUsername() const
{
    return m_Username;
}


void ChallengeEventParticipantResource::setUsername(utility::string_t value)
{
    m_Username = value;
    m_UsernameIsSet = true;
}
bool ChallengeEventParticipantResource::usernameIsSet() const
{
    return m_UsernameIsSet;
}

void ChallengeEventParticipantResource::unsetUsername()
{
    m_UsernameIsSet = false;
}

}
}
}
}

