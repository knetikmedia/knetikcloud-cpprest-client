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



#include "FinalizePayPalPaymentRequest.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

FinalizePayPalPaymentRequest::FinalizePayPalPaymentRequest()
{
    m_Invoice_id = 0;
    m_Payer_id = U("");
    m_Token = U("");
    
}

FinalizePayPalPaymentRequest::~FinalizePayPalPaymentRequest()
{
}

void FinalizePayPalPaymentRequest::validate()
{
    // TODO: implement validation
}

web::json::value FinalizePayPalPaymentRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    val[U("invoice_id")] = ModelBase::toJson(m_Invoice_id);
    val[U("payer_id")] = ModelBase::toJson(m_Payer_id);
    val[U("token")] = ModelBase::toJson(m_Token);
    

    return val;
}

void FinalizePayPalPaymentRequest::fromJson(web::json::value& val)
{
    setInvoiceId(ModelBase::int32_tFromJson(val[U("invoice_id")]));
    setPayerId(ModelBase::stringFromJson(val[U("payer_id")]));
    setToken(ModelBase::stringFromJson(val[U("token")]));
    
}

void FinalizePayPalPaymentRequest::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + U("invoice_id"), m_Invoice_id));
    multipart->add(ModelBase::toHttpContent(namePrefix + U("payer_id"), m_Payer_id));
    multipart->add(ModelBase::toHttpContent(namePrefix + U("token"), m_Token));
    
}

void FinalizePayPalPaymentRequest::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    setInvoiceId(ModelBase::int32_tFromHttpContent(multipart->getContent(U("invoice_id"))));
    setPayerId(ModelBase::stringFromHttpContent(multipart->getContent(U("payer_id"))));
    setToken(ModelBase::stringFromHttpContent(multipart->getContent(U("token"))));
    
}


int32_t FinalizePayPalPaymentRequest::getInvoiceId() const
{
    return m_Invoice_id;
}
void FinalizePayPalPaymentRequest::setInvoiceId(int32_t value)
{
    m_Invoice_id = value;
    
}
utility::string_t FinalizePayPalPaymentRequest::getPayerId() const
{
    return m_Payer_id;
}
void FinalizePayPalPaymentRequest::setPayerId(utility::string_t value)
{
    m_Payer_id = value;
    
}
utility::string_t FinalizePayPalPaymentRequest::getToken() const
{
    return m_Token;
}
void FinalizePayPalPaymentRequest::setToken(utility::string_t value)
{
    m_Token = value;
    
}

}
}
}
}
