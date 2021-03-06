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



#include "PasswordResetRequest.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

PasswordResetRequest::PasswordResetRequest()
{
    m_Email = U("");
    m_EmailIsSet = false;
    m_Mobile_number = U("");
    m_Mobile_numberIsSet = false;
    m_Username = U("");
    m_UsernameIsSet = false;
}

PasswordResetRequest::~PasswordResetRequest()
{
}

void PasswordResetRequest::validate()
{
    // TODO: implement validation
}

web::json::value PasswordResetRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_EmailIsSet)
    {
        val[U("email")] = ModelBase::toJson(m_Email);
    }
    if(m_Mobile_numberIsSet)
    {
        val[U("mobile_number")] = ModelBase::toJson(m_Mobile_number);
    }
    if(m_UsernameIsSet)
    {
        val[U("username")] = ModelBase::toJson(m_Username);
    }

    return val;
}

void PasswordResetRequest::fromJson(web::json::value& val)
{
    if(val.has_field(U("email")))
    {
        setEmail(ModelBase::stringFromJson(val[U("email")]));
    }
    if(val.has_field(U("mobile_number")))
    {
        setMobileNumber(ModelBase::stringFromJson(val[U("mobile_number")]));
    }
    if(val.has_field(U("username")))
    {
        setUsername(ModelBase::stringFromJson(val[U("username")]));
    }
}

void PasswordResetRequest::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_Mobile_numberIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("mobile_number"), m_Mobile_number));
        
    }
    if(m_UsernameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("username"), m_Username));
        
    }
}

void PasswordResetRequest::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(U("mobile_number")))
    {
        setMobileNumber(ModelBase::stringFromHttpContent(multipart->getContent(U("mobile_number"))));
    }
    if(multipart->hasContent(U("username")))
    {
        setUsername(ModelBase::stringFromHttpContent(multipart->getContent(U("username"))));
    }
}

utility::string_t PasswordResetRequest::getEmail() const
{
    return m_Email;
}


void PasswordResetRequest::setEmail(utility::string_t value)
{
    m_Email = value;
    m_EmailIsSet = true;
}
bool PasswordResetRequest::emailIsSet() const
{
    return m_EmailIsSet;
}

void PasswordResetRequest::unsetEmail()
{
    m_EmailIsSet = false;
}

utility::string_t PasswordResetRequest::getMobileNumber() const
{
    return m_Mobile_number;
}


void PasswordResetRequest::setMobileNumber(utility::string_t value)
{
    m_Mobile_number = value;
    m_Mobile_numberIsSet = true;
}
bool PasswordResetRequest::mobileNumberIsSet() const
{
    return m_Mobile_numberIsSet;
}

void PasswordResetRequest::unsetMobile_number()
{
    m_Mobile_numberIsSet = false;
}

utility::string_t PasswordResetRequest::getUsername() const
{
    return m_Username;
}


void PasswordResetRequest::setUsername(utility::string_t value)
{
    m_Username = value;
    m_UsernameIsSet = true;
}
bool PasswordResetRequest::usernameIsSet() const
{
    return m_UsernameIsSet;
}

void PasswordResetRequest::unsetUsername()
{
    m_UsernameIsSet = false;
}

}
}
}
}

