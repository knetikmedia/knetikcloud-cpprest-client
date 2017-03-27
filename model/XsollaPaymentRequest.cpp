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



#include "XsollaPaymentRequest.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

XsollaPaymentRequest::XsollaPaymentRequest()
{
    m_Invoice_id = 0;
    m_Return_url = U("");
    
}

XsollaPaymentRequest::~XsollaPaymentRequest()
{
}

void XsollaPaymentRequest::validate()
{
    // TODO: implement validation
}

web::json::value XsollaPaymentRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    val[U("invoice_id")] = ModelBase::toJson(m_Invoice_id);
    val[U("return_url")] = ModelBase::toJson(m_Return_url);
    

    return val;
}

void XsollaPaymentRequest::fromJson(web::json::value& val)
{
    setInvoiceId(ModelBase::int32_tFromJson(val[U("invoice_id")]));
    setReturnUrl(ModelBase::stringFromJson(val[U("return_url")]));
    
}

void XsollaPaymentRequest::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + U("invoice_id"), m_Invoice_id));
    multipart->add(ModelBase::toHttpContent(namePrefix + U("return_url"), m_Return_url));
    
}

void XsollaPaymentRequest::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    setInvoiceId(ModelBase::int32_tFromHttpContent(multipart->getContent(U("invoice_id"))));
    setReturnUrl(ModelBase::stringFromHttpContent(multipart->getContent(U("return_url"))));
    
}


int32_t XsollaPaymentRequest::getInvoiceId() const
{
    return m_Invoice_id;
}
void XsollaPaymentRequest::setInvoiceId(int32_t value)
{
    m_Invoice_id = value;
    
}
utility::string_t XsollaPaymentRequest::getReturnUrl() const
{
    return m_Return_url;
}
void XsollaPaymentRequest::setReturnUrl(utility::string_t value)
{
    m_Return_url = value;
    
}

}
}
}
}

