/**
 * Knetik Platform API Documentation latest 
 * This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://knetikcloud.com.
 *
 * OpenAPI spec version: latest 
 * Contact: support@knetik.com
 *
 * NOTE: This class is auto generated by the swagger code generator 2.2.3.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */



#include "WalletAlterRequest.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

WalletAlterRequest::WalletAlterRequest()
{
    m_Delta = 0.0;
    m_Invoice_id = 0;
    m_Invoice_idIsSet = false;
    m_Reason = U("");
    m_Type = U("");
    m_TypeIsSet = false;
}

WalletAlterRequest::~WalletAlterRequest()
{
}

void WalletAlterRequest::validate()
{
    // TODO: implement validation
}

web::json::value WalletAlterRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    val[U("delta")] = ModelBase::toJson(m_Delta);
    if(m_Invoice_idIsSet)
    {
        val[U("invoice_id")] = ModelBase::toJson(m_Invoice_id);
    }
    val[U("reason")] = ModelBase::toJson(m_Reason);
    if(m_TypeIsSet)
    {
        val[U("type")] = ModelBase::toJson(m_Type);
    }

    return val;
}

void WalletAlterRequest::fromJson(web::json::value& val)
{
    setDelta(ModelBase::doubleFromJson(val[U("delta")]));
    if(val.has_field(U("invoice_id")))
    {
        setInvoiceId(ModelBase::int32_tFromJson(val[U("invoice_id")]));
    }
    setReason(ModelBase::stringFromJson(val[U("reason")]));
    if(val.has_field(U("type")))
    {
        setType(ModelBase::stringFromJson(val[U("type")]));
    }
}

void WalletAlterRequest::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + U("delta"), m_Delta));
    if(m_Invoice_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("invoice_id"), m_Invoice_id));
    }
    multipart->add(ModelBase::toHttpContent(namePrefix + U("reason"), m_Reason));
    if(m_TypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("type"), m_Type));
        
    }
}

void WalletAlterRequest::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    setDelta(ModelBase::doubleFromHttpContent(multipart->getContent(U("delta"))));
    if(multipart->hasContent(U("invoice_id")))
    {
        setInvoiceId(ModelBase::int32_tFromHttpContent(multipart->getContent(U("invoice_id"))));
    }
    setReason(ModelBase::stringFromHttpContent(multipart->getContent(U("reason"))));
    if(multipart->hasContent(U("type")))
    {
        setType(ModelBase::stringFromHttpContent(multipart->getContent(U("type"))));
    }
}

double WalletAlterRequest::getDelta() const
{
    return m_Delta;
}


void WalletAlterRequest::setDelta(double value)
{
    m_Delta = value;
    
}
int32_t WalletAlterRequest::getInvoiceId() const
{
    return m_Invoice_id;
}


void WalletAlterRequest::setInvoiceId(int32_t value)
{
    m_Invoice_id = value;
    m_Invoice_idIsSet = true;
}
bool WalletAlterRequest::invoiceIdIsSet() const
{
    return m_Invoice_idIsSet;
}

void WalletAlterRequest::unsetInvoice_id()
{
    m_Invoice_idIsSet = false;
}

utility::string_t WalletAlterRequest::getReason() const
{
    return m_Reason;
}


void WalletAlterRequest::setReason(utility::string_t value)
{
    m_Reason = value;
    
}
utility::string_t WalletAlterRequest::getType() const
{
    return m_Type;
}


void WalletAlterRequest::setType(utility::string_t value)
{
    m_Type = value;
    m_TypeIsSet = true;
}
bool WalletAlterRequest::typeIsSet() const
{
    return m_TypeIsSet;
}

void WalletAlterRequest::unsetType()
{
    m_TypeIsSet = false;
}

}
}
}
}

