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



#include "PaymentAuthorizationResource.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

PaymentAuthorizationResource::PaymentAuthorizationResource()
{
    m_Captured = false;
    m_CapturedIsSet = false;
    m_Created = 0L;
    m_CreatedIsSet = false;
    m_DetailsIsSet = false;
    m_Id = 0;
    m_IdIsSet = false;
    m_Invoice = 0;
    m_InvoiceIsSet = false;
}

PaymentAuthorizationResource::~PaymentAuthorizationResource()
{
}

void PaymentAuthorizationResource::validate()
{
    // TODO: implement validation
}

web::json::value PaymentAuthorizationResource::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_CapturedIsSet)
    {
        val[U("captured")] = ModelBase::toJson(m_Captured);
    }
    if(m_CreatedIsSet)
    {
        val[U("created")] = ModelBase::toJson(m_Created);
    }
    if(m_DetailsIsSet)
    {
        val[U("details")] = ModelBase::toJson(m_Details);
    }
    if(m_IdIsSet)
    {
        val[U("id")] = ModelBase::toJson(m_Id);
    }
    if(m_InvoiceIsSet)
    {
        val[U("invoice")] = ModelBase::toJson(m_Invoice);
    }
    val[U("payment_type")] = ModelBase::toJson(m_Payment_type);

    return val;
}

void PaymentAuthorizationResource::fromJson(web::json::value& val)
{
    if(val.has_field(U("captured")))
    {
        setCaptured(ModelBase::boolFromJson(val[U("captured")]));
    }
    if(val.has_field(U("created")))
    {
        setCreated(ModelBase::int64_tFromJson(val[U("created")]));
    }
    if(val.has_field(U("details")))
    {
        if(!val[U("details")].is_null())
        {
            std::shared_ptr<Object> newItem(nullptr);
            newItem->fromJson(val[U("details")]);
            setDetails( newItem );
        }
    }
    if(val.has_field(U("id")))
    {
        setId(ModelBase::int32_tFromJson(val[U("id")]));
    }
    if(val.has_field(U("invoice")))
    {
        setInvoice(ModelBase::int32_tFromJson(val[U("invoice")]));
    }
    std::shared_ptr<SimpleReferenceResource«int»> newPayment_type(new SimpleReferenceResource«int»());
    newPayment_type->fromJson(val[U("payment_type")]);
    setPaymentType( newPayment_type );
}

void PaymentAuthorizationResource::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_CapturedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("captured"), m_Captured));
    }
    if(m_CreatedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("created"), m_Created));
    }
    if(m_DetailsIsSet)
    {
        if (m_Details.get())
        {
            m_Details->toMultipart(multipart, U("details."));
        }
        
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("id"), m_Id));
    }
    if(m_InvoiceIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("invoice"), m_Invoice));
    }
    m_Payment_type->toMultipart(multipart, U("payment_type."));
}

void PaymentAuthorizationResource::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("captured")))
    {
        setCaptured(ModelBase::boolFromHttpContent(multipart->getContent(U("captured"))));
    }
    if(multipart->hasContent(U("created")))
    {
        setCreated(ModelBase::int64_tFromHttpContent(multipart->getContent(U("created"))));
    }
    if(multipart->hasContent(U("details")))
    {
        if(multipart->hasContent(U("details")))
        {
            std::shared_ptr<Object> newItem(nullptr);
            newItem->fromMultiPart(multipart, U("details."));
            setDetails( newItem );
        }
    }
    if(multipart->hasContent(U("id")))
    {
        setId(ModelBase::int32_tFromHttpContent(multipart->getContent(U("id"))));
    }
    if(multipart->hasContent(U("invoice")))
    {
        setInvoice(ModelBase::int32_tFromHttpContent(multipart->getContent(U("invoice"))));
    }
    std::shared_ptr<SimpleReferenceResource«int»> newPayment_type(new SimpleReferenceResource«int»());
    newPayment_type->fromMultiPart(multipart, U("payment_type."));
    setPaymentType( newPayment_type );
}

bool PaymentAuthorizationResource::getCaptured() const
{
    return m_Captured;
}


void PaymentAuthorizationResource::setCaptured(bool value)
{
    m_Captured = value;
    m_CapturedIsSet = true;
}
bool PaymentAuthorizationResource::capturedIsSet() const
{
    return m_CapturedIsSet;
}

void PaymentAuthorizationResource::unsetCaptured()
{
    m_CapturedIsSet = false;
}

int64_t PaymentAuthorizationResource::getCreated() const
{
    return m_Created;
}


void PaymentAuthorizationResource::setCreated(int64_t value)
{
    m_Created = value;
    m_CreatedIsSet = true;
}
bool PaymentAuthorizationResource::createdIsSet() const
{
    return m_CreatedIsSet;
}

void PaymentAuthorizationResource::unsetCreated()
{
    m_CreatedIsSet = false;
}

std::shared_ptr<Object> PaymentAuthorizationResource::getDetails() const
{
    return m_Details;
}


void PaymentAuthorizationResource::setDetails(std::shared_ptr<Object> value)
{
    m_Details = value;
    m_DetailsIsSet = true;
}
bool PaymentAuthorizationResource::detailsIsSet() const
{
    return m_DetailsIsSet;
}

void PaymentAuthorizationResource::unsetDetails()
{
    m_DetailsIsSet = false;
}

int32_t PaymentAuthorizationResource::getId() const
{
    return m_Id;
}


void PaymentAuthorizationResource::setId(int32_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}
bool PaymentAuthorizationResource::idIsSet() const
{
    return m_IdIsSet;
}

void PaymentAuthorizationResource::unsetId()
{
    m_IdIsSet = false;
}

int32_t PaymentAuthorizationResource::getInvoice() const
{
    return m_Invoice;
}


void PaymentAuthorizationResource::setInvoice(int32_t value)
{
    m_Invoice = value;
    m_InvoiceIsSet = true;
}
bool PaymentAuthorizationResource::invoiceIsSet() const
{
    return m_InvoiceIsSet;
}

void PaymentAuthorizationResource::unsetInvoice()
{
    m_InvoiceIsSet = false;
}

std::shared_ptr<SimpleReferenceResource«int»> PaymentAuthorizationResource::getPaymentType() const
{
    return m_Payment_type;
}


void PaymentAuthorizationResource::setPaymentType(std::shared_ptr<SimpleReferenceResource«int»> value)
{
    m_Payment_type = value;
    
}
}
}
}
}

