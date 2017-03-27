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



#include "ApplyPaymentRequest.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

ApplyPaymentRequest::ApplyPaymentRequest()
{
    m_Invoice_id = 0;
    m_Receipt = U("");
    m_Transaction_id = U("");
    
}

ApplyPaymentRequest::~ApplyPaymentRequest()
{
}

void ApplyPaymentRequest::validate()
{
    // TODO: implement validation
}

web::json::value ApplyPaymentRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    val[U("invoice_id")] = ModelBase::toJson(m_Invoice_id);
    val[U("receipt")] = ModelBase::toJson(m_Receipt);
    val[U("transaction_id")] = ModelBase::toJson(m_Transaction_id);
    

    return val;
}

void ApplyPaymentRequest::fromJson(web::json::value& val)
{
    setInvoiceId(ModelBase::int32_tFromJson(val[U("invoice_id")]));
    setReceipt(ModelBase::stringFromJson(val[U("receipt")]));
    setTransactionId(ModelBase::stringFromJson(val[U("transaction_id")]));
    
}

void ApplyPaymentRequest::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + U("invoice_id"), m_Invoice_id));
    multipart->add(ModelBase::toHttpContent(namePrefix + U("receipt"), m_Receipt));
    multipart->add(ModelBase::toHttpContent(namePrefix + U("transaction_id"), m_Transaction_id));
    
}

void ApplyPaymentRequest::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    setInvoiceId(ModelBase::int32_tFromHttpContent(multipart->getContent(U("invoice_id"))));
    setReceipt(ModelBase::stringFromHttpContent(multipart->getContent(U("receipt"))));
    setTransactionId(ModelBase::stringFromHttpContent(multipart->getContent(U("transaction_id"))));
    
}


int32_t ApplyPaymentRequest::getInvoiceId() const
{
    return m_Invoice_id;
}
void ApplyPaymentRequest::setInvoiceId(int32_t value)
{
    m_Invoice_id = value;
    
}
utility::string_t ApplyPaymentRequest::getReceipt() const
{
    return m_Receipt;
}
void ApplyPaymentRequest::setReceipt(utility::string_t value)
{
    m_Receipt = value;
    
}
utility::string_t ApplyPaymentRequest::getTransactionId() const
{
    return m_Transaction_id;
}
void ApplyPaymentRequest::setTransactionId(utility::string_t value)
{
    m_Transaction_id = value;
    
}

}
}
}
}

