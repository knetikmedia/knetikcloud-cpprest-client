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



#include "GooglePaymentRequest.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

GooglePaymentRequest::GooglePaymentRequest()
{
    m_Json_payload = U("");
    m_Signature = U("");
}

GooglePaymentRequest::~GooglePaymentRequest()
{
}

void GooglePaymentRequest::validate()
{
    // TODO: implement validation
}

web::json::value GooglePaymentRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    val[U("json_payload")] = ModelBase::toJson(m_Json_payload);
    val[U("signature")] = ModelBase::toJson(m_Signature);

    return val;
}

void GooglePaymentRequest::fromJson(web::json::value& val)
{
    setJsonPayload(ModelBase::stringFromJson(val[U("json_payload")]));
    setSignature(ModelBase::stringFromJson(val[U("signature")]));
}

void GooglePaymentRequest::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + U("json_payload"), m_Json_payload));
    multipart->add(ModelBase::toHttpContent(namePrefix + U("signature"), m_Signature));
}

void GooglePaymentRequest::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    setJsonPayload(ModelBase::stringFromHttpContent(multipart->getContent(U("json_payload"))));
    setSignature(ModelBase::stringFromHttpContent(multipart->getContent(U("signature"))));
}

utility::string_t GooglePaymentRequest::getJsonPayload() const
{
    return m_Json_payload;
}


void GooglePaymentRequest::setJsonPayload(utility::string_t value)
{
    m_Json_payload = value;
    
}
utility::string_t GooglePaymentRequest::getSignature() const
{
    return m_Signature;
}


void GooglePaymentRequest::setSignature(utility::string_t value)
{
    m_Signature = value;
    
}
}
}
}
}

