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



#include "GroupMemberResource.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

GroupMemberResource::GroupMemberResource()
{
    m_Avatar_url = U("");
    m_Avatar_urlIsSet = false;
    m_Display_name = U("");
    m_Display_nameIsSet = false;
    m_Id = 0;
    m_Status = U("");
    m_StatusIsSet = false;
    m_Username = U("");
    m_UsernameIsSet = false;
}

GroupMemberResource::~GroupMemberResource()
{
}

void GroupMemberResource::validate()
{
    // TODO: implement validation
}

web::json::value GroupMemberResource::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Avatar_urlIsSet)
    {
        val[U("avatar_url")] = ModelBase::toJson(m_Avatar_url);
    }
    if(m_Display_nameIsSet)
    {
        val[U("display_name")] = ModelBase::toJson(m_Display_name);
    }
    val[U("id")] = ModelBase::toJson(m_Id);
    if(m_StatusIsSet)
    {
        val[U("status")] = ModelBase::toJson(m_Status);
    }
    if(m_UsernameIsSet)
    {
        val[U("username")] = ModelBase::toJson(m_Username);
    }

    return val;
}

void GroupMemberResource::fromJson(web::json::value& val)
{
    if(val.has_field(U("avatar_url")))
    {
        setAvatarUrl(ModelBase::stringFromJson(val[U("avatar_url")]));
    }
    if(val.has_field(U("display_name")))
    {
        setDisplayName(ModelBase::stringFromJson(val[U("display_name")]));
    }
    setId(ModelBase::int32_tFromJson(val[U("id")]));
    if(val.has_field(U("status")))
    {
        setStatus(ModelBase::stringFromJson(val[U("status")]));
    }
    if(val.has_field(U("username")))
    {
        setUsername(ModelBase::stringFromJson(val[U("username")]));
    }
}

void GroupMemberResource::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_Avatar_urlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("avatar_url"), m_Avatar_url));
        
    }
    if(m_Display_nameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("display_name"), m_Display_name));
        
    }
    multipart->add(ModelBase::toHttpContent(namePrefix + U("id"), m_Id));
    if(m_StatusIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("status"), m_Status));
        
    }
    if(m_UsernameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("username"), m_Username));
        
    }
}

void GroupMemberResource::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("avatar_url")))
    {
        setAvatarUrl(ModelBase::stringFromHttpContent(multipart->getContent(U("avatar_url"))));
    }
    if(multipart->hasContent(U("display_name")))
    {
        setDisplayName(ModelBase::stringFromHttpContent(multipart->getContent(U("display_name"))));
    }
    setId(ModelBase::int32_tFromHttpContent(multipart->getContent(U("id"))));
    if(multipart->hasContent(U("status")))
    {
        setStatus(ModelBase::stringFromHttpContent(multipart->getContent(U("status"))));
    }
    if(multipart->hasContent(U("username")))
    {
        setUsername(ModelBase::stringFromHttpContent(multipart->getContent(U("username"))));
    }
}

utility::string_t GroupMemberResource::getAvatarUrl() const
{
    return m_Avatar_url;
}


void GroupMemberResource::setAvatarUrl(utility::string_t value)
{
    m_Avatar_url = value;
    m_Avatar_urlIsSet = true;
}
bool GroupMemberResource::avatarUrlIsSet() const
{
    return m_Avatar_urlIsSet;
}

void GroupMemberResource::unsetAvatar_url()
{
    m_Avatar_urlIsSet = false;
}

utility::string_t GroupMemberResource::getDisplayName() const
{
    return m_Display_name;
}


void GroupMemberResource::setDisplayName(utility::string_t value)
{
    m_Display_name = value;
    m_Display_nameIsSet = true;
}
bool GroupMemberResource::displayNameIsSet() const
{
    return m_Display_nameIsSet;
}

void GroupMemberResource::unsetDisplay_name()
{
    m_Display_nameIsSet = false;
}

int32_t GroupMemberResource::getId() const
{
    return m_Id;
}


void GroupMemberResource::setId(int32_t value)
{
    m_Id = value;
    
}
utility::string_t GroupMemberResource::getStatus() const
{
    return m_Status;
}


void GroupMemberResource::setStatus(utility::string_t value)
{
    m_Status = value;
    m_StatusIsSet = true;
}
bool GroupMemberResource::statusIsSet() const
{
    return m_StatusIsSet;
}

void GroupMemberResource::unsetStatus()
{
    m_StatusIsSet = false;
}

utility::string_t GroupMemberResource::getUsername() const
{
    return m_Username;
}


void GroupMemberResource::setUsername(utility::string_t value)
{
    m_Username = value;
    m_UsernameIsSet = true;
}
bool GroupMemberResource::usernameIsSet() const
{
    return m_UsernameIsSet;
}

void GroupMemberResource::unsetUsername()
{
    m_UsernameIsSet = false;
}

}
}
}
}

