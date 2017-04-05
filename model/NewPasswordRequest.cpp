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



#include "NewPasswordRequest.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

NewPasswordRequest::NewPasswordRequest()
{
    m_Password = U("");
    m_Secret = U("");
    
}

NewPasswordRequest::~NewPasswordRequest()
{
}

void NewPasswordRequest::validate()
{
    // TODO: implement validation
}

web::json::value NewPasswordRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    val[U("password")] = ModelBase::toJson(m_Password);
    val[U("secret")] = ModelBase::toJson(m_Secret);
    

    return val;
}

void NewPasswordRequest::fromJson(web::json::value& val)
{
    setPassword(ModelBase::stringFromJson(val[U("password")]));
    setSecret(ModelBase::stringFromJson(val[U("secret")]));
    
}

void NewPasswordRequest::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + U("password"), m_Password));
    multipart->add(ModelBase::toHttpContent(namePrefix + U("secret"), m_Secret));
    
}

void NewPasswordRequest::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    setPassword(ModelBase::stringFromHttpContent(multipart->getContent(U("password"))));
    setSecret(ModelBase::stringFromHttpContent(multipart->getContent(U("secret"))));
    
}


utility::string_t NewPasswordRequest::getPassword() const
{
    return m_Password;
}
void NewPasswordRequest::setPassword(utility::string_t value)
{
    m_Password = value;
    
}
utility::string_t NewPasswordRequest::getSecret() const
{
    return m_Secret;
}
void NewPasswordRequest::setSecret(utility::string_t value)
{
    m_Secret = value;
    
}

}
}
}
}

