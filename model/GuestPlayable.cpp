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



#include "GuestPlayable.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

GuestPlayable::GuestPlayable()
{
    m_Allowed = false;
    m_AllowedIsSet = false;
    m_Leaderboard = false;
    m_LeaderboardIsSet = false;
}

GuestPlayable::~GuestPlayable()
{
}

void GuestPlayable::validate()
{
    // TODO: implement validation
}

web::json::value GuestPlayable::toJson() const
{
    web::json::value val = this->Behavior::toJson();

    if(m_AllowedIsSet)
    {
        val[U("allowed")] = ModelBase::toJson(m_Allowed);
    }
    if(m_LeaderboardIsSet)
    {
        val[U("leaderboard")] = ModelBase::toJson(m_Leaderboard);
    }

    return val;
}

void GuestPlayable::fromJson(web::json::value& val)
{
    this->Behavior::fromJson(val);

    if(val.has_field(U("allowed")))
    {
        setAllowed(ModelBase::boolFromJson(val[U("allowed")]));
    }
    if(val.has_field(U("leaderboard")))
    {
        setLeaderboard(ModelBase::boolFromJson(val[U("leaderboard")]));
    }
}

void GuestPlayable::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_DescriptionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("description"), m_Description));
        
    }
    if(m_Type_hintIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("type_hint"), m_Type_hint));
        
    }
    if(m_AllowedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("allowed"), m_Allowed));
    }
    if(m_LeaderboardIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("leaderboard"), m_Leaderboard));
    }
}

void GuestPlayable::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("description")))
    {
        setDescription(ModelBase::stringFromHttpContent(multipart->getContent(U("description"))));
    }
    if(multipart->hasContent(U("type_hint")))
    {
        setTypeHint(ModelBase::stringFromHttpContent(multipart->getContent(U("type_hint"))));
    }
    if(multipart->hasContent(U("allowed")))
    {
        setAllowed(ModelBase::boolFromHttpContent(multipart->getContent(U("allowed"))));
    }
    if(multipart->hasContent(U("leaderboard")))
    {
        setLeaderboard(ModelBase::boolFromHttpContent(multipart->getContent(U("leaderboard"))));
    }
}

bool GuestPlayable::getAllowed() const
{
    return m_Allowed;
}


void GuestPlayable::setAllowed(bool value)
{
    m_Allowed = value;
    m_AllowedIsSet = true;
}
bool GuestPlayable::allowedIsSet() const
{
    return m_AllowedIsSet;
}

void GuestPlayable::unsetAllowed()
{
    m_AllowedIsSet = false;
}

bool GuestPlayable::getLeaderboard() const
{
    return m_Leaderboard;
}


void GuestPlayable::setLeaderboard(bool value)
{
    m_Leaderboard = value;
    m_LeaderboardIsSet = true;
}
bool GuestPlayable::leaderboardIsSet() const
{
    return m_LeaderboardIsSet;
}

void GuestPlayable::unsetLeaderboard()
{
    m_LeaderboardIsSet = false;
}

}
}
}
}

