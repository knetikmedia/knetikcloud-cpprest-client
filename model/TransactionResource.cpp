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



#include "TransactionResource.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

TransactionResource::TransactionResource()
{
    m_Create_date = 0L;
    m_Create_dateIsSet = false;
    m_Currency_code = U("");
    m_Currency_codeIsSet = false;
    m_Details = U("");
    m_DetailsIsSet = false;
    m_Id = 0;
    m_IdIsSet = false;
    m_Invoice_id = 0;
    m_Invoice_idIsSet = false;
    m_Is_refunded = false;
    m_Is_refundedIsSet = false;
    m_Response = U("");
    m_ResponseIsSet = false;
    m_Source = U("");
    m_SourceIsSet = false;
    m_Successful = false;
    m_SuccessfulIsSet = false;
    m_Transaction_id = U("");
    m_Transaction_idIsSet = false;
    m_Type = U("");
    m_TypeIsSet = false;
    m_Type_hint = U("");
    m_Type_hintIsSet = false;
    m_Value = 0.0;
    m_ValueIsSet = false;
}

TransactionResource::~TransactionResource()
{
}

void TransactionResource::validate()
{
    // TODO: implement validation
}

web::json::value TransactionResource::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Create_dateIsSet)
    {
        val[U("create_date")] = ModelBase::toJson(m_Create_date);
    }
    if(m_Currency_codeIsSet)
    {
        val[U("currency_code")] = ModelBase::toJson(m_Currency_code);
    }
    if(m_DetailsIsSet)
    {
        val[U("details")] = ModelBase::toJson(m_Details);
    }
    if(m_IdIsSet)
    {
        val[U("id")] = ModelBase::toJson(m_Id);
    }
    if(m_Invoice_idIsSet)
    {
        val[U("invoice_id")] = ModelBase::toJson(m_Invoice_id);
    }
    if(m_Is_refundedIsSet)
    {
        val[U("is_refunded")] = ModelBase::toJson(m_Is_refunded);
    }
    if(m_ResponseIsSet)
    {
        val[U("response")] = ModelBase::toJson(m_Response);
    }
    if(m_SourceIsSet)
    {
        val[U("source")] = ModelBase::toJson(m_Source);
    }
    if(m_SuccessfulIsSet)
    {
        val[U("successful")] = ModelBase::toJson(m_Successful);
    }
    if(m_Transaction_idIsSet)
    {
        val[U("transaction_id")] = ModelBase::toJson(m_Transaction_id);
    }
    if(m_TypeIsSet)
    {
        val[U("type")] = ModelBase::toJson(m_Type);
    }
    if(m_Type_hintIsSet)
    {
        val[U("type_hint")] = ModelBase::toJson(m_Type_hint);
    }
    if(m_ValueIsSet)
    {
        val[U("value")] = ModelBase::toJson(m_Value);
    }

    return val;
}

void TransactionResource::fromJson(web::json::value& val)
{
    if(val.has_field(U("create_date")))
    {
        setCreateDate(ModelBase::int64_tFromJson(val[U("create_date")]));
    }
    if(val.has_field(U("currency_code")))
    {
        setCurrencyCode(ModelBase::stringFromJson(val[U("currency_code")]));
    }
    if(val.has_field(U("details")))
    {
        setDetails(ModelBase::stringFromJson(val[U("details")]));
    }
    if(val.has_field(U("id")))
    {
        setId(ModelBase::int32_tFromJson(val[U("id")]));
    }
    if(val.has_field(U("invoice_id")))
    {
        setInvoiceId(ModelBase::int32_tFromJson(val[U("invoice_id")]));
    }
    if(val.has_field(U("is_refunded")))
    {
        setIsRefunded(ModelBase::boolFromJson(val[U("is_refunded")]));
    }
    if(val.has_field(U("response")))
    {
        setResponse(ModelBase::stringFromJson(val[U("response")]));
    }
    if(val.has_field(U("source")))
    {
        setSource(ModelBase::stringFromJson(val[U("source")]));
    }
    if(val.has_field(U("successful")))
    {
        setSuccessful(ModelBase::boolFromJson(val[U("successful")]));
    }
    if(val.has_field(U("transaction_id")))
    {
        setTransactionId(ModelBase::stringFromJson(val[U("transaction_id")]));
    }
    if(val.has_field(U("type")))
    {
        setType(ModelBase::stringFromJson(val[U("type")]));
    }
    if(val.has_field(U("type_hint")))
    {
        setTypeHint(ModelBase::stringFromJson(val[U("type_hint")]));
    }
    if(val.has_field(U("value")))
    {
        setValue(ModelBase::doubleFromJson(val[U("value")]));
    }
}

void TransactionResource::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_Create_dateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("create_date"), m_Create_date));
    }
    if(m_Currency_codeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("currency_code"), m_Currency_code));
        
    }
    if(m_DetailsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("details"), m_Details));
        
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("id"), m_Id));
    }
    if(m_Invoice_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("invoice_id"), m_Invoice_id));
    }
    if(m_Is_refundedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("is_refunded"), m_Is_refunded));
    }
    if(m_ResponseIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("response"), m_Response));
        
    }
    if(m_SourceIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("source"), m_Source));
        
    }
    if(m_SuccessfulIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("successful"), m_Successful));
    }
    if(m_Transaction_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("transaction_id"), m_Transaction_id));
        
    }
    if(m_TypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("type"), m_Type));
        
    }
    if(m_Type_hintIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("type_hint"), m_Type_hint));
        
    }
    if(m_ValueIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("value"), m_Value));
    }
}

void TransactionResource::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("create_date")))
    {
        setCreateDate(ModelBase::int64_tFromHttpContent(multipart->getContent(U("create_date"))));
    }
    if(multipart->hasContent(U("currency_code")))
    {
        setCurrencyCode(ModelBase::stringFromHttpContent(multipart->getContent(U("currency_code"))));
    }
    if(multipart->hasContent(U("details")))
    {
        setDetails(ModelBase::stringFromHttpContent(multipart->getContent(U("details"))));
    }
    if(multipart->hasContent(U("id")))
    {
        setId(ModelBase::int32_tFromHttpContent(multipart->getContent(U("id"))));
    }
    if(multipart->hasContent(U("invoice_id")))
    {
        setInvoiceId(ModelBase::int32_tFromHttpContent(multipart->getContent(U("invoice_id"))));
    }
    if(multipart->hasContent(U("is_refunded")))
    {
        setIsRefunded(ModelBase::boolFromHttpContent(multipart->getContent(U("is_refunded"))));
    }
    if(multipart->hasContent(U("response")))
    {
        setResponse(ModelBase::stringFromHttpContent(multipart->getContent(U("response"))));
    }
    if(multipart->hasContent(U("source")))
    {
        setSource(ModelBase::stringFromHttpContent(multipart->getContent(U("source"))));
    }
    if(multipart->hasContent(U("successful")))
    {
        setSuccessful(ModelBase::boolFromHttpContent(multipart->getContent(U("successful"))));
    }
    if(multipart->hasContent(U("transaction_id")))
    {
        setTransactionId(ModelBase::stringFromHttpContent(multipart->getContent(U("transaction_id"))));
    }
    if(multipart->hasContent(U("type")))
    {
        setType(ModelBase::stringFromHttpContent(multipart->getContent(U("type"))));
    }
    if(multipart->hasContent(U("type_hint")))
    {
        setTypeHint(ModelBase::stringFromHttpContent(multipart->getContent(U("type_hint"))));
    }
    if(multipart->hasContent(U("value")))
    {
        setValue(ModelBase::doubleFromHttpContent(multipart->getContent(U("value"))));
    }
}

int64_t TransactionResource::getCreateDate() const
{
    return m_Create_date;
}


void TransactionResource::setCreateDate(int64_t value)
{
    m_Create_date = value;
    m_Create_dateIsSet = true;
}
bool TransactionResource::createDateIsSet() const
{
    return m_Create_dateIsSet;
}

void TransactionResource::unsetCreate_date()
{
    m_Create_dateIsSet = false;
}

utility::string_t TransactionResource::getCurrencyCode() const
{
    return m_Currency_code;
}


void TransactionResource::setCurrencyCode(utility::string_t value)
{
    m_Currency_code = value;
    m_Currency_codeIsSet = true;
}
bool TransactionResource::currencyCodeIsSet() const
{
    return m_Currency_codeIsSet;
}

void TransactionResource::unsetCurrency_code()
{
    m_Currency_codeIsSet = false;
}

utility::string_t TransactionResource::getDetails() const
{
    return m_Details;
}


void TransactionResource::setDetails(utility::string_t value)
{
    m_Details = value;
    m_DetailsIsSet = true;
}
bool TransactionResource::detailsIsSet() const
{
    return m_DetailsIsSet;
}

void TransactionResource::unsetDetails()
{
    m_DetailsIsSet = false;
}

int32_t TransactionResource::getId() const
{
    return m_Id;
}


void TransactionResource::setId(int32_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}
bool TransactionResource::idIsSet() const
{
    return m_IdIsSet;
}

void TransactionResource::unsetId()
{
    m_IdIsSet = false;
}

int32_t TransactionResource::getInvoiceId() const
{
    return m_Invoice_id;
}


void TransactionResource::setInvoiceId(int32_t value)
{
    m_Invoice_id = value;
    m_Invoice_idIsSet = true;
}
bool TransactionResource::invoiceIdIsSet() const
{
    return m_Invoice_idIsSet;
}

void TransactionResource::unsetInvoice_id()
{
    m_Invoice_idIsSet = false;
}

bool TransactionResource::getIsRefunded() const
{
    return m_Is_refunded;
}


void TransactionResource::setIsRefunded(bool value)
{
    m_Is_refunded = value;
    m_Is_refundedIsSet = true;
}
bool TransactionResource::isRefundedIsSet() const
{
    return m_Is_refundedIsSet;
}

void TransactionResource::unsetIs_refunded()
{
    m_Is_refundedIsSet = false;
}

utility::string_t TransactionResource::getResponse() const
{
    return m_Response;
}


void TransactionResource::setResponse(utility::string_t value)
{
    m_Response = value;
    m_ResponseIsSet = true;
}
bool TransactionResource::responseIsSet() const
{
    return m_ResponseIsSet;
}

void TransactionResource::unsetResponse()
{
    m_ResponseIsSet = false;
}

utility::string_t TransactionResource::getSource() const
{
    return m_Source;
}


void TransactionResource::setSource(utility::string_t value)
{
    m_Source = value;
    m_SourceIsSet = true;
}
bool TransactionResource::sourceIsSet() const
{
    return m_SourceIsSet;
}

void TransactionResource::unsetSource()
{
    m_SourceIsSet = false;
}

bool TransactionResource::getSuccessful() const
{
    return m_Successful;
}


void TransactionResource::setSuccessful(bool value)
{
    m_Successful = value;
    m_SuccessfulIsSet = true;
}
bool TransactionResource::successfulIsSet() const
{
    return m_SuccessfulIsSet;
}

void TransactionResource::unsetSuccessful()
{
    m_SuccessfulIsSet = false;
}

utility::string_t TransactionResource::getTransactionId() const
{
    return m_Transaction_id;
}


void TransactionResource::setTransactionId(utility::string_t value)
{
    m_Transaction_id = value;
    m_Transaction_idIsSet = true;
}
bool TransactionResource::transactionIdIsSet() const
{
    return m_Transaction_idIsSet;
}

void TransactionResource::unsetTransaction_id()
{
    m_Transaction_idIsSet = false;
}

utility::string_t TransactionResource::getType() const
{
    return m_Type;
}


void TransactionResource::setType(utility::string_t value)
{
    m_Type = value;
    m_TypeIsSet = true;
}
bool TransactionResource::typeIsSet() const
{
    return m_TypeIsSet;
}

void TransactionResource::unsetType()
{
    m_TypeIsSet = false;
}

utility::string_t TransactionResource::getTypeHint() const
{
    return m_Type_hint;
}


void TransactionResource::setTypeHint(utility::string_t value)
{
    m_Type_hint = value;
    m_Type_hintIsSet = true;
}
bool TransactionResource::typeHintIsSet() const
{
    return m_Type_hintIsSet;
}

void TransactionResource::unsetType_hint()
{
    m_Type_hintIsSet = false;
}

double TransactionResource::getValue() const
{
    return m_Value;
}


void TransactionResource::setValue(double value)
{
    m_Value = value;
    m_ValueIsSet = true;
}
bool TransactionResource::valueIsSet() const
{
    return m_ValueIsSet;
}

void TransactionResource::unsetValue()
{
    m_ValueIsSet = false;
}

}
}
}
}

