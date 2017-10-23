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



#include "OauthAccessTokenResource.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

OauthAccessTokenResource::OauthAccessTokenResource()
{
    m_Client_id = U("");
    m_Client_idIsSet = false;
    m_Token = U("");
    m_TokenIsSet = false;
    m_Username = U("");
    m_UsernameIsSet = false;
}

OauthAccessTokenResource::~OauthAccessTokenResource()
{
}

void OauthAccessTokenResource::validate()
{
    // TODO: implement validation
}

web::json::value OauthAccessTokenResource::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Client_idIsSet)
    {
        val[U("client_id")] = ModelBase::toJson(m_Client_id);
    }
    if(m_TokenIsSet)
    {
        val[U("token")] = ModelBase::toJson(m_Token);
    }
    if(m_UsernameIsSet)
    {
        val[U("username")] = ModelBase::toJson(m_Username);
    }

    return val;
}

void OauthAccessTokenResource::fromJson(web::json::value& val)
{
    if(val.has_field(U("client_id")))
    {
        setClientId(ModelBase::stringFromJson(val[U("client_id")]));
    }
    if(val.has_field(U("token")))
    {
        setToken(ModelBase::stringFromJson(val[U("token")]));
    }
    if(val.has_field(U("username")))
    {
        setUsername(ModelBase::stringFromJson(val[U("username")]));
    }
}

void OauthAccessTokenResource::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_Client_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("client_id"), m_Client_id));
        
    }
    if(m_TokenIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("token"), m_Token));
        
    }
    if(m_UsernameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("username"), m_Username));
        
    }
}

void OauthAccessTokenResource::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("client_id")))
    {
        setClientId(ModelBase::stringFromHttpContent(multipart->getContent(U("client_id"))));
    }
    if(multipart->hasContent(U("token")))
    {
        setToken(ModelBase::stringFromHttpContent(multipart->getContent(U("token"))));
    }
    if(multipart->hasContent(U("username")))
    {
        setUsername(ModelBase::stringFromHttpContent(multipart->getContent(U("username"))));
    }
}

utility::string_t OauthAccessTokenResource::getClientId() const
{
    return m_Client_id;
}


void OauthAccessTokenResource::setClientId(utility::string_t value)
{
    m_Client_id = value;
    m_Client_idIsSet = true;
}
bool OauthAccessTokenResource::clientIdIsSet() const
{
    return m_Client_idIsSet;
}

void OauthAccessTokenResource::unsetClient_id()
{
    m_Client_idIsSet = false;
}

utility::string_t OauthAccessTokenResource::getToken() const
{
    return m_Token;
}


void OauthAccessTokenResource::setToken(utility::string_t value)
{
    m_Token = value;
    m_TokenIsSet = true;
}
bool OauthAccessTokenResource::tokenIsSet() const
{
    return m_TokenIsSet;
}

void OauthAccessTokenResource::unsetToken()
{
    m_TokenIsSet = false;
}

utility::string_t OauthAccessTokenResource::getUsername() const
{
    return m_Username;
}


void OauthAccessTokenResource::setUsername(utility::string_t value)
{
    m_Username = value;
    m_UsernameIsSet = true;
}
bool OauthAccessTokenResource::usernameIsSet() const
{
    return m_UsernameIsSet;
}

void OauthAccessTokenResource::unsetUsername()
{
    m_UsernameIsSet = false;
}

}
}
}
}

