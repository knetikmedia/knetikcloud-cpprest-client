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



#include "OAuth2Resource.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

OAuth2Resource::OAuth2Resource()
{
    m_Access_token = U("");
    m_Access_tokenIsSet = false;
    m_Expires_in = U("");
    m_Expires_inIsSet = false;
    m_Scope = U("");
    m_ScopeIsSet = false;
    m_Token_type = U("");
    m_Token_typeIsSet = false;
    
}

OAuth2Resource::~OAuth2Resource()
{
}

void OAuth2Resource::validate()
{
    // TODO: implement validation
}

web::json::value OAuth2Resource::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Access_tokenIsSet)
    {
        val[U("access_token")] = ModelBase::toJson(m_Access_token);
    }
    if(m_Expires_inIsSet)
    {
        val[U("expires_in")] = ModelBase::toJson(m_Expires_in);
    }
    if(m_ScopeIsSet)
    {
        val[U("scope")] = ModelBase::toJson(m_Scope);
    }
    if(m_Token_typeIsSet)
    {
        val[U("token_type")] = ModelBase::toJson(m_Token_type);
    }
    

    return val;
}

void OAuth2Resource::fromJson(web::json::value& val)
{
    if(val.has_field(U("access_token")))
    {
        setAccessToken(ModelBase::stringFromJson(val[U("access_token")]));
        
    }
    if(val.has_field(U("expires_in")))
    {
        setExpiresIn(ModelBase::stringFromJson(val[U("expires_in")]));
        
    }
    if(val.has_field(U("scope")))
    {
        setScope(ModelBase::stringFromJson(val[U("scope")]));
        
    }
    if(val.has_field(U("token_type")))
    {
        setTokenType(ModelBase::stringFromJson(val[U("token_type")]));
        
    }
    
}

void OAuth2Resource::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_Access_tokenIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("access_token"), m_Access_token));
        
    }
    if(m_Expires_inIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("expires_in"), m_Expires_in));
        
    }
    if(m_ScopeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("scope"), m_Scope));
        
    }
    if(m_Token_typeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("token_type"), m_Token_type));
        
    }
    
}

void OAuth2Resource::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("access_token")))
    {
        setAccessToken(ModelBase::stringFromHttpContent(multipart->getContent(U("access_token"))));
        
    }
    if(multipart->hasContent(U("expires_in")))
    {
        setExpiresIn(ModelBase::stringFromHttpContent(multipart->getContent(U("expires_in"))));
        
    }
    if(multipart->hasContent(U("scope")))
    {
        setScope(ModelBase::stringFromHttpContent(multipart->getContent(U("scope"))));
        
    }
    if(multipart->hasContent(U("token_type")))
    {
        setTokenType(ModelBase::stringFromHttpContent(multipart->getContent(U("token_type"))));
        
    }
    
}


utility::string_t OAuth2Resource::getAccessToken() const
{
    return m_Access_token;
}
void OAuth2Resource::setAccessToken(utility::string_t value)
{
    m_Access_token = value;
    m_Access_tokenIsSet = true;
}
bool OAuth2Resource::access_tokenIsSet() const
{
    return m_Access_tokenIsSet;
}
void OAuth2Resource::unsetAccess_token()
{
    m_Access_tokenIsSet = false;
}
utility::string_t OAuth2Resource::getExpiresIn() const
{
    return m_Expires_in;
}
void OAuth2Resource::setExpiresIn(utility::string_t value)
{
    m_Expires_in = value;
    m_Expires_inIsSet = true;
}
bool OAuth2Resource::expires_inIsSet() const
{
    return m_Expires_inIsSet;
}
void OAuth2Resource::unsetExpires_in()
{
    m_Expires_inIsSet = false;
}
utility::string_t OAuth2Resource::getScope() const
{
    return m_Scope;
}
void OAuth2Resource::setScope(utility::string_t value)
{
    m_Scope = value;
    m_ScopeIsSet = true;
}
bool OAuth2Resource::scopeIsSet() const
{
    return m_ScopeIsSet;
}
void OAuth2Resource::unsetScope()
{
    m_ScopeIsSet = false;
}
utility::string_t OAuth2Resource::getTokenType() const
{
    return m_Token_type;
}
void OAuth2Resource::setTokenType(utility::string_t value)
{
    m_Token_type = value;
    m_Token_typeIsSet = true;
}
bool OAuth2Resource::token_typeIsSet() const
{
    return m_Token_typeIsSet;
}
void OAuth2Resource::unsetToken_type()
{
    m_Token_typeIsSet = false;
}

}
}
}
}

