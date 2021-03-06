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



#include "CreateBillingAgreementRequest.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

CreateBillingAgreementRequest::CreateBillingAgreementRequest()
{
    m_Cancel_url = U("");
    m_Return_url = U("");
    m_User_id = 0;
    m_User_idIsSet = false;
}

CreateBillingAgreementRequest::~CreateBillingAgreementRequest()
{
}

void CreateBillingAgreementRequest::validate()
{
    // TODO: implement validation
}

web::json::value CreateBillingAgreementRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    val[U("cancel_url")] = ModelBase::toJson(m_Cancel_url);
    val[U("return_url")] = ModelBase::toJson(m_Return_url);
    if(m_User_idIsSet)
    {
        val[U("user_id")] = ModelBase::toJson(m_User_id);
    }

    return val;
}

void CreateBillingAgreementRequest::fromJson(web::json::value& val)
{
    setCancelUrl(ModelBase::stringFromJson(val[U("cancel_url")]));
    setReturnUrl(ModelBase::stringFromJson(val[U("return_url")]));
    if(val.has_field(U("user_id")))
    {
        setUserId(ModelBase::int32_tFromJson(val[U("user_id")]));
    }
}

void CreateBillingAgreementRequest::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + U("cancel_url"), m_Cancel_url));
    multipart->add(ModelBase::toHttpContent(namePrefix + U("return_url"), m_Return_url));
    if(m_User_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("user_id"), m_User_id));
    }
}

void CreateBillingAgreementRequest::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    setCancelUrl(ModelBase::stringFromHttpContent(multipart->getContent(U("cancel_url"))));
    setReturnUrl(ModelBase::stringFromHttpContent(multipart->getContent(U("return_url"))));
    if(multipart->hasContent(U("user_id")))
    {
        setUserId(ModelBase::int32_tFromHttpContent(multipart->getContent(U("user_id"))));
    }
}

utility::string_t CreateBillingAgreementRequest::getCancelUrl() const
{
    return m_Cancel_url;
}


void CreateBillingAgreementRequest::setCancelUrl(utility::string_t value)
{
    m_Cancel_url = value;
    
}
utility::string_t CreateBillingAgreementRequest::getReturnUrl() const
{
    return m_Return_url;
}


void CreateBillingAgreementRequest::setReturnUrl(utility::string_t value)
{
    m_Return_url = value;
    
}
int32_t CreateBillingAgreementRequest::getUserId() const
{
    return m_User_id;
}


void CreateBillingAgreementRequest::setUserId(int32_t value)
{
    m_User_id = value;
    m_User_idIsSet = true;
}
bool CreateBillingAgreementRequest::userIdIsSet() const
{
    return m_User_idIsSet;
}

void CreateBillingAgreementRequest::unsetUser_id()
{
    m_User_idIsSet = false;
}

}
}
}
}

