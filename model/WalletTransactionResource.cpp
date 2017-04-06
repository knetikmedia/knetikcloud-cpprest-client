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



#include "WalletTransactionResource.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

WalletTransactionResource::WalletTransactionResource()
{
    m_Balance = 0.0;
    m_BalanceIsSet = false;
    m_Create_date = 0;
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
    m_UserIsSet = false;
    m_Value = 0.0;
    m_ValueIsSet = false;
    m_Wallet_id = 0;
    m_Wallet_idIsSet = false;
    
}

WalletTransactionResource::~WalletTransactionResource()
{
}

void WalletTransactionResource::validate()
{
    // TODO: implement validation
}

web::json::value WalletTransactionResource::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_BalanceIsSet)
    {
        val[U("balance")] = ModelBase::toJson(m_Balance);
    }
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
    if(m_UserIsSet)
    {
        val[U("user")] = ModelBase::toJson(m_User);
    }
    if(m_ValueIsSet)
    {
        val[U("value")] = ModelBase::toJson(m_Value);
    }
    if(m_Wallet_idIsSet)
    {
        val[U("wallet_id")] = ModelBase::toJson(m_Wallet_id);
    }
    

    return val;
}

void WalletTransactionResource::fromJson(web::json::value& val)
{
    if(val.has_field(U("balance")))
    {
        setBalance(ModelBase::doubleFromJson(val[U("balance")]));
    }
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
    if(val.has_field(U("user")))
    {
        if(!val[U("user")].is_null())
        {
            std::shared_ptr<SimpleUserResource> newItem(new SimpleUserResource());
            newItem->fromJson(val[U("user")]);
            setUser( newItem );
        }
        
    }
    if(val.has_field(U("value")))
    {
        setValue(ModelBase::doubleFromJson(val[U("value")]));
    }
    if(val.has_field(U("wallet_id")))
    {
        setWalletId(ModelBase::int32_tFromJson(val[U("wallet_id")]));
    }
    
}

void WalletTransactionResource::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_BalanceIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("balance"), m_Balance));
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
    if(m_UserIsSet)
    {
        if (m_User.get())
        {
            m_User->toMultipart(multipart, U("user."));
        }
        
    }
    if(m_ValueIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("value"), m_Value));
    }
    if(m_Wallet_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("wallet_id"), m_Wallet_id));
    }
    
}

void WalletTransactionResource::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("balance")))
    {
        setBalance(ModelBase::doubleFromHttpContent(multipart->getContent(U("balance"))));
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
    if(multipart->hasContent(U("user")))
    {
        if(multipart->hasContent(U("user")))
        {
            std::shared_ptr<SimpleUserResource> newItem(new SimpleUserResource());
            newItem->fromMultiPart(multipart, U("user."));
            setUser( newItem );
        }
        
    }
    if(multipart->hasContent(U("value")))
    {
        setValue(ModelBase::doubleFromHttpContent(multipart->getContent(U("value"))));
    }
    if(multipart->hasContent(U("wallet_id")))
    {
        setWalletId(ModelBase::int32_tFromHttpContent(multipart->getContent(U("wallet_id"))));
    }
    
}


double WalletTransactionResource::getBalance() const
{
    return m_Balance;
}
void WalletTransactionResource::setBalance(double value)
{
    m_Balance = value;
    m_BalanceIsSet = true;
}
bool WalletTransactionResource::balanceIsSet() const
{
    return m_BalanceIsSet;
}
void WalletTransactionResource::unsetBalance()
{
    m_BalanceIsSet = false;
}
int64_t WalletTransactionResource::getCreateDate() const
{
    return m_Create_date;
}
void WalletTransactionResource::setCreateDate(int64_t value)
{
    m_Create_date = value;
    m_Create_dateIsSet = true;
}
bool WalletTransactionResource::create_dateIsSet() const
{
    return m_Create_dateIsSet;
}
void WalletTransactionResource::unsetCreate_date()
{
    m_Create_dateIsSet = false;
}
utility::string_t WalletTransactionResource::getCurrencyCode() const
{
    return m_Currency_code;
}
void WalletTransactionResource::setCurrencyCode(utility::string_t value)
{
    m_Currency_code = value;
    m_Currency_codeIsSet = true;
}
bool WalletTransactionResource::currency_codeIsSet() const
{
    return m_Currency_codeIsSet;
}
void WalletTransactionResource::unsetCurrency_code()
{
    m_Currency_codeIsSet = false;
}
utility::string_t WalletTransactionResource::getDetails() const
{
    return m_Details;
}
void WalletTransactionResource::setDetails(utility::string_t value)
{
    m_Details = value;
    m_DetailsIsSet = true;
}
bool WalletTransactionResource::detailsIsSet() const
{
    return m_DetailsIsSet;
}
void WalletTransactionResource::unsetDetails()
{
    m_DetailsIsSet = false;
}
int32_t WalletTransactionResource::getId() const
{
    return m_Id;
}
void WalletTransactionResource::setId(int32_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}
bool WalletTransactionResource::idIsSet() const
{
    return m_IdIsSet;
}
void WalletTransactionResource::unsetId()
{
    m_IdIsSet = false;
}
int32_t WalletTransactionResource::getInvoiceId() const
{
    return m_Invoice_id;
}
void WalletTransactionResource::setInvoiceId(int32_t value)
{
    m_Invoice_id = value;
    m_Invoice_idIsSet = true;
}
bool WalletTransactionResource::invoice_idIsSet() const
{
    return m_Invoice_idIsSet;
}
void WalletTransactionResource::unsetInvoice_id()
{
    m_Invoice_idIsSet = false;
}
bool WalletTransactionResource::getIsRefunded() const
{
    return m_Is_refunded;
}
void WalletTransactionResource::setIsRefunded(bool value)
{
    m_Is_refunded = value;
    m_Is_refundedIsSet = true;
}
bool WalletTransactionResource::is_refundedIsSet() const
{
    return m_Is_refundedIsSet;
}
void WalletTransactionResource::unsetIs_refunded()
{
    m_Is_refundedIsSet = false;
}
utility::string_t WalletTransactionResource::getResponse() const
{
    return m_Response;
}
void WalletTransactionResource::setResponse(utility::string_t value)
{
    m_Response = value;
    m_ResponseIsSet = true;
}
bool WalletTransactionResource::responseIsSet() const
{
    return m_ResponseIsSet;
}
void WalletTransactionResource::unsetResponse()
{
    m_ResponseIsSet = false;
}
utility::string_t WalletTransactionResource::getSource() const
{
    return m_Source;
}
void WalletTransactionResource::setSource(utility::string_t value)
{
    m_Source = value;
    m_SourceIsSet = true;
}
bool WalletTransactionResource::sourceIsSet() const
{
    return m_SourceIsSet;
}
void WalletTransactionResource::unsetSource()
{
    m_SourceIsSet = false;
}
bool WalletTransactionResource::getSuccessful() const
{
    return m_Successful;
}
void WalletTransactionResource::setSuccessful(bool value)
{
    m_Successful = value;
    m_SuccessfulIsSet = true;
}
bool WalletTransactionResource::successfulIsSet() const
{
    return m_SuccessfulIsSet;
}
void WalletTransactionResource::unsetSuccessful()
{
    m_SuccessfulIsSet = false;
}
utility::string_t WalletTransactionResource::getTransactionId() const
{
    return m_Transaction_id;
}
void WalletTransactionResource::setTransactionId(utility::string_t value)
{
    m_Transaction_id = value;
    m_Transaction_idIsSet = true;
}
bool WalletTransactionResource::transaction_idIsSet() const
{
    return m_Transaction_idIsSet;
}
void WalletTransactionResource::unsetTransaction_id()
{
    m_Transaction_idIsSet = false;
}
utility::string_t WalletTransactionResource::getType() const
{
    return m_Type;
}
void WalletTransactionResource::setType(utility::string_t value)
{
    m_Type = value;
    m_TypeIsSet = true;
}
bool WalletTransactionResource::typeIsSet() const
{
    return m_TypeIsSet;
}
void WalletTransactionResource::unsetType()
{
    m_TypeIsSet = false;
}
utility::string_t WalletTransactionResource::getTypeHint() const
{
    return m_Type_hint;
}
void WalletTransactionResource::setTypeHint(utility::string_t value)
{
    m_Type_hint = value;
    m_Type_hintIsSet = true;
}
bool WalletTransactionResource::type_hintIsSet() const
{
    return m_Type_hintIsSet;
}
void WalletTransactionResource::unsetType_hint()
{
    m_Type_hintIsSet = false;
}
std::shared_ptr<SimpleUserResource> WalletTransactionResource::getUser() const
{
    return m_User;
}
void WalletTransactionResource::setUser(std::shared_ptr<SimpleUserResource> value)
{
    m_User = value;
    m_UserIsSet = true;
}
bool WalletTransactionResource::userIsSet() const
{
    return m_UserIsSet;
}
void WalletTransactionResource::unsetUser()
{
    m_UserIsSet = false;
}
double WalletTransactionResource::getValue() const
{
    return m_Value;
}
void WalletTransactionResource::setValue(double value)
{
    m_Value = value;
    m_ValueIsSet = true;
}
bool WalletTransactionResource::valueIsSet() const
{
    return m_ValueIsSet;
}
void WalletTransactionResource::unsetValue()
{
    m_ValueIsSet = false;
}
int32_t WalletTransactionResource::getWalletId() const
{
    return m_Wallet_id;
}
void WalletTransactionResource::setWalletId(int32_t value)
{
    m_Wallet_id = value;
    m_Wallet_idIsSet = true;
}
bool WalletTransactionResource::wallet_idIsSet() const
{
    return m_Wallet_idIsSet;
}
void WalletTransactionResource::unsetWallet_id()
{
    m_Wallet_idIsSet = false;
}

}
}
}
}

