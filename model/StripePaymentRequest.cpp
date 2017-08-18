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



#include "StripePaymentRequest.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

StripePaymentRequest::StripePaymentRequest()
{
    m_Invoice_id = 0;
    m_Token = U("");
}

StripePaymentRequest::~StripePaymentRequest()
{
}

void StripePaymentRequest::validate()
{
    // TODO: implement validation
}

web::json::value StripePaymentRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    val[U("invoice_id")] = ModelBase::toJson(m_Invoice_id);
    val[U("token")] = ModelBase::toJson(m_Token);

    return val;
}

void StripePaymentRequest::fromJson(web::json::value& val)
{
    setInvoiceId(ModelBase::int32_tFromJson(val[U("invoice_id")]));
    setToken(ModelBase::stringFromJson(val[U("token")]));
}

void StripePaymentRequest::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + U("invoice_id"), m_Invoice_id));
    multipart->add(ModelBase::toHttpContent(namePrefix + U("token"), m_Token));
}

void StripePaymentRequest::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    setInvoiceId(ModelBase::int32_tFromHttpContent(multipart->getContent(U("invoice_id"))));
    setToken(ModelBase::stringFromHttpContent(multipart->getContent(U("token"))));
}

int32_t StripePaymentRequest::getInvoiceId() const
{
    return m_Invoice_id;
}


void StripePaymentRequest::setInvoiceId(int32_t value)
{
    m_Invoice_id = value;
    
}
utility::string_t StripePaymentRequest::getToken() const
{
    return m_Token;
}


void StripePaymentRequest::setToken(utility::string_t value)
{
    m_Token = value;
    
}
}
}
}
}
